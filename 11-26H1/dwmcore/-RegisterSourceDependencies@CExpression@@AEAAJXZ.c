/*
 * XREFs of ?RegisterSourceDependencies@CExpression@@AEAAJXZ @ 0x18018F8E0
 * Callers:
 *     ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x18018F734 (-ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETREFER.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddAnimationConsumer@CResource@@QEAAXPEAVCBaseExpression@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018F990 (-AddAnimationConsumer@CResource@@QEAAXPEAVCBaseExpression@@UDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall CExpression::RegisterSourceDependencies(CExpression *this)
{
  unsigned int i; // ebx
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 TargetResource; // rax
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 81) )
      return 0LL;
    v3 = *((_QWORD *)this + 38);
    v4 = 28LL * i;
    v5 = *(_DWORD *)(v4 + v3 + 16);
    if ( v5 >= *((_DWORD *)this + 80) )
      break;
    v6 = *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * v5);
    if ( v6 )
    {
      TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v6);
      if ( TargetResource )
      {
        v8 = *(unsigned int *)(v4 + v3);
        LODWORD(v8) = v8 & 0x7FFFFFFF;
        CResource::AddAnimationConsumer(TargetResource, this, v8);
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x142,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
    (const char *)0x8000000BLL);
  return 2147483659LL;
}
