/*
 * XREFs of ?Initialize@ScreenManager@@UEAAJAEBUScreenManangerInitParams@@@Z @ 0x1800A3230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x1800A3348 (--$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x1800A341C (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1800A341C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenManager::Initialize(ScreenManager *this, const struct ScreenManangerInitParams *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // edi
  int v7; // r8d
  int v8; // r9d
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a2 + 3);
  if ( *((_QWORD *)this + 38) != v4 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)a2 + 3));
    v5 = *((_QWORD *)this + 38);
    *((_QWORD *)this + 38) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v16 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)a2 + 1) + 24LL))(*((_QWORD *)a2 + 1), &v16);
  if ( v6 < 0 )
  {
    v14 = 126LL;
    goto LABEL_11;
  }
  *((_BYTE *)this + 344) = v16 == 1;
  v6 = SmartCookie::Register<ITabletModePositionerManager,long (ITabletModePositionerManager::*)(ITabletModePositionerManagerNotification *,unsigned long *),long (ITabletModePositionerManager::*)(unsigned long),ScreenManager *>(
         (int)this + 48,
         *((_QWORD *)a2 + 2),
         v7,
         v8,
         (__int64)this);
  if ( v6 < 0 )
  {
    v14 = 132LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v11 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),ScreenManager *>(
          (int)this + 176,
          *(_QWORD *)a2,
          v9,
          v10,
          (__int64)this);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
