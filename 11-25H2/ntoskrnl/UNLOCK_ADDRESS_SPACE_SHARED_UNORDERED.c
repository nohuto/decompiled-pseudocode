/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x140683358
 * Callers:
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  int v2; // esi
  ULONG_PTR v3; // rdi
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a1 + 1448);
  v3 = a2 + 600;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 600), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 600));
  result = (_QWORD *)KeAbPostRelease(v3);
  *(_DWORD *)(a1 + 1448) = v2 & 0xFFFFFFFD;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
