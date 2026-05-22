/*
 * XREFs of ?QueryInterface@GestureServices@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180146030
 * Callers:
 *     ?QueryInterface@GestureServices@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180146110 (-QueryInterface@GestureServices@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GestureServices@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180146120 (-QueryInterface@GestureServices@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GestureServices::QueryInterface(GestureServices *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_16d9171d_da51_40b7_98a0_93fe2b278616.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_16d9171d_da51_40b7_98a0_93fe2b278616.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_16d9171d_da51_40b7_98a0_93fe2b278616.Data4;
  if ( !v7 )
  {
    (**(void (__fastcall ***)(GestureServices *))this)(this);
    *a3 = (void *)(((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v8 )
  {
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6f7abf2f_b345_9937_b885_bef6a14bbb98.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6f7abf2f_b345_9937_b885_bef6a14bbb98.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6f7abf2f_b345_9937_b885_bef6a14bbb98.Data4;
    if ( v9 )
      goto LABEL_16;
  }
  if ( !this )
  {
LABEL_16:
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  *a3 = (char *)this + 8;
  if ( this == (GestureServices *)-8LL )
    return (unsigned int)-2147467262;
  (**(void (__fastcall ***)(GestureServices *))this)(this);
  return v3;
}
