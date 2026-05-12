/*
 * XREFs of sub_140087BF4 @ 0x140087BF4
 * Callers:
 *     sub_1401147F0 @ 0x1401147F0 (sub_1401147F0.c)
 *     sub_140114944 @ 0x140114944 (sub_140114944.c)
 *     sub_1401222E8 @ 0x1401222E8 (sub_1401222E8.c)
 * Callees:
 *     sub_1400179D0 @ 0x1400179D0 (sub_1400179D0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void *__fastcall sub_140087BF4(unsigned int a1, _QWORD *a2, int a3, PHYSICAL_ADDRESS *a4)
{
  __int64 v4; // r13
  __int64 v6; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 ContiguousNodeMemory; // rax
  void *v14; // rdi
  int v15; // edx
  __int64 v16; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _QWORD v19[2]; // [rsp+50h] [rbp-10h] BYREF
  PHYSICAL_ADDRESS v21; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+58h] BYREF

  v4 = a2[143];
  v6 = a2[173];
  v9 = a1;
  v10 = a2[172];
  v22 = a2[174];
  v21.QuadPart = 0LL;
  v19[0] = v6;
  if ( sub_1400179D0((__int64)a2) )
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)(v4 + 8) + 272LL))(
                             v4,
                             v19,
                             &v22);
  else
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(v9, v11, v12, v10);
  v14 = (void *)ContiguousNodeMemory;
  if ( ContiguousNodeMemory
    || a3 != 0x80000000
    && (!sub_1400179D0((__int64)a2)
      ? (v16 = MmAllocateContiguousNodeMemory(v9, v19[0], v22, v10))
      : (v16 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, _QWORD, _DWORD, _QWORD, int, PHYSICAL_ADDRESS *))(*(_QWORD *)(v4 + 8) + 272LL))(
                 v4,
                 v19,
                 &v22,
                 a1,
                 0,
                 0LL,
                 v15,
                 &v21)),
        (v14 = (void *)v16) != 0LL) )
  {
    PhysicalAddress = v21;
    if ( !v21.QuadPart )
      PhysicalAddress = MmGetPhysicalAddress(v14);
  }
  else
  {
    PhysicalAddress = v21;
  }
  if ( a4 )
    *a4 = PhysicalAddress;
  return v14;
}
