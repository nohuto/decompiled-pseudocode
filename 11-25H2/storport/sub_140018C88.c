/*
 * XREFs of sub_140018C88 @ 0x140018C88
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400179D0 @ 0x1400179D0 (sub_1400179D0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140018C88(__int64 a1, unsigned __int64 a2, ...)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 *v8; // rbx
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF
  va_list va1; // [rsp+78h] [rbp+20h]
  __int64 v16; // [rsp+80h] [rbp+28h]
  __int64 v17; // [rsp+88h] [rbp+30h]
  __int64 v18; // [rsp+90h] [rbp+38h]
  __int64 *v19; // [rsp+98h] [rbp+40h]
  PHYSICAL_ADDRESS *v20; // [rsp+A0h] [rbp+48h]
  va_list va2; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, __int64 *);
  v20 = va_arg(va2, PHYSICAL_ADDRESS *);
  v2 = *(_QWORD *)(a1 + 1144);
  if ( sub_1400179D0(a1) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, _DWORD, PHYSICAL_ADDRESS *))(*(_QWORD *)(v2 + 8) + 272LL))(
           v2,
           (__int64 *)va,
           (__int64 *)va1,
           (unsigned int)a2,
           0,
           0LL,
           v18,
           v20);
    v8 = v19;
    *v19 = v7;
  }
  else
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 400) + 184LL) & 0x2000) != 0 && a2 <= 0x1000 )
      ContiguousNodeMemory = (void *)sub_1400143E0(72LL, 4096LL, 1161912658LL, *(_QWORD *)(v4 + 8));
    else
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(a2, v6, v5, v16);
    v8 = v19;
    *v19 = (__int64)ContiguousNodeMemory;
    if ( ContiguousNodeMemory )
    {
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      *v20 = PhysicalAddress;
    }
  }
  return *v8 == 0 ? 0xC1000003 : 0;
}
