/*
 * XREFs of ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18009A310
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18009A3E0 (-CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18009AC6C (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180127CB4 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CaptureBitsResponse::OnPresentComplete(CaptureBitsResponse *this)
{
  int SectionBitmap; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int Bits; // eax
  int v6; // eax
  unsigned int v7; // ebx

  SectionBitmap = CaptureBitsResponse::CreateSectionBitmap(this);
  v3 = SectionBitmap;
  if ( SectionBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SectionBitmap, 0x50u, 0LL);
  }
  else
  {
    v4 = CaptureBitsResponse::MapSectionBitmap(this);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x52u, 0LL);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits(this);
      v3 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bits, 0x56u, 0LL);
    }
  }
  v6 = (*(__int64 (__fastcall **)(CaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 56LL))(this, v3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x59u, 0LL);
  return v7;
}
