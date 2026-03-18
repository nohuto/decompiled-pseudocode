/*
 * XREFs of ?SetProperty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnIsCursorChanged@CWindowNode@@AEAAXXZ @ 0x1801FE3EC (-OnIsCursorChanged@CWindowNode@@AEAAXXZ.c)
 *     ?SetIsClipToDirty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024B7E8 (-SetIsClipToDirty@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 *     ?SetIsComposeOnce@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024B874 (-SetIsComposeOnce@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 *     ?SetIsLayoutRTL@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024BA34 (-SetIsLayoutRTL@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetProperty(
        CWindowNode *a1,
        unsigned int a2,
        int a3,
        char *a4)
{
  __int64 v5; // rdx
  int IsClipToDirty; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  switch ( a2 )
  {
    case ':':
      if ( a3 != 17 )
      {
        v5 = 17551LL;
        goto LABEL_21;
      }
      IsClipToDirty = CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsClipToDirty((__int64)a1, *a4);
      if ( IsClipToDirty < 0 )
      {
        v5 = 17552LL;
        goto LABEL_22;
      }
      return 0LL;
    case ';':
      if ( a3 != 17 )
      {
        v5 = 17556LL;
        goto LABEL_21;
      }
      IsClipToDirty = CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsComposeOnce((__int64)a1, *a4);
      if ( IsClipToDirty < 0 )
      {
        v5 = 17557LL;
        goto LABEL_22;
      }
      return 0LL;
    case '<':
      if ( a3 != 17 )
      {
        v5 = 17561LL;
        goto LABEL_21;
      }
      if ( *a4 != *((_BYTE *)a1 + 746) )
      {
        *((_BYTE *)a1 + 746) = *a4;
        CWindowNode::OnIsCursorChanged(a1);
      }
      return 0LL;
  }
  if ( a2 != 61 )
    return CVisual::SetProperty((CVisual **)a1, a2, a3, (float *)a4);
  if ( a3 != 17 )
  {
    v5 = 17566LL;
LABEL_21:
    IsClipToDirty = -2147024809;
    goto LABEL_22;
  }
  IsClipToDirty = CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsLayoutRTL(a1, *a4);
  if ( IsClipToDirty >= 0 )
    return 0LL;
  v5 = 17567LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)(unsigned int)IsClipToDirty);
  return (unsigned int)IsClipToDirty;
}
