/*
 * XREFs of ?BeginPlaceModeDrag@TabletModeViewManager@@UEAAJIUtagPOINT@@@Z @ 0x18051F020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModeViewManager::BeginPlaceModeDrag(TabletModeViewManager *this, int a2, struct tagPOINT a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = (__int64 *)*((_QWORD *)this + 5);
  v6 = *v5;
  v11 = a3;
  v7 = (*(__int64 (__fastcall **)(__int64 *, struct tagPOINT *))(v6 + 40))(v5, &v11);
  if ( v7 < 0 )
  {
    v8 = 361LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8));
  if ( v7 < 0 )
  {
    v8 = 362LL;
    goto LABEL_3;
  }
  if ( !a2 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 80LL))(*((_QWORD *)this + 8));
  return 0LL;
}
