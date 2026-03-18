/*
 * XREFs of ??1OneApplicationPage@@QEAA@XZ @ 0x14000DC88
 * Callers:
 *     HmgAllocateDcAttr @ 0x14000D8F8 (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x14000DAE0 (HmgAllocateObjectAttr.c)
 * Callees:
 *     <none>
 */

void __fastcall OneApplicationPage::~OneApplicationPage(PVOID *BaseAddress)
{
  bool v1; // zf
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF

  v1 = *BaseAddress == 0LL;
  RegionSize = 4096LL;
  if ( !v1 )
  {
    MmUnsecureVirtualMemory(BaseAddress[1]);
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
  }
}
