/*
 * XREFs of ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x14014B790
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJKPEAPEAX@Z @ 0x14014B7E0 (-OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJKPEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

int __fastcall DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void **a3)
{
  struct DirectComposition::CResourceMarshaler *v4; // rax
  DirectComposition::CSharedSystemResource *v5; // rax
  unsigned int v6; // edx

  v4 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( !v4 )
    return -1073741790;
  v5 = (DirectComposition::CSharedSystemResource *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v4 + 64LL))(v4);
  if ( v5 )
    return DirectComposition::CSharedSystemResource::OpenSharedHandle(v5, v6, a3);
  else
    return -1073741637;
}
