/*
 * XREFs of MiCommitVadFillPageTables @ 0x140312F04
 * Callers:
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiComputePreferredNode @ 0x1402F0B60 (MiComputePreferredNode.c)
 *     MiCommitVadEmptyPacket @ 0x1403133AC (MiCommitVadEmptyPacket.c)
 *     MiIsPteDecommittedPage @ 0x140314040 (MiIsPteDecommittedPage.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiInsertLargeUserMapping @ 0x14042D264 (MiInsertLargeUserMapping.c)
 *     MiPopLargePfnList @ 0x1404E6218 (MiPopLargePfnList.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14050B9D8 (MiLockWorkingSetForLargeMapping.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCommitVadFillPageTables(__int64 a1)
{
  ULONG_PTR v1; // r9
  unsigned int v3; // ecx
  unsigned __int64 DemandZeroPte; // rax
  ULONG_PTR v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  ULONG_PTR v13; // rsi
  __int64 PteShadow; // rdx
  int v15; // eax
  BOOL v17; // r14d
  int PageProtection; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // r11d
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  _KPROCESS *v29; // rax
  __int64 v30; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+38h] [rbp-99h]
  unsigned int v35; // [rsp+3Ch] [rbp-95h]
  unsigned int v36; // [rsp+40h] [rbp-91h]
  __int64 v37; // [rsp+48h] [rbp-89h] BYREF
  __int64 v38; // [rsp+50h] [rbp-81h] BYREF
  int v39; // [rsp+58h] [rbp-79h]
  __int64 v40; // [rsp+60h] [rbp-71h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-69h]
  __int64 v42; // [rsp+70h] [rbp-61h]
  __int128 v43; // [rsp+78h] [rbp-59h] BYREF
  __int128 v44; // [rsp+88h] [rbp-49h]
  __int128 v45; // [rsp+98h] [rbp-39h]
  __int64 v46; // [rsp+A8h] [rbp-29h]
  __int16 v47; // [rsp+B0h] [rbp-21h] BYREF
  ULONG_PTR v48; // [rsp+B8h] [rbp-19h]
  ULONG_PTR v49; // [rsp+C0h] [rbp-11h]
  ULONG_PTR v50; // [rsp+C8h] [rbp-9h]
  __int64 *v51; // [rsp+D0h] [rbp-1h] BYREF
  _DWORD *v52; // [rsp+D8h] [rbp+7h]
  __int128 v53; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v54; // [rsp+F0h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 8);
  v46 = 0LL;
  v3 = *(_DWORD *)(a1 + 40);
  v43 = 0LL;
  BugCheckParameter2 = v1;
  v52 = *(_DWORD **)(a1 + 56);
  v42 = 0LL;
  v44 = 0LL;
  v36 = v3;
  v45 = 0LL;
  DemandZeroPte = MiMakeDemandZeroPte(v3);
  v6 = *(_DWORD *)(v5 + 48);
  v7 = DemandZeroPte;
  v37 = DemandZeroPte;
  if ( (v6 & 0x1000000) != 0 && (v6 & 0x80000) != 0 )
  {
    v22 = v37;
    if ( (unsigned __int64)&v37 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v37 <= 0xFFFFF6FB7DBED7F8uLL )
      v22 = MiReadPteShadow(&v37, v37);
    v37 = v22 | 0x8000000;
    v7 = v22 | 0x8000000;
  }
  v8 = *(_QWORD *)a1;
  v9 = 1LL;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_DWORD *)(a1 + 192);
  v40 = *(_QWORD *)(a1 + 184);
  v48 = *(_QWORD *)(a1 + 16);
  v13 = v48;
  *(_QWORD *)&v43 = v8;
  v35 = v12;
  v34 = 0;
  v50 = v10;
  v49 = v11;
  if ( (v6 & 0x80000) != 0 && (v6 & 0x200000) != 0 )
  {
    v9 = 16LL;
    if ( MiVadPageSizes[(v6 >> 17) & 3] != 16 )
      v9 = 1LL;
    if ( v12 <= 1 )
    {
      v23 = 2 - v12;
      do
      {
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v23;
      }
      while ( v23 );
      v49 = v11;
      v50 = v10;
LABEL_40:
      v12 = v35;
    }
  }
  v39 = 0;
  *(_QWORD *)&v44 = 0LL;
  DWORD2(v43) = 0;
  if ( v12
    || (v24 = MiComputePreferredNode(v8, v5),
        DWORD2(v43) = v25,
        BYTE12(v43) = MiLockWorkingSetForLargeMapping(v8, v26, v24),
        BYTE12(v43) == 17) )
  {
    BYTE12(v43) = MiLockWorkingSetShared(v8, v10, v11);
  }
  while ( v13 <= v49 )
  {
    if ( !v39 || (v13 & 0xFFF) == 0 )
    {
      v17 = !(unsigned int)MiWorkingSetIsContended(v8) && !KeShouldYieldProcessor();
      MiCommitVadEmptyPacket(&v43, v17);
      if ( !v17 )
        goto LABEL_39;
      if ( DWORD2(v43) != 1 )
        *(_QWORD *)&v44 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v13, (*(_DWORD *)(BugCheckParameter2 + 48) >> 10) & 0x7F, BYTE12(v43), SBYTE8(v43));
      if ( v13 < 0xFFFFF6FB7DBED000uLL || v13 > 0xFFFFF6FB7DBEDFFFuLL )
        *((_QWORD *)&v45 + 1) = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v8 = v43;
      v39 = 1;
    }
    if ( *((_QWORD *)&v44 + 1) )
    {
      *(_QWORD *)&v45 = v9 + v45;
    }
    else
    {
      *((_QWORD *)&v44 + 1) = v13;
      *(_QWORD *)&v45 = v9;
    }
    PteShadow = *(_QWORD *)v13;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v13, PteShadow);
    if ( PteShadow )
    {
      if ( !(unsigned int)MiIsPteDecommittedPage(PteShadow) )
      {
        v42 += v40;
        if ( !*v52 )
        {
          v51 = 0LL;
          PageProtection = MiGetPageProtection(BugCheckParameter2, v13, &v51, &v47);
          if ( v51 )
          {
            MiCommitVadEmptyPacket(&v43, 0LL);
LABEL_39:
            v8 = v43;
            v5 = BugCheckParameter2;
            goto LABEL_40;
          }
          if ( v36 != PageProtection )
            *v52 = 1;
        }
        goto LABEL_19;
      }
      if ( v40 == 1 )
      {
        v27 = (32LL * v36) ^ (v19 ^ (32LL * v36)) & 0xFFFFFFFFFFFFFC1FuLL;
        v38 = v27;
        if ( (v6 & 0x1080000) == 0x1080000 )
        {
          v28 = v38;
          if ( (unsigned __int64)&v38 >= v20
            && (unsigned __int64)&v38 <= v21
            && (v38 & 1) != 0
            && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
          {
            v29 = MiPteHasShadow();
            if ( v29 )
            {
              KernelWaitTime = v29[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v32 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v38 >> 3) & 0x1FF));
                if ( (v32 & 0x20) != 0 )
                  v30 |= 0x20uLL;
                v28 = v30 | 0x42;
                if ( (v32 & 0x42) == 0 )
                  v28 = v30;
              }
            }
          }
          v38 = v28 | 0x8000000;
          v27 = v28 | 0x8000000;
        }
        *(_QWORD *)v13 = v27;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v13 <= v50 )
        v42 += v40;
      if ( v40 == 1 )
      {
        if ( v13 < 0xFFFFF6FB7DBED000uLL || v13 > 0xFFFFF6FB7DBEDFFFuLL )
          LOWORD(v46) = v9 + v46;
        *(_QWORD *)v13 = v7;
LABEL_19:
        v15 = v34;
        goto LABEL_20;
      }
    }
    v15 = 1;
    v34 = 1;
LABEL_20:
    if ( v15 )
    {
      v53 = 0LL;
      v54 = 0LL;
      v33 = MiPopLargePfnList(a1 + 72, v35);
      v54 = 0LL;
      *(_QWORD *)&v53 = 0x3FFFFFFFFFLL;
      *((_QWORD *)&v53 + 1) = 0x3FFFFFFFFFLL;
      MiSimpleInsertPage(&v53, v33, 2LL);
      MiInsertLargeUserMapping(BugCheckParameter2, v48, (unsigned int)&v53, v35, v36);
      v34 = 0;
    }
    v13 += 8 * v9;
    v48 += 8 * v40;
  }
  MiCommitVadEmptyPacket(&v43, 0LL);
  return v42;
}
