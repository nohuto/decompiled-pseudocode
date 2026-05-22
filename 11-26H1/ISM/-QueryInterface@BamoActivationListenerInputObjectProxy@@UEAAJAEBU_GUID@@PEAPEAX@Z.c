/*
 * XREFs of ?QueryInterface@BamoActivationListenerInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800549F0
 * Callers:
 *     ?QueryInterface@BamoActivationListenerInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801240E0 (-QueryInterface@BamoActivationListenerInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoActivationListenerInputObjectProxy::QueryInterface(
        BamoActivationListenerInputObjectProxy *this,
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
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a1cdc933_ea3a_72de_bea8_f0397564bae3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a1cdc933_ea3a_72de_bea8_f0397564bae3.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a1cdc933_ea3a_72de_bea8_f0397564bae3.Data4;
    if ( v5 )
      goto LABEL_8;
  }
  if ( !this )
  {
LABEL_8:
    *a3 = 0LL;
  }
  else
  {
    *a3 = (char *)this + 8;
    if ( this != (BamoActivationListenerInputObjectProxy *)-8LL )
    {
      (**(void (__fastcall ***)(BamoActivationListenerInputObjectProxy *))this)(this);
      return v4;
    }
  }
  return (unsigned int)-2147467262;
}
