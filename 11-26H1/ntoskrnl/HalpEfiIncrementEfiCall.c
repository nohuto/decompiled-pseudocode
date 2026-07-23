/*
 * XREFs of HalpEfiIncrementEfiCall @ 0x140488E18
 * Callers:
 *     HalEfiGetTime @ 0x1405359D4 (HalEfiGetTime.c)
 *     HalEfiResetSystem @ 0x14058902C (HalEfiResetSystem.c)
 *     HalEfiSetTime @ 0x1405890C8 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x140589308 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x14059CF40 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiIncrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount + 1);
  if ( a1 )
    return (unsigned int)_InterlockedIncrement(a1);
  return result;
}
