/*
 * XREFs of ?PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z @ 0x18026F570
 * Callers:
 *     ?ProcessSetPersistentCache@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETPERSISTENTCACHE@@PEBXI@Z @ 0x180219F78 (-ProcessSetPersistentCache@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETPER.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z @ 0x18010B9FC (-AdjustPropertyTypeWithMask@CExpression@@AEBA-AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18010D3FC (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CExpression::PopulateCacheFromInitialValue(
        CExpression *this,
        int a2,
        const void *a3,
        unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // edx
  unsigned int ExpressionTypeByteSize; // eax
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 >= *((_DWORD *)this + 81) )
  {
    v6 = 1489LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v8 = a4;
  v9 = *((_QWORD *)this + 38);
  v10 = *(_DWORD *)(28 * v8 + v9 + 4);
  if ( *(_DWORD *)(28 * v8 + v9 + 12) == 1 )
    v10 = CExpression::AdjustPropertyTypeWithMask((__int64)this, v10);
  ExpressionTypeByteSize = GetExpressionTypeByteSize(v10);
  if ( ExpressionTypeByteSize != a2 )
  {
    v6 = 1496LL;
    goto LABEL_3;
  }
  v15 = *(unsigned int *)&v13[v12 + 20];
  if ( (unsigned int)v15 + ExpressionTypeByteSize > *(_DWORD *)(v14 + 316) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5DA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      v13);
  if ( !v13[v12 + 24] )
  {
    v13[v12 + 24] = 1;
    memcpy_0((void *)(*(_QWORD *)(v14 + 288) + v15), a3, ExpressionTypeByteSize);
  }
  return 0LL;
}
