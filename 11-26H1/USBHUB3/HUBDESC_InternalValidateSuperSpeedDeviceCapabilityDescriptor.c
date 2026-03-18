/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x14003AC88
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

char __fastcall HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        __int64 a8)
{
  int *v9; // rsi
  _BYTE *v11; // r12
  void *v12; // r8
  __int64 v13; // r15
  void (__fastcall **v14)(_QWORD, __int64, void *, __int64); // r13
  int v15; // r14d
  __int64 v16; // r8
  int v17; // edx
  _DWORD *v18; // rax
  __int64 v19; // r9
  _QWORD *v20; // rcx
  char v21; // bl
  void (__fastcall **v22)(_QWORD, __int64, void *, __int64); // r14
  __int64 v23; // rdx
  int v24; // eax
  __int16 v25; // ax
  unsigned __int16 v26; // ax
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  _DWORD *v32; // [rsp+A0h] [rbp+18h]

  v32 = a3;
  v9 = a4;
  v31 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v9 = &v31;
  }
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v11 = a7;
  if ( *a7 )
    *a7 = 0;
  v12 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  v13 = a8;
  v14 = (void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24);
  v15 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  LODWORD(a7) = *(_DWORD *)(a2 + 72) - v15;
  if ( *a1 >= 0xAu )
  {
LABEL_16:
    v19 = 768LL;
    if ( *a1 > 0xAu )
    {
      if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = 10;
        LODWORD(v29) = *a1;
        LODWORD(v28) = v15;
        WPP_RECORDER_SF_DDD(
          v13,
          2u,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          0xCEu,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          v28,
          v29,
          v30);
      }
      v14 = (void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24);
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 135LL, v12, v19);
    }
    v17 = (int)v32;
    v20 = (_QWORD *)(a2 + 40);
    if ( *v32 > (unsigned int)a7 )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v32, v12) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = v15;
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xCFu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v28);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 140LL);
LABEL_82:
      v21 = 1;
LABEL_83:
      if ( !*v9 )
        return v21;
      goto LABEL_84;
    }
    if ( (a1[3] & 0xFD) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v9 = 2;
        a7 = (_BYTE *)(a2 + 40);
        v22 = (void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24);
      }
      else
      {
        v22 = v14;
        a7 = (_BYTE *)(a2 + 40);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = a1[3];
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xD0u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v28);
        v20 = a7;
        v14 = v22;
      }
      (*v14)(*v20, 137LL, v12, v19);
    }
    if ( (a1[3] & 2) != 0 && *v11 )
      *v11 = 1;
    if ( (*((_WORD *)a1 + 2) & 0xFFF0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = *((unsigned __int16 *)a1 + 2);
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xD1u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v28);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 143LL, v12, v19);
    }
    if ( !*((_WORD *)a1 + 2) )
    {
      *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_(v13, v17, 5, 210, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 144LL, v12, v19);
    }
    if ( a1[6] <= 3u )
    {
      v24 = *((unsigned __int16 *)a1 + 2);
      if ( _bittest(&v24, a1[6]) )
      {
LABEL_62:
        v25 = a1[7];
        if ( (unsigned __int8)v25 < 0xBu )
        {
          if ( a5 )
          {
            *a5 = v25;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v28) = a1[7];
              WPP_RECORDER_SF_d(v13, 4u, 5u, 0xD6u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v28);
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
            *v9 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v28) = a1[7];
            WPP_RECORDER_SF_d(v13, 2u, 5u, 0xD5u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v28);
          }
          (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 138LL, v12, v19);
        }
        v26 = *((_WORD *)a1 + 4);
        if ( v26 < 0x800u )
        {
          if ( a6 )
          {
            *a6 = v26;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v28) = *((unsigned __int16 *)a1 + 4);
              WPP_RECORDER_SF_d(v13, 4u, 5u, 0xD8u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v28);
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
            *v9 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v28) = *((unsigned __int16 *)a1 + 4);
            WPP_RECORDER_SF_d(v13, 2u, 5u, 0xD7u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v28);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 139LL);
        }
        goto LABEL_82;
      }
      *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = *((unsigned __int16 *)a1 + 2);
        LODWORD(v28) = a1[6];
        WPP_RECORDER_SF_dD(v13, 2u, 5u, 0xD4u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v28, v29);
      }
      v23 = 141LL;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = a1[6];
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xD3u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v28);
      }
      v23 = 142LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v23, v12, v19);
    goto LABEL_62;
  }
  ((void (__fastcall *)(_QWORD, __int64, void *))*v14)(
    *(_QWORD *)(a2 + 40),
    136LL,
    &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  v17 = 10;
  if ( (unsigned int)a7 >= 0xA )
  {
    v18 = v32;
    *v9 = 2;
    *v18 = 10;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v13,
        2u,
        5u,
        0xCCu,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        v15,
        *a1,
        10,
        10);
    v12 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
    goto LABEL_16;
  }
  v21 = 1;
  *v9 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v13, 2u, v16, 0xCDu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v15, *a1, 10);
    goto LABEL_83;
  }
LABEL_84:
  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_(v13, v17, 5, 217, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v21;
}
