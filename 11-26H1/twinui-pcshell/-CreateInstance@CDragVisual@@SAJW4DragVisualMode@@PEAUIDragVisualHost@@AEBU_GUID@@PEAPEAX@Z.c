/*
 * XREFs of ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180540D48
 * Callers:
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1805298E4 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18021EC08 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z @ 0x180540694 (--0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z.c)
 *     ?_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z @ 0x18054313C (-_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::CreateInstance(unsigned int a1, struct IDragVisualHost *a2, void *a3, _QWORD *a4)
{
  CDragVisual *v7; // rbx
  void *v8; // rax
  int v9; // edi
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  *a4 = 0LL;
  v7 = 0LL;
  v8 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v8;
  if ( v8 )
  {
    v7 = CDragVisual::CDragVisual((CDragVisual *)v8, a2);
    v11 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v11);
  if ( v7 )
  {
    v9 = CDragVisual::_Initialize(v7, a1);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(CDragVisual *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_fddf6c78_7133_462a_9ca9_020619164eb1,
             a4);
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
