/*
 * XREFs of ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18004CCC4
 * Callers:
 *     ?OnConnected@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180136350 (-OnConnected@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 *     ?CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x18013C094 (-CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 * Callees:
 *     ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x18004D384 (-GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall Microsoft::Bamo::BaseBamoConnection::ImpersonateCaller(
        Microsoft::Bamo::BaseBamoConnection *a1,
        _DWORD *a2)
{
  struct IMessageSession *Session; // rax

  Session = Microsoft::Bamo::BaseBamoConnection::GetSession(a1);
  *a2 = (*(__int64 (__fastcall **)(struct IMessageSession *))(*(_QWORD *)Session + 328LL))(Session);
  return a2;
}
