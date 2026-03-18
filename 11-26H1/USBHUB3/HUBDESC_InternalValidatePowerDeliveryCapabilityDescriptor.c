/*
 * XREFs of HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x14003A640
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140037460 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003CFF8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // r12
  char v9; // r14
  int v10; // r15d
  unsigned int v11; // r13d
  unsigned int *v12; // rax
  __int64 v13; // r8
  int v14; // r10d
  __int64 v15; // r11
  unsigned int v16; // eax
  unsigned int v17; // r8d
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-48h]
  int v23; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v24; // [rsp+A0h] [rbp+18h]

  v24 = (unsigned int *)a3;
  v23 = 0;
  v5 = a4;
  v6 = a2;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v23;
  }
  v8 = a5;
  v9 = 1;
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 >= 0x12u )
    goto LABEL_9;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 230LL);
  if ( v11 >= 0x12 )
  {
    v12 = v24;
    *v5 = 2;
    *v12 = 18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v8,
        2u,
        5u,
        0x91u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v10,
        *a1,
        18,
        18);
LABEL_9:
    if ( *a1 > 0x12u )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(v6) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v14;
        LODWORD(v20) = *a1;
        LODWORD(v19) = v10;
        WPP_RECORDER_SF_DDD(v8, 2u, v13, 0x93u, v15, v19, v20, v21);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 229LL);
    }
    if ( *v24 <= v11 )
    {
      if ( a1[3] || (v16 = *((_DWORD *)a1 + 1), (v16 & 0x81) != 0) || v16 >= 0x8000 )
      {
        if ( *(_BYTE *)(v6 + 15) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *((_DWORD *)a1 + 1);
          LODWORD(v22) = v17 >> 15;
          LODWORD(v21) = (v17 >> 7) & 1;
          LODWORD(v20) = v17 & 1;
          LODWORD(v19) = a1[3];
          WPP_RECORDER_SF_DDDD(
            v8,
            2u,
            5u,
            0x95u,
            (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
            v19,
            v20,
            v21,
            v22);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 232LL);
      }
      if ( (a1[4] & 0x20) != 0 )
      {
        *(_BYTE *)(*(_QWORD *)(v6 + 80) + 42LL) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_(v8, a2, 5, 150, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
      }
    }
    else
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v6, a2, a3) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = v10;
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x94u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v19);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 231LL);
    }
LABEL_34:
    if ( !*v5 )
      return v9;
    goto LABEL_35;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v8, 2u, a3, 0x92u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v10, *a1, 18);
    goto LABEL_34;
  }
LABEL_35:
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(v8, a2, 5, 151, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v9;
}
