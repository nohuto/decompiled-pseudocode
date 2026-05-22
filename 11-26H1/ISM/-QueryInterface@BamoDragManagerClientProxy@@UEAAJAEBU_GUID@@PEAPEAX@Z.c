/*
 * XREFs of ?QueryInterface@BamoDragManagerClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800547E0
 * Callers:
 *     ?QueryInterface@BamoDragManagerClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180148960 (-QueryInterface@BamoDragManagerClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::QueryInterface(
        BamoDragManagerClientProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0;
  if ( v3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5c15ce6c_0db0_fad1_7819_fe909f528890.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5c15ce6c_0db0_fad1_7819_fe909f528890.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5c15ce6c_0db0_fad1_7819_fe909f528890.Data4;
    if ( v6 )
      goto LABEL_11;
  }
  if ( !this )
  {
LABEL_11:
    *a3 = 0LL;
  }
  else
  {
    *a3 = (char *)this + 8;
    if ( this != (BamoDragManagerClientProxy *)-8LL )
    {
      (**(void (__fastcall ***)(BamoDragManagerClientProxy *))this)(this);
      return v4;
    }
  }
  return (unsigned int)-2147467262;
}
