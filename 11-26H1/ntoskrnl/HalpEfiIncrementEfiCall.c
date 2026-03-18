/*
 * XREFs of HalpEfiIncrementEfiCall @ 0x14048F3D0
 * Callers:
 *     HalEfiGetTime @ 0x140533554 (HalEfiGetTime.c)
 *     HalEfiResetSystem @ 0x140586B0C (HalEfiResetSystem.c)
 *     HalEfiSetTime @ 0x140586BA8 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x140586DE8 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x14059A7C0 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiIncrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount + 1);
  if ( a1 )
    return (unsigned int)_InterlockedIncrement(a1);
  return result;
}
