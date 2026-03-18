/*
 * XREFs of GreGetSprite @ 0x1401FF5EC
 * Callers:
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x14008E604 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140093B24 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall GreGetSprite(Gre::Base *a1, HWND a2)
{
  __int64 v4; // rbx
  struct Gre::Base::SESSION_GLOBALS *v5; // rbp
  Gre::Base *v6; // rcx
  Gre::Base *v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+60h] [rbp-18h]

  v4 = 0LL;
  v5 = Gre::Base::Globals(a1);
  if ( IsDwmActive(v6) )
  {
    ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v9, v5, (__int64)a1, 0);
    if ( IsDwmActive(v7) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v12, a2);
      if ( v13 )
        v4 = *v13;
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v12);
    }
    SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)v11);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v10);
  }
  return v4;
}
