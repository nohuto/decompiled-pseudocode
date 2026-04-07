/*
 * XREFs of ?PrependDCompPrimitive@CPrimitiveGroupVisual@@QEAAJPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800719E4
 * Callers:
 *     ?Generate@CColorPrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BCEA0 (-Generate@CColorPrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD100 (-Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupVisual::PrependDCompPrimitive(
        CPrimitiveGroupVisual *this,
        struct IDCompositionPrimitivePartner *a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 257) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, struct IDCompositionPrimitivePartner *, __int64))(**((_QWORD **)this + 29)
                                                                                            + 24LL))(
           *((_QWORD *)this + 29),
           a2,
           1LL);
    if ( v2 >= 0 )
      return 0LL;
    v4 = 109LL;
  }
  else
  {
    v2 = -2147020579;
    v4 = 106LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return (unsigned int)v2;
}
