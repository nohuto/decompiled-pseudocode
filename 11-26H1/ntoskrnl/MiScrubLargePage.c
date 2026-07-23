/*
 * XREFs of MiScrubLargePage @ 0x14071116C
 * Callers:
 *     MiScrubNodeHugeRanges @ 0x1407113F0 (MiScrubNodeHugeRanges.c)
 *     MiScrubLargePageRegions @ 0x140AC8350 (MiScrubLargePageRegions.c)
 * Callees:
 *     MiScrubPage @ 0x140408114 (MiScrubPage.c)
 *     MiScrubInterrupted @ 0x1404C3F28 (MiScrubInterrupted.c)
 *     MiSafeLockAnyPfn @ 0x140708378 (MiSafeLockAnyPfn.c)
 *     MiUnlockAnyPfn @ 0x140708444 (MiUnlockAnyPfn.c)
 *     MiAcquireScrubProtection @ 0x14071093C (MiAcquireScrubProtection.c)
 *     MiCanPageBeScrubbed @ 0x140710AE0 (MiCanPageBeScrubbed.c)
 *     MiReleaseScrubProtection @ 0x140710C10 (MiReleaseScrubProtection.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140870810 (MmMarkPhysicalMemoryAsBad.c)
 */

__int64 __fastcall MiScrubLargePage(_DWORD *a1, ULONG_PTR a2, int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // r8
  char v10; // bl
  __int64 v11; // r8
  int v12; // edi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // r8
  unsigned __int8 v20; // r12
  __int64 v22; // [rsp+38h] [rbp-F0h]
  ULONG_PTR v23; // [rsp+38h] [rbp-F0h]
  struct _KTHREAD *v24; // [rsp+58h] [rbp-D0h]
  ULONG_PTR v25; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v26; // [rsp+68h] [rbp-C0h]
  int v27; // [rsp+6Ch] [rbp-BCh]
  __int64 v28; // [rsp+70h] [rbp-B8h]
  int v29; // [rsp+78h] [rbp-B0h]
  _DWORD *v30; // [rsp+80h] [rbp-A8h]
  __int64 v31; // [rsp+A0h] [rbp-88h]
  char v32; // [rsp+CEh] [rbp-5Ah]
  unsigned __int64 v33; // [rsp+D0h] [rbp-58h]
  _QWORD *v34; // [rsp+E0h] [rbp-48h]
  _DWORD *v35; // [rsp+130h] [rbp+8h] BYREF
  __int64 v36; // [rsp+138h] [rbp+10h] BYREF
  BOOL v37; // [rsp+140h] [rbp+18h]
  unsigned int v38; // [rsp+148h] [rbp+20h]

  v38 = a4;
  v36 = a2;
  v35 = a1;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  v22 = MiPageSizes[a3];
  memset_0(&v25, 0, 0x88uLL);
  v31 = 0LL;
  v32 = 1;
  v25 = a2;
  v26 = a4;
  v27 = a3;
  v29 = a1[2];
  v28 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v30 = a1 + 12;
  v10 = MiSafeLockAnyPfn(a2, a4, v9);
  if ( v10 == 17 )
    return 0LL;
  if ( !(unsigned int)MiCanPageBeScrubbed((__int64)&v25) || !(unsigned int)MiAcquireScrubProtection((__int64)&v25) )
  {
    MiUnlockAnyPfn(a2, a4, v10);
    return 0LL;
  }
  MiUnlockAnyPfn(a2, a4, v10);
  v12 = 0;
  v13 = v33;
  v14 = a2;
  v15 = a2 + v22;
  v23 = a2 + v22;
  while ( 1 )
  {
    v16 = v14 == v15;
    if ( v14 >= v15 )
      break;
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
    v12 = MiScrubPage((__int64)v35, v14, a4, v13, 0);
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x100u;
    v37 = MiScrubInterrupted((__int64)v35);
    v18 = MiSafeLockAnyPfn(a2, a4, v17);
    v20 = v18;
    if ( (*v34 & 2) != 0 )
      v12 = 0;
    if ( (*v34 & 1) != 0 || v37 || v12 < 0 )
    {
      MiReleaseScrubProtection((__int64)&v25, 1, v19);
      if ( v20 != 17 )
        MiUnlockAnyPfn(a2, a4, v20);
      v16 = v14 == v23;
      break;
    }
    MiUnlockAnyPfn(a2, a4, v18);
    ++v14;
    v13 += 4096LL;
    v15 = v23;
    CurrentThread = v24;
  }
  if ( v16 )
    MiReleaseScrubProtection((__int64)&v25, 0, v11);
  if ( v12 < 0 )
  {
    v36 = 4096LL;
    v35 = (_DWORD *)((v14 << 12) | 1);
    MmMarkPhysicalMemoryAsBad(&v35, &v36);
  }
  return (unsigned int)v12;
}
