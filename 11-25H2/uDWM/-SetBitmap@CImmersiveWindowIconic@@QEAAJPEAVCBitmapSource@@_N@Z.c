/*
 * XREFs of ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x180095100
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8C50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180095178 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::SetBitmap(CImmersiveWindowIconic *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  v4 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 32) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  v5 = CImmersiveWindowIconic::OnIconUpdated(this, 0);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xD8u, 0LL);
  return v6;
}
