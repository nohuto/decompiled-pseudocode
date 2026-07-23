/*
 * XREFs of SiQuerySystemInformationString @ 0x140B273D0
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x1407743C4 (SyspartGetFirmwarePartition.c)
 *     SyspartGetSystemPartition @ 0x14089AA28 (SyspartGetSystemPartition.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiQuerySystemInformationString(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  NTSTATUS SystemInformation; // eax
  NTSTATUS v9; // ebx
  const void **Pool2; // rax
  const void **v11; // rdi
  unsigned int v13; // eax
  ULONG ReturnLength[10]; // [rsp+20h] [rbp-28h] BYREF

  ReturnLength[0] = 0;
  SystemInformation = ZwQuerySystemInformation(SystemInformationClass, 0LL, 0, ReturnLength);
  v9 = SystemInformation;
  if ( SystemInformation == -1073741789 )
  {
    Pool2 = (const void **)ExAllocatePool2(0x100uLL);
    v11 = Pool2;
    if ( Pool2 )
    {
      v9 = ZwQuerySystemInformation(SystemInformationClass, Pool2, ReturnLength[0], ReturnLength);
      if ( v9 >= 0 )
      {
        v13 = *(unsigned __int16 *)v11 + 2;
        *a4 = v13;
        if ( v13 <= a3 )
          memmove(a2, v11[1], v13);
        else
          v9 = -1073741789;
      }
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemInformation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
