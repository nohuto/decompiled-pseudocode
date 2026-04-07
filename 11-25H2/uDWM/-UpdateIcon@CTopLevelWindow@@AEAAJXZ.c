/*
 * XREFs of ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180033418
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x180031930 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180094424 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     IsOpenThemeDataPresent @ 0x18009BCE0 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateIcon(CTopLevelWindow *this)
{
  CBaseObject *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rax
  char v5; // r14
  HICON v6; // rcx
  char v7; // bp
  int v8; // eax
  CBaseObject *v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v10 = 0LL;
  v3 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v3;
  v4 = *((_QWORD *)this + 67);
  if ( !v4 )
    return v3;
  v5 = *(_DWORD *)(v4 + 232) == 0;
  if ( (*((_DWORD *)this + 146) & 0x10000) == 0 || (v6 = *(HICON *)(*((_QWORD *)this + 89) + 152LL)) == 0LL )
  {
    v7 = 1;
LABEL_9:
    CImage::SetBitmapSource(*((CImage **)this + 67), v1);
    if ( v7 != v5 )
      CVisual::SetDirtyFlags(this, 4096);
    goto LABEL_11;
  }
  v7 = 0;
  v8 = CBitmapSource::Create(v6, &v10);
  v3 = v8;
  if ( v8 >= 0 )
  {
    v1 = v10;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1458u, 0LL);
  v1 = v10;
LABEL_11:
  if ( v1 )
    CBaseObject::Release(v1);
  return v3;
}
