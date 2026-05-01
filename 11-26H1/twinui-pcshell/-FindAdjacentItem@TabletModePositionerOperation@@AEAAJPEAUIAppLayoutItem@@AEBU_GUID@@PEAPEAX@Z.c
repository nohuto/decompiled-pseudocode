/*
 * XREFs of ?FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z @ 0x1805266C8
 * Callers:
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x180526BB0 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModePositionerOperation::FindAdjacentItem(
        TabletModePositionerOperation *this,
        struct IAppLayoutItem *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (*(int (__fastcall **)(_QWORD, struct IAppLayoutItem *, __int64))(**((_QWORD **)this + 8) + 120LL))(
         *((_QWORD *)this + 8),
         a2,
         1LL) >= 0 )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct IAppLayoutItem *, __int64, __int64, GUID *, void **))(**((_QWORD **)this + 8) + 120LL))(
         *((_QWORD *)this + 8),
         a2,
         0xFFFFFFFFLL,
         5LL,
         &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
         a4);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17B,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
