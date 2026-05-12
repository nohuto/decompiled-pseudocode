/*
 * XREFs of sub_140073230 @ 0x140073230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 */

__int64 __fastcall sub_140073230(__int64 a1)
{
  __int64 v1; // r10
  int *v3; // [rsp+40h] [rbp+18h] BYREF
  int *v4; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  sub_1400273F0(a1, &v3, &v4);
  if ( v3 )
    return KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(*((_QWORD *)v3 + 544) + 48 * v1 + 24));
  else
    return 0LL;
}
