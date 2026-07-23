/*
 * XREFs of SiDisambiguateSystemDevice @ 0x14089B270
 * Callers:
 *     SiGetEfiSystemDevice @ 0x14089B348 (SiGetEfiSystemDevice.c)
 * Callees:
 *     SiGetDeviceNumberInformation @ 0x14089AD84 (SiGetDeviceNumberInformation.c)
 *     SiGetRegistryValue @ 0x140AC22E0 (SiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiDisambiguateSystemDevice(_DWORD *a1, _DWORD *a2, __int64 a3, int a4)
{
  int RegistryValue; // ebx
  int v8; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+30h] BYREF
  int v11; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0;
  v8 = 0;
  v10 = 0;
  P = 0LL;
  RegistryValue = SiGetRegistryValue(
                    (_DWORD)a1,
                    (unsigned int)L"SystemPartition",
                    (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Syspart",
                    a4,
                    (__int64)&P,
                    (__int64)&v10);
  if ( RegistryValue >= 0 )
  {
    if ( v10 >= 4 )
    {
      RegistryValue = SiGetDeviceNumberInformation((const WCHAR *)P, &v11, &v8);
      if ( RegistryValue >= 0 )
      {
        *a1 = v11;
        *a2 = v8;
      }
    }
    else
    {
      RegistryValue = -1073741823;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)RegistryValue;
}
