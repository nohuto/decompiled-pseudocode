/*
 * XREFs of MiScrubLargePage @ 0x14070C4BC
 * Callers:
 *     MiScrubNodeHugeRanges @ 0x14070C740 (MiScrubNodeHugeRanges.c)
 *     MiScrubLargePageRegions @ 0x140AC675C (MiScrubLargePageRegions.c)
 * Callees:
 *     MiScrubPage @ 0x140413AE4 (MiScrubPage.c)
 *     MiScrubInterrupted @ 0x1404CA4F8 (MiScrubInterrupted.c)
 *     MiSafeLockAnyPfn @ 0x1407036A8 (MiSafeLockAnyPfn.c)
 *     MiUnlockAnyPfn @ 0x140703774 (MiUnlockAnyPfn.c)
 *     MiAcquireScrubProtection @ 0x14070BC8C (MiAcquireScrubProtection.c)
 *     MiCanPageBeScrubbed @ 0x14070BE30 (MiCanPageBeScrubbed.c)
 *     MiReleaseScrubProtection @ 0x14070BF60 (MiReleaseScrubProtection.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14086A430 (MmMarkPhysicalMemoryAsBad.c)
 */

__int64 __fastcall MiScrubLargePage(_DWORD *a1, ULONG_PTR a2, int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  char v9; // bl
  int v10; // edi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  bool v14; // zf
  char v15; // al
  unsigned __int8 v16; // r12
  __int64 v18; // [rsp+38h] [rbp-F0h]
  ULONG_PTR v19; // [rsp+38h] [rbp-F0h]
  struct _KTHREAD *v20; // [rsp+58h] [rbp-D0h]
  ULONG_PTR v21; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-C0h]
  int v23; // [rsp+6Ch] [rbp-BCh]
  __int64 v24; // [rsp+70h] [rbp-B8h]
  int v25; // [rsp+78h] [rbp-B0h]
  _DWORD *v26; // [rsp+80h] [rbp-A8h]
  __int64 v27; // [rsp+A0h] [rbp-88h]
  char v28; // [rsp+CEh] [rbp-5Ah]
  unsigned __int64 v29; // [rsp+D0h] [rbp-58h]
  _QWORD *v30; // [rsp+E0h] [rbp-48h]
  _DWORD *v31; // [rsp+130h] [rbp+8h] BYREF
  __int64 v32; // [rsp+138h] [rbp+10h] BYREF
  BOOL v33; // [rsp+140h] [rbp+18h]
  unsigned int v34; // [rsp+148h] [rbp+20h]

  v34 = a4;
  v32 = a2;
  v31 = a1;
  CurrentThread = KeGetCurrentThread();
  v20 = CurrentThread;
  v18 = MiPageSizes[a3];
  memset_0(&v21, 0, 0x88uLL);
  v27 = 0LL;
  v28 = 1;
  v21 = a2;
  v22 = a4;
  v23 = a3;
  v25 = a1[2];
  v24 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v26 = a1 + 12;
  v9 = MiSafeLockAnyPfn(a2, a4);
  if ( v9 == 17 )
    return 0LL;
  if ( !(unsigned int)MiCanPageBeScrubbed((__int64)&v21) || !(unsigned int)MiAcquireScrubProtection((__int64)&v21) )
  {
    MiUnlockAnyPfn(a2, a4, v9);
    return 0LL;
  }
  MiUnlockAnyPfn(a2, a4, v9);
  v10 = 0;
  v11 = v29;
  v12 = a2;
  v13 = a2 + v18;
  v19 = a2 + v18;
  while ( 1 )
  {
    v14 = v12 == v13;
    if ( v12 >= v13 )
      break;
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
    v10 = MiScrubPage((__int64)v31, v12, a4, v11, 0);
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x100u;
    v33 = MiScrubInterrupted((__int64)v31);
    v15 = MiSafeLockAnyPfn(a2, a4);
    v16 = v15;
    if ( (*v30 & 2) != 0 )
      v10 = 0;
    if ( (*v30 & 1) != 0 || v33 || v10 < 0 )
    {
      MiReleaseScrubProtection((__int64)&v21, 1);
      if ( v16 != 17 )
        MiUnlockAnyPfn(a2, a4, v16);
      v14 = v12 == v19;
      break;
    }
    MiUnlockAnyPfn(a2, a4, v15);
    ++v12;
    v11 += 4096LL;
    v13 = v19;
    CurrentThread = v20;
  }
  if ( v14 )
    MiReleaseScrubProtection((__int64)&v21, 0);
  if ( v10 < 0 )
  {
    v32 = 4096LL;
    v31 = (_DWORD *)((v12 << 12) | 1);
    MmMarkPhysicalMemoryAsBad(&v31, &v32);
  }
  return (unsigned int)v10;
}
