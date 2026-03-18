/*
 * XREFs of ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1801C6B10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1801C6B6C (-FlushAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1801C6BE0 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::OnPresentComplete(MagnifierCaptureBitsResponse *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  CDeviceManager::FlushAllDevices(this);
  *(_BYTE *)(*((_QWORD *)this + 192) + 2640LL) = 0;
  v2 = MagnifierCaptureBitsResponse::SendResponse(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x6Au, 0LL);
  return v3;
}
