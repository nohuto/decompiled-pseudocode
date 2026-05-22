/*
 * XREFs of ?AcquireLock@BaseBamoConnection@Bamo@Microsoft@@MEAAXXZ @ 0x180052E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::Bamo::BaseBamoConnection::AcquireLock(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 144));
}
