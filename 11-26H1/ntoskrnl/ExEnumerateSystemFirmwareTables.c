/*
 * XREFs of ExEnumerateSystemFirmwareTables @ 0x1408389C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409A6638 (ExpGetSystemFirmwareTableInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExEnumerateSystemFirmwareTables(int a1, void *a2, int a3, _DWORD *a4)
{
  char *Pool2; // rax
  _DWORD *v10; // rbx
  int SystemFirmwareTableInformation; // edi

  if ( !a2 && a3 )
    return 3221225485LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *((_DWORD *)Pool2 + 3) = a3;
    *(_DWORD *)Pool2 = a1;
    *(_QWORD *)(Pool2 + 4) = 0LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(Pool2);
    if ( (int)(SystemFirmwareTableInformation + 0x80000000) < 0 || SystemFirmwareTableInformation == -1073741789 )
    {
      if ( a4 )
        *a4 = v10[3];
      if ( SystemFirmwareTableInformation >= 0 )
      {
        if ( a2 )
          memmove(a2, v10 + 4, 0xFFFFFFF0uLL);
      }
    }
    ExFreePoolWithTag(v10, 0x54465241u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SystemFirmwareTableInformation;
}
