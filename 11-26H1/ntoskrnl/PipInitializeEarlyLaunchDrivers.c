/*
 * XREFs of PipInitializeEarlyLaunchDrivers @ 0x140D0B4C4
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140D0B1AC (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     SeRegisterElamCertResources @ 0x1408156C0 (SeRegisterElamCertResources.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PnpInitializeBootStartDriver @ 0x140D0EFCC (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeEarlyLaunchDrivers(UNICODE_STRING *a1, __int64 a2)
{
  UNICODE_STRING *v2; // r14
  UNICODE_STRING *v3; // rbx
  UNICODE_STRING *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  int DriverNameFromKeyNode; // esi
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+30h] BYREF
  __int64 v10; // [rsp+88h] [rbp+38h]

  v10 = 0LL;
  v2 = a1 + 4;
  Handle = 0LL;
  v3 = *(UNICODE_STRING **)&a1[4].Length;
  *(_OWORD *)P = 0LL;
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = *(UNICODE_STRING **)&v3->Length;
    if ( SLODWORD(v4[3].Buffer) >= 0 )
    {
      v5 = *(_QWORD *)&v4[3].Length;
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 48);
        if ( v6 )
          SeRegisterElamCertResources(v6, a2, 0);
      }
      P[1] = 0LL;
      Handle = 0LL;
      DriverNameFromKeyNode = IopOpenRegistryKeyEx(&Handle, 0LL, v4 + 2, 0x20019u);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, (PUNICODE_STRING)P);
        if ( DriverNameFromKeyNode >= 0 )
          DriverNameFromKeyNode = PnpInitializeBootStartDriver(
                                    (unsigned int)P,
                                    (int)v4 + 32,
                                    *(_QWORD *)(*(_QWORD *)&v4[3].Length + 56LL),
                                    *(_QWORD *)&v4[3].Length,
                                    0,
                                    0);
      }
      if ( Handle )
        ZwClose(Handle);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
      if ( DriverNameFromKeyNode < 0 )
        *(_DWORD *)(*(_QWORD *)&v4[3].Length + 104LL) |= 0x20000u;
    }
  }
}
