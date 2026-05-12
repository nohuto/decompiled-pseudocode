/*
 * XREFs of sub_1400A16D0 @ 0x1400A16D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 */

LONG __fastcall sub_1400A16D0(__int64 a1)
{
  LONG result; // eax
  unsigned __int64 v3; // r8
  LONG v4; // ett

  result = sub_1400066C0(a1, 0LL, 0);
  if ( result >= 0 )
  {
    v3 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    result = *(_DWORD *)(v3 + *(_QWORD *)(a1 + 40));
    while ( (result & 1) == 0 )
    {
      v4 = result;
      result = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + *(_QWORD *)(a1 + 40)), result - 2, result);
      if ( v4 == result )
        return result;
    }
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
  }
  return result;
}
