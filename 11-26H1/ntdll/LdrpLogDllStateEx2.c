/*
 * XREFs of LdrpLogDllStateEx2 @ 0x18009AB40
 * Callers:
 *     LdrLoadDll @ 0x18002DF80 (LdrLoadDll.c)
 *     LdrGetDllHandle @ 0x18003B540 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x18003B730 (LdrGetDllHandleEx.c)
 *     LdrpGetDllPath @ 0x18009A710 (LdrpGetDllPath.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlCreateUnicodeString @ 0x180028180 (RtlCreateUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpLogDllStateEx2(__int64 a1, const WCHAR *a2, const WCHAR *a3, __int16 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  BOOLEAN v9; // bl
  _UNICODE_STRING v11; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v11 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 )
  {
    v7 = (__int64)NtCurrentPeb();
    if ( (*(_BYTE *)(v7 + 888) & 4) != 0 )
    {
      LODWORD(v7) = RtlGetCurrentServiceSessionId();
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
          a2 = &word_1801762D4;
        v9 = RtlCreateUnicodeString(&DestinationString, a2);
        LOBYTE(v7) = RtlCreateUnicodeString(&v11, a3);
        if ( v9 )
        {
          if ( (_BYTE)v7 )
          {
            LOBYTE(v7) = LdrpLogEtwEvent(a4, 0LL, 0, 0, &v11.Length, &DestinationString.Length);
            if ( v11.Buffer )
              LOBYTE(v7) = RtlpSysVolFree(v11.Buffer);
          }
          if ( DestinationString.Buffer )
            LOBYTE(v7) = RtlpSysVolFree(DestinationString.Buffer);
        }
      }
    }
  }
  return v7;
}
