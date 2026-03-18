/*
 * XREFs of ExpConvertSvmDevice @ 0x1406D1610
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406D1A1C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpConvertSvmDevice(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  if ( !a2[9] )
    return 3221225659LL;
  result = guard_dispatch_icall_no_overrides(a2[6], &v5);
  if ( (int)result >= 0 )
  {
    if ( (v5 & 1) != 0
      && (v5 & 2) != 0
      && (v5 & 4) != 0
      && (unsigned int)(1 << (v5 >> 3)) >= *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill10[8] )
    {
      _InterlockedIncrement(&ExTbFlushActive);
      result = guard_dispatch_icall_no_overrides(a1, a2[21]);
      if ( (int)result < 0 )
        _InterlockedDecrement(&ExTbFlushActive);
    }
    else
    {
      return 3221225711LL;
    }
  }
  return result;
}
