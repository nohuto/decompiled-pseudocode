/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140392C04
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404EEE18 (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14027E6A0 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140391D40 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140393390 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  _QWORD *v7; // r15
  unsigned int v8; // edi
  unsigned int *v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // r11
  unsigned __int64 v14; // r10
  _DWORD *v15; // rdx
  int v16; // r8d
  _DWORD *i; // rax
  unsigned int v18; // r8d
  __int64 v19; // rcx
  unsigned __int64 j; // rax
  unsigned int *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r14d
  __int64 v24; // rcx
  __int64 v26; // rbx
  __int64 v27; // r13
  unsigned int v28; // r15d
  __int64 v29; // rcx
  __int64 v30; // rbx
  int v31; // [rsp+20h] [rbp-A9h]
  __int64 k; // [rsp+30h] [rbp-99h] BYREF
  unsigned int *v33; // [rsp+38h] [rbp-91h]
  _QWORD *v34; // [rsp+40h] [rbp-89h]
  __int64 v35; // [rsp+48h] [rbp-81h]
  _OWORD v36[3]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v37[8]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v38[8]; // [rsp+A0h] [rbp-29h] BYREF

  v35 = a2;
  v2 = a2;
  memset(v36, 0, sizeof(v36));
  memset_0(v38, 0, sizeof(v38));
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 3056), 0, (__int64)v36);
  if ( (*(_BYTE *)(a1 + 2469) & 8) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v7 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 3040), -1LL);
    v34 = v7;
    if ( v7 == (_QWORD *)-1LL )
    {
      v8 = -1073740682;
    }
    else
    {
      v8 = 0;
      if ( !v7 || !*v7 || (v9 = (unsigned int *)(v7 + 1), v2) )
        v9 = 0LL;
      v33 = v9;
      v10 = 0;
      StLockAcquireShared((struct VLOCK *)(a1 + 2472), v4, v5, v6);
      if ( v9 )
      {
        LODWORD(v12) = 0;
        while ( 1 )
        {
          v11 = *v9;
          LODWORD(k) = 0;
          if ( (unsigned int)v11 <= (unsigned int)v12 )
            break;
          v13 = *((_QWORD *)v9 + 1);
          v14 = v13 + 4 * ((unsigned __int64)(unsigned int)(v11 - 1) >> 5);
          v15 = (_DWORD *)(v13 + 4 * ((unsigned __int64)(unsigned int)v12 >> 5));
          v16 = *v15 | ((1 << (v12 & 0x1F)) - 1);
          for ( i = v15 + 1; ; ++i )
          {
            v18 = ~v16;
            if ( v18 )
              break;
            if ( (unsigned __int64)i > v14 )
              goto LABEL_21;
            v16 = *++v15;
          }
          _BitScanForward64((unsigned __int64 *)&v19, v18);
          v12 = (unsigned int)v19 + 32 * (unsigned int)(((__int64)v15 - v13) >> 2);
          if ( (unsigned int)v12 > (unsigned int)v11 )
            break;
          for ( j = ~(v18 | ((1 << v19) - 1)); ; j = *v21 )
          {
            if ( (_DWORD)j )
            {
              _BitScanForward64(&j, j);
              goto LABEL_18;
            }
            v21 = v15 + 1;
            if ( (unsigned __int64)(v15 + 1) > v14 )
              break;
            ++v15;
          }
          LODWORD(j) = 32;
LABEL_18:
          v22 = 32 * (((__int64)v15 - v13) >> 2) + j;
          if ( v22 > (unsigned int)v11 )
            v22 = v11;
          if ( v22 == (_DWORD)v12 )
            break;
          if ( v22 > (unsigned int)v12 )
          {
            v27 = 8 * v12;
            v28 = v22;
            do
            {
              v29 = *(_QWORD *)(*(_QWORD *)(a1 + 2648) + v27);
              if ( (v29 & 0x7FFFFFFFFFFF0000LL) != 0 && v29 >= 0 )
              {
                v30 = v10;
                v37[v10++] = v12;
                v38[v30] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v12, 0, v11, 4);
                if ( v10 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v37, (unsigned int)v38, 8, v31, 0LL);
                  v10 = 0;
                }
              }
              LODWORD(v12) = v12 + 1;
              v27 += 8LL;
            }
            while ( (unsigned int)v12 < v28 );
            v9 = v33;
          }
        }
LABEL_21:
        v7 = v34;
        v2 = v35;
      }
      v23 = 0;
      for ( k = v2; v23 < *(_DWORD *)(a1 + 2644); ++v23 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 2648) + 8LL * v23);
        if ( (v24 & 0x7FFFFFFFFFFF0000LL) != 0
          && v24 >= 0
          && (!v9 || _bittest64(*((const signed __int64 **)v9 + 1), v23)) )
        {
          v26 = v10;
          v37[v10++] = v23;
          v38[v26] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v23, 0, v11, 4);
          if ( v10 == 8 )
          {
            SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
              a1,
              (unsigned int)v37,
              (unsigned int)v38,
              8,
              v31,
              (unsigned __int64)&k & -(__int64)(v2 != 0));
            v10 = 0;
            if ( v2 )
            {
              if ( !k )
                goto LABEL_27;
            }
          }
          v9 = v33;
        }
      }
      if ( v10 )
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          (unsigned int)v37,
          (unsigned int)v38,
          v10,
          v31,
          (unsigned __int64)&k & -(__int64)(v2 != 0));
LABEL_27:
      StLockReleaseShared((struct _KTHREAD *)(a1 + 2472));
      _InterlockedExchange64((volatile __int64 *)(a1 + 3040), (__int64)v7);
    }
  }
  KiUnstackDetachProcess((__int64)v36, 0);
  return v8;
}
