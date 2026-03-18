/*
 * XREFs of HMCleanupObjectSecurity @ 0x14017E734
 * Callers:
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x14016FF84 (HMRemoveHandleForObjectWorker.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     HMCleanupCapabilityTable @ 0x14017E7DC (HMCleanupCapabilityTable.c)
 */

__int64 __fastcall HMCleanupObjectSecurity(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 DaclPresent; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+48h] [rbp+28h] BYREF
  PACL Dacl; // [rsp+50h] [rbp+30h] BYREF
  PACL Sacl; // [rsp+58h] [rbp+38h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  DaclPresent = 0;
  DaclDefaulted = 0;
  Dacl = 0LL;
  Sacl = 0LL;
  RtlGetDaclSecurityDescriptor((PSECURITY_DESCRIPTOR)v2, &DaclPresent, &Dacl, &DaclDefaulted);
  if ( Dacl )
    GreDeleteFastMutex((char *)Dacl, v4, v5, v6);
  RtlGetSaclSecurityDescriptor((PSECURITY_DESCRIPTOR)v2, &DaclPresent, &Sacl, &DaclDefaulted);
  if ( Sacl )
    GreDeleteFastMutex((char *)Sacl, v7, v8, v9);
  if ( a2 == 1 || a2 == 23 )
    HMCleanupCapabilityTable((PRTL_AVL_TABLE)(v2 + 40));
  return 1LL;
}
