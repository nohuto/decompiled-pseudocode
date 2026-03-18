/*
 * XREFs of ?HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018D2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::HrFindInterface(CD2DBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  void *v12; // rcx

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data4;
    if ( !v5 )
      goto LABEL_5;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v7 )
    {
      v11 = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
      if ( v11 )
        v12 = (void *)(v11 + 8);
      else
        v12 = 0LL;
      *a3 = v12;
      return 0LL;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data4;
    if ( !v8 )
      goto LABEL_5;
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data4;
    if ( v9 )
    {
      v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
        v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
      if ( v10 )
        return 2147500034LL;
      v6 = (unsigned __int64)this + 88;
    }
    else
    {
LABEL_5:
      v6 = (unsigned __int64)this + 72;
    }
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0LL;
  }
  return result;
}
