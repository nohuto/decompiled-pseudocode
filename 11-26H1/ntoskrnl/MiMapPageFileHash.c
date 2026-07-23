/*
 * XREFs of MiMapPageFileHash @ 0x140499D94
 * Callers:
 *     MiModwriterIssueWrite @ 0x140401A18 (MiModwriterIssueWrite.c)
 *     MiStoreUpdatePagefileHash @ 0x140499C50 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiWritePageFileHash @ 0x140469E18 (MiWritePageFileHash.c)
 *     MiFreePageFileHashPfn @ 0x1404AC268 (MiFreePageFileHashPfn.c)
 *     MiGetFileHashPage @ 0x1404D5A28 (MiGetFileHashPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned __int64 result; // rax
  bool v6; // zf
  int v7; // r12d
  KIRQL v11; // bp
  unsigned __int8 CurrentIrql; // si
  volatile LONG *v13; // rcx
  KIRQL v14; // bl
  __int16 v15; // dx
  unsigned __int64 v16; // rcx
  __int64 v17; // r12
  unsigned __int64 v18; // r13
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // rdx^4
  unsigned __int64 updated; // rax
  __int64 v23; // r9
  __int64 v24; // r10
  volatile LONG *v25; // rcx
  volatile LONG *v26; // rcx
  int v27; // edx
  __int64 FileHashPage; // rax
  __int64 v29; // r15
  __int64 v30; // rbx
  volatile LONG *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  volatile LONG *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r9
  unsigned int v37; // edx
  volatile LONG *v38; // rcx
  int v39; // ebx
  int v40; // r9d
  int v41; // r10d
  unsigned int v42; // eax
  signed __int32 v43[8]; // [rsp+0h] [rbp-88h] BYREF
  int v44; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v45; // [rsp+28h] [rbp-60h]
  __int64 v46; // [rsp+30h] [rbp-58h]
  __int128 v47; // [rsp+38h] [rbp-50h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  unsigned __int8 v49; // [rsp+90h] [rbp+8h]
  int v50; // [rsp+A8h] [rbp+20h]

  result = (unsigned __int64)&retaddr;
  v50 = a4;
  v6 = *(_QWORD *)(a1 + 184) == 0LL;
  v47 = 0LL;
  v7 = a4;
  if ( !v6 )
  {
    MiInitializePageColorBase((__int64)&unk_140E37340, 3, 0, (__int64)&v47);
    v45 = (__int64 *)(a2 + 48 + 8 * a3);
    v11 = 17;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
      CurrentIrql = 17;
    v49 = CurrentIrql;
    while ( 1 )
    {
      v13 = (volatile LONG *)(a1 + 200);
      if ( CurrentIrql == 17 )
      {
        v14 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v13);
      }
      else
      {
        v14 = ExAcquireSpinLockExclusive(v13);
      }
      v46 = *(_QWORD *)(a1 + 184);
      v15 = v46 + dword_140E360CC * v7;
      v16 = ((v46 + (unsigned __int64)(unsigned int)(dword_140E360CC * v7)) >> 9) & 0x7FFFFFFFF8LL;
      v17 = a5;
      v18 = v16 - 0x98000000000LL;
      v19 = (4096 - (v15 & 0xFFFu)) / dword_140E360CC;
      if ( v19 <= a5 )
        v17 = v19;
      if ( (*(_QWORD *)v18 & 1) != 0 )
      {
        v20 = *(_QWORD *)(48 * ((*(_QWORD *)v18 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
        v21 = HIDWORD(v20);
        if ( qword_140E2D8C0 && (v20 & 0x10) == 0 )
          v21 = HIDWORD(v20) & HIDWORD(qword_140E2D8C8);
        updated = MiUpdatePageFileHighInPte(v20, (int)v17 + v21);
        *(_QWORD *)(v24 + 8 * v23) = updated;
        v25 = (volatile LONG *)(a1 + 200);
        if ( v14 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v25);
        else
          ExReleaseSpinLockExclusive(v25, v14);
        goto LABEL_68;
      }
      v26 = (volatile LONG *)(a1 + 200);
      if ( v14 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v26);
      else
        ExReleaseSpinLockExclusive(v26, v14);
      v27 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v47, 1u);
      FileHashPage = MiGetFileHashPage(a1, DWORD2(v47) & 0xFFFFFF00 | v27);
      v29 = FileHashPage;
      if ( FileHashPage != -1 )
        break;
      v30 = 0LL;
      CurrentIrql = 17;
      v31 = (volatile LONG *)(a1 + 200);
      if ( v49 == 17 )
        goto LABEL_33;
      v11 = ExAcquireSpinLockExclusive(v31);
LABEL_34:
      if ( v46 != *(_QWORD *)(a1 + 184) )
      {
        v34 = (volatile LONG *)(a1 + 200);
        if ( v11 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v34);
        else
          ExReleaseSpinLockExclusive(v34, v11);
        if ( v29 != -1 )
        {
          MiFreePageFileHashPfn(v29);
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
          MiReleaseNonPagedResources(*(_QWORD *)(a1 + 224), 1LL);
          _InterlockedDecrement64(&qword_140E37A28);
        }
        result = a5;
        goto LABEL_45;
      }
      v35 = *(_QWORD *)v18;
      v36 = *(_QWORD *)v18;
      if ( qword_140E2D8C0 && (v35 & 0x10) == 0 )
        HIDWORD(v36) &= HIDWORD(qword_140E2D8C8);
      v37 = v17 + HIDWORD(v36);
      if ( v29 == -1 )
      {
        *(_QWORD *)v18 = MiUpdatePageFileHighInPte(v35, v37);
        v38 = (volatile LONG *)(a1 + 200);
        if ( v11 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v38);
        else
          ExReleaseSpinLockExclusive(v38, v11);
        v39 = v50;
        goto LABEL_69;
      }
      *(_QWORD *)(v30 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v30 + 16), v37);
      if ( v40 )
      {
        v41 = *(_DWORD *)(v30 + 32);
        if ( (v41 & 0x80000) != 0
          && MiCanPfnOriginalPteBeLost(v30)
          && (v41 & 0x100000) == 0
          && (*(_DWORD *)(v30 + 16) & 8) != 0 )
        {
          *(_QWORD *)(v30 + 16) &= ~8uLL;
        }
        *(_DWORD *)(v30 + 32) = v41 & 0xFFEFFFFF;
      }
      *(_QWORD *)v18 = MiMakeValidPte(v18, v29, -1610612732);
      v42 = *(_DWORD *)(a1 + 176) + 1;
      *(_DWORD *)(a1 + 176) = v42;
      if ( v42 > *(_DWORD *)(a1 + 180) )
        *(_DWORD *)(a1 + 180) = v42;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
LABEL_68:
      v39 = v50;
      MiWritePageFileHash(a1, v45, v50, v17);
LABEL_69:
      result = a5 - (unsigned int)v17;
      v50 = v17 + v39;
      a5 -= v17;
      v45 += v17;
LABEL_45:
      v7 = v50;
      v11 = 17;
      CurrentIrql = v49;
      if ( !(_DWORD)result )
        return result;
    }
    v30 = 48 * FileHashPage - 0x220000000000LL;
    _InterlockedOr(v43, 0);
    MiSetPfnTbFlushStamp(v30, (unsigned int)KiTbFlushTimeStamp, 0);
    MiInitializePfnForOtherProcess(
      v29,
      v18,
      (*(_QWORD *)(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL,
      2560);
    if ( CurrentIrql != 17 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v32) = 2;
        LOBYTE(v33) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v33, v32);
      }
    }
    v44 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v44);
      while ( *(__int64 *)(v30 + 24) < 0 );
    }
    v31 = (volatile LONG *)(a1 + 200);
LABEL_33:
    ExAcquireSpinLockExclusiveAtDpcLevel(v31);
    goto LABEL_34;
  }
  return result;
}
