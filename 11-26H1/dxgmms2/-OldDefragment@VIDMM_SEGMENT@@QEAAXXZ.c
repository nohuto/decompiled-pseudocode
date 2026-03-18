/*
 * XREFs of ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400B6E6C
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140099F08 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_SEGMENT::OldDefragment(VIDMM_SEGMENT *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-28h]

  v1 = (_QWORD *)((char *)this + 264);
  v2 = *((unsigned __int16 *)this + 34);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40320LL) + 8 * v2);
  while ( 1 )
  {
    v4 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 == v1 )
      break;
    v5 = v4 - 30;
    LOBYTE(v2) = 1;
    LOBYTE(v7) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v3 + 240LL))(
      v3,
      *(v4 - 30),
      v2,
      0LL,
      v7,
      0LL);
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0x_EtwWriteTransfer(v6, &EventEvictAllocation, v2, v5);
  }
}
