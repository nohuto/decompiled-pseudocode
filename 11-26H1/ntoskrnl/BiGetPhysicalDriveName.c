/*
 * XREFs of BiGetPhysicalDriveName @ 0x140898CE0
 * Callers:
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 *     BiGetDriveLayoutBlock @ 0x1408986BC (BiGetDriveLayoutBlock.c)
 * Callees:
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     BiGetPhysicalDiskNumber @ 0x140898BE8 (BiGetPhysicalDiskNumber.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetPhysicalDriveName(const WCHAR *a1, wchar_t **a2)
{
  int PhysicalDiskNumber; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v5; // rdi
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  PhysicalDiskNumber = BiGetPhysicalDiskNumber(a1, &v7);
  if ( PhysicalDiskNumber >= 0 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
    v5 = Pool2;
    if ( Pool2 )
    {
      if ( swprintf_s(Pool2, 0x1FuLL, L"\\??\\PhysicalDrive%lu", v7) > 0 )
      {
        *a2 = v5;
      }
      else
      {
        PhysicalDiskNumber = -1073741811;
        ExFreePoolWithTag(v5, 0x4B444342u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)PhysicalDiskNumber;
}
