/*
 * XREFs of HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1400367B8
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140037460 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall HUBDESC_InternalValidateBillboardCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  void *v9; // r8
  __int64 v10; // r14
  int v11; // r15d
  unsigned int v12; // r12d
  unsigned __int8 result; // al
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  v21 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v21;
  }
  v9 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  v10 = a5;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 72) - v11;
  if ( v12 >= 0x30 )
  {
    v16 = a1[4];
    v15 = *a1;
    if ( v15 != 4 * v16 + 44 )
    {
      v17 = 4 * v16 + 44;
      *a3 = v17;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(
          v10,
          2u,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          0xA8u,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          v11,
          v15,
          v17);
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 236LL, v9);
      if ( *a1 == 40 || *a1 == 44 )
      {
        *a1 = *(_BYTE *)a3;
      }
      else if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
      {
        *v5 = 2;
      }
    }
    if ( *a3 <= v12 )
    {
      result = a1[4];
      if ( result )
      {
        if ( result <= 0x80u )
        {
          if ( a1[5] <= result )
            goto LABEL_36;
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = a1[5];
            WPP_RECORDER_SF_d(v10, 2u, 5u, 0xACu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v20);
          }
          v19 = 241LL;
        }
        else
        {
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = a1[4];
            WPP_RECORDER_SF_d(v10, 2u, 5u, 0xABu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v20);
          }
          v19 = 239LL;
        }
      }
      else
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_(v10, v15, 5, 170, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        v19 = 238LL;
      }
    }
    else
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(
                              a2,
                              v15,
                              &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v20) = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA9u, v18, v20);
      }
      v19 = 237LL;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v19);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
               *(_QWORD *)(a2 + 40),
               237LL,
               &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    result = WPP_RECORDER_SF_DDD(
               v10,
               2u,
               v14,
               0xA7u,
               (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
               v12,
               v11,
               48);
  }
LABEL_36:
  if ( *v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      return WPP_RECORDER_SF_(v10, v15, 5, 176, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
  }
  return result;
}
