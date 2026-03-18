/*
 * XREFs of bDrvReconnect @ 0x14026B88C
 * Callers:
 *     RemotePassthruDisable @ 0x1402023C8 (RemotePassthruDisable.c)
 *     xxxRemoteConsoleShadowStart @ 0x1402B8C40 (xxxRemoteConsoleShadowStart.c)
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

__int64 __fastcall bDrvReconnect(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  _QWORD *v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  void (__fastcall *v13)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  HSEMAPHORE v14; // rbx
  struct _GRETHREAD *v15; // rax
  bool v16; // zf
  HSEMAPHORE v17; // rbx
  struct _GRETHREAD *v18; // rax
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  HSEMAPHORE v21; // [rsp+38h] [rbp-38h] BYREF
  HSEMAPHORE v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  __int64 v27; // [rsp+68h] [rbp-8h] BYREF
  _QWORD *v28; // [rsp+90h] [rbp+20h] BYREF

  v28 = a1;
  if ( !a1 || (a1[10] & 1) == 0 )
    return 0LL;
  v7 = Gre::Base::Globals((Gre::Base *)a1);
  SEMOBJ<1>::SEMOBJ<1>(&v27, v7);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v26, v7);
  SEMOBJ<3>::SEMOBJ<3>(&v25, v7);
  SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v24, (__int64)&v28);
  SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v23, v7);
  SEMOBJ<10>::SEMOBJ<10>(&v22, v7);
  SEMOBJ<8>::SEMOBJ<8>(&v21, (__int64)&v28);
  PDEVOBJ::vSync((PDEVOBJ *)&v28, (struct _SURFOBJ *)((v28[318] + 24LL) & -(__int64)(v28[318] != 0LL)), 0LL, 0);
  v8 = v28;
  v9 = (__int64 (__fastcall *)(__int64, __int64))v28[414];
  if ( v9 )
  {
    v10 = v9(a2, a3);
    v8 = v28;
    v11 = v10;
    if ( v10 )
    {
      *(_DWORD *)(v28[222] + 68LL) = 2;
      v8 = v28;
    }
  }
  else
  {
    v11 = 1;
  }
  if ( a4 == 1 )
  {
    v12 = v8[224];
    v20 = v12;
    if ( v11 == 1 && (*(_DWORD *)(v12 + 24) & 0x800) != 0 )
    {
      v13 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v8[357];
      if ( v13 )
        v13(v8[223], &v20, 0LL, 0LL, *(_DWORD *)(v12 + 28));
      else
        v11 = 0;
    }
  }
  v14 = v21;
  if ( v21 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v21);
    v15 = GreGetCurrentThreadCrossSessionCheck();
    if ( v15 )
    {
      v16 = (*((_BYTE *)v15 + 16))-- == 1;
      if ( v16 )
        *(_QWORD *)v15 &= ~0x100uLL;
      if ( !*(_QWORD *)v15 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v14);
  }
  v17 = v22;
  if ( v22 )
  {
    EtwTraceGreLockReleaseSemaphore(L"HT", v22);
    v18 = GreGetCurrentThreadCrossSessionCheck();
    if ( v18 )
    {
      v16 = (*((_BYTE *)v18 + 18))-- == 1;
      if ( v16 )
        *(_QWORD *)v18 &= ~0x400uLL;
      if ( !*(_QWORD *)v18 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v17);
  }
  if ( v23 )
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v23);
  if ( v24 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v24);
  if ( v25 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v25);
  if ( v26 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v26);
  if ( v27 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v27);
  return v11;
}
