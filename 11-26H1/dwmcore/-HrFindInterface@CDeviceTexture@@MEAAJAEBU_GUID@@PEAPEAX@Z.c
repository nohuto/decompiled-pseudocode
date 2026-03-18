/*
 * XREFs of ?HrFindInterface@CDeviceTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B7EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTexture::HrFindInterface(CDeviceTexture *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data4;
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v6 )
      return CD3DResource::HrFindInterface(this, a2, a3);
    v7 = (unsigned __int64)this + 128;
  }
  else
  {
LABEL_12:
    v7 = (unsigned __int64)this + 120;
  }
  *a3 = (void *)(v7 & -(__int64)(this != 0LL));
  return 0LL;
}
