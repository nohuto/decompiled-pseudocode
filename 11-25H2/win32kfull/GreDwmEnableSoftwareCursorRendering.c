/*
 * XREFs of GreDwmEnableSoftwareCursorRendering @ 0x140123744
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x14008E604 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 */

void __fastcall GreDwmEnableSoftwareCursorRendering(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  Gre::Base *v5; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = Gre::Base::Globals(a1);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v6, v4, (__int64)a1, 0);
  if ( IsDwmActive(v5) )
    *(_DWORD *)(*((_QWORD *)v4 + 17) + 100LL) = a2;
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)v8);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v7);
}
