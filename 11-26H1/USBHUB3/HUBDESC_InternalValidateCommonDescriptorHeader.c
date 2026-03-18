/*
 * XREFs of HUBDESC_InternalValidateCommonDescriptorHeader @ 0x140036A6C
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003D978 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateCommonDescriptorHeader(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v6; // rbx
  int v8; // r13d
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  __int64 v11; // r15
  char v12; // si
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  int v19; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+10h]
  unsigned int *v21; // [rsp+A0h] [rbp+18h]

  v21 = a3;
  v5 = a4;
  v19 = 0;
  v6 = a2;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v19;
  }
  v8 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 64) - (_DWORD)a1;
  v10 = *(_DWORD *)(a2 + 72) - v8;
  *a3 = 0;
  v20 = v9;
  if ( v10 < 2 )
  {
    *v5 = 1;
    LODWORD(v11) = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xDu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v10, 2);
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 90LL);
LABEL_9:
    v12 = 1;
    goto LABEL_10;
  }
  v14 = *a1;
  v11 = a5;
  *a3 = v14;
  if ( v14 > v10 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v11,
        2u,
        5u,
        0xEu,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        *a1,
        v8,
        v10,
        v10);
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 87LL);
    v9 = v20;
    *v21 = v10;
  }
  if ( *a1 > v9 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = v9;
      LODWORD(v17) = v8;
      LODWORD(v16) = *a1;
      WPP_RECORDER_SF_DDD(
        v11,
        2u,
        (__int64)a3,
        0xFu,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v16,
        v17,
        v18);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 88LL);
  }
  if ( *a1 < 2u )
  {
    if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v6, a2, a3) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = 2;
      LODWORD(v17) = v8;
      LODWORD(v16) = *a1;
      WPP_RECORDER_SF_DDD(v11, 2u, v15, 0x10u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v16, v17, v18);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 89LL);
  }
  if ( *a1 )
    goto LABEL_9;
  v12 = 1;
  if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(v6, a2, a3) )
    *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v8;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0x11u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v16);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 91LL);
LABEL_10:
  if ( *v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(v11, a2, 5, 18, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    return 0;
  }
  return v12;
}
