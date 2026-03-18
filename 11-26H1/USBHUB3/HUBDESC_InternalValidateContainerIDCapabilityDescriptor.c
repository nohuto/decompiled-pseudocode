/*
 * XREFs of HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x140037110
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

char __fastcall HUBDESC_InternalValidateContainerIDCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // r13
  void (__fastcall **v9)(_QWORD, __int64); // r12
  int v10; // r15d
  _QWORD *v11; // r14
  unsigned int *v12; // rax
  __int64 v13; // r8
  int v14; // r10d
  __int64 v15; // r11
  char v16; // bl
  void (__fastcall **v17)(_QWORD, __int64); // r15
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  unsigned int v22; // [rsp+90h] [rbp+8h]
  _QWORD *v23; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+98h] [rbp+10h] BYREF
  unsigned int *v25; // [rsp+A0h] [rbp+18h]

  v25 = (unsigned int *)a3;
  v24 = 0;
  v5 = a4;
  v6 = a2;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v24;
  }
  v8 = a5;
  v9 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = (_QWORD *)(a2 + 40);
  v22 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 >= 0x14u )
    goto LABEL_9;
  (*v9)(*v11, 64LL);
  if ( v22 >= 0x14 )
  {
    v12 = v25;
    *v5 = 2;
    *v12 = 20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        v8,
        2u,
        5u,
        0x8Au,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v10,
        *a1,
        20,
        20);
      v11 = (_QWORD *)(v6 + 40);
    }
LABEL_9:
    if ( *a1 > 0x14u )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(v6) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v14;
        LODWORD(v20) = *a1;
        LODWORD(v19) = v10;
        WPP_RECORDER_SF_DDD(v8, 2u, v13, 0x8Cu, v15, v19, v20, v21);
      }
      v9 = (void (__fastcall **)(_QWORD, __int64))(v6 + 24);
      v11 = (_QWORD *)(v6 + 40);
      (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 63LL);
    }
    if ( *v25 <= v22 )
    {
      if ( a1[3] )
      {
        if ( *(_BYTE *)(v6 + 15) )
        {
          *v5 = 2;
          v23 = (_QWORD *)(v6 + 40);
          v17 = (void (__fastcall **)(_QWORD, __int64))(v6 + 24);
        }
        else
        {
          v17 = v9;
          v23 = v11;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v19) = a1[3];
          WPP_RECORDER_SF_d(v8, 2u, 5u, 0x8Eu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v19);
          v11 = v23;
          v9 = v17;
        }
        (*v9)(*v11, 66LL);
      }
      if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(a1 + 12) == *(_QWORD *)GUID_NULL.Data4 )
      {
        *(_BYTE *)(*(_QWORD *)(v6 + 80) + 41LL) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(v8, a2, 5, 143, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v6 + 32))(*v11, 153LL);
      }
    }
    else
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v6, a2, a3) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = v10;
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x8Du, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v19);
      }
      (*v9)(*v11, 65LL);
    }
    v16 = 1;
LABEL_36:
    if ( !*v5 )
      return v16;
    goto LABEL_37;
  }
  v16 = 1;
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v8, 2u, a3, 0x8Bu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v10, *a1, 20);
    goto LABEL_36;
  }
LABEL_37:
  v16 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(v8, a2, 5, 144, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v16;
}
