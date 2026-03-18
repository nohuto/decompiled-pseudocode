/*
 * XREFs of EvictAllReclaimedMemoryAllocation @ 0x140114350
 * Callers:
 *     EvictAllReclaimedAllocation @ 0x140114308 (EvictAllReclaimedAllocation.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall EvictAllReclaimedMemoryAllocation(_QWORD *a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  int v11; // [rsp+20h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a1 + 220;
  v6 = (_QWORD *)a1[220];
  while ( v6 != v4 )
  {
    v7 = v6 - 10;
    v8 = v6;
    v6 = (_QWORD *)*v6;
    LOBYTE(a3) = 1;
    LOBYTE(v11) = 0;
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64, _QWORD, int, _QWORD))(*a1 + 240LL))(a1, v7, a3, 0LL, v11, 0LL);
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0x_EtwWriteTransfer(v9, &EventEvictAllocation, a3, *v7);
    result = (_UNKNOWN **)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = result;
    result[1] = v10;
    *v8 = 0LL;
    v8[1] = 0LL;
  }
  return result;
}
