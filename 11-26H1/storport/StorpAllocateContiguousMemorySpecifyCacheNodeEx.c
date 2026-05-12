/*
 * XREFs of StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1400378D0
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 StorpAllocateContiguousMemorySpecifyCacheNodeEx(__int64 a1, unsigned __int64 a2, ...)
{
  int v2; // r9d
  unsigned int v3; // ebx
  void *Pool2; // rdi
  __int64 *v5; // rsi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF
  va_list va1; // [rsp+78h] [rbp+20h]
  __int64 v14; // [rsp+80h] [rbp+28h]
  __int64 v15; // [rsp+88h] [rbp+30h]
  __int64 v16; // [rsp+90h] [rbp+38h]
  __int64 *v17; // [rsp+98h] [rbp+40h]
  PHYSICAL_ADDRESS *v18; // [rsp+A0h] [rbp+48h]
  va_list va2; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, __int64 *);
  v18 = va_arg(va2, PHYSICAL_ADDRESS *);
  v2 = 4;
  if ( (_DWORD)v15 != 1 )
  {
    v2 = 516;
    if ( (_DWORD)v15 == 2 )
      v2 = 1028;
  }
  v3 = 0;
  if ( *(_DWORD *)a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a1 + 904) && *(_DWORD *)(a1 + 924) == 3 )
    {
LABEL_16:
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, _DWORD, PHYSICAL_ADDRESS *))(*(_QWORD *)(*(_QWORD *)(a1 + 896) + 8LL) + 272LL))(
             *(_QWORD *)(a1 + 896),
             (__int64 *)va,
             (__int64 *)va1,
             (unsigned int)a2,
             0,
             0LL,
             v16,
             v18);
      v5 = v17;
      *v17 = v9;
      goto LABEL_9;
    }
  }
  else if ( *(_DWORD *)a1 == 1314275652 && *(_BYTE *)(a1 + 1168) && *(_DWORD *)(a1 + 1188) == 3 )
  {
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x2000) != 0 && a2 <= 0x1000 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    Pool2 = (void *)ExAllocatePool2(72LL, 4096LL, 1161912658LL);
    if ( !Pool2 && v8 )
      RaidLogAllocationFailure(v8, 72, 4096, 1161912658, 0x80000000);
  }
  else
  {
    Pool2 = (void *)MmAllocateContiguousNodeMemory(a2, v10, v12, v14, v2, v16);
  }
  v5 = v17;
  *v17 = (__int64)Pool2;
  if ( Pool2 )
  {
    PhysicalAddress = MmGetPhysicalAddress(Pool2);
    *v18 = PhysicalAddress;
  }
LABEL_9:
  if ( !*v5 )
    return (unsigned int)-1056964605;
  return v3;
}
