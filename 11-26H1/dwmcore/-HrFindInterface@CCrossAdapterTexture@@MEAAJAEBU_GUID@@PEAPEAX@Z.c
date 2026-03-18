/*
 * XREFs of ?HrFindInterface@CCrossAdapterTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B7E40
 * Callers:
 *     ?HrFindInterface@CSysmemTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B93B0 (-HrFindInterface@CSysmemTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossAdapterTexture::HrFindInterface(CCrossAdapterTexture *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4c1b8ee2_ec14_4e60_a35c_b2ea6a182b0b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4c1b8ee2_ec14_4e60_a35c_b2ea6a182b0b.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4c1b8ee2_ec14_4e60_a35c_b2ea6a182b0b.Data4;
  if ( !v4 )
    goto LABEL_15;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data4;
  if ( !v5 )
    goto LABEL_15;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data4;
  if ( v6 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v7 )
      return CD3DResource::HrFindInterface(this, a2, a3);
    v8 = (unsigned __int64)this + 128;
  }
  else
  {
LABEL_15:
    v8 = (unsigned __int64)this + 120;
  }
  *a3 = (void *)(v8 & -(__int64)(this != 0LL));
  return 0LL;
}
