/*
 * XREFs of ?SetReferenceProperty@CSpriteVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCResource@@@Z @ 0x180282D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x180282CD0 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::SetReferenceProperty(struct CResource **a1, int a2, struct CContent *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 51 )
  {
    v5 = 41LL;
LABEL_5:
    v6 = -2147024809;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spritevisual.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a3 + 64LL))(a3, 16LL) )
  {
    v5 = 36LL;
    goto LABEL_5;
  }
  v6 = CSpriteVisual::SetContent(a1, a3);
  if ( v6 < 0 )
  {
    v5 = 37LL;
    goto LABEL_6;
  }
  return 0LL;
}
