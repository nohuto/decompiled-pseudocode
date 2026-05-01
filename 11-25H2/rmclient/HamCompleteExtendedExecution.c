/*
 * XREFs of HamCompleteExtendedExecution @ 0x180012950
 * Callers:
 *     <none>
 * Callees:
 *     HamIpcChannelObjectMakeZombie @ 0x18000A1D0 (HamIpcChannelObjectMakeZombie.c)
 *     memset_0 @ 0x18001C04E (memset_0.c)
 */

CLIENT_CALL_RETURN __fastcall HamCompleteExtendedExecution(_QWORD *a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  _QWORD v5[2]; // [rsp+40h] [rbp-48h] BYREF
  int v6; // [rsp+50h] [rbp-38h]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EFD0, 5u, 0LL, *a1, a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    memset_0(v5, 0, 0x40uLL);
    v5[0] = a2;
    v5[1] = 0LL;
    v6 = 3;
    HamIpcChannelObjectMakeZombie(a1 + 3, (__int64)v5);
    return 0LL;
  }
  return result;
}
