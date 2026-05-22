/*
 * XREFs of ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x18017EDD8
 * Callers:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800813E0 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18017A194 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x18017EEC0 (-NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180064CA4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?CanNavigationModeBeEnabled@ControllerNavigationManager@@SAHXZ @ 0x1801791EC (-CanNavigationModeBeEnabled@ControllerNavigationManager@@SAHXZ.c)
 *     ?MapPointByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagPOINT@@1@Z @ 0x18017ECA8 (-MapPointByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagPOINT@@1@Z.c)
 *     ?MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z @ 0x18017ED30 (-MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnable(
        ControllerProcessor *this,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT a4,
        unsigned __int64 a5,
        bool a6,
        bool a7)
{
  struct tagRECT v10; // xmm0
  ControllerProcessor *v11; // rcx
  struct _LUID *v12; // r8
  struct tagPOINT *v13; // r9
  struct tagPOINT v15; // [rsp+30h] [rbp-48h] BYREF
  struct tagPOINT v16; // [rsp+38h] [rbp-40h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-38h] BYREF

  v16 = a4;
  if ( (unsigned int)ControllerNavigationManager::CanNavigationModeBeEnabled() )
  {
    v10 = *a3;
    *((_QWORD *)this + 42) = a5;
    *((_DWORD *)this + 82) = a2;
    v15 = 0LL;
    *(struct tagRECT *)((char *)this + 344) = v10;
    v17 = 0LL;
    ControllerProcessor::MapPointByVisualIdentifier(
      (ControllerProcessor *)((char *)this + 336),
      (struct _LUID *)(((unsigned __int64)this + 336) & -(__int64)(a5 != 0)),
      0LL,
      &v16,
      &v15);
    ControllerProcessor::MapRectByVisualIdentifier(
      v11,
      (struct _LUID *)(((unsigned __int64)this + 336) & -(__int64)(a5 != 0)),
      v12,
      a3,
      &v17);
    if ( !a6 || a7 )
      v13 = &v15;
    else
      v13 = 0LL;
    ControllerProcessor::UpdateNavigationState((__int64)this, 0, &v17, v13);
  }
  return 0LL;
}
