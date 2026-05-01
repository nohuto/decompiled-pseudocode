/*
 * XREFs of ?ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z @ 0x180515B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801C99B8 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::ApplyLayoutOperation(TabletModePositioner *this, struct IUnknown *a2)
{
  struct IUnknown *v2; // rdx
  TabletModePositioner *v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 88)) )
    return 2147947423LL;
  v5 = TabletModePositioner::ApplyLayoutOperationHelper(v3, v2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x283,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
