/*
 * XREFs of PipDmgInitReadGroupPolicy @ 0x1407AA520
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x1407B4334 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404F64F8 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PipDmgInitReadGroupPolicy()
{
  unsigned int v0; // ebx
  int RegistryValue; // eax
  unsigned int *v2; // r8
  int v3; // edx
  int v4; // edx
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+10h] BYREF
  PVOID P; // [rsp+48h] [rbp+18h]

  v6[0] = 9961622LL;
  v6[1] = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\Kernel DMA Protection";
  P = 0LL;
  Handle = (HANDLE)-1LL;
  v0 = 0;
  if ( (int)IopOpenRegistryKeyEx(&Handle, 0LL, v6, 131097LL) >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    v2 = (unsigned int *)P;
    if ( RegistryValue >= 0 && PnpValidateRegistryDword((__int64)P) )
    {
      v3 = *(unsigned int *)((char *)v2 + v2[2]);
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
          v0 = v4 == 1;
        else
          v0 = 2;
      }
      else
      {
        v0 = 3;
      }
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  return v0;
}
