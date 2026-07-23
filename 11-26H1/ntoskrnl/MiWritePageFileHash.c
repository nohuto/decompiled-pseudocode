/*
 * XREFs of MiWritePageFileHash @ 0x140469E18
 * Callers:
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsPfnOriginalPteLost @ 0x140401748 (MiIsPfnOriginalPteLost.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiPageHashBugCheck @ 0x140531E94 (MiPageHashBugCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiWritePageFileHash(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  BOOL v6; // r13d
  __int64 v7; // rdx
  int v8; // r15d
  __int64 result; // rax
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned int v12; // r8d
  __int64 v13; // r15
  __int64 v14; // r13
  int v15; // esi
  __int64 v16; // rdi
  __int64 CurrentIrql; // rcx
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  unsigned int v20; // r10d
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rbx
  __int64 v26; // r8
  unsigned __int64 PageFilePte; // rdx
  __int64 v28; // r11
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r8
  _QWORD *v34; // rdx
  __int128 v35; // xmm1
  __int64 i; // rcx
  __int64 v37; // rsi
  unsigned __int64 v38; // rdi
  int v39; // ecx
  unsigned __int64 v40; // rbx
  LOGICAL ShouldYieldProcessor; // eax
  volatile LONG *v42; // rcx
  KIRQL v43; // bl
  __int64 v44; // r8
  unsigned int v45; // ecx
  __int64 v46; // r9
  _DWORD *v47; // rdx
  volatile LONG *v48; // rcx
  __int64 *v49; // rbx
  __int64 v50; // rdx
  unsigned __int8 v51[4]; // [rsp+30h] [rbp-1C8h] BYREF
  unsigned int v52; // [rsp+34h] [rbp-1C4h]
  int v53; // [rsp+38h] [rbp-1C0h]
  unsigned int v54; // [rsp+3Ch] [rbp-1BCh]
  BOOL v55; // [rsp+40h] [rbp-1B8h]
  __int64 v56; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v57; // [rsp+50h] [rbp-1A8h]
  __int64 v58; // [rsp+58h] [rbp-1A0h]
  __int64 v59; // [rsp+60h] [rbp-198h]
  int v60; // [rsp+68h] [rbp-190h] BYREF
  unsigned int v61; // [rsp+6Ch] [rbp-18Ch]
  __int64 *v62; // [rsp+70h] [rbp-188h]
  __int64 v63; // [rsp+78h] [rbp-180h]
  __int64 v64; // [rsp+80h] [rbp-178h]
  _DWORD v65[11]; // [rsp+88h] [rbp-170h] BYREF
  _DWORD v66[63]; // [rsp+B4h] [rbp-144h] BYREF

  v53 = a3;
  v61 = a4;
  v6 = dword_140E360D0 != 0;
  v58 = a1;
  LOBYTE(v4) = 17;
  v55 = v6;
  v7 = 0LL;
  v57 = 0LL;
  v8 = a3;
  v59 = v4;
  result = a1;
  v52 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  while ( 1 )
  {
    v54 = v12;
    v62 = a2;
    if ( v12 >= a4 )
      break;
    v13 = 16LL * v10;
    v63 = v13;
    *(_DWORD *)((char *)&v65[10] + v13) = 0;
    if ( v6 )
    {
      *(_QWORD *)&v66[4 * v10 + 1] = 0LL;
      v66[4 * v10] = 0;
    }
    v14 = *a2;
    if ( *a2 == qword_140E361B8 )
    {
      ++v10;
      goto LABEL_90;
    }
    v15 = 1;
    v64 = 48 * v14;
    v16 = 48 * v14 - 0x220000000000LL;
    if ( !v57 )
    {
      v57 = 48 * v14 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      v59 = CurrentIrql;
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
      }
      v60 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v60);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      v13 = v63;
      v7 = v52;
LABEL_17:
      if ( !(_DWORD)v7 )
      {
        v18 = *(_QWORD *)(v16 + 8);
        if ( (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) == v14 )
          v18 = 0xFFFFF6FB7DBEDF68uLL;
        v56 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v19 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v20 = v10 + v53;
        if ( (unsigned __int64)&v56 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v56 <= 0xFFFFF6FB7DBED7F8uLL
          && (CLFS_LSN_NULL_EXT & 1) != 0
          && ((CLFS_LSN_NULL_EXT & 0x20) == 0 || (CLFS_LSN_NULL_EXT & 0x42) == 0)
          && (MiFlags & 0x1800000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            if ( Process )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v23 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v56 >> 3) & 0x1FF));
                if ( (v23 & 0x20) != 0 )
                  v19 = *(_QWORD *)&CLFS_LSN_NULL_EXT | 0x20LL;
                v24 = v19;
                v19 |= 0x42uLL;
                if ( (v23 & 0x42) == 0 )
                  v19 = v24;
              }
            }
          }
        }
        v56 = v19 & ((v19 & 0x400) != 0 ? -5LL : -65537LL);
        v25 = v56;
        if ( (CLFS_LSN_NULL_EXT & 0x400) == 0 )
          v25 = v56 & 0xFFFFFFFFFFFFFFF3uLL;
        if ( v58 )
        {
          v26 = *(unsigned __int16 *)(v58 + 172);
          if ( v25 )
          {
            if ( qword_140E2D8C0 )
            {
              if ( (v25 & 0x10) != 0 )
                LODWORD(v25) = v25 & 0xFFFFFFEF;
              else
                LODWORD(v25) = qword_140E2D8C8 & v25;
            }
            PageFilePte = (unsigned int)v25 | ((unsigned __int64)v20 << 32);
            if ( qword_140E2D8C0 )
            {
              if ( (qword_140E2D8C0 & PageFilePte) != 0 )
                PageFilePte |= 0x10uLL;
              else
                PageFilePte |= qword_140E2D8C0;
            }
          }
          else
          {
            PageFilePte = MiMakePageFilePte(v20);
          }
          v25 = (v26 << 12) ^ (PageFilePte ^ (v26 << 12)) & 0xFFFFFFFFFFFF0FFFuLL | 8;
        }
        if ( (unsigned int)MiIsPfnOriginalPteLost(48 * v14 - 0x220000000000LL) )
        {
          v15 = v28;
        }
        else
        {
          v29 = 32LL * (unsigned int)(*(_QWORD *)(v16 + 16) >> 5);
          v25 = v29 ^ (v29 ^ v25) & 0xFFFFFFFFFFFFFC1FuLL;
        }
        v30 = (v25 >> 5) & 0x1F;
        if ( (dword_140FBF210 & 1) == 0 && (_DWORD)v30 != 31 )
        {
          if ( (unsigned int)v30 >> 3 == 3 )
          {
            if ( ((v25 >> 5) & 7) != 0 )
              v15 = v28;
          }
          else if ( (unsigned int)v30 >> 3 == 1 )
          {
            v15 = v28;
          }
        }
        v31 = (v25 >> 3) & 1;
        if ( v15 )
        {
          if ( (_DWORD)v31 )
          {
            if ( qword_140E2D8C0 != v28 && (v25 & 0x10) == 0 )
              v25 &= qword_140E2D8C8;
            v32 = HIDWORD(v25);
          }
          else
          {
            LODWORD(v32) = v28;
          }
          v51[0] = v28;
          v33 = MiMapPageInHyperSpaceWorker(v14, v51, 0);
          v34 = (_QWORD *)v33;
          v35 = *(_OWORD *)(v33 + 16);
          *(_OWORD *)v65 = *(_OWORD *)v33;
          *(_OWORD *)&v65[4] = v35;
          do
          {
            v34 += 4;
            for ( i = 0LL; i < 4; ++i )
              *(_QWORD *)&v65[2 * i] += v34[i];
          }
          while ( v34 != (_QWORD *)(v33 + 4064) );
          v37 = *(_QWORD *)v65 + v34[1] + v34[2] + v34[3];
          v38 = v51[0];
          *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
          *(_QWORD *)(((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (_BYTE)v38 != 17 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
            __writecr8(v38);
          }
          *(_DWORD *)((char *)v66 + v13) = v32;
          v39 = v37 + HIDWORD(v37);
          if ( (unsigned int)(v37 + HIDWORD(v37)) < 3 )
            v39 = 3;
          *(_DWORD *)((char *)&v65[10] + v13) = v39;
          if ( (*(_QWORD *)(v64 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL) == v14 )
            v18 = 0xFFFFF6FB7DBEDF68uLL;
          *(_QWORD *)((char *)&v66[1] + v13) = v18 | 1;
        }
        else
        {
          *(_DWORD *)((char *)&v65[10] + v13) = 2;
          *(_QWORD *)((char *)&v66[1] + v13) = v18 | 1;
          if ( (_DWORD)v31 )
          {
            if ( qword_140E2D8C0 != v28 && (v25 & 0x10) == 0 )
              v25 &= qword_140E2D8C8;
            v40 = HIDWORD(v25);
          }
          else
          {
            LODWORD(v40) = v28;
          }
          *(_DWORD *)((char *)v66 + v13) = v40;
        }
        ++v10;
        ShouldYieldProcessor = KeShouldYieldProcessor();
        v7 = v52;
        a2 = v62;
        if ( ShouldYieldProcessor )
          v7 = 1LL;
        v52 = v7;
      }
      goto LABEL_89;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      goto LABEL_17;
    v52 = 1;
    v54 = v12 - 1;
    --a2;
    v7 = 1LL;
LABEL_89:
    v4 = v59;
    v11 = v57;
    result = v58;
LABEL_90:
    v8 = v53;
    if ( v10 != 16 && !(_DWORD)v7 )
      goto LABEL_123;
    v6 = v55;
LABEL_93:
    v52 = 0;
    v42 = (volatile LONG *)(result + 200);
    if ( v11 )
    {
      v43 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v42);
    }
    else
    {
      v43 = ExAcquireSpinLockExclusive(v42);
    }
    v44 = v58;
    v45 = 0;
    v46 = *(_QWORD *)(v58 + 184) + (unsigned int)(dword_140E360CC * v8);
    if ( v10 )
    {
      v47 = v66;
      do
      {
        if ( (*(_DWORD *)v46 > 1u || v6 && (*(_BYTE *)(v46 + 8) & 1) != 0)
          && !*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[8] )
        {
          MiPageHashBugCheck(0x60uLL, v8 + v45, (int)&v65[4 * v45 + 10]);
        }
        *(_DWORD *)v46 = *(v47 - 1);
        if ( dword_140E360D0 )
        {
          *(_QWORD *)(v46 + 8) = *(_QWORD *)(v47 + 1);
          *(_DWORD *)(v46 + 4) = *v47;
        }
        ++v45;
        v46 += (unsigned int)dword_140E360CC;
        v47 += 4;
      }
      while ( v45 < v10 );
    }
    v48 = (volatile LONG *)(v44 + 200);
    if ( v43 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v48);
    else
      ExReleaseSpinLockExclusive(v48, v43);
    v8 += v10;
    v53 = v8;
    if ( v11 )
    {
      v49 = a2;
      if ( v10 )
      {
        do
        {
          if ( *v49 != qword_140E361B8 )
          {
            v50 = 48 * *v49 - 0x220000000000LL;
            _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v50 == v11 )
            {
              if ( (unsigned __int8)v4 < 2u )
              {
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
                __writecr8((unsigned __int8)v4);
              }
              LOBYTE(v4) = 17;
              v11 = 0LL;
            }
          }
          --v49;
          --v10;
        }
        while ( v10 );
        v8 = v53;
        v57 = v11;
        v59 = v4;
      }
    }
    else
    {
      v10 = 0;
    }
    v7 = v52;
LABEL_123:
    ++a2;
    result = v58;
    v12 = v54 + 1;
    v6 = v55;
    a4 = v61;
  }
  if ( v10 )
  {
    --a2;
    goto LABEL_93;
  }
  return result;
}
