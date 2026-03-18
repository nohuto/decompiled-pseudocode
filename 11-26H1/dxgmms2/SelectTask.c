/*
 * XREFs of SelectTask @ 0x1400B8F2C
 * Callers:
 *     WorkerThreadRun @ 0x1400B91B4 (WorkerThreadRun.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     McTemplateK0pxuui_EtwWriteTransfer @ 0x140050878 (McTemplateK0pxuui_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall SelectTask(__int64 a1, _QWORD *a2, volatile signed __int32 **a3)
{
  _QWORD *v4; // r14
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  _BYTE v13[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = (_QWORD *)(a1 + 5472);
  v7 = 0x7FFFFFFFFFFFFFFFLL;
  a2[1] = 0x7FFFFFFFFFFFFFFFLL;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v13,
    (struct DXGPUSHLOCKFAST *)(a1 + 5344),
    1);
  while ( 1 )
  {
    v8 = (volatile signed __int32 *)(*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *))(*v4 + 16LL))(v4, a1, a2);
    v9 = v8;
    if ( v8 )
      break;
    v4 = (_QWORD *)v4[1];
  }
  a2[2] = v4;
  *a2 = *(_QWORD *)(a1 + 5336);
  *(_QWORD *)(a1 + 5920) = v8;
  *a3 = v8;
  _InterlockedIncrement(v8 + 18);
  (*(void (__fastcall **)(volatile signed __int32 *, __int64, _QWORD *))(*(_QWORD *)v8 + 16LL))(v8, a1, a2);
  if ( (byte_14008A203 & 4) != 0 )
  {
    v12 = *((_QWORD *)v9 + 8);
    if ( v12 != 0x7FFFFFFFFFFFFFFFLL )
      v7 = v12 - *(_QWORD *)(a1 + 5336);
    McTemplateK0pxuui_EtwWriteTransfer(
      *((_QWORD *)v9 + 4),
      v10,
      v11,
      *(_QWORD *)(*(_QWORD *)a1 + 24LL),
      *((_QWORD *)v9 + 6),
      *(_BYTE *)(*((_QWORD *)v9 + 4) + 21LL),
      *((_BYTE *)v9 + 76),
      v7);
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v13);
}
