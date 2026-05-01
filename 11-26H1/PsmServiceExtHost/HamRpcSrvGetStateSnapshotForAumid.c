/*
 * XREFs of HamRpcSrvGetStateSnapshotForAumid @ 0x18003D750
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18003D7A0 (-HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHO.c)
 */

int __fastcall HamRpcSrvGetStateSnapshotForAumid(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  int result; // eax
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0;
  result = HamSrvGetStateSnapshotForAumid(
             (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2360),
             a2,
             a3,
             a4,
             a5,
             (union _HAM_STATE_SNAPSHOT *)v7);
  if ( result >= 0 )
  {
    *a6 = v7[0];
    return 0;
  }
  return result;
}
