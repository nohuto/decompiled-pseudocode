/*
 * XREFs of HUBDESC_InternalValidateConfigDescriptor @ 0x140036CFC
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateConfigDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rsi
  __int64 v7; // rbx
  __int64 v9; // r12
  void *v10; // r8
  char v11; // r15
  __int64 v12; // r8
  _DWORD *v13; // rdi
  unsigned int v14; // ecx
  int v15; // edx
  unsigned int v16; // r13d
  unsigned __int8 *v17; // r8
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  unsigned __int8 *v20; // r8
  _DWORD *v21; // r12
  _QWORD *v22; // r13
  unsigned __int8 *v23; // rbp
  unsigned __int16 *v24; // r8
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  int v29; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+88h] [rbp+10h]
  _QWORD *v31; // [rsp+90h] [rbp+18h]

  v29 = 0;
  v5 = a4;
  v7 = a2;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v29;
  }
  v9 = a5;
  *a3 = 9;
  v10 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  v11 = 1;
  if ( *a1 < 9u )
  {
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDD(
        v9,
        2u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        0x13u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        *a1,
        9,
        9);
    (*(void (__fastcall **)(_QWORD, __int64, void *))(v7 + 24))(*(_QWORD *)(v7 + 40), 55LL, v10);
    v10 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  }
  if ( *a1 > 9u )
  {
    if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(
                            v7,
                            a2,
                            &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = 9;
      LODWORD(v27) = 9;
      LODWORD(v26) = *a1;
      WPP_RECORDER_SF_DDD(v9, 2u, v12, 0x14u, v12, v26, v27, v28);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 54LL);
  }
  if ( a1[1] != 2 )
  {
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = 2;
      LODWORD(v27) = 2;
      LODWORD(v26) = a1[1];
      WPP_RECORDER_SF_DDD(
        v9,
        2u,
        (__int64)v10,
        0x15u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v26,
        v27,
        v28);
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *))(v7 + 24))(*(_QWORD *)(v7 + 40), 58LL, v10);
  }
  v13 = (_DWORD *)(v7 + 72);
  v14 = *(_DWORD *)(v7 + 72);
  if ( *a3 > v14 )
  {
    if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v10) || *(_BYTE *)(v7 + 13) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(v9, v15, 5, 22, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 56LL);
    goto LABEL_52;
  }
  v16 = 9 * (a1[4] + 1);
  v30 = v16;
  if ( v16 > v14 )
  {
    if ( !(unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v10) )
    {
      if ( !*(_BYTE *)(v7 + 13) )
      {
LABEL_31:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = v16;
          LODWORD(v26) = *v13;
          WPP_RECORDER_SF_dD(v9, 2u, 5u, 0x17u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v26, v27);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 57LL);
        goto LABEL_34;
      }
      v13 = (_DWORD *)(v7 + 72);
    }
    *v5 = 2;
    goto LABEL_31;
  }
LABEL_34:
  v17 = a1 + 2;
  v18 = (_QWORD *)(v7 + 56);
  v19 = (_QWORD *)(v7 + 64);
  *(_QWORD *)(v7 + 64) = *(_QWORD *)(v7 + 56) + *((unsigned __int16 *)a1 + 1);
  if ( (unsigned int)*((unsigned __int16 *)a1 + 1) > *v13 )
  {
    if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v17) )
    {
      v21 = v13;
      v31 = (_QWORD *)(v7 + 64);
      v22 = (_QWORD *)(v7 + 56);
      v23 = v20;
    }
    else
    {
      if ( !*(_BYTE *)(v7 + 13) )
      {
        v21 = v13;
        v31 = (_QWORD *)(v7 + 64);
        v22 = (_QWORD *)(v7 + 56);
        v23 = v20;
        goto LABEL_41;
      }
      v23 = a1 + 2;
      v31 = (_QWORD *)(v7 + 64);
      v21 = (_DWORD *)(v7 + 72);
      v22 = (_QWORD *)(v7 + 56);
    }
    *v5 = 2;
LABEL_41:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = *v13;
      LODWORD(v27) = *v13;
      LODWORD(v26) = *(unsigned __int16 *)v20;
      WPP_RECORDER_SF_DDD(
        a5,
        2u,
        (__int64)v20,
        0x18u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v26,
        v27,
        v28);
      v19 = v31;
      v13 = v21;
      v18 = v22;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 61LL);
    v17 = v23;
    v9 = a5;
    v16 = v30;
    *v19 = *v18 + (unsigned int)*v13;
  }
  if ( *(unsigned __int16 *)v17 < v16 )
  {
    if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v17) || *(_BYTE *)(v7 + 13) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = *(_DWORD *)(v7 + 72);
      LODWORD(v27) = v16;
      LODWORD(v26) = *v24;
      WPP_RECORDER_SF_DDD(
        v9,
        2u,
        (__int64)v24,
        0x19u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v26,
        v27,
        v28);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 62LL);
    *(_QWORD *)(v7 + 64) = *(_QWORD *)(v7 + 56) + *(unsigned int *)(v7 + 72);
  }
  v11 = 1;
LABEL_52:
  if ( *v5 )
  {
    v11 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(v9, a2, 5, 26, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
  }
  return v11;
}
