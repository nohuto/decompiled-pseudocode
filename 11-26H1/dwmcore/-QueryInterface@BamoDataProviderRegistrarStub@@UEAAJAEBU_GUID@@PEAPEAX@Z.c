/*
 * XREFs of ?QueryInterface@BamoDataProviderRegistrarStub@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180241D30
 * Callers:
 *     ?QueryInterface@BamoDataProviderRegistrarStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180241DB0 (-QueryInterface@BamoDataProviderRegistrarStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoDataProviderRegistrarStub::QueryInterface(
        BamoDataProviderRegistrarStub *this,
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
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4d811acb_7670_0974_c90d_cd89b6f660ba.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4d811acb_7670_0974_c90d_cd89b6f660ba.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4d811acb_7670_0974_c90d_cd89b6f660ba.Data4;
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
  if ( this == (BamoDataProviderRegistrarStub *)-8LL )
    return (unsigned int)-2147467262;
  (**(void (__fastcall ***)(BamoDataProviderRegistrarStub *))this)(this);
  return v4;
}
