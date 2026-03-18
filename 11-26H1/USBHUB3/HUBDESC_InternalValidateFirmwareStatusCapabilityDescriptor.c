/*
 * XREFs of HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x140038CA8
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140037460 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

_BYTE *__fastcall HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _BYTE *a5,
        _BYTE *a6,
        __int64 a7)
{
  _BYTE *result; // rax
  int *v8; // rdi
  int v12; // r12d
  void *v13; // r8
  __int64 v14; // r15
  int v15; // r14d
  __int64 v16; // rdx
  unsigned int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  int v24; // [rsp+80h] [rbp+8h] BYREF

  result = &retaddr;
  v24 = 0;
  v8 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v8 = &v24;
  }
  v12 = *(_DWORD *)(a2 + 72);
  v13 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  v14 = a7;
  v15 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v16 = 8LL;
  v17 = v12 - v15;
  if ( *a1 < 8u )
  {
    result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
                        *(_QWORD *)(a2 + 40),
                        262LL,
                        &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    v16 = 8LL;
    if ( v17 < 8 )
    {
      *v8 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      result = (_BYTE *)WPP_RECORDER_SF_DDD(
                          v14,
                          2u,
                          v18,
                          0xB2u,
                          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                          v15,
                          *a1,
                          8);
      goto LABEL_44;
    }
    *v8 = 2;
    *a3 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      result = (_BYTE *)WPP_RECORDER_SF_DDDD(
                          v14,
                          2u,
                          5u,
                          0xB1u,
                          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                          v15,
                          *a1,
                          8,
                          8);
      v16 = 8LL;
    }
    v13 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  }
  if ( *a1 > 8u )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
      *v8 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = 8;
      LODWORD(v21) = *a1;
      LODWORD(v20) = v15;
      WPP_RECORDER_SF_DDD(
        v14,
        2u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        0xB3u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v20,
        v21,
        v22);
    }
    result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 264LL, v13);
  }
  if ( *a3 <= v17 )
  {
    if ( a1[3] )
    {
      if ( *((_DWORD *)a1 + 1) >= 4u )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v8 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v20) = *((_DWORD *)a1 + 1);
          WPP_RECORDER_SF_d(v14, 2u, 5u, 0xB6u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v20);
        }
        result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
                            *(_QWORD *)(a2 + 40),
                            265LL,
                            v13);
      }
      if ( (a1[4] & 1) != 0 )
      {
        result = a5;
        if ( a5 )
          *a5 = 1;
      }
      if ( (a1[4] & 2) != 0 )
      {
        result = a6;
        if ( a6 )
          *a6 = 1;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = (*((_DWORD *)a1 + 1) >> 1) & 1;
        LODWORD(v20) = *((_DWORD *)a1 + 1) & 1;
        result = (_BYTE *)WPP_RECORDER_SF_dD(
                            v14,
                            4u,
                            5u,
                            0xB7u,
                            (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                            v20,
                            v21);
      }
      goto LABEL_44;
    }
    *v8 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = a1[3];
      WPP_RECORDER_SF_d(v14, 2u, 5u, 0xB5u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v20);
    }
    v19 = 265LL;
  }
  else
  {
    if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v16, v13) )
      *v8 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v15;
      WPP_RECORDER_SF_d(v14, 2u, 5u, 0xB4u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v20);
    }
    v19 = 261LL;
  }
  result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v19);
LABEL_44:
  if ( *v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      return (_BYTE *)WPP_RECORDER_SF_(v14, v16, 5, 184, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
  }
  return result;
}
