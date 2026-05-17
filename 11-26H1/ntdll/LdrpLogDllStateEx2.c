/*
 * XREFs of LdrpLogDllStateEx2 @ 0x18009BA10
 * Callers:
 *     LdrLoadDll @ 0x180043A10 (LdrLoadDll.c)
 *     LdrGetDllHandle @ 0x180050FC0 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x1800511B0 (LdrGetDllHandleEx.c)
 *     LdrpGetDllPath @ 0x18009B5E0 (LdrpGetDllPath.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlCreateUnicodeString @ 0x18003DC10 (RtlCreateUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpLogDllStateEx2(__int64 a1, const wchar_t *a2, const wchar_t *a3, __int16 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  char UnicodeString; // bl
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 )
  {
    v7 = (__int64)NtCurrentPeb();
    if ( (*(_BYTE *)(v7 + 888) & 4) != 0 )
    {
      LODWORD(v7) = (unsigned int)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v7 )
      {
        v7 = (__int64)NtCurrentPeb();
        v8 = *(_QWORD *)(v7 + 144) + 555LL;
      }
      else
      {
        v8 = 2147353477LL;
      }
      if ( (*(_BYTE *)v8 & 0x20) != 0 )
      {
        if ( !a2 )
          a2 = (const wchar_t *)&unk_180178474;
        UnicodeString = RtlCreateUnicodeString((__int64)&v12, a2);
        LOBYTE(v7) = RtlCreateUnicodeString((__int64)&v11, a3);
        if ( UnicodeString )
        {
          if ( (_BYTE)v7 )
          {
            LOBYTE(v7) = (unsigned __int8)LdrpLogEtwEvent(
                                            a4,
                                            0LL,
                                            0,
                                            0,
                                            (unsigned __int16 *)&v11,
                                            (unsigned __int16 *)&v12);
            if ( *((_QWORD *)&v11 + 1) )
              LOBYTE(v7) = RtlpSysVolFree(*((__int64 *)&v11 + 1));
          }
          if ( *((_QWORD *)&v12 + 1) )
            LOBYTE(v7) = RtlpSysVolFree(*((__int64 *)&v12 + 1));
        }
      }
    }
  }
  return v7;
}
