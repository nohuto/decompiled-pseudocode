/*
 * XREFs of GreDrvDisconnect @ 0x140265948
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401263A8 (xxxRemoteDisconnect.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1402B95D8 (xxxRemotePassthruEnable.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14008D870 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E720 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140095468 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140095C98 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7774 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400D7C20 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140160A14 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14020F1F4 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14033F0A8 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14033F144 (--$GreReleaseSemaphoreExclusive@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDrvDisconnect(Gre::Base *a1)
{
  int v1; // r12d
  int v2; // r15d
  struct Gre::Base::SESSION_GLOBALS *v3; // r14
  __int64 *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  int v7; // r13d
  bool v8; // al
  HSEMAPHORE v9; // rbx
  struct _GRETHREAD *v10; // rax
  bool v11; // zf
  HSEMAPHORE v12; // rbx
  struct _GRETHREAD *v13; // rax
  int v14; // eax
  HSEMAPHORE v15; // rbx
  struct _GRETHREAD *v16; // rax
  HSEMAPHORE v17; // rbx
  struct _GRETHREAD *v18; // rax
  __int64 v19; // r13
  HSEMAPHORE v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  HSEMAPHORE v24; // [rsp+38h] [rbp-40h] BYREF
  HSEMAPHORE v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-28h]
  __int64 v28; // [rsp+58h] [rbp-20h]
  __int64 v29; // [rsp+60h] [rbp-18h]
  _QWORD *v31; // [rsp+C8h] [rbp+50h] BYREF
  _QWORD *v32; // [rsp+D0h] [rbp+58h] BYREF
  HSEMAPHORE v33; // [rsp+D8h] [rbp+60h] BYREF

  v1 = 0;
  LODWORD(v31) = 0;
  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  v28 = *(_QWORD *)v3 + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v28);
  v29 = *(_QWORD *)v3 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v29);
  v27 = *(_QWORD *)v3 + 728LL;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v27);
  v4 = (__int64 *)*((_QWORD *)v3 + 216);
  do
  {
    if ( !v4 )
      break;
    if ( v4[2] && *((_DWORD *)v4 + 8) == 1 && *(_QWORD *)(v4[113] + 624) )
    {
      GreAcquireSemaphore<19,>(v3);
      v5 = 0LL;
      v6 = (_QWORD *)*((_QWORD *)v3 + 481);
      v7 = 0;
      while ( 1 )
      {
        v8 = 0;
        if ( v2 >= 0 )
        {
          if ( v6 )
          {
            v1 |= 1u;
            if ( (__int64 *)v6[222] == v4 )
              v8 = 1;
          }
        }
        if ( (v1 & 1) != 0 )
          v1 &= ~1u;
        if ( !v8 )
          break;
        v32 = v6;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v32);
        GreReleaseSemaphoreExclusive<19,>(v3);
        if ( v5 )
        {
          v31 = v5;
          PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v31);
        }
        if ( v32 && (v32[5] & 1) != 0 )
        {
          SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v23, (__int64)&v32);
          SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v22, v3);
          SEMOBJ<10>::SEMOBJ<10>(&v21, v3);
          SEMOBJ<8>::SEMOBJ<8>(&v33, (__int64)&v32);
          PDEVOBJ::vSync((PDEVOBJ *)&v32, (struct _SURFOBJ *)((v32[318] + 24LL) & -(__int64)(v32[318] != 0LL)), 0LL, 0);
          if ( !v7 )
          {
            v7 = 1;
            if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(v4[113] + 624))(
                   *((_QWORD *)a1 + 3),
                   *((_QWORD *)a1 + 2)) )
            {
              *((_DWORD *)v4 + 17) = 3;
            }
            else
            {
              *((_DWORD *)v4 + 17) = 6;
              v2 = -2143354873;
            }
          }
          v9 = v33;
          if ( v33 )
          {
            EtwTraceGreLockReleaseSemaphore(L"DevLock", v33);
            v10 = GreGetCurrentThreadCrossSessionCheck();
            if ( v10 )
            {
              v11 = (*((_BYTE *)v10 + 16))-- == 1;
              if ( v11 )
                *(_QWORD *)v10 &= ~0x100uLL;
              if ( !*(_QWORD *)v10 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v9);
            v33 = 0LL;
          }
          v12 = v21;
          if ( v21 )
          {
            EtwTraceGreLockReleaseSemaphore(L"HT", v21);
            v13 = GreGetCurrentThreadCrossSessionCheck();
            if ( v13 )
            {
              v11 = (*((_BYTE *)v13 + 18))-- == 1;
              if ( v11 )
                *(_QWORD *)v13 &= ~0x400uLL;
              if ( !*(_QWORD *)v13 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v12);
            v21 = 0LL;
          }
          if ( v22 )
          {
            GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              v22);
            v22 = 0LL;
          }
          if ( v23 )
          {
            GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              v23);
            v23 = 0LL;
          }
        }
        GreAcquireSemaphore<19,>(v3);
        v5 = v6;
        v6 = (_QWORD *)*v6;
      }
      GreReleaseSemaphoreExclusive<19,>(v3);
      if ( v5 )
      {
        v31 = v5;
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v31);
      }
      if ( !v7 && v2 >= 0 )
      {
        SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v26, v3);
        SEMOBJ<10>::SEMOBJ<10>(&v25, v3);
        SEMOBJ<19>::SEMOBJ<19>(&v24, (HSEMAPHORE *)v3);
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4[113] + 624))(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 2));
        if ( !v14 )
          v2 = -2143354873;
        *((_DWORD *)v4 + 17) = v14 != 0 ? 3 : 6;
        v15 = v24;
        if ( v24 )
        {
          EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v24);
          v16 = GreGetCurrentThreadCrossSessionCheck();
          if ( v16 )
          {
            v11 = (*((_BYTE *)v16 + 27))-- == 1;
            if ( v11 )
              *(_QWORD *)v16 &= ~0x80000uLL;
            if ( !*(_QWORD *)v16 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v15);
          v24 = 0LL;
        }
        v17 = v25;
        if ( v25 )
        {
          EtwTraceGreLockReleaseSemaphore(L"HT", v25);
          v18 = GreGetCurrentThreadCrossSessionCheck();
          if ( v18 )
          {
            v11 = (*((_BYTE *)v18 + 18))-- == 1;
            if ( v11 )
              *(_QWORD *)v18 &= ~0x400uLL;
            if ( !*(_QWORD *)v18 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v17);
          v25 = 0LL;
        }
        if ( v26 )
        {
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v26);
          v26 = 0LL;
        }
      }
    }
    v4 = (__int64 *)*v4;
  }
  while ( v2 >= 0 );
  v19 = v28;
  if ( v27 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v27);
  if ( v29 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v29);
  if ( v19 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v19);
  return (unsigned int)v2;
}
