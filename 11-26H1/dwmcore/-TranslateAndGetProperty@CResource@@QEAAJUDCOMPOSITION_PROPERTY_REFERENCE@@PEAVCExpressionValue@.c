/*
 * XREFs of ?TranslateAndGetProperty@CResource@@QEAAJUDCOMPOSITION_PROPERTY_REFERENCE@@PEAVCExpressionValue@@@Z @ 0x180169860
 * Callers:
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResource::TranslateAndGetProperty(__int64 a1, __int64 a2, CExpressionValue *a3)
{
  int v3; // ebx
  int v5; // eax
  unsigned int v6; // edi
  float v8; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  LODWORD(a2) = a2 & 0x7FFFFFFF;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    if ( v3 < 0 && *((_DWORD *)a3 + 16) == 18 )
    {
      v8 = *(float *)a3;
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 18;
      *(float *)a3 = v8 * 57.295776;
    }
    return 0LL;
  }
}
