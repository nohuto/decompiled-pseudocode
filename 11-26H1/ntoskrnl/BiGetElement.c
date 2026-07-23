/*
 * XREFs of BiGetElement @ 0x1409A5A7C
 * Callers:
 *     BiGetLocateTarget @ 0x1408992A8 (BiGetLocateTarget.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140899A20 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x140899C64 (BiCreateBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x14089A308 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x1409A396C (BiUpdateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140B3A0B8 (BiExportEfiBootManager.c)
 * Callees:
 *     BcdGetElementData @ 0x1409A5B40 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetElement(HANDLE BcdObjectHandle, ULONG BcdElement, _QWORD *a3, ULONG *a4)
{
  NTSTATUS ElementData; // ebx
  void *Pool2; // rax
  void *v10; // rdi
  ULONG BufferSize; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  BufferSize = 0;
  ElementData = BcdGetElementData(BcdObjectHandle, BcdElement, 0LL, &BufferSize);
  if ( ElementData == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x102uLL);
    v10 = Pool2;
    if ( Pool2 )
    {
      ElementData = BcdGetElementData(BcdObjectHandle, BcdElement, Pool2, &BufferSize);
      if ( ElementData >= 0 )
      {
        *a4 = BufferSize;
        *a3 = v10;
      }
      else
      {
        ExFreePoolWithTag(v10, 0x4B444342u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)ElementData;
}
