/*
 * XREFs of ??0OneApplicationPage@@QEAA@XZ @ 0x14000DCE0
 * Callers:
 *     HmgAllocateDcAttr @ 0x14000D8F8 (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x14000DAE0 (HmgAllocateObjectAttr.c)
 * Callees:
 *     <none>
 */

PVOID *__fastcall OneApplicationPage::OneApplicationPage(PVOID *BaseAddress)
{
  HANDLE v2; // rax
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF

  *BaseAddress = 0LL;
  BaseAddress[1] = 0LL;
  Size = 4096LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0LL, &Size, 0x3000u, 4u) >= 0 )
  {
    v2 = MmSecureVirtualMemory(*BaseAddress, Size, 4u);
    BaseAddress[1] = v2;
    if ( !v2 )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &Size, 0x8000u);
      *BaseAddress = 0LL;
    }
  }
  return BaseAddress;
}
