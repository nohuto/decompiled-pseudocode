/*
 * XREFs of HeadlessTerminalAddResources @ 0x14083D758
 * Callers:
 *     IoReportHalResourceUsage @ 0x140CCA220 (IoReportHalResourceUsage.c)
 * Callees:
 *     HalTranslateBusAddress @ 0x140481B70 (HalTranslateBusAddress.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall HeadlessTerminalAddResources(void *Src, size_t Size, char a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v8; // rbx
  void *Pool2; // rax
  PHYSICAL_ADDRESS v10; // rax
  _DWORD *v11; // rcx
  __int64 result; // rax
  ULONG AddressSpace; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER TranslatedAddress; // [rsp+38h] [rbp-20h] BYREF

  TranslatedAddress.QuadPart = 0LL;
  AddressSpace = 0;
  v8 = (unsigned int)Size;
  if ( !HeadlessGlobals || (HeadlessGlobals[6] & 0x1000) != 0 )
  {
    *a4 = 0LL;
    result = 0LL;
    goto LABEL_11;
  }
  *a5 = Size + 36;
  if ( (int)Size + 36 < (unsigned int)Size || (Pool2 = (void *)ExAllocatePool2(0x100uLL), (*a4 = Pool2) == 0LL) )
  {
    result = 3221225626LL;
LABEL_11:
    *a5 = 0;
    return result;
  }
  memmove(Pool2, Src, (unsigned int)v8);
  v10.QuadPart = HeadlessGlobals[8];
  if ( a3 )
  {
    AddressSpace = 1;
    HalTranslateBusAddress(Internal, 0, v10, &AddressSpace, &TranslatedAddress);
  }
  else
  {
    TranslatedAddress.QuadPart = HeadlessGlobals[8];
  }
  v11 = (_DWORD *)*a4;
  ++*v11;
  *(_QWORD *)((char *)v11 + v8) = 1LL;
  *(_DWORD *)((char *)v11 + v8 + 12) = 1;
  *(_DWORD *)((char *)v11 + v8 + 8) = 0;
  *(_DWORD *)((char *)v11 + v8 + 16) = 66049;
  *(LARGE_INTEGER *)((char *)v11 + v8 + 20) = TranslatedAddress;
  result = 0LL;
  *(_DWORD *)((char *)v11 + v8 + 28) = 8;
  return result;
}
