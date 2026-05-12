/*
 * XREFs of NvmeAllocateContiguousMemorySpecifyCacheNodeEx @ 0x140045134
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     IsDmarEnabled @ 0x14001CD00 (IsDmarEnabled.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 NvmeAllocateContiguousMemorySpecifyCacheNodeEx(__int64 a1, unsigned __int64 a2, ...)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 *v9; // rbx
  void *Pool; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF
  va_list va1; // [rsp+78h] [rbp+20h]
  __int64 v17; // [rsp+80h] [rbp+28h]
  __int64 v18; // [rsp+88h] [rbp+30h]
  __int64 v19; // [rsp+90h] [rbp+38h]
  __int64 *v20; // [rsp+98h] [rbp+40h]
  PHYSICAL_ADDRESS *v21; // [rsp+A0h] [rbp+48h]
  va_list va2; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, _QWORD);
  v20 = va_arg(va2, __int64 *);
  v21 = va_arg(va2, PHYSICAL_ADDRESS *);
  v2 = *(_QWORD *)(a1 + 1160);
  if ( IsDmarEnabled(a1) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, _DWORD, PHYSICAL_ADDRESS *))(*(_QWORD *)(v2 + 8) + 272LL))(
           v2,
           (__int64 *)va,
           (__int64 *)va1,
           (unsigned int)a2,
           0,
           0LL,
           v19,
           v21);
    v9 = v20;
    *v20 = v8;
  }
  else
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 400) + 184LL) & 0x2000) != 0 && a2 <= 0x1000 )
      Pool = (void *)RaidAllocatePool(72LL, 4096LL, 1161912658LL, *(_QWORD *)(v4 + 8));
    else
      Pool = (void *)MmAllocateContiguousNodeMemory(a2, v7, v6, v17, v5, v19);
    v9 = v20;
    *v20 = (__int64)Pool;
    if ( Pool )
    {
      PhysicalAddress = MmGetPhysicalAddress(Pool);
      *v21 = PhysicalAddress;
    }
  }
  return *v9 == 0 ? 0xC1000003 : 0;
}
