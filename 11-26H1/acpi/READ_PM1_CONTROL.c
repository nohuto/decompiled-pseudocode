/*
 * XREFs of READ_PM1_CONTROL @ 0x14002E478
 * Callers:
 *     ACPIEnableEnterACPIMode @ 0x14002E248 (ACPIEnableEnterACPIMode.c)
 *     ACPIEnableInitializeACPI @ 0x14002E3C0 (ACPIEnableInitializeACPI.c)
 *     ACPILateRestore @ 0x140065C30 (ACPILateRestore.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 READ_PM1_CONTROL()
{
  unsigned __int16 v0; // bx
  unsigned __int16 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v0 = 0;
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(1LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      1LL,
      0LL,
      &v2,
      2LL,
      0LL);
    v0 = v2;
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(4LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      4LL,
      0LL,
      &v2,
      2LL,
      0LL);
    v0 |= v2;
  }
  return v0;
}
