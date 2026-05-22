/*
 * XREFs of ?QueryInterface@BamoDelegatedInkCanvasInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180124460
 * Callers:
 *     ?QueryInterface@BamoDelegatedInkCanvasInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801244E0 (-QueryInterface@BamoDelegatedInkCanvasInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoDelegatedInkCanvasInputObjectProxy::QueryInterface(
        BamoDelegatedInkCanvasInputObjectProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f3c15157_1e3a_b150_6025_65bc9f45acb5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f3c15157_1e3a_b150_6025_65bc9f45acb5.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f3c15157_1e3a_b150_6025_65bc9f45acb5.Data4;
    if ( v5 )
      goto LABEL_10;
  }
  if ( !this )
  {
LABEL_10:
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  *a3 = (char *)this + 8;
  if ( this == (BamoDelegatedInkCanvasInputObjectProxy *)-8LL )
    return (unsigned int)-2147467262;
  (**(void (__fastcall ***)(BamoDelegatedInkCanvasInputObjectProxy *))this)(this);
  return v4;
}
