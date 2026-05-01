/*
 * XREFs of _lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator() @ 0x1804BF85C
 * Callers:
 *     LambdaCustomPaintProc__lambda_3f3d9ba04ec2c8622cba6a99ff36500b__ID2D1DeviceContext___ @ 0x1804BF1C0 (LambdaCustomPaintProc__lambda_3f3d9ba04ec2c8622cba6a99ff36500b__ID2D1DeviceContext___.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804C0DC0 (-_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804C0F44 (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 */

__int64 __fastcall lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator()(
        CSwitchItemElement **a1,
        struct ID2D1DeviceContext *a2,
        __int64 a3)
{
  CSwitchItemElement *v4; // rdx
  float v6; // xmm6_4
  FLOAT v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  int v10; // eax
  struct D2D_RECT_F v12; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_RECT_F v13; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *(_QWORD *)&v12.left = 0LL;
  v4 = *a1;
  v6 = (float)(int)a3;
  v7 = (float)*((int *)*a1 + 84);
  v13.top = 0.0;
  v12.right = v7;
  v12.bottom = (float)SHIDWORD(a3);
  v13.bottom = (float)SHIDWORD(a3);
  v13.left = (float)*((int *)v4 + 88) + v7;
  v13.right = (float)(int)a3 - (float)*((int *)v4 + 89);
  if ( (unsigned int)Mirror_IsThreadRTL() )
  {
    v8 = v12.right - v12.left;
    v9 = v13.right - v13.left;
    v12.right = v6 - (float)(v12.left - 0.0);
    v12.left = v12.right - v8;
    v13.right = v6 - (float)(v13.left - 0.0);
    v13.left = v13.right - v9;
  }
  CSwitchItemElement::_RenderIcon(*a1, &v12, a2);
  v10 = CSwitchItemElement::_RenderText(*a1, &v13, a2);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v10);
  return 0LL;
}
