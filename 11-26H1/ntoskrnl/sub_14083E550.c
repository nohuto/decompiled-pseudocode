/*
 * XREFs of sub_14083E550 @ 0x14083E550
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryTimeIncrement @ 0x14044EAA0 (KeQueryTimeIncrement.c)
 *     ExpGetLicenseTamperState @ 0x1406D11AC (ExpGetLicenseTamperState.c)
 *     ExpLicUpdateChecksum @ 0x1406D1300 (ExpLicUpdateChecksum.c)
 *     ExpSetLicenseTamperState @ 0x1406D1524 (ExpSetLicenseTamperState.c)
 *     sub_14083E27C @ 0x14083E27C (sub_14083E27C.c)
 *     ntoskrnl_20 @ 0x140A83F40 (ntoskrnl_20.c)
 *     ntoskrnl_21 @ 0x140A841F0 (ntoskrnl_21.c)
 */

__int64 __fastcall sub_14083E550(__int64 a1, _DWORD *a2, _DWORD *a3, struct _KLOCK_ENTRIES *a4, _DWORD *a5, _BYTE *a6)
{
  unsigned int v6; // r12d
  _DWORD *v8; // rbx
  signed __int64 *v10; // rsi
  LegacyAutoBoost *v11; // rbx
  signed __int64 v12; // rdx
  __int64 v13; // rbx
  bool v14; // r14
  struct _KLOCK_ENTRIES *v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // r15
  __int64 v18; // rbx
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rbx
  unsigned int v29; // ecx
  _DWORD *v30; // r9
  __int128 v32; // [rsp+38h] [rbp-81h] BYREF
  __int128 v33; // [rsp+48h] [rbp-71h]
  __int128 v34; // [rsp+58h] [rbp-61h]
  __int128 v35; // [rsp+68h] [rbp-51h] BYREF
  __int128 v36; // [rsp+78h] [rbp-41h]
  __int128 v37; // [rsp+88h] [rbp-31h]
  __int128 v38; // [rsp+98h] [rbp-21h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-11h]
  __int128 v40; // [rsp+B8h] [rbp-1h]
  int v41; // [rsp+110h] [rbp+57h] BYREF
  _DWORD *v42; // [rsp+118h] [rbp+5Fh]

  v42 = a2;
  v6 = (unsigned int)a4;
  v8 = a2;
  v41 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( !*(_QWORD *)a1 && *(_QWORD *)(a1 + 46832) )
  {
    v10 = (signed __int64 *)(a1 + 47024);
    v11 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 47024, 0LL, 0LL, a4);
    v12 = 17LL;
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(v10, 0, v11, (struct _KTHREAD *)v10);
      v12 = 17LL;
    }
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, (void *)0x11);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v13 = *(_QWORD *)(a1 + 47016);
    v14 = v13 == 0;
    if ( v12 != _InterlockedCompareExchange64(v10, 0LL, v12) )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((unsigned __int64)v10);
    if ( v13 )
    {
      if ( (int)ntoskrnl_21(a1, &v35) < 0 || !(_QWORD)v36 )
        goto LABEL_19;
      v16 = 900000;
      if ( *(_DWORD *)(a1 + 47032) < 0xDBBA0u )
        v16 = *(_DWORD *)(a1 + 47032);
      v17 = v36 + v16;
      if ( __OFSUB__(v17, (_QWORD)v36) )
        goto LABEL_19;
      v18 = MEMORY[0xFFFFF78000000320];
      if ( v17 <= v18 * KeQueryTimeIncrement() / 10000 )
        goto LABEL_19;
    }
    if ( v14 )
    {
LABEL_19:
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      if ( !*(_QWORD *)a1 && *(_QWORD *)(a1 + 46832) )
      {
        v19 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, v15);
        v21 = v19;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v19, (__int64)v10);
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v21, v20);
          else
            *((_BYTE *)v21 + 10) = 1;
        }
        v22 = *(_QWORD *)(a1 + 47016);
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10);
        KeAbPostRelease((unsigned __int64)v10);
        if ( v22 )
        {
          v23 = *(_QWORD *)(a1 + 46832);
          v24 = *(unsigned int *)(a1 + 46824);
          HIDWORD(v32) = 0;
          *(_DWORD *)((char *)&v34 + 9) = 0;
          *(_WORD *)((char *)&v34 + 13) = 0;
          HIBYTE(v34) = 0;
          if ( v23 && (!(_DWORD)v24 || a1 != -24) )
          {
            v25 = 4;
            *(_QWORD *)&v32 = 0LL;
            DWORD2(v32) = 4;
            v33 = 0uLL;
            *(_QWORD *)&v34 = 0LL;
            BYTE8(v34) = 1;
            if ( (unsigned int)ExpLicUpdateChecksum(v23 + 20, v24, &v32)
              || (_DWORD)v26
              && ((unsigned __int64)(16 * v26) > 0xFFFFFFFF || (unsigned int)ExpLicUpdateChecksum(v27, v26, &v32)) )
            {
              *(_QWORD *)&v32 = 0LL;
              DWORD2(v32) = 4;
            }
            v35 = v32;
            v36 = v33;
            v37 = v34;
            if ( (int)ntoskrnl_21(a1, &v38) >= 0 )
            {
              if ( (_QWORD)v38 != (_QWORD)v35 )
              {
                DWORD2(v35) = 4;
                v25 = 6;
              }
              v28 = MEMORY[0xFFFFF78000000320];
              *(_QWORD *)&v36 = v28 * KeQueryTimeIncrement() / 10000;
              ntoskrnl_20(a1, &v35, v25, 0LL);
            }
          }
        }
        else
        {
          ExpSetLicenseTamperState(a1, 5);
        }
      }
    }
    v8 = v42;
  }
  if ( *(_QWORD *)a1 && KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    ExpSetLicenseTamperState(a1, 2);
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    ntoskrnl_20(a1, &v38, 32LL, 0LL);
  }
  ExpGetLicenseTamperState(a1, &v41);
  if ( v41 )
  {
    v30 = a5;
    *a6 = 1;
    return (unsigned int)sub_14083E27C(v8, a3, v6, v30, 0);
  }
  else
  {
    v29 = -1073741772;
    *a6 = 0;
  }
  return v29;
}
