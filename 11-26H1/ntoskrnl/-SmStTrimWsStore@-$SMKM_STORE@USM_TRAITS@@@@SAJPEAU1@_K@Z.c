/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140390E54
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404F5858 (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14027F130 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14038FF90 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140390550 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140391600 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  __int64 v13; // r15
  int v14; // r10d
  unsigned __int64 v15; // r11
  _DWORD *v16; // rdx
  int v17; // r8d
  _DWORD *i; // rax
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned __int64 j; // rax
  unsigned int *v22; // rax
  unsigned int v23; // r13d
  unsigned int v24; // r14d
  __int64 v25; // rcx
  __int64 v27; // rbx
  unsigned int v28; // r15d
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rbx
  int v32; // [rsp+20h] [rbp-A9h]
  __int64 k; // [rsp+30h] [rbp-99h] BYREF
  unsigned int *v34; // [rsp+38h] [rbp-91h]
  _QWORD *v35; // [rsp+40h] [rbp-89h]
  __int64 v36; // [rsp+48h] [rbp-81h]
  _OWORD v37[3]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v38[8]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v39[8]; // [rsp+A0h] [rbp-29h] BYREF

  v36 = a2;
  v2 = a2;
  memset(v37, 0, sizeof(v37));
  memset_0(v39, 0, sizeof(v39));
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 3056), 0, (__int64)v37);
  if ( (*(_BYTE *)(a1 + 2469) & 8) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v7 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 3040), -1LL);
    v35 = v7;
    if ( v7 == (_QWORD *)-1LL )
    {
      v8 = -1073740682;
    }
    else
    {
      v8 = 0;
      if ( !v7 || !*v7 || (v9 = (unsigned int *)(v7 + 1), v2) )
        v9 = 0LL;
      v34 = v9;
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
          v14 = 0;
          v15 = v13 + 4 * ((unsigned __int64)(unsigned int)(v11 - 1) >> 5);
          v16 = (_DWORD *)(v13 + 4 * ((unsigned __int64)(unsigned int)v12 >> 5));
          v17 = *v16 | ((1 << (v12 & 0x1F)) - 1);
          for ( i = v16 + 1; ; ++i )
          {
            v19 = ~v17;
            if ( v19 )
              break;
            if ( (unsigned __int64)i > v15 )
              goto LABEL_21;
            v17 = *++v16;
          }
          _BitScanForward64((unsigned __int64 *)&v20, v19);
          v12 = (unsigned int)v20 + 32 * (unsigned int)(((__int64)v16 - v13) >> 2);
          if ( (unsigned int)v12 > (unsigned int)v11 )
            break;
          for ( j = ~(v19 | ((1 << v20) - 1)); ; j = *v22 )
          {
            if ( (_DWORD)j )
            {
              _BitScanForward64(&j, j);
              goto LABEL_18;
            }
            v14 += 32;
            v22 = v16 + 1;
            if ( (unsigned __int64)(v16 + 1) > v15 )
              break;
            ++v16;
          }
          LODWORD(j) = 32;
LABEL_18:
          v23 = 32 * (((__int64)v16 - v13) >> 2) + j;
          if ( v23 > (unsigned int)v11 )
            v23 = v11;
          LODWORD(k) = v23;
          if ( v23 == (_DWORD)v12 )
            break;
          if ( v23 > (unsigned int)v12 )
          {
            v28 = k;
            v29 = 8 * v12;
            do
            {
              v30 = *(_QWORD *)(*(_QWORD *)(a1 + 2648) + v29);
              if ( (v30 & 0x7FFFFFFFFFFF0000LL) != 0 && v30 >= 0 )
              {
                v31 = v10;
                v38[v10++] = v12;
                v39[v31] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v12, 0, v11, 4);
                if ( v10 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v38, (unsigned int)v39, 8, v32, 0LL);
                  v10 = 0;
                }
              }
              LODWORD(v12) = v12 + 1;
              v29 += 8LL;
            }
            while ( (unsigned int)v12 < v28 );
            v9 = v34;
          }
        }
LABEL_21:
        v7 = v35;
        v2 = v36;
      }
      v24 = 0;
      for ( k = v2; v24 < *(_DWORD *)(a1 + 2644); ++v24 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 2648) + 8LL * v24);
        if ( (v25 & 0x7FFFFFFFFFFF0000LL) != 0
          && v25 >= 0
          && (!v9 || _bittest64(*((const signed __int64 **)v9 + 1), v24)) )
        {
          v27 = v10;
          v38[v10++] = v24;
          v39[v27] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v24, 0, v11, 4);
          if ( v10 == 8 )
          {
            SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
              a1,
              (unsigned int)v38,
              (unsigned int)v39,
              8,
              v32,
              (unsigned __int64)&k & -(__int64)(v2 != 0));
            v10 = 0;
            if ( v2 )
            {
              if ( !k )
                goto LABEL_27;
            }
          }
          v9 = v34;
        }
      }
      if ( v10 )
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          (unsigned int)v38,
          (unsigned int)v39,
          v10,
          v32,
          (unsigned __int64)&k & -(__int64)(v2 != 0));
LABEL_27:
      StLockReleaseShared((struct _KTHREAD *)(a1 + 2472));
      _InterlockedExchange64((volatile __int64 *)(a1 + 3040), (__int64)v7);
    }
  }
  KiUnstackDetachProcess((__int64)v37, 0);
  return v8;
}
