/*
 * XREFs of StorExtAcquireMSISpinLock @ 0x14007AAC0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 */

__int64 __fastcall StorExtAcquireMSISpinLock(__int64 a1)
{
  __int64 v1; // r10
  int *v3; // [rsp+40h] [rbp+18h] BYREF
  int *v4; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  RaidpPortGetAdapter(a1, &v3, &v4);
  if ( v3 )
    return KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(*((_QWORD *)v3 + 552) + 48 * v1 + 24));
  else
    return 0LL;
}
