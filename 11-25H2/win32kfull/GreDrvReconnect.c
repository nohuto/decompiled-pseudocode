/*
 * XREFs of GreDrvReconnect @ 0x14033F2B8
 * Callers:
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14008D870 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E720 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140095468 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140095C98 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095D2C (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7774 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14020F1F4 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026E634 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14033F0A8 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14033F144 (--$GreReleaseSemaphoreExclusive@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDrvReconnect(Gre::Base *a1)
{
  int v1; // r12d
  int v2; // r14d
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 *v4; // rdi
  int v5; // r13d
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // r15
  __int64 *i; // rsi
  bool v9; // al
  int v10; // eax
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  HSEMAPHORE v13; // rbx
  struct _GRETHREAD *v14; // rax
  bool v15; // zf
  HSEMAPHORE v16; // rbx
  struct _GRETHREAD *v17; // rax
  int v18; // esi
  HSEMAPHORE v19; // rbx
  struct _GRETHREAD *v20; // rax
  HSEMAPHORE v21; // rbx
  struct _GRETHREAD *v22; // rax
  HSEMAPHORE v24; // [rsp+30h] [rbp-49h] BYREF
  HSEMAPHORE v25; // [rsp+38h] [rbp-41h] BYREF
  __int64 v26; // [rsp+40h] [rbp-39h] BYREF
  __int64 v27; // [rsp+48h] [rbp-31h] BYREF
  HSEMAPHORE v28; // [rsp+50h] [rbp-29h] BYREF
  HSEMAPHORE v29; // [rsp+58h] [rbp-21h] BYREF
  __int64 v30; // [rsp+60h] [rbp-19h] BYREF
  __int64 v31; // [rsp+68h] [rbp-11h] BYREF
  __int64 v32; // [rsp+70h] [rbp-9h] BYREF
  __int64 v33; // [rsp+78h] [rbp-1h] BYREF
  __int64 v34[10]; // [rsp+80h] [rbp+7h] BYREF
  int v36; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v37; // [rsp+F0h] [rbp+77h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v38; // [rsp+F8h] [rbp+7Fh]

  v1 = 0;
  v36 = 1;
  v2 = 0;
  v38 = Gre::Base::Globals(a1);
  v3 = v38;
  SEMOBJ<1>::SEMOBJ<1>(v34, v38);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v33, v3);
  SEMOBJ<3>::SEMOBJ<3>(&v32, v3);
  v4 = (__int64 *)*((_QWORD *)v3 + 216);
  do
  {
    if ( !v4 )
      break;
    v5 = 0;
    if ( v4[2] && *((_DWORD *)v4 + 8) == 1 && *(_QWORD *)(v4[113] + 632) )
    {
      GreAcquireSemaphore<19,>((HSEMAPHORE *)v3);
      v7 = Gre::Base::Globals(v6);
      for ( i = (__int64 *)*((_QWORD *)v7 + 481); ; i = (__int64 *)*i )
      {
        v9 = 0;
        if ( v2 >= 0 )
        {
          if ( i )
          {
            v1 |= 1u;
            if ( (__int64 *)i[222] == v4 )
              v9 = 1;
          }
        }
        if ( (v1 & 1) != 0 )
          v1 &= ~1u;
        if ( !v9 )
          break;
        v37 = i;
        if ( i && (i[5] & 1) != 0 )
        {
          GreReleaseSemaphoreExclusive<19,>((HSEMAPHORE *)v7);
          SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v27, (__int64)&v37);
          SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v26, v7);
          SEMOBJ<10>::SEMOBJ<10>(&v25, v7);
          SEMOBJ<8>::SEMOBJ<8>(&v24, (__int64)&v37);
          PDEVOBJ::vSync((PDEVOBJ *)&v37, (struct _SURFOBJ *)((v37[318] + 24LL) & -(__int64)(v37[318] != 0LL)), 0LL, 0);
          if ( v5 )
          {
            v10 = v36;
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4[113] + 632))(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 2));
            v36 = v10;
            v5 = 1;
            if ( v10 )
            {
              *((_DWORD *)v4 + 17) = 2;
            }
            else
            {
              *((_DWORD *)v4 + 17) = 5;
              v2 = -2143354874;
            }
          }
          v11 = v37[224];
          v31 = v11;
          if ( v10 == 1 && (*(_DWORD *)(v11 + 24) & 0x800) != 0 )
          {
            v12 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v37[357];
            if ( v12 )
              v12(v37[223], &v31, 0LL, 0LL, *(_DWORD *)(v11 + 28));
          }
          v13 = v24;
          if ( v24 )
          {
            EtwTraceGreLockReleaseSemaphore(L"DevLock", v24);
            v14 = GreGetCurrentThreadCrossSessionCheck();
            if ( v14 )
            {
              v15 = (*((_BYTE *)v14 + 16))-- == 1;
              if ( v15 )
                *(_QWORD *)v14 &= ~0x100uLL;
              if ( !*(_QWORD *)v14 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v13);
            v24 = 0LL;
          }
          v16 = v25;
          if ( v25 )
          {
            EtwTraceGreLockReleaseSemaphore(L"HT", v25);
            v17 = GreGetCurrentThreadCrossSessionCheck();
            if ( v17 )
            {
              v15 = (*((_BYTE *)v17 + 18))-- == 1;
              if ( v15 )
                *(_QWORD *)v17 &= ~0x400uLL;
              if ( !*(_QWORD *)v17 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v16);
            v25 = 0LL;
          }
          if ( v26 )
          {
            GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              v26);
            v26 = 0LL;
          }
          if ( v27 )
          {
            GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              v27);
            v27 = 0LL;
          }
          GreAcquireSemaphore<19,>((HSEMAPHORE *)v7);
        }
      }
      GreReleaseSemaphoreExclusive<19,>((HSEMAPHORE *)v7);
      if ( !v5 && v2 >= 0 )
      {
        SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v30, v7);
        SEMOBJ<10>::SEMOBJ<10>(&v29, v7);
        SEMOBJ<19>::SEMOBJ<19>(&v28, (HSEMAPHORE *)v7);
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4[113] + 632))(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 2));
        v36 = v18;
        if ( !v18 )
          v2 = -2143354873;
        *((_DWORD *)v4 + 17) = v18 != 0 ? 2 : 5;
        v19 = v28;
        if ( v28 )
        {
          EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v28);
          v20 = GreGetCurrentThreadCrossSessionCheck();
          if ( v20 )
          {
            v15 = (*((_BYTE *)v20 + 27))-- == 1;
            if ( v15 )
              *(_QWORD *)v20 &= ~0x80000uLL;
            if ( !*(_QWORD *)v20 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v19);
          v28 = 0LL;
        }
        v21 = v29;
        if ( v29 )
        {
          EtwTraceGreLockReleaseSemaphore(L"HT", v29);
          v22 = GreGetCurrentThreadCrossSessionCheck();
          if ( v22 )
          {
            v15 = (*((_BYTE *)v22 + 18))-- == 1;
            if ( v15 )
              *(_QWORD *)v22 &= ~0x400uLL;
            if ( !*(_QWORD *)v22 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v21);
          v29 = 0LL;
        }
        if ( v30 )
        {
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v30);
          v30 = 0LL;
        }
      }
      v3 = v38;
    }
    v4 = (__int64 *)*v4;
  }
  while ( v2 >= 0 );
  if ( v32 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v32);
  if ( v33 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v33);
  if ( v34[0] )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v34[0]);
  return (unsigned int)v2;
}
