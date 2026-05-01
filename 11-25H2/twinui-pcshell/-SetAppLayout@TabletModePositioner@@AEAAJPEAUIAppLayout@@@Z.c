/*
 * XREFs of ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x18007DF10
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x18007D970 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1804F4474 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1804F76DC (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1804F8A08 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::SetAppLayout(TabletModePositioner *this, struct IAppLayout *a2)
{
  struct IAppLayout *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct IAppLayout *)*((_QWORD *)this + 31);
  if ( v4 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 31);
    *((_QWORD *)this + 31) = a2;
    v4 = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, struct IAppLayout *))(*(_QWORD *)v5 + 16LL))(v5, a2);
      v4 = (struct IAppLayout *)*((_QWORD *)this + 31);
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct IAppLayout *))(**((_QWORD **)this + 32) + 24LL))(
         *((_QWORD *)this + 32),
         v4);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71A,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
