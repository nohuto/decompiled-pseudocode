/*
 * XREFs of ?HrFindInterface@CSysmemTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B93B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSysmemTexture::HrFindInterface(CSysmemTexture *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 v7; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data4;
  if ( !v4 )
  {
    v5 = (unsigned __int64)this + 240;
LABEL_5:
    *a3 = (void *)(v5 & -(__int64)(this != 0LL));
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data4;
  if ( !v7 )
  {
    v5 = (unsigned __int64)this + 248;
    goto LABEL_5;
  }
  return CCrossAdapterTexture::HrFindInterface(this, a2, a3);
}
