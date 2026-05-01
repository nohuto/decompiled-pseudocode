/*
 * XREFs of ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800367A0
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180035880 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x180036658 (-HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PE.c)
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x180036CE4 (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x1800434B4 (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 *     ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180059FDC (-HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostIdStoreAcquireLockShared(struct _HAM_HOSTID_STORE *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared(a1);
}
