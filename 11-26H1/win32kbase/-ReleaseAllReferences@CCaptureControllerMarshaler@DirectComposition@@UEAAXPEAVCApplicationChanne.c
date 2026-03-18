/*
 * XREFs of ?ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1402349F0
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14023BCB0 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z @ 0x140137154 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CCaptureControllerMarshaler::ReleaseAllReferences(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2,
        __int64 a3,
        __int64 a4)
{
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 7) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    *((_QWORD *)this + 10) = 0LL;
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    *((_QWORD *)this + 12) = 0LL;
  }
  LOBYTE(v8) = 1;
  DirectComposition::CMarshaledArrayBase::Clear((char **)this + 13, (__int64)v8, a3, a4);
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 18);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 18) = 0LL;
  }
}
