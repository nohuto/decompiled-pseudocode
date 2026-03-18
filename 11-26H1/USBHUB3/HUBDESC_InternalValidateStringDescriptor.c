/*
 * XREFs of HUBDESC_InternalValidateStringDescriptor @ 0x14003A950
 * Callers:
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x140025080 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x140025210 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x14002D538 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x14002D710 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x14002D8E8 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Ddd @ 0x140040388 (WPP_RECORDER_SF_Ddd.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateStringDescriptor(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int *v6; // rax
  int v8; // ebp
  int v9; // edx
  unsigned int v10; // ecx
  void (__fastcall **v11)(_QWORD, __int64); // r14
  _QWORD *v12; // r15
  void (__fastcall **v13)(_QWORD, __int64); // r12
  _QWORD *v14; // r13
  unsigned __int8 *v15; // rax
  char v16; // r15
  unsigned int v17; // ecx
  __int64 v19; // [rsp+28h] [rbp-70h]
  unsigned int v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  int v23; // [rsp+30h] [rbp-68h]
  _QWORD *v24; // [rsp+40h] [rbp-58h]
  int v26; // [rsp+A8h] [rbp+10h]
  void (__fastcall **v28)(_QWORD, __int64); // [rsp+B8h] [rbp+20h]

  v6 = a3;
  v26 = 0;
  if ( a2 < 2 )
  {
    *a3 = 0;
    v8 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFCu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, a2);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 131LL);
LABEL_27:
    v16 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(v8, v9, 5, 258, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    return v16;
  }
  v10 = *a1;
  v8 = a5;
  *a3 = v10;
  if ( v10 <= a2 )
  {
    v11 = (void (__fastcall **)(_QWORD, __int64))(a6 + 24);
    v12 = (_QWORD *)(a6 + 40);
  }
  else
  {
    v26 = 2;
    *a3 = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(a5, a2, (_DWORD)a3, 253);
    v11 = (void (__fastcall **)(_QWORD, __int64))(a6 + 24);
    v12 = (_QWORD *)(a6 + 40);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 129LL);
    v6 = a3;
  }
  v13 = v11;
  v14 = v12;
  if ( *a1 <= 2u )
  {
    v26 = 2;
    *v6 = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = a2;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFEu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v21);
      v13 = (void (__fastcall **)(_QWORD, __int64))(a6 + 24);
      v14 = (_QWORD *)(a6 + 40);
    }
    (*v11)(*v12, 130LL);
  }
  v15 = a1;
  if ( a1[1] != 3 )
  {
    v26 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 3;
      LODWORD(v19) = a1[1];
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xFFu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v19, v23);
      v11 = v13;
      v12 = v14;
    }
    (*v11)(*v12, 133LL);
    v15 = a1;
    v13 = v11;
    v14 = v12;
  }
  v9 = *v15;
  v16 = 1;
  v28 = v13;
  v24 = v14;
  if ( (v9 & 1) != 0 )
  {
    v26 = 2;
    v17 = *a3 & 0xFFFFFFFE;
    *a3 = v17;
    v28 = v13;
    v24 = v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = v17;
      LODWORD(v19) = v9;
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x100u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v19, v22);
      v28 = (void (__fastcall **)(_QWORD, __int64))(a6 + 24);
      v24 = (_QWORD *)(a6 + 40);
    }
    (*v13)(*v14, 128LL);
    v15 = a1;
  }
  if ( *v15 != a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = a2;
      LODWORD(v19) = *v15;
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x101u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v19, v22);
      v13 = v28;
      v14 = v24;
    }
    (*v13)(*v14, 134LL);
  }
  if ( v26 )
    goto LABEL_27;
  return v16;
}
