/*
 * XREFs of ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x180518270
 * Callers:
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x18051D9EC (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804BC920 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::GetForegroundOperableView(
        TabletModePositioner *this,
        struct IApplicationView **a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, TabletModePositionerHelpers **); // rbx
  struct IApplicationView *v5; // rdx
  int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  TabletModePositionerHelpers *v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v3 = *((_QWORD *)this + 42);
  v4 = *(__int64 (__fastcall **)(__int64, TabletModePositionerHelpers **))(*(_QWORD *)v3 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  v6 = v4(v3, &v11);
  if ( v6 >= 0 )
  {
    if ( TabletModePositionerHelpers::IsOperableView(
           (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v11,
           v5) )
    {
      v10 = 0;
      v7 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, int *))(*(_QWORD *)v11 + 88LL))(v11, &v10);
      v6 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x883,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_8;
      }
      if ( v10 )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
        *a2 = v11;
        v6 = 0;
        goto LABEL_8;
      }
    }
    v6 = -2147023728;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v6;
}
