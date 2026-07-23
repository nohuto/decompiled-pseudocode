/*
 * XREFs of PopBcdCopyLoaderObjectSettings @ 0x1407E6654
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x140B6BBB0 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     PopBcdReadElement @ 0x1409A4788 (PopBcdReadElement.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdCopyLoaderObjectSettings(HANDLE BcdObjectHandle, HANDLE a2)
{
  __int64 v3; // rdi
  ULONG v5; // esi
  int Element; // eax
  BCD_FLAGS v7; // r8d
  unsigned int v8; // ebx
  ULONG BcdElement[4]; // [rsp+30h] [rbp-10h]

  BcdElement[0] = 369098768;
  v3 = 0LL;
  BcdElement[1] = 369098825;
  while ( (unsigned int)v3 < 2 )
  {
    v5 = BcdElement[v3];
    Element = PopBcdReadElement(BcdObjectHandle, v5);
    v8 = Element;
    if ( Element < 0 )
    {
      if ( Element != -1073741275 )
        return v8;
      v8 = BiDeleteElement(a2, v5);
      if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073741275 )
        return v8;
    }
    else
    {
      v8 = BcdSetElementDataWithFlags(a2, v5, v7, 0LL, 0);
      ExFreePoolWithTag(0LL, 0);
      if ( (v8 & 0x80000000) != 0 )
        return v8;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  return 0;
}
