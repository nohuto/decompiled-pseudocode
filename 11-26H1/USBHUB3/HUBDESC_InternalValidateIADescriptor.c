/*
 * XREFs of HUBDESC_InternalValidateIADescriptor @ 0x140039364
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateIADescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v7; // rbx
  int v9; // r15d
  __int64 v10; // r13
  int v11; // r12d
  unsigned int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rdx
  char v20; // bl
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // r8
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  int v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+98h] [rbp+10h]

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
  v9 = *(_DWORD *)(a2 + 72);
  v10 = a5;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v30 = *(_QWORD *)(a2 + 56);
  v12 = v9 - v11;
  v13 = *a1;
  *a3 = v13;
  v14 = 8LL;
  if ( (unsigned __int8)v13 >= 8u )
  {
LABEL_12:
    if ( *a1 > 8u )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, 8LL) || *(_BYTE *)(v7 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = v17;
        LODWORD(v26) = *a1;
        LODWORD(v25) = v11;
        WPP_RECORDER_SF_DDD(v10, 2u, v17, 0x80u, v18, v25, v26, v27);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 92LL);
    }
    if ( *a3 <= v12 )
    {
      if ( 256 - a1[2] < a1[3] )
      {
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v14) || *(_BYTE *)(v7 + 13) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = a1[3];
          LODWORD(v26) = a1[2];
          LODWORD(v25) = v11;
          WPP_RECORDER_SF_DDD(
            v10,
            2u,
            v21,
            0x82u,
            (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
            v25,
            v26,
            v27);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 97LL);
      }
      v22 = v30;
      if ( a1[3] > *(_BYTE *)(v30 + 4) )
      {
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v14) || *(_BYTE *)(v7 + 13) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = *(unsigned __int8 *)(v22 + 4);
          LODWORD(v26) = a1[3];
          LODWORD(v25) = v11;
          WPP_RECORDER_SF_DDD(
            v10,
            2u,
            v23,
            0x83u,
            (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
            v25,
            v26,
            v27);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 95LL);
      }
      if ( *(unsigned __int16 *)(v7 + 202) + (unsigned int)a1[3] > *(unsigned __int8 *)(v22 + 4) )
      {
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v14) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v28) = *(unsigned __int8 *)(v22 + 4);
          LODWORD(v27) = *(unsigned __int16 *)(v7 + 202);
          LODWORD(v26) = a1[3];
          LODWORD(v25) = v11;
          WPP_RECORDER_SF_DDDD(
            v10,
            2u,
            5u,
            0x84u,
            (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
            v25,
            v26,
            v27,
            v28);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 95LL);
      }
      if ( a1[3] )
        goto LABEL_56;
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v14) || *(_BYTE *)(v7 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x85u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v25);
      }
      v19 = 96LL;
    }
    else
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, a2, v14) || *(_BYTE *)(v7 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x81u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v25);
      }
      v19 = 94LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), v19);
LABEL_56:
    v20 = 1;
LABEL_57:
    if ( !*v5 )
      return v20;
    goto LABEL_58;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 93LL);
  if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v7, v15, v16) || *(_BYTE *)(v7 + 13) )
    *v5 = 2;
  v14 = 8LL;
  if ( v12 >= 8 )
  {
    *a3 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        v10,
        2u,
        5u,
        0x7Eu,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v11,
        *a1,
        8,
        8);
      v14 = 8LL;
    }
    goto LABEL_12;
  }
  v20 = 1;
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v10, 2u, 8LL, 0x7Fu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v11, *a1, 8);
    goto LABEL_57;
  }
LABEL_58:
  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(v10, a2, 5, 134, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v20;
}
