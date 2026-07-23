/*
 * XREFs of BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140899A20
 * Callers:
 *     BiExportBcdObjects @ 0x140B459A8 (BiExportBcdObjects.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BiGetElement @ 0x1409A5A7C (BiGetElement.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiAddBootEntryToEfiBootManagerDisplayOrder(void *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  int Element; // eax
  _OWORD *Pool2; // rax
  void *v6; // rbp
  BCD_FLAGS v7; // r8d
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-28h] BYREF

  BcdObjectHandle = 0LL;
  v3 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle);
  if ( v3 >= 0 )
  {
    Element = BiGetElement(BcdObjectHandle, 0x24000001u);
    v3 = Element;
    if ( Element == -1073741275 || Element >= 0 )
    {
      Pool2 = (_OWORD *)ExAllocatePool2(0x102uLL);
      v6 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = *(_OWORD *)(a2 + 16);
        memmove(Pool2 + 1, 0LL, 0LL);
        v3 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x24000001u, v7, v6, 0x10u);
        ExFreePoolWithTag(v6, 0x4B444342u);
      }
      else
      {
        v3 = -1073741801;
      }
    }
  }
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v3;
}
