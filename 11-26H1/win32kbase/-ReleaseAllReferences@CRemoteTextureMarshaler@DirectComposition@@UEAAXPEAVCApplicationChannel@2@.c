/*
 * XREFs of ?ReleaseAllReferences@CRemoteTextureMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234E20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CRemoteTextureMarshaler::ReleaseAllReferences(
        DirectComposition::CRemoteTextureMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  if ( *((_QWORD *)this + 7) )
    *((_QWORD *)this + 7) = 0LL;
  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 10) = 0LL;
  }
}
