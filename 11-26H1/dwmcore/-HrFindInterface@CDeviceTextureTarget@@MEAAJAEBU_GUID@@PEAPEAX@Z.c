/*
 * XREFs of ?HrFindInterface@CDeviceTextureTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801851D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::HrFindInterface(CDeviceTextureTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rax
  unsigned int v8; // ecx
  char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  void *v18; // rax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_77778ec0_8ef7_4222_bede_336213c916e3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_77778ec0_8ef7_4222_bede_336213c916e3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_77778ec0_8ef7_4222_bede_336213c916e3.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_13206f46_5777_485f_bd8b_9cbefd4d6bcd.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_13206f46_5777_485f_bd8b_9cbefd4d6bcd.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_13206f46_5777_485f_bd8b_9cbefd4d6bcd.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data4;
      if ( !v6 )
        goto LABEL_11;
      v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( !v11 )
      {
        v17 = (char *)this + 72;
        v8 = 0;
        if ( !this )
          v17 = 0LL;
        if ( v17 )
          v18 = v17 + 8;
        else
          v18 = 0LL;
        *a3 = v18;
        return v8;
      }
      v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1 )
        v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data4;
      if ( !v12 )
        goto LABEL_11;
      v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1 )
        v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data4;
      if ( !v13 )
      {
LABEL_11:
        v7 = (char *)this + 72;
        v8 = 0;
        if ( !this )
          v7 = 0LL;
        *a3 = v7;
        return v8;
      }
      v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
        v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
      if ( v14 )
        return (unsigned int)-2147467262;
      v16 = (char *)this + 88;
      if ( !this )
        v16 = 0LL;
      *a3 = v16;
      return 0LL;
    }
    else
    {
      v15 = (char *)this + 256;
      if ( !this )
        v15 = 0LL;
      *a3 = v15;
      return 0LL;
    }
  }
  else
  {
    v10 = (char *)this + 240;
    if ( !this )
      v10 = 0LL;
    *a3 = v10;
    return 0LL;
  }
}
