/*
 * XREFs of RtlWCSMessageWParamCharToMB @ 0x1401EEA10
 * Callers:
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     SfnINWPARAMCHAR @ 0x1401EFCB0 (SfnINWPARAMCHAR.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1401FFE50 (SfnINWPARAMDBCSCHAR.c)
 * Callees:
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14017D4C8 (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x140224710 (-THREAD_CODEPAGE@@YAGXZ.c)
 */

__int64 __fastcall RtlWCSMessageWParamCharToMB(int a1, unsigned __int16 *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG BytesInUnicodeString; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned int MultiByteString; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 - 47;
  if ( v3 )
  {
    v4 = v3 - 157;
    if ( v4 )
    {
      v5 = v4 - 54;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 3;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 8;
              if ( v9 )
              {
                v10 = v9 - 17;
                if ( v10 )
                {
                  if ( v10 != 358 )
                    return 1LL;
                }
              }
            }
          }
        }
      }
    }
  }
  v12 = THREAD_CODEPAGE();
  MultiByteString = 0;
  BytesInUnicodeString = (**(_DWORD **)(W32GetUserSessionState(v14, v13) + 19872) & 2) != 0 ? 2 : 4;
  if ( (_WORD)v12 != NlsAnsiCodePage && (_WORD)v12 )
  {
    if ( (unsigned int)ConvertToAndFromWideChar(v12, a2, BytesInUnicodeString, (char *)&MultiByteString, 4u, 0) )
      goto LABEL_14;
LABEL_18:
    *(_QWORD *)a2 = 0LL;
    return 1LL;
  }
  if ( RtlUnicodeToMultiByteN((PCHAR)&MultiByteString, 4u, 0LL, a2, BytesInUnicodeString) < 0 )
    goto LABEL_18;
LABEL_14:
  if ( (**(_DWORD **)(W32GetUserSessionState(v17, v16) + 19872) & 2) != 0 )
  {
    if ( (MultiByteString & 0xFF00) != 0 )
      v18 = ((unsigned __int64)(unsigned __int16)MultiByteString >> 8) | (((unsigned __int8)MultiByteString | ((unsigned __int64)a2[1] << 8)) << 8);
    else
      v18 = (unsigned __int8)MultiByteString;
    *(_QWORD *)a2 = v18;
  }
  else
  {
    *(_QWORD *)a2 = MultiByteString;
  }
  return 1LL;
}
