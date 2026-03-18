/*
 * XREFs of ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400C017C
 * Callers:
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1400BFCBC (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400C00CC (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x140111488 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400C02E4 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::NewRemovingBinding(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationBinding *a2)
{
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  struct DirectComposition::CResourceMarshaler *v5; // rax

  if ( *((int *)this + 6) > 2 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(a2, this);
  }
  else
  {
    v4 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 3);
    *((_DWORD *)a2 + 2) = *((_DWORD *)a2 + 2) & 0xFFFFFFFA | 4;
    v5 = (struct DirectComposition::CResourceMarshaler *)(**v4)(v4);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v5);
    *(_QWORD *)a2 = *((_QWORD *)this + 63);
    *((_QWORD *)this + 63) = a2;
  }
}
