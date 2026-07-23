/*
 * XREFs of IopProcessBufferedIoCompletion @ 0x1404108F0
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x14040F450 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x140410B08 (IopIoRingCompleteIrp.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 * Callees:
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopProcessBufferedIoCompletion(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // eax
  int v4; // eax
  void *v5; // rdx
  void *v6; // rcx
  size_t v7; // r8
  __int64 result; // rax

  v2 = (_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x10) != 0 )
  {
    if ( (v3 & 0x40) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 48);
      if ( v4 != -2147483626 && (v4 & 0xC0000000) != 0xC0000000 )
      {
        v5 = *(void **)(a1 + 24);
        v6 = *(void **)(a1 + 112);
        if ( v6 != v5 )
        {
          v7 = *(_QWORD *)(a1 + 56);
          if ( (unsigned __int64)v6 >= 0xFFFF800000000000uLL )
            RtlCopyVolatileMemory(v6, v5, v7);
          else
            RtlCopyToUser(v6, v5, v7);
        }
      }
    }
    if ( (*v2 & 0x20) != 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  result = *(_DWORD *)(a1 + 16) & 0xFFFFFFCF;
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
