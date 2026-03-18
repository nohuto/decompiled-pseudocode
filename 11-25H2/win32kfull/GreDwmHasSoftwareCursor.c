/*
 * XREFs of GreDwmHasSoftwareCursor @ 0x140123660
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     DwmDestroyDeviceSpecificResources @ 0x140124D60 (DwmDestroyDeviceSpecificResources.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x14008E604 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 */

__int64 __fastcall GreDwmHasSoftwareCursor(Gre::Base *a1, int a2)
{
  unsigned int v4; // edi
  struct Gre::Base::SESSION_GLOBALS *v5; // rsi
  Gre::Base *v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals(a1);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)&v9, v5, (__int64)a1, 0);
  if ( IsDwmActive(v6) )
  {
    v7 = *((_QWORD *)v5 + 17);
    if ( (*(_DWORD *)(v7 + 100) || a2)
      && *(_DWORD *)(v7 + 160)
      && (*(_QWORD *)(v9 + 3520) != v9 + 3520 || (*(_DWORD *)(v9 + 40) & 0x20000) != 0) )
    {
      v4 = 1;
    }
  }
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)v11);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v10);
  return v4;
}
