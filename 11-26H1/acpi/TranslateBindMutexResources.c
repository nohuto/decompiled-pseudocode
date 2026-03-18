/*
 * XREFs of TranslateBindMutexResources @ 0x14005CE2C
 * Callers:
 *     AcpiHandleDeviceFirmwareLock @ 0x140053F50 (AcpiHandleDeviceFirmwareLock.c)
 * Callees:
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x14003CCB4 (ACPIInternalGetDeviceFromNSOBJ.c)
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall TranslateBindMutexResources(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  PVOID Object[2]; // [rsp+30h] [rbp-10h] BYREF

  Object[0] = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
    return 0;
  ACPIInternalGetDeviceFromNSOBJ(a2, Object, a3, 0LL);
  if ( !Object[0] )
  {
    v5 = -1073741661;
    goto LABEL_8;
  }
  v5 = PnpBiosResourcesToNtResources(Object[0], a3, 4LL);
  if ( v5 < 0 || MEMORY[0x24] == 1 )
  {
LABEL_8:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
      v5 = 0;
    goto LABEL_10;
  }
  v5 = -1073741637;
LABEL_10:
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  return (unsigned int)v5;
}
