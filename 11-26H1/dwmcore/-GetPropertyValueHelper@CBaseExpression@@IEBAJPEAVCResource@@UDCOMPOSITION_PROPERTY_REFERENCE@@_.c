/*
 * XREFs of ?GetPropertyValueHelper@CBaseExpression@@IEBAJPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@_NPEAVCExpressionValue@@@Z @ 0x180045500
 * Callers:
 *     ?GetTargetPropertyValue@CBaseExpression@@IEBAJPEAVCExpressionValue@@@Z @ 0x180045604 (-GetTargetPropertyValue@CBaseExpression@@IEBAJPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1801076A8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::GetPropertyValueHelper(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        CExpressionValue *a5)
{
  __int64 v6; // rdx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v13; // rdx
  float v14; // xmm6_4
  int v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (unsigned int)a3;
  LODWORD(v6) = a3 & 0x7FFFFFFF;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, CExpressionValue *))(*(_QWORD *)a2 + 136LL))(a2, v6, a5);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B8,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
      (const char *)(unsigned int)v10,
      v15);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B0,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\baseexpression.cpp",
      (const char *)v11,
      v16);
    return v11;
  }
  else
  {
    if ( a3 < 0 && *((_DWORD *)a5 + 16) == 18 )
    {
      v14 = *(float *)a5;
      CExpressionValue::DestroyCurrent(a5);
      *((_DWORD *)a5 + 16) = 18;
      *(float *)a5 = v14 * 57.295776;
    }
    if ( a4 )
    {
      v13 = *(_QWORD *)(a1 + 192);
      if ( v13 )
      {
        if ( *(_BYTE *)(v13 + 4) )
          CExpressionValue::ApplyMaskToValue(a5, (const struct SubchannelMaskInfo *)v13);
      }
    }
    return 0LL;
  }
}
