/*
 * XREFs of ?RegisterForFrameEvents@FrameFactory@@UEAAJPEAUIApplicationFrameEventHandler@@PEAK@Z @ 0x180212FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FrameFactory::RegisterForFrameEvents(
        FrameFactory *this,
        struct IApplicationFrameEventHandler *a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationFrameEventHandler *, unsigned int *))(**((_QWORD **)this + 3)
                                                                                                 + 56LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
