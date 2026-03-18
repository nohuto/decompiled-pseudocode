/*
 * XREFs of ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401AF6D0
 * Callers:
 *     NtUserCountClipboardFormats @ 0x1401AF550 (NtUserCountClipboardFormats.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401AF5E0 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1402B4F40 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x140056770 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1401AF77C (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall CountNumClipFormatForIL(__int64 *a1, __int64 a2)
{
  unsigned int *v2; // rbx
  unsigned int v3; // edi
  int v5; // esi
  unsigned int *v6; // rbp
  int v7; // eax
  __int64 v8; // xmm0_8
  unsigned int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-10h]

  v2 = *(unsigned int **)(a2 + 96);
  v3 = 0;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a2 + 104);
    if ( v5 )
    {
      v6 = v2 + 5;
      do
      {
        v7 = *((_DWORD *)a1 + 2);
        v11 = *a1;
        --v5;
        v8 = *(_QWORD *)v6;
        v12 = v7;
        v9 = v6[2];
        v13 = v8;
        v14 = v9;
        if ( CheckClipboardAccessForIntegrityLevel(&v13, (const struct tagUIPI_INFO *)&v11)
          || !(unsigned int)IsFmtBlocked(*v2) )
        {
          ++v3;
        }
        v2 += 8;
        v6 += 8;
      }
      while ( v5 );
    }
  }
  return v3;
}
