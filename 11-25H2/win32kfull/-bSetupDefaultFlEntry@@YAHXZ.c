/*
 * XREFs of ?bSetupDefaultFlEntry@@YAHXZ @ 0x140226E4C
 * Callers:
 *     GreEnableEUDC @ 0x140147400 (GreEnableEUDC.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1400B6530 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140106E8C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

__int64 __fastcall bSetupDefaultFlEntry(int a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r15
  PFTOBJ *v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+30h] BYREF
  struct PFF *v20; // [rsp+A8h] [rbp+38h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v5 = *(_QWORD *)(v4 + 20416);
  v6 = v4 + 4872;
  v18 = v5;
  v7 = v6 + 9548;
  do
  {
    if ( *(_DWORD *)(v7 - 124) && *(_WORD *)v7 && !*(_QWORD *)(v7 + 524) )
    {
      v8 = 664LL * v3;
      v16 = 0LL;
      v17[0] = &v16;
      v19 = 0;
      v20 = 0LL;
      v17[1] = v8 + v6 + 9482;
      v9 = v8 + v6;
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                           (PUBLIC_PFTOBJ *)&v18,
                           (const unsigned __int16 *)(v8 + v6 + 9548),
                           &v19,
                           0xAu,
                           &v20,
                           (struct _EUDCLOAD *)v17,
                           0) )
      {
        if ( !(_QWORD)v16 )
        {
          PFTOBJ::bUnloadEUDCFont(v10, (unsigned __int16 *)(v9 + 9548));
          *(_WORD *)v7 = 0;
          goto LABEL_13;
        }
        v11 = (__int64 *)&v16;
        v12 = 2LL;
        do
        {
          v13 = *v11++;
          *(_DWORD *)(v13 + 12) |= 0x200u;
          --v12;
        }
        while ( v12 );
        v14 = v16;
        v2 = 1;
      }
      else
      {
        *(_WORD *)v7 = 0;
        v14 = 0LL;
      }
      *(_OWORD *)(v7 + 524) = v14;
    }
LABEL_13:
    ++v3;
    v7 += 664LL;
  }
  while ( v3 < 7 );
  return v2;
}
