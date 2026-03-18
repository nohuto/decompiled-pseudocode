/*
 * XREFs of TtmpFindDeviceByDeviceId @ 0x1407E5B4C
 * Callers:
 *     TtmiAssignDevice @ 0x1407E5054 (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1407E5490 (TtmiSetInputWakeCapability.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1407E59A4 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall TtmpFindDeviceByDeviceId(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 **v4; // rcx
  __int64 *i; // rax

  v3 = 0LL;
  v4 = (__int64 **)(a1 + 96);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) == a2 )
    {
      v3 = i;
      break;
    }
  }
  if ( a3 )
    *a3 = v3;
  return v3 != 0LL;
}
