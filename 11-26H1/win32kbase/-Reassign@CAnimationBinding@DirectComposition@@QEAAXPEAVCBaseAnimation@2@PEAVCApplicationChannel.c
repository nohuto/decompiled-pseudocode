/*
 * XREFs of ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x140191C5C
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x1401A3234 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITIO.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CAnimationBinding::Reassign(
        DirectComposition::CAnimationBinding *this,
        struct DirectComposition::CBaseAnimation *a2,
        struct _RTL_GENERIC_TABLE *a3)
{
  struct DirectComposition::CBaseAnimation *v5; // rcx
  _QWORD *i; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // rax
  DirectComposition::CResourceMarshaler *v9; // rax

  v5 = (struct DirectComposition::CBaseAnimation *)*((_QWORD *)this + 3);
  if ( a2 != v5 )
  {
    if ( v5 )
    {
      for ( i = (_QWORD *)((char *)v5 + 8); (DirectComposition::CAnimationBinding *)*i != this; i = (_QWORD *)(*i + 40LL) )
        ;
      *i = *((_QWORD *)this + 5);
      v8 = (struct DirectComposition::CResourceMarshaler *)(***((__int64 (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
      DirectComposition::CApplicationChannel::ReleaseResource(a3, v8);
    }
    v9 = (DirectComposition::CResourceMarshaler *)(**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a2)(a2);
    DirectComposition::CResourceMarshaler::AddRef(v9);
    *((_QWORD *)this + 3) = a2;
    *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = this;
  }
}
