/*
 * XREFs of PopBcdReadElement @ 0x1409A4788
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x1407E6654 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E6744 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E6954 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409A4BE4 (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     BcdGetElementData @ 0x1409A5B40 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdReadElement(HANDLE BcdObjectHandle, ULONG BcdElement, _QWORD *a3, _DWORD *a4)
{
  NTSTATUS ElementData; // ebx
  void *Pool2; // rax
  void *v10; // rdi
  ULONG BufferSize[6]; // [rsp+20h] [rbp-18h] BYREF

  BufferSize[0] = 0;
  if ( BcdGetElementData(BcdObjectHandle, BcdElement, 0LL, BufferSize) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v10 = Pool2;
    if ( Pool2 )
    {
      ElementData = BcdGetElementData(BcdObjectHandle, BcdElement, Pool2, BufferSize);
      if ( ElementData < 0 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        ElementData = 0;
        *a4 = BufferSize[0];
        *a3 = v10;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)ElementData;
}
