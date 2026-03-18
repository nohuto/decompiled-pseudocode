/*
 * XREFs of HalpEfiDecrementEfiCall @ 0x1404AC694
 * Callers:
 *     HalEfiGetTime @ 0x140533554 (HalEfiGetTime.c)
 *     HalEfiResetSystem @ 0x140586B0C (HalEfiResetSystem.c)
 *     HalEfiSetTime @ 0x140586BA8 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x140586DE8 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x14059A7C0 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiDecrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount + 1);
  if ( a1 )
    return (unsigned int)_InterlockedDecrement(a1);
  return result;
}
