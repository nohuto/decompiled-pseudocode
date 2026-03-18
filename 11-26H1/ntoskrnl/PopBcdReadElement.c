/*
 * XREFs of PopBcdReadElement @ 0x1409D37A8
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x1407E15C4 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E16B4 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E18C4 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409D3C04 (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     BcdGetElementData @ 0x1409D4B60 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdReadElement(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  int ElementData; // ebx
  __int64 Pool2; // rax
  void *v10; // rdi
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0;
  v6 = a2;
  if ( (unsigned int)BcdGetElementData(a1, a2, 0LL, v12) == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (void *)Pool2;
    if ( Pool2 )
    {
      ElementData = BcdGetElementData(a1, v6, Pool2, v12);
      if ( ElementData < 0 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        ElementData = 0;
        *a4 = v12[0];
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
