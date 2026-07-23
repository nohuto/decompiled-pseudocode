/*
 * XREFs of MiVaToPfnEx @ 0x14024F870
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 *     MiCheckKernelShadow @ 0x14042A3E0 (MiCheckKernelShadow.c)
 *     MiInitializeShadowPageTable @ 0x14087B9A8 (MiInitializeShadowPageTable.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

__int64 __fastcall MiVaToPfnEx(unsigned __int64 a1)
{
  __int64 v2; // rcx
  int v3; // r10d
  __int64 v4; // r9
  unsigned __int64 *v5; // r11
  unsigned __int64 v6; // r8
  __int64 v7; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 HasShadow; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+18h] [rbp-30h]
  unsigned __int64 v19; // [rsp+20h] [rbp-28h]
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]
  unsigned __int64 v22; // [rsp+38h] [rbp-10h]

  v19 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = (v20 >> 9) & 0x7FFFFFFFF8LL;
  v21 = v2 - 0x98000000000LL;
  v3 = 4;
  v22 = (((unsigned __int64)(v2 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 4LL;
  do
  {
    v5 = (unsigned __int64 *)*(&v18 + v4--);
    --v3;
    v6 = *v5;
    if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(v2, *v5, v6);
      if ( HasShadow )
      {
        v16 = *(_QWORD *)(HasShadow + 1288);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8 * ((v15 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v14 |= 0x20uLL;
          v6 = v14 | 0x42;
          if ( (v17 & 0x42) == 0 )
            v6 = v14;
        }
      }
    }
  }
  while ( v4 && (v6 & 0x80u) == 0LL );
  v7 = (v6 >> 12) & 0xFFFFFFFFFFLL;
  if ( v3 )
  {
    v9 = 1LL;
    v10 = a1 >> 12;
    do
    {
      v11 = v10;
      v10 >>= 9;
      v12 = v9 * (v11 & 0x1FF);
      v9 <<= 9;
      v7 += v12;
      --v3;
    }
    while ( v3 );
  }
  return v7;
}
