/*
 * XREFs of ?SetProperty@?$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E1880
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetColor@?$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A890 (-SetColor@-$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@QEAAJU_D3DCOLORVALUE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorGradientStopGeneratedT<CColorGradientStop,CResource>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _OWORD *a4)
{
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  int v9[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 != 1 )
      return 2147942487LL;
    if ( a3 != 70 )
    {
      v5 = 1085LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    *(_OWORD *)v9 = *a4;
    v6 = CColorGradientStopGeneratedT<CColorGradientStop,CResource>::SetColor(a1, v9);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43E,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    if ( a3 != 18 )
    {
      v5 = 1080LL;
      goto LABEL_9;
    }
    if ( *(float *)a4 != *(float *)(a1 + 72) )
    {
      *(_DWORD *)(a1 + 72) = *(_DWORD *)a4;
      if ( *(_QWORD *)(a1 + 48) )
        CResource::InvalidateConsumingAnimationsInternal(a1);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 80LL))(a1, 10LL, a1);
    }
  }
  return 0LL;
}
