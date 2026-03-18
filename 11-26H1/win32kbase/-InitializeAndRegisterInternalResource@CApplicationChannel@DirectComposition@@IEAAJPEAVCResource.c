/*
 * XREFs of ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400566F0
 * Callers:
 *     ?OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x140056510 (-OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@.c)
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1400565EC (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400ABFFC (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x14014141C (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(
        DirectComposition::CConnection **this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v4; // ebx

  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 32LL))(a2)
    && (v4 = DirectComposition::CConnection::AcquireShellResourceAccess(this[5]), v4 < 0)
    || (v4 = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))a2)(a2), v4 < 0)
    || (v4 = DirectComposition::CApplicationChannel::RegisterResource(
               (DirectComposition::CApplicationChannel *)this,
               a2),
        v4 < 0) )
  {
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CConnection **))(*(_QWORD *)a2 + 208LL))(
      a2,
      this);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a2 + 88LL))(a2, 1LL);
  }
  return (unsigned int)v4;
}
