/*
 * XREFs of DwmDestroyDeviceSpecificResources @ 0x140124D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x14008E604 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     GreDwmHasSoftwareCursor @ 0x140123660 (GreDwmHasSoftwareCursor.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1401734FC (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 */

void __fastcall DwmDestroyDeviceSpecificResources(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = Gre::Base::Globals(a1);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)&v7, v2, (__int64)a1, 0);
  if ( (unsigned int)GreDwmHasSoftwareCursor(a1, 1) )
  {
    v3 = (_QWORD *)(v7 + 3520);
    v4 = *(_QWORD *)(v7 + 3520);
    if ( *(_QWORD *)(v4 + 8) != v7 + 3520 || (v5 = *(_QWORD **)(v7 + 3528), (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v3[1] = v3;
    *v3 = v3;
    v6 = *((_QWORD *)v2 + 17);
    if ( *(_QWORD *)(v6 + 104) == v6 + 104 && *(_QWORD *)(v6 + 120) == v6 + 120 )
      vSpDwmDestroyCursorSprites((HDEV)a1);
  }
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)v9);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v8);
}
