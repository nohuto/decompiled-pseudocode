/*
 * XREFs of MiAllocateLargeProcessPagesFromCache @ 0x1402F278C
 * Callers:
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputePreferredNode @ 0x1402F0B60 (MiComputePreferredNode.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 *     MiGetVadCacheAttribute @ 0x1404DBCAC (MiGetVadCacheAttribute.c)
 *     MiPopLargePfnList @ 0x1404E6218 (MiPopLargePfnList.c)
 *     MiCreateProcessLargePageCacheAnchor @ 0x140528BB4 (MiCreateProcessLargePageCacheAnchor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiAllocateLargeProcessPagesFromCache(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // r13
  __int64 *v8; // rsi
  int v9; // edi
  signed int VadCacheAttribute; // r12d
  unsigned int v11; // ecx
  _KPROCESS *Process; // rbx
  __int64 v13; // r11
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  __int64 ProcessLargePageCacheAnchor; // r10
  unsigned int v16; // eax
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  unsigned int v19; // ecx
  _DWORD *v20; // rdx
  int v21; // ebx
  volatile LONG *v22; // rsi
  KIRQL v23; // al
  _DWORD *v24; // r10
  KIRQL v25; // r11
  __int64 v26; // r9
  int *v27; // r8
  unsigned int v28; // ecx
  int v29; // edx
  unsigned int v30; // eax
  int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // r9d
  unsigned __int16 v34; // r8
  unsigned int v35; // ecx
  _DWORD *v36; // rdx
  __int64 v37; // r12
  unsigned __int64 v38; // r13
  __int64 v39; // rdx
  int v40; // ebx
  int v41; // ebx
  __int64 v42; // r9
  bool v43; // zf
  __int64 v44; // rax
  char v45; // cl
  __int64 v46; // rsi
  __int64 v48; // rcx
  unsigned int v49; // esi
  _QWORD *v50; // rbx
  __int64 v51; // rsi
  unsigned __int64 i; // rbx
  __int64 v53; // rax
  volatile _KAFFINITY_EX *v54; // r14
  KIRQL v55; // di
  _DWORD *v56; // r8
  unsigned int v57; // edx
  __int64 v58; // rdx
  _QWORD *v59; // rbx
  char v60; // r8
  int v61; // eax
  unsigned __int64 v62; // rdx
  unsigned int j; // ecx
  volatile LONG *v64; // rcx
  KIRQL v65; // [rsp+50h] [rbp-B0h]
  signed int v66; // [rsp+54h] [rbp-ACh]
  int v67; // [rsp+58h] [rbp-A8h]
  char v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+64h] [rbp-9Ch]
  _RTL_BITMAP BitMapHeader; // [rsp+68h] [rbp-98h] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h]
  __int64 v73; // [rsp+80h] [rbp-80h]
  volatile _KAFFINITY_EX *v74; // [rsp+88h] [rbp-78h]
  __int64 v75; // [rsp+90h] [rbp-70h]
  volatile LONG *v76; // [rsp+98h] [rbp-68h]
  __int64 v77; // [rsp+A0h] [rbp-60h]
  __int64 *v78; // [rsp+A8h] [rbp-58h]
  _BYTE v79[48]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v80; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v81; // [rsp+F0h] [rbp-10h]

  v6 = a6;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = a2;
  v8 = a1;
  v78 = a1;
  v9 = a4;
  v72 = a6;
  memset_0(v79, 0, 0x60uLL);
  if ( *v8 )
  {
    VadCacheAttribute = MiGetVadCacheAttribute(*(unsigned int *)(*v8 + 48));
    goto LABEL_9;
  }
  v11 = *((_DWORD *)v8 + 4);
  if ( v11 >> 3 == 3 )
  {
    if ( (v11 & 7) != 0 )
    {
      VadCacheAttribute = 2;
      goto LABEL_9;
    }
  }
  else if ( v11 >> 3 == 1 )
  {
    VadCacheAttribute = 0;
    goto LABEL_9;
  }
  VadCacheAttribute = 1;
LABEL_9:
  v66 = VadCacheAttribute;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * HIWORD(Process[2].ProcessListEntry.Blink));
  ActiveProcessors = Process[2].ActiveProcessors;
  v73 = v13;
  v74 = ActiveProcessors;
  ProcessLargePageCacheAnchor = ActiveProcessors[4].StaticBitmap[14];
  if ( !ProcessLargePageCacheAnchor )
  {
    ProcessLargePageCacheAnchor = MiCreateProcessLargePageCacheAnchor(v13);
    if ( !ProcessLargePageCacheAnchor )
      return 3221225626LL;
    v13 = v73;
  }
  if ( v9 )
  {
    v16 = v9 - 1;
    if ( v9 - 1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
      return 3221225485LL;
  }
  else
  {
    v16 = MiComputePreferredNode((__int64)&Process[2].ReadyListHead.Blink, *v8);
  }
  *(_DWORD *)(ProcessLargePageCacheAnchor + 24) = *(_DWORD *)(v13 + 16856);
  v17 = a3 >> 4;
  v18 = ProcessLargePageCacheAnchor + ((VadCacheAttribute + 3LL * v16) << 6) + 32;
  v77 = v18;
  v19 = 0;
  v20 = (_DWORD *)(v18 + 12);
  while ( (*v20 & 0x3F) == 0 )
  {
    ++v19;
    v20 += 4;
    if ( v19 >= 4 )
    {
      if ( v19 == 4 )
        goto LABEL_56;
      break;
    }
  }
  v21 = 0;
  v22 = (volatile LONG *)&v74[4].StaticBitmap[15];
  v67 = 0;
  v76 = (volatile LONG *)&v74[4].StaticBitmap[15];
  v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&v74[4].StaticBitmap[15]);
  v24 = (_DWORD *)(v18 + 12);
  v65 = v23;
  v25 = v23;
  v26 = 4LL;
  v27 = (int *)(v18 + 12);
  do
  {
    v28 = *v27;
    if ( (*v27 & 0xFFFF0000) != 0xFFFF0000 )
      v28 = (unsigned __int16)v28 | ((v28 & 0xFFFF0000) + 0x10000);
    v29 = v28 & 0x3F;
    if ( (v28 & 0x3F) == 0 )
      ++v21;
    v30 = v28;
    v31 = v28 | 0x40;
    v32 = v30 & 0xFFFFFFBF;
    if ( v29 )
      v31 = v32;
    *v27 = v31;
    v27 += 4;
    --v26;
  }
  while ( v26 );
  if ( v21 != 4 )
  {
    while ( 1 )
    {
      v33 = -1;
      v34 = -1;
      v35 = 0;
      v36 = v24;
      do
      {
        if ( (*v36 & 0x40) == 0 && (unsigned __int16)HIWORD(*v36) <= v34 )
        {
          v34 = HIWORD(*v36);
          v33 = v35;
        }
        ++v35;
        v36 += 4;
      }
      while ( v35 < 4 );
      v37 = 2LL * v33;
      v70 = v21 + 1;
      v38 = *(unsigned int *)(v18 + 16LL * v33 + 8);
      v39 = 48LL * *(_QWORD *)(v18 + 16LL * v33) - 0x220000000000LL;
      v40 = *(_DWORD *)(v18 + 16LL * v33 + 12) & 0xFFBF;
      v75 = v39;
      v41 = v40 | 0x40;
      *(_DWORD *)(v18 + 16LL * v33 + 12) = v41;
      if ( v38 )
        break;
LABEL_41:
      v21 = v70;
      if ( v70 == 4 )
        goto LABEL_42;
    }
    v42 = a6 + 48;
    while ( 1 )
    {
      v43 = !_BitScanForward64((unsigned __int64 *)&v44, v38);
      v45 = -1;
      if ( !v43 )
        v45 = v44;
      v69 = v45;
      v46 = v39 + 768LL * v45;
      v41 ^= ((unsigned __int8)v41 ^ (unsigned __int8)(v41 - 1)) & 0x3F;
      *(_DWORD *)(v18 + 8 * v37 + 12) = v41;
      MiSimpleInsertPage(v42, (v46 + 0x220000000000LL) / 48, 2LL);
      if ( (*(_QWORD *)(v46 + 16) & 0x3E0LL) != 0 )
        ++v67;
      v38 = ~(1 << v69) & (unsigned int)v38;
      *(_DWORD *)(v18 + 8 * v37 + 8) = v38;
      if ( !--v17 )
        break;
      v39 = v75;
      v42 = a6 + 48;
      if ( !v38 )
      {
        v24 = (_DWORD *)(v18 + 12);
        goto LABEL_41;
      }
    }
LABEL_42:
    v9 = a4;
    VadCacheAttribute = v66;
    v6 = v72;
    v22 = v76;
    v25 = v65;
  }
  if ( v25 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v22);
  else
    ExReleaseSpinLockExclusive(v22, v25);
  if ( v67 )
  {
    v48 = *(_QWORD *)(v6 + 48);
    v49 = 0;
    if ( *(_QWORD *)(v6 + 64) )
    {
      do
      {
        v50 = (_QWORD *)(48 * v48 - 0x220000000000LL);
        if ( (v50[2] & 0x3E0LL) != 0 )
        {
          MiZeroLargePage(0LL, 48 * v48 - 0x220000000000LL, 2u, VadCacheAttribute, 0);
          v50[2] &= 0xFFFFFFFFFFFFFC1FuLL;
        }
        ++v49;
        v48 = *v50 & 0xFFFFFFFFFFLL;
      }
      while ( (unsigned __int64)v49 < *(_QWORD *)(v6 + 64) );
      v9 = a4;
      v18 = v77;
    }
  }
  if ( !v17 )
    return 0LL;
  v8 = v78;
LABEL_56:
  MiInitializeLargePfnList(v79, v20);
  if ( (int)MiCreateLargePfnList(
              v8,
              *(_QWORD *)&BitMapHeader.SizeOfBitMap & 0xFFFFFFFFFFE00000uLL,
              0x200uLL,
              0x200uLL,
              v9,
              a5,
              0LL,
              8,
              (__int64)v79) < 0 )
    return 3221225626LL;
  v51 = v73;
  MiReturnResident(v73, 512LL);
  for ( i = 32 - v17; v17; --v17 )
  {
    v53 = MiPopLargePfnList(v79, 2LL);
    MiSimpleInsertPage(v6 + 48, v53, 2LL);
  }
  v54 = v74;
  v55 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&v74[4].StaticBitmap[15]);
  v56 = (_DWORD *)(v18 + 12);
  v57 = 0;
  while ( (*v56 & 0x3F) == 0 )
  {
    ++v57;
    v56 += 4;
    if ( v57 >= 4 )
    {
      if ( v57 == 4 )
      {
        v58 = v80;
        *(_QWORD *)&BitMapHeader.SizeOfBitMap = 32LL;
        v59 = (_QWORD *)(48 * v80 - 0x220000000000LL);
        BitMapHeader.Buffer = (unsigned int *)(v18 + 8);
        v60 = v81;
        v61 = *(_DWORD *)(v18 + 12) & 0xFFC0;
        *(_QWORD *)v18 = v80 & 0xFFFFFFFFFFFFFE00uLL;
        v62 = (unsigned __int64)(v58 - *(_QWORD *)v18) >> 4;
        *(_DWORD *)(v18 + 12) = v60 & 0x3F ^ v61;
        RtlSetBits(&BitMapHeader, v62, v60 & 0x3F);
        for ( j = 0; j < v81; v59 = (_QWORD *)(48 * (*v59 & 0xFFFFFFFFFFLL) - 0x220000000000LL) )
        {
          v59[2] &= 0xFFFFFFFFFFFFFC1FuLL;
          ++j;
        }
        i = 0LL;
      }
      break;
    }
  }
  v64 = (volatile LONG *)&v54[4].StaticBitmap[15];
  if ( v55 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v64);
  else
    ExReleaseSpinLockExclusive(v64, v55);
  if ( i )
    MiFreeLargeZeroPages(v51, (__int64)v79, 0);
  return 0LL;
}
