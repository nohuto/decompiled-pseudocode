/*
 * XREFs of MiRemoveWsleList @ 0x1402CC5B0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x140363010 (MiDeleteVaTail.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiRebuildPageTableAges @ 0x14029D740 (MiRebuildPageTableAges.c)
 *     MiInsertActivePageTableLinksTail @ 0x1402CE660 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1402CE8C0 (MiRemoveActivePageTableLinks.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiIsDriverPage @ 0x1404B6920 (MiIsDriverPage.c)
 *     MiLogRemoveWsleEvent @ 0x140501484 (MiLogRemoveWsleEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiRemoveWsleList(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  int v4; // edi
  unsigned __int64 v5; // r12
  int *v6; // rdx
  __int64 IsDriverPage; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r14d
  __int64 v14; // rsi
  __int64 v15; // rbp
  int v16; // r15d
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  _DWORD *v19; // rcx
  signed __int32 v20; // eax
  __int64 v21; // rdx
  signed __int32 v22; // ett
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int8 v27; // si
  unsigned int v28; // ecx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r8
  unsigned __int8 v35; // al
  unsigned __int64 v36; // r15
  volatile signed __int32 *v37; // rbp
  unsigned __int16 *i; // rbx
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rdx
  volatile signed __int64 *v43; // r9
  signed __int64 j; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r9
  char v50; // cl
  int v52; // [rsp+20h] [rbp-B8h]
  __int64 v54; // [rsp+30h] [rbp-A8h]
  __int64 v55; // [rsp+38h] [rbp-A0h]
  __int64 v56; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v57; // [rsp+40h] [rbp-98h]
  unsigned __int64 v59; // [rsp+58h] [rbp-80h]
  int *v60; // [rsp+60h] [rbp-78h]
  unsigned __int64 v61; // [rsp+68h] [rbp-70h]
  _OWORD v62[2]; // [rsp+70h] [rbp-68h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v2 = *(unsigned int *)(a2 + 16488);
  v4 = *(_DWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a2 + 16480);
  v6 = 0LL;
  if ( (v4 & 0xF) == 1 )
    v6 = &dword_140E37A00;
  v59 = v2;
  v60 = v6;
  LOBYTE(IsDriverPage) = 0;
  v54 = 0LL;
  v8 = (((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  v55 = 0LL;
  v61 = v8;
  v9 = 0LL;
  v52 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  if ( v2 )
  {
    v14 = a2 + 16497;
    v15 = (unsigned int)v2;
    v16 = 0;
    do
    {
      if ( (*(_BYTE *)v14 & 1) != 0 )
      {
        ++v9;
        v57 = v8 + 8LL * *(unsigned __int16 *)(v14 + 1);
        v17 = (__int64)(v57 << 25) >> 16;
        if ( v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL )
          v13 = 2;
        else
          v13 = 1;
        if ( (*(_BYTE *)v14 & 2) != 0 )
        {
          v54 = ++v10;
          if ( v13 == 2 )
            v55 = ++v11;
        }
        LOBYTE(IsDriverPage) = v4 & 0xF;
        if ( (v4 & 0xF) == 3 )
        {
          LOBYTE(IsDriverPage) = (_BYTE)PsNtosImageBase;
          if ( PsNtosImageBase
            && (v17 < PsNtosImageEnd && v17 >= (unsigned __int64)PsNtosImageBase
             || v17 >= (unsigned __int64)PsHalImageBase && v17 < PsHalImageEnd) )
          {
            v52 = ++v12;
          }
          else
          {
            LODWORD(IsDriverPage) = MiGetSystemRegionType((__int64)(v57 << 25) >> 16);
            if ( (_DWORD)IsDriverPage == 11 )
            {
              IsDriverPage = MiIsDriverPage(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
              v11 = v55;
              v10 = v54;
              v12 = v52;
              if ( IsDriverPage )
                ++v16;
            }
            else
            {
              v11 = v55;
              v10 = v54;
              v12 = v52;
            }
          }
        }
      }
      v14 += 8LL;
      --v15;
    }
    while ( v15 );
    if ( v13 )
    {
      v18 = a1;
      if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
        v19 = &unk_140E379C0;
      else
        v19 = (_DWORD *)(a1 + 256);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v19);
        v20 = *v19 & 0x7FFFFFFF;
        do
        {
          v21 = (unsigned int)(v20 + 1);
          v22 = v20;
          v20 = _InterlockedCompareExchange(v19, v21, v20);
          if ( v22 == v20 )
            goto LABEL_19;
        }
        while ( v20 >= 0 );
        LOBYTE(v21) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v19, v21, a1);
      }
      else
      {
        LOBYTE(v11) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v19, v11);
      }
      v10 = v54;
      v18 = a1;
LABEL_19:
      if ( v10 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(v18 + 160), -v10);
        if ( v55 )
          _InterlockedAdd64((volatile signed __int64 *)(v18 + 144), -v55);
      }
      if ( v52 )
        _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.SchedulerApcFill5[72], -v52);
      if ( v16 )
        _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.SchedulerApcFill5[76], -v16);
      _InterlockedAdd64((volatile signed __int64 *)(v18 + 152), -v9);
      v23 = a2;
      v24 = 0LL;
      memset(v62, 0, sizeof(v62));
      v25 = 0LL;
      while ( 1 )
      {
        if ( (*(_BYTE *)(a2 + 8 * v25 + 16497) & 1) != 0 )
        {
          if ( v13 == 1 )
          {
            if ( (v4 & 0xF) != 0 )
              goto LABEL_31;
          }
          else
          {
            _InterlockedDecrement64((volatile signed __int64 *)(v18 + 136));
            if ( v60 )
              ++v24;
            if ( (*(_BYTE *)(a2 + 8 * v25 + 16496) & 0xF) == 8 )
            {
              _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v18 + 16) + 32LL));
              goto LABEL_31;
            }
          }
          v26 = *(_BYTE *)(a2 + 8 * v25 + 16496) & 0xF;
          ++*((_DWORD *)v62 + v26);
        }
LABEL_31:
        if ( ++v25 >= v59 )
        {
          v56 = v24;
          v27 = 0;
          while ( 1 )
          {
            v28 = *((_DWORD *)v62 + v27);
            if ( v28 )
              break;
LABEL_41:
            if ( ++v27 >= 8u )
            {
              v36 = v59;
              if ( v60 )
              {
                _InterlockedAdd64((volatile signed __int64 *)v60 + 1, -v9);
                if ( v56 )
                  _InterlockedAdd64((volatile signed __int64 *)v60 + 2, -v56);
              }
              LOBYTE(IsDriverPage) = *(_DWORD *)(v18 + 184) & 0xF;
              if ( (_BYTE)IsDriverPage == 1 )
                v37 = (volatile signed __int32 *)&unk_140E379C0;
              else
                v37 = (volatile signed __int32 *)(v18 + 256);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
                || (LOBYTE(IsDriverPage) = PopHibernateInProgress, PopHibernateInProgress) )
              {
                _InterlockedAnd(v37, 0xBFFFFFFF);
                _InterlockedDecrement(v37);
              }
              else
              {
                LOBYTE(IsDriverPage) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v37, retaddr);
                v23 = a2;
              }
              for ( i = (unsigned __int16 *)(v23 + 16498); (*((_BYTE *)i - 1) & 1) == 0; i += 4 )
              {
LABEL_52:
                if ( !--v36 )
                  return IsDriverPage;
              }
              v39 = v61 + 8LL * *i;
              LOBYTE(IsDriverPage) = 0;
              v40 = (__int64)(v39 << 25) >> 16;
              if ( v13 != 2 )
              {
LABEL_50:
                if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
                  LOBYTE(IsDriverPage) = MiLogRemoveWsleEvent(v40, v4 & 0xF);
                goto LABEL_52;
              }
              v42 = *(_QWORD *)v39;
              LOBYTE(IsDriverPage) = 0;
              if ( v39 >= 0xFFFFF6FB7DBED000uLL )
              {
                LOBYTE(IsDriverPage) = -8;
                if ( v39 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  if ( (v42 & 1) == 0 )
                    goto LABEL_50;
                  if ( (v42 & 0x20) == 0 || (v42 & 0x42) == 0 )
                  {
                    IsDriverPage = MiPteHasShadow(0xFFFFF68000000000uLL, v42, v40);
                    if ( IsDriverPage )
                    {
                      IsDriverPage = *(_QWORD *)(IsDriverPage + 1288);
                      if ( IsDriverPage )
                      {
                        IsDriverPage = *(_QWORD *)(IsDriverPage + 8 * ((v49 >> 3) & 0x1FF));
                        if ( (IsDriverPage & 0x20) != 0 )
                          LOBYTE(v42) = v42 | 0x20;
                        v50 = v42;
                        LOBYTE(v42) = v42 | 0x42;
                        if ( (IsDriverPage & 0x42) == 0 )
                          LOBYTE(v42) = v50;
                      }
                    }
                  }
                }
              }
              if ( (v42 & 1) != 0 )
              {
                v43 = (volatile signed __int64 *)(((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                for ( j = *v43; ; j = IsDriverPage )
                {
                  if ( (MiFlags & 0x8000000) != 0 )
                    _mm_lfence();
                  IsDriverPage = _InterlockedCompareExchange64(v43, j & 0x80FFFFFFFFFFFFFFuLL | 0xA00000000000000LL, j);
                  if ( j == IsDriverPage )
                    break;
                }
              }
              goto LABEL_50;
            }
          }
          v29 = *(_QWORD *)(v23 + 16480);
          v30 = -(__int64)v28;
          v31 = ((v29 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v32 = *(_QWORD *)v31;
          if ( v31 >= 0xFFFFF6FB7DBED000uLL
            && v31 <= 0xFFFFF6FB7DBED7F8uLL
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0)
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
                  v47 = *(_QWORD *)(KernelWaitTime + 8 * ((v31 >> 3) & 0x1FF));
                  if ( (v47 & 0x20) != 0 )
                    v32 |= 0x20uLL;
                  v48 = v32;
                  v32 |= 0x42uLL;
                  if ( (v47 & 0x42) == 0 )
                    v32 = v48;
                }
              }
            }
          }
          v33 = 48 * ((v32 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v34 = (*(_QWORD *)v33 >> 49) & 0x3FFLL;
          v35 = (*(_QWORD *)v33 >> 59) & 7;
          if ( v27 == v35 )
          {
            *(_QWORD *)v33 = ((v34 + v30) << 49) ^ (((v34 + v30) << 49) ^ *(_QWORD *)v33) & 0xF801FFFFFFFFFFFFuLL;
            if ( v34 + v30 )
            {
              if ( (*(_DWORD *)(v33 + 36) & 0x4000000) == 0 )
              {
                *(_QWORD *)v33 = *(_QWORD *)v33 & 0xC001FFFFFFFFFFFFuLL | ((((_WORD)v34 + (_WORD)v30) & 0x3FF | ((unsigned __int64)(v27 & 7) << 10)) << 49);
                goto LABEL_39;
              }
            }
            else
            {
              MiRebuildPageTableAges(a1, v29, 0);
            }
          }
          else if ( v27 > v35 )
          {
            v41 = *(_QWORD *)v33;
            if ( (*(_DWORD *)(v33 + 36) & 0x4000000) != 0 )
              MiRemoveActivePageTableLinks(a1, v33, 0LL);
            *(_QWORD *)v33 = v41 & 0xC001FFFFFFFFFFFFuLL | ((v30 & 0x3FF | ((unsigned __int64)(v27 & 7) << 10)) << 49);
LABEL_39:
            MiInsertActivePageTableLinksTail(a1, v33, v27, 0LL);
          }
          v18 = a1;
          _InterlockedAdd64((volatile signed __int64 *)(a1 + 8LL * v27 + 56), v30);
          v23 = a2;
          goto LABEL_41;
        }
      }
    }
  }
  return IsDriverPage;
}
