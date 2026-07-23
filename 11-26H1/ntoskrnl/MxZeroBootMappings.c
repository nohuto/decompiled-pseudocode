/*
 * XREFs of MxZeroBootMappings @ 0x140CFA5AC
 * Callers:
 *     MiZeroBootMappings @ 0x140CFA3B8 (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x140CFA5AC (MxZeroBootMappings.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiFreeBootPageTable @ 0x140CF8EB0 (MiFreeBootPageTable.c)
 *     MxZeroBootMappings @ 0x140CFA5AC (MxZeroBootMappings.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  _KPROCESS *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax

  if ( a1 < a2 )
  {
    v5 = a1;
    while ( 1 )
    {
      v6 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        v7 = MiPteHasShadow();
        if ( v7 )
        {
          KernelWaitTime = v7[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v10 = *(_QWORD *)(KernelWaitTime + 8 * ((v5 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              v8 |= 0x20uLL;
            v6 = v8 | 0x42;
            if ( (v10 & 0x42) == 0 )
              v6 = v8;
          }
        }
      }
      if ( !v6 )
        goto LABEL_26;
      if ( (v6 & 1) == 0 )
        goto LABEL_21;
      if ( (v6 & 0x80u) == 0LL )
        break;
      *(_QWORD *)v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
LABEL_26:
      v5 += 8LL;
      if ( v5 >= a2 )
        return;
    }
    if ( a3 > 1 )
      MxZeroBootMappings((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4096);
    MiFreeBootPageTable((v6 >> 12) & 0xFFFFFFFFFFLL);
LABEL_21:
    v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v12 = 0;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v13 = MiSanitizeShadowPxe();
      v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v12 = v13;
    }
    *(_QWORD *)v5 = v11;
    if ( v12 )
      MiWritePteShadow();
    goto LABEL_26;
  }
}
