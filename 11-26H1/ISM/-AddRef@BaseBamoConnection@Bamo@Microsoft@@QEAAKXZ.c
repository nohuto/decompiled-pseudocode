/*
 * XREFs of ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800427C8
 * Callers:
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180025EDC (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@QEAAJXZ @ 0x180042A88 (-RuntimeClassInitialize@ForegroundManager@@QEAAJXZ.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x180088E04 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 *     ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x18014A2C0 (--4-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConne.c)
 *     ??0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x18016EF04 (--0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned int __fastcall Microsoft::Bamo::BaseBamoConnection::AddRef(Microsoft::Bamo::BaseBamoConnection *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v1; // rax

  v1 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v1);
}
