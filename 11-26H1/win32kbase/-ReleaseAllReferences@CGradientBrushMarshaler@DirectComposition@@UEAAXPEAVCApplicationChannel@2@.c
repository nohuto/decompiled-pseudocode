/*
 * XREFs of ?ReleaseAllReferences@CGradientBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140234BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z @ 0x1400A3BC4 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@_N@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CGradientBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CGradientBrushMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 7) = 0LL;
  }
  LOBYTE(a3) = 1;
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CGradientBrushMarshaler *)((char *)this + 80),
    (struct DirectComposition::CApplicationChannel *)a2,
    a3,
    a4);
}
