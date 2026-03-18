/*
 * XREFs of ?Initialize@CCrossChannelChildVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@@Z @ 0x140055B08
 * Callers:
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140055954 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 * Callees:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1400A9A0C (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 */

int __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::Initialize(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        DirectComposition::CConnection **a2)
{
  *((_BYTE *)this + 324) |= 0x40u;
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 72) = -1;
  *((_DWORD *)this + 68) = -1;
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 73) = -1;
  *((_DWORD *)this + 69) = -1;
  *((_DWORD *)this + 71) = -1;
  return DirectComposition::CConnection::CreateSystemResource(
           a2[5],
           0x9Cu,
           (DirectComposition::CCrossChannelChildVisualMarshaler *)((char *)this + 336));
}
