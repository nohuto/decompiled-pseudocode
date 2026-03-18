/*
 * XREFs of HUBDESC_InternalValidateEndpointDescriptor @ 0x140037990
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C874 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x140039D20 (HUBDESC_InternalValidateLastEndpoint.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003CFF8 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateEndpointDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rsi
  int v9; // ebp
  unsigned int v10; // r12d
  __int64 v11; // r8
  char v12; // r13
  void *v13; // rdx
  unsigned int v14; // r10d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  void (__fastcall **v18)(_QWORD, __int64); // r15
  _QWORD *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int16 v22; // r13
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rdx
  _QWORD *v27; // r15
  _QWORD *v28; // r13
  __int64 v29; // rcx
  void (__fastcall **v30)(_QWORD, __int64); // r13
  _QWORD *v31; // r15
  char v32; // r9
  int v33; // eax
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned __int16 v38; // r9
  __int16 v39; // r9
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  unsigned __int8 v43; // al
  unsigned __int16 v44; // r9
  unsigned __int8 v45; // al
  unsigned __int8 v46; // al
  __int64 v47; // rdx
  void (__fastcall **v48)(_QWORD, __int64); // r13
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  unsigned __int16 v52; // r9
  __int16 v53; // r9
  unsigned __int16 v54; // ax
  __int64 v55; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+30h] [rbp-68h]
  __int64 v57; // [rsp+38h] [rbp-60h]
  __int64 v58; // [rsp+40h] [rbp-58h]
  int v59; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 v60; // [rsp+A0h] [rbp+8h]
  _QWORD *v61; // [rsp+A8h] [rbp+10h]
  void (__fastcall **v62)(_QWORD, __int64); // [rsp+A8h] [rbp+10h]
  _QWORD *v63; // [rsp+A8h] [rbp+10h]
  void (__fastcall **v64)(_QWORD, __int64); // [rsp+B0h] [rbp+18h]

  v5 = a4;
  v59 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v59;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72) - v9;
  *a3 = *a1;
  HUBDESC_InternalValidateLastEndpoint(a2, v5, a5);
  v12 = 1;
  v13 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  if ( *v5 == 1 )
  {
LABEL_142:
    if ( !*v5 )
      return v12;
    goto LABEL_143;
  }
  v14 = 7;
  if ( *a1 >= 7u )
  {
LABEL_19:
    if ( *a1 > (unsigned __int8)v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v57) = v14;
        LODWORD(v56) = v9;
        LODWORD(v55) = *a1;
        WPP_RECORDER_SF_DDD(
          a5,
          3u,
          v11,
          0x22u,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          v55,
          v56,
          v57);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 80LL);
    }
    if ( *a3 > v10 )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v13, v11) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v55) = v9;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x23u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55);
      }
      v17 = 83LL;
LABEL_30:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v17);
      goto LABEL_142;
    }
    v60 = a1[2];
    if ( (*(_DWORD *)(a2 + 256) & 1) == 0 )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v13, v11) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v55) = v9;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x24u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55);
      }
      v17 = 85LL;
      goto LABEL_30;
    }
    if ( (a1[2] & 0xF) != 0 )
    {
      v18 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v19 = (_QWORD *)(a2 + 40);
    }
    else
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v13, v11) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v55) = v9;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x25u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55);
      }
      v18 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v19 = (_QWORD *)(a2 + 40);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 86LL);
    }
    if ( (a1[2] & 0x70) != 0 )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v56) = a1[2];
        LODWORD(v55) = v9;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x26u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
      }
      (*v18)(*v19, 84LL);
      v18 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v19 = (_QWORD *)(a2 + 40);
    }
    if ( (a1[3] & 0xC0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v56) = v9;
        LODWORD(v55) = a1[3];
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x27u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
      }
      v18 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v19 = (_QWORD *)(a2 + 40);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 82LL);
    }
    v20 = a1[3];
    v21 = 0LL;
    v22 = *((_WORD *)a1 + 2);
    if ( (a1[3] & 3) != 0 )
    {
      if ( (a1[3] & 3) != 1 )
      {
        if ( (a1[3] & 3) != 2 )
        {
          if ( (a1[3] & 3) == 3 )
          {
            v23 = *(_DWORD *)(a2 + 4);
            if ( !v23 )
            {
              if ( (v20 & 0xFFFFFFFC) != 0 )
              {
                if ( *(_BYTE *)(a2 + 15) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v56) = v9;
                  LODWORD(v55) = a1[3];
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x2Du,
                    (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                    v55,
                    v56);
                }
                v30 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
                v31 = (_QWORD *)(a2 + 40);
                (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(
                  *(_QWORD *)(a2 + 40),
                  108LL,
                  v11,
                  v21);
                v21 = 0LL;
              }
              else
              {
                v30 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
                v31 = (_QWORD *)(a2 + 40);
              }
              v61 = v31;
              if ( *((_WORD *)a1 + 2) > 8u )
              {
                *v5 = 2;
                v61 = v31;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v56) = v9;
                  LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x2Eu,
                    (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                    v55,
                    v56);
                  v61 = (_QWORD *)(a2 + 40);
                }
                v30 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
                (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(*v31, 110LL, v11, v21);
                v21 = 0LL;
              }
              if ( *((_WORD *)a1 + 2) )
              {
                v31 = v61;
              }
              else
              {
                *v5 = 2;
                v64 = v30;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v56) = v9;
                  LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x2Fu,
                    (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                    v55,
                    v56);
                  v31 = v61;
                  v64 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
                }
                ((void (__fastcall *)(_QWORD, __int64, __int64, __int64))*v30)(*v31, 110LL, v11, v21);
                v30 = v64;
              }
              if ( !a1[6] )
              {
                if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v56) = v9;
                  LODWORD(v55) = a1[6];
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x30u,
                    (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                    v55,
                    v56);
                }
                (*v30)(*v31, 109LL);
              }
              goto LABEL_134;
            }
            v24 = v23 - 1;
            if ( !v24 )
            {
              if ( (v20 & 0xFFFFFFFC) != 0 )
              {
                if ( *(_BYTE *)(a2 + 15) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v56) = v9;
                  LODWORD(v55) = a1[3];
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x31u,
                    (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                    v55,
                    v56);
                }
                v27 = (_QWORD *)(a2 + 40);
                (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(
                  *(_QWORD *)(a2 + 40),
                  108LL,
                  v11,
                  v21);
                v21 = 0LL;
              }
              else
              {
                v27 = (_QWORD *)(a2 + 40);
              }
              if ( *((_WORD *)a1 + 2) > 0x40u )
              {
                *v5 = 2;
                v28 = v27;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v56) = v9;
                  LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x32u,
                    (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                    v55,
                    v56);
                  v28 = (_QWORD *)(a2 + 40);
                }
                (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(*v27, 110LL, v11, v21);
                v27 = v28;
              }
              if ( a1[6] )
                goto LABEL_134;
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v56) = v9;
                LODWORD(v55) = a1[6];
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x33u,
                  (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                  v55,
                  v56);
              }
              v29 = *v27;
              v26 = 109LL;
              goto LABEL_282;
            }
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 != 1 || v22 <= 0x400u )
                goto LABEL_134;
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v56) = v9;
                LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x38u,
                  (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                  v55,
                  v56);
              }
              v26 = 110LL;
            }
            else
            {
              if ( (v20 & 0xFFFFFFFC) != 0 )
              {
                if ( *(_BYTE *)(a2 + 15) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v56) = v9;
                  LODWORD(v55) = a1[3];
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x34u,
                    (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                    v55,
                    v56);
                }
                (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(
                  *(_QWORD *)(a2 + 40),
                  108LL,
                  v11,
                  v21);
              }
              if ( (v22 & 0x7FFu) > 0x400 )
              {
                if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v56) = v9;
                  LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x35u,
                    (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                    v55,
                    v56);
                }
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
              }
              if ( v22 >= 0x2000u )
              {
                if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v56) = v9;
                  LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x36u,
                    (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                    v55,
                    v56);
                }
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
              }
              if ( (v22 & 0x1800) != 0x1800 )
                goto LABEL_134;
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v56) = v9;
                LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x37u,
                  (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                  v55,
                  v56);
              }
              v26 = 110LL;
            }
LABEL_281:
            v29 = *(_QWORD *)(a2 + 40);
LABEL_282:
            (*(void (__fastcall **)(__int64, __int64))(a2 + 24))(v29, v26);
          }
LABEL_134:
          if ( _bittest64(*(const signed __int64 **)(a2 + 144), v60) )
          {
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v20, v11)
              || *(_BYTE *)(a2 + 13) != v32 )
            {
              *v5 = 2;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v58) = *(unsigned __int8 *)(a2 + 81);
              LODWORD(v57) = *(unsigned __int8 *)(a2 + 80);
              LODWORD(v56) = v9;
              LODWORD(v55) = v60;
              WPP_RECORDER_SF_DDDD(
                a5,
                2u,
                5u,
                0x48u,
                (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                v55,
                v56,
                v57,
                v58);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 102LL);
          }
          RtlSetBit((PRTL_BITMAP)(a2 + 136), v60);
          v33 = *(_DWORD *)(a2 + 256);
          v12 = 1;
          ++*(_BYTE *)(a2 + 185);
          *(_QWORD *)(a2 + 192) = a1;
          *(_DWORD *)(a2 + 256) = v33 & 0xFFFFFFDB | 4;
          goto LABEL_142;
        }
        if ( (v20 & 0xFFFFFFFC) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v56) = v9;
            LODWORD(v55) = a1[3];
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x39u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
          }
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 31LL, v11, v21);
        }
        v35 = *(_DWORD *)(a2 + 4);
        if ( !v35 )
        {
          *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v55) = v9;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0x3Au, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55);
          }
          v26 = 30LL;
          goto LABEL_281;
        }
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 != 1 || *((_WORD *)a1 + 2) == 1024 )
              goto LABEL_134;
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_162;
            v38 = 61;
          }
          else
          {
            if ( *((_WORD *)a1 + 2) == 512 )
              goto LABEL_134;
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
LABEL_162:
              v26 = 32LL;
              goto LABEL_281;
            }
            v38 = 60;
          }
        }
        else
        {
          v20 = *((unsigned __int16 *)a1 + 2);
          if ( (_WORD)v20 == 8 || (((_WORD)v20 - 16) & 0xFFCF) == 0 && (_WORD)v20 != 48 )
            goto LABEL_134;
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( *((_WORD *)a1 + 2) == v39 )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_162;
          v38 = 59;
        }
        LODWORD(v56) = v9;
        LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
        WPP_RECORDER_SF_dD(a5, 2u, 5u, v38, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
        goto LABEL_162;
      }
      v62 = v18;
      if ( !*(_BYTE *)(a2 + 81) )
      {
        v62 = v18;
        if ( v22 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v56) = *((unsigned __int16 *)a1 + 2);
            LODWORD(v55) = v9;
            WPP_RECORDER_SF_dD(a5, 3u, 5u, 0x3Eu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
          }
          ((void (__fastcall *)(_QWORD, __int64, __int64, __int64))*v18)(*v19, 233LL, v11, v21);
          v18 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
          v21 = 0LL;
          v62 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
          v19 = (_QWORD *)(a2 + 40);
        }
      }
      v40 = *(_DWORD *)(a2 + 4);
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 != 1 )
              goto LABEL_134;
            if ( *((_WORD *)a1 + 2) > 0x400u )
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v56) = v9;
                LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x46u,
                  (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                  v55,
                  v56);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            v43 = a1[6];
            if ( v43 )
            {
              if ( v43 <= 0x10u )
                goto LABEL_134;
            }
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_202;
            v44 = 71;
          }
          else
          {
            if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
              *(_DWORD *)(a2 + 256) &= ~0x10u;
            if ( (v22 & 0x7FFu) <= 0x400 )
            {
              if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() && (v22 & 0x7FF) == 0 )
                *(_DWORD *)(a2 + 256) |= 0x10u;
            }
            else
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v56) = v9;
                LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x42u,
                  (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                  v55,
                  v56);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            if ( v22 >= 0x2000u )
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v56) = v9;
                LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x43u,
                  (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                  v55,
                  v56);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            if ( (v22 & 0x1800) == 0x1800 )
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v56) = v9;
                LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x44u,
                  (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                  v55,
                  v56);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            v45 = a1[6];
            if ( v45 && v45 <= 0x10u )
              goto LABEL_134;
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_202;
            v44 = 69;
          }
          LODWORD(v56) = v9;
          LODWORD(v55) = a1[6];
          WPP_RECORDER_SF_dD(a5, 2u, 5u, v44, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
LABEL_202:
          v26 = 112LL;
          goto LABEL_281;
        }
        if ( *((_WORD *)a1 + 2) > 0x3FFu )
        {
          *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v56) = v9;
            LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x40u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
          }
          v18 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
          v19 = (_QWORD *)(a2 + 40);
          v62 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL, v11, v21);
        }
        v46 = a1[6];
        if ( v46 )
        {
          if ( v46 <= 0x10u )
            goto LABEL_134;
          v18 = v62;
        }
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v56) = v9;
          LODWORD(v55) = a1[6];
          WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x41u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
        }
        v47 = 112LL;
      }
      else
      {
        *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v55) = v9;
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0x3Fu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55);
        }
        v47 = 111LL;
      }
LABEL_270:
      (*v18)(*v19, v47);
      goto LABEL_134;
    }
    if ( (v20 & 0xFFFFFFFC) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v5 = 2;
        v63 = (_QWORD *)(a2 + 40);
        v48 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      }
      else
      {
        v48 = v18;
        v63 = v19;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v56) = v9;
        LODWORD(v55) = a1[3];
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x28u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
        v19 = v63;
        v18 = v48;
      }
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64))*v18)(*v19, 67LL, v11, v21);
    }
    v49 = *(_DWORD *)(a2 + 4);
    if ( v49 )
    {
      v50 = v49 - 1;
      if ( !v50 )
      {
        v20 = *((unsigned __int16 *)a1 + 2);
        if ( (_WORD)v20 == 8 || (((_WORD)v20 - 16) & 0xFFCF) == 0 && (_WORD)v20 != 48 )
          goto LABEL_134;
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( *((_WORD *)a1 + 2) == v53 )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v56) = v9;
          LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
          WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x2Au, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
        }
        v26 = 68LL;
        goto LABEL_281;
      }
      v51 = v50 - 1;
      if ( v51 )
      {
        if ( v51 != 1 || *((_WORD *)a1 + 2) == 512 )
          goto LABEL_134;
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_269;
        v52 = 44;
      }
      else
      {
        if ( *((_WORD *)a1 + 2) == 64 )
          goto LABEL_134;
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_269;
        v52 = 43;
      }
    }
    else
    {
      if ( *((_WORD *)a1 + 2) == 8 )
        goto LABEL_134;
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      {
        *v5 = 2;
        v18 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
        v19 = (_QWORD *)(a2 + 40);
      }
      v54 = *((_WORD *)a1 + 2);
      if ( v54 > 8u || !v54 )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_269;
      v52 = 41;
    }
    LODWORD(v56) = v9;
    LODWORD(v55) = *((unsigned __int16 *)a1 + 2);
    WPP_RECORDER_SF_dD(a5, 2u, 5u, v52, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v55, v56);
LABEL_269:
    v47 = 68LL;
    goto LABEL_270;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 81LL);
  if ( v10 < 7 )
  {
    v16 = *a3;
  }
  else
  {
    *a3 = 7;
    v16 = 7LL;
  }
  if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v15, v16) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( (unsigned int)v11 >= v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0x21u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        *a1,
        v9,
        v14,
        v11);
      v14 = 7;
    }
    v13 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
    goto LABEL_19;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(a5, 2u, v11, 0x20u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, *a1, v9, v14);
    goto LABEL_142;
  }
LABEL_143:
  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_(a5, (_DWORD)v13, 5, 73, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v12;
}
