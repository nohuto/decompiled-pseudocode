/*
 * XREFs of ?ConsumeStackValues@CExpressionValueStack@@AEAAJIPEAPEAVCExpressionValue@@@Z @ 0x18018CAD0
 * Callers:
 *     ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x180107E74 (-Matrix4x4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJI@Z @ 0x18018C588 (-Matrix3x2FromSkew@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?Matrix3x2FromRotation@CExpressionValueStack@@QEAAJI@Z @ 0x18018C6E0 (-Matrix3x2FromRotation@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18018C808 (-Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z @ 0x180215EA0 (-Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?Matrix4x4FromRotationY@CExpressionValueStack@@QEAAJI@Z @ 0x180215FC0 (-Matrix4x4FromRotationY@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?Matrix4x4FromRotationZ@CExpressionValueStack@@QEAAJI@Z @ 0x18021632C (-Matrix4x4FromRotationZ@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ConsumeStackValues(
        CExpressionValueStack *this,
        unsigned int a2,
        struct CExpressionValue **a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  struct CExpressionValue *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)this + 24);
  if ( a2 <= v3 && v3 )
  {
    if ( a2 > 1 )
    {
      v3 = v3 - a2 + 1;
      *((_DWORD *)this + 24) = v3;
    }
    v5 = (struct CExpressionValue *)(*(_QWORD *)this + 72LL * (v3 - 1));
    result = 0LL;
    *a3 = v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  return result;
}
