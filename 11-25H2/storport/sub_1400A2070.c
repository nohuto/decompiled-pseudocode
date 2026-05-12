/*
 * XREFs of sub_1400A2070 @ 0x1400A2070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A2070(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // r9
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  v1 = *(_QWORD *)(a1 + 64);
  v2 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v3 = *(_DWORD *)(v2 + *(_QWORD *)(v1 + 40));
  while ( (v3 & 1) == 0 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + *(_QWORD *)(v1 + 40)), v3 - 2, v3);
    if ( v4 == v3 )
      return 0LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v1 + 520), 0, 0);
  return 0LL;
}
