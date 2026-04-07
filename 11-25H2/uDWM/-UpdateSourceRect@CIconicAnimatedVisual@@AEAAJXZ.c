/*
 * XREFs of ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B76E4
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B7790 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z @ 0x180013350 (-Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180099708 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180099724 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateSourceRect(CIconicAnimatedVisual *this)
{
  unsigned int v1; // ebx
  CSecondaryWindowRepresentation *v2; // rcx
  CSecondaryWindowRepresentation *v3; // rcx
  CRectResourceProxy *v4; // r8
  int v5; // eax
  struct D2D_RECT_F v7; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 34) )
  {
    v2 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 31);
    v7.left = 0.0;
    v7.top = 0.0;
    v7.right = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v2);
    v7.bottom = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v3);
    v5 = CRectResourceProxy::Update(v4, &v7);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x83u, 0LL);
  }
  return v1;
}
