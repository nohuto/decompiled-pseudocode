/*
 * XREFs of ?ReleaseOwnership@CVisualMarshaler@DirectComposition@@UEAA_NPEAVCApplicationChannel@2@@Z @ 0x140139F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CVisualMarshaler::ReleaseOwnership(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  bool result; // al

  result = (*((_DWORD *)this + 4) & 0x10) != 0;
  *((_DWORD *)this + 4) &= ~0x10u;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
