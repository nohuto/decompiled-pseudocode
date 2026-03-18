/*
 * XREFs of vDrvInvalidateRect @ 0x14033FE20
 * Callers:
 *     RemoteRedrawRectangle @ 0x1402AF088 (RemoteRedrawRectangle.c)
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
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14020F1F4 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026E634 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall vDrvInvalidateRect(Gre::Base *a1, __int64 a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  void (__fastcall *v4)(__int64); // rax
  HSEMAPHORE v5; // rbx
  struct _GRETHREAD *v6; // rax
  bool v7; // zf
  HSEMAPHORE v8; // rbx
  struct _GRETHREAD *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  Gre::Base *v15; // [rsp+70h] [rbp+20h] BYREF
  HSEMAPHORE v16; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v17; // [rsp+88h] [rbp+38h] BYREF

  if ( a1 )
  {
    v15 = a1;
    if ( (*((_DWORD *)a1 + 10) & 1) != 0 )
    {
      v3 = Gre::Base::Globals(a1);
      SEMOBJ<1>::SEMOBJ<1>(&v14, v3);
      SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v13, v3);
      SEMOBJ<3>::SEMOBJ<3>(&v12, v3);
      SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v11, (__int64)&v15);
      SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v10, v3);
      SEMOBJ<8>::SEMOBJ<8>(&v17, (__int64)&v15);
      SEMOBJ<10>::SEMOBJ<10>(&v16, v3);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v15,
        (struct _SURFOBJ *)((*((_QWORD *)v15 + 318) + 24LL) & -(__int64)(*((_QWORD *)v15 + 318) != 0LL)),
        0LL,
        0);
      v4 = (void (__fastcall *)(__int64))*((_QWORD *)v15 + 417);
      if ( v4 )
        v4(a2);
      v5 = v16;
      if ( v16 )
      {
        EtwTraceGreLockReleaseSemaphore(L"HT", v16);
        v6 = GreGetCurrentThreadCrossSessionCheck();
        if ( v6 )
        {
          v7 = (*((_BYTE *)v6 + 18))-- == 1;
          if ( v7 )
            *(_QWORD *)v6 &= ~0x400uLL;
          if ( !*(_QWORD *)v6 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v5);
      }
      v8 = v17;
      if ( v17 )
      {
        EtwTraceGreLockReleaseSemaphore(L"DevLock", v17);
        v9 = GreGetCurrentThreadCrossSessionCheck();
        if ( v9 )
        {
          v7 = (*((_BYTE *)v9 + 16))-- == 1;
          if ( v7 )
            *(_QWORD *)v9 &= ~0x100uLL;
          if ( !*(_QWORD *)v9 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v8);
      }
      if ( v10 )
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v10);
      if ( v11 )
        GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v11);
      if ( v12 )
        GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v12);
      if ( v13 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v13);
      if ( v14 )
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v14);
    }
  }
}
