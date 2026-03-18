/*
 * XREFs of ?ReleaseAllReferences@CDesktopTreeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceAndOwnership@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400A3E28 (-ReleaseResourceAndOwnership@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler.c)
 */

void __fastcall DirectComposition::CDesktopTreeMarshaler::ReleaseAllReferences(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResourceAndOwnership(a2, v4);
    *((_QWORD *)this + 8) = 0LL;
  }
}
