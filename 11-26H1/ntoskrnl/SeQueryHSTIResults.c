/*
 * XREFs of SeQueryHSTIResults @ 0x1408AB510
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline @ 0x140720E84 (Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 */

__int64 __fastcall SeQueryHSTIResults(void *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  v4 = dword_140FE3640;
  *a3 = dword_140FE3640;
  v5 = 0;
  if ( v4 )
  {
    if ( a2 >= v4 )
    {
      if ( (unsigned int)Feature_HstiUMAFix__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( KeGetCurrentThread()->PreviousMode )
          RtlCopyToUser(a1, qword_140FE3648, (unsigned int)dword_140FE3640);
        else
          RtlCopyVolatileMemory(a1, qword_140FE3648, (unsigned int)dword_140FE3640);
      }
      else
      {
        memmove(a1, qword_140FE3648, (unsigned int)dword_140FE3640);
      }
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v5;
}
