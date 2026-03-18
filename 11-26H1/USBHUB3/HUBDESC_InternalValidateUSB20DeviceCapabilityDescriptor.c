/*
 * XREFs of HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x14003C990
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

char __fastcall HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        int *a5,
        __int64 a6)
{
  int *v6; // rdi
  void *v10; // r8
  int v11; // r12d
  void (__fastcall **v12)(_QWORD, __int64, void *); // r15
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r14
  char v17; // bl
  void (__fastcall **v18)(_QWORD, __int64, void *); // r12
  _QWORD *v19; // r13
  int v20; // eax
  int *v21; // r14
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // eax
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  int v30; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v31; // [rsp+A0h] [rbp+18h]

  v31 = a3;
  v30 = 0;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v30;
  }
  v10 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = (void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24);
  v13 = *(_DWORD *)(a2 + 72) - v11;
  v14 = 7LL;
  if ( *a1 >= 7u )
    goto LABEL_10;
  (*v12)(*(_QWORD *)(a2 + 40), 146LL, &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  v14 = 7LL;
  if ( v13 >= 7 )
  {
    *v6 = 2;
    *a3 = 7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(a6, 2u, 5u, 0xDAu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v11, *a1, 7, 7);
      v14 = 7LL;
    }
    v10 = &WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids;
LABEL_10:
    if ( *a1 <= 7u )
    {
      v16 = (_QWORD *)(a2 + 40);
    }
    else
    {
      if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 513) <= 0xEu )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = 7;
        LODWORD(v28) = *a1;
        LODWORD(v27) = v11;
        WPP_RECORDER_SF_DDD(
          a6,
          2u,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          0xDCu,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          v27,
          v28,
          v29);
      }
      v12 = (void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24);
      v16 = (_QWORD *)(a2 + 40);
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 145LL, v10);
    }
    if ( *v31 <= v13 )
    {
      if ( (*(_DWORD *)(a1 + 3) & 0xFFFF00E1) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
        {
          *v6 = 2;
          v18 = (void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24);
          v19 = (_QWORD *)(a2 + 40);
        }
        else
        {
          v18 = v12;
          v19 = v16;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = *(_DWORD *)(a1 + 3);
          WPP_RECORDER_SF_d(a6, 2u, 5u, 0xDEu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v27);
          v12 = v18;
          v16 = v19;
        }
        ((void (__fastcall *)(_QWORD, __int64))*v12)(*v16, 147LL);
      }
      v20 = *(_DWORD *)(a1 + 3);
      if ( (v20 & 2) != 0 )
      {
        v21 = a5;
        *a5 |= 1u;
        v22 = *v21 ^ ((unsigned __int8)*v21 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 1)) & 2;
        *v21 = v22;
        if ( (a1[3] & 8) != 0 )
        {
          v23 = v22 | 4;
          *v21 = v23;
          *v21 = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF0;
        }
        v24 = *(_DWORD *)(a1 + 3);
        if ( (v24 & 0x10) != 0 )
        {
          if ( (v24 & 8) != 0 )
          {
            v25 = (unsigned __int16)v24 >> 12;
            if ( v25 <= ((*(_DWORD *)(a1 + 3) >> 8) & 0xFu) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v28) = (*(_DWORD *)(a1 + 3) >> 8) & 0xF;
                LODWORD(v27) = v25;
                WPP_RECORDER_SF_dD(
                  a6,
                  2u,
                  5u,
                  0xDFu,
                  (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                  v27,
                  v28);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 151LL);
            }
          }
          *v21 |= 8u;
          *v21 ^= ((unsigned __int16)*v21 ^ (unsigned __int16)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF00;
        }
      }
      else if ( (v20 & 4) != 0 )
      {
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v14, v10) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = *(_DWORD *)(a1 + 3);
          WPP_RECORDER_SF_d(a6, 2u, 5u, 0xE0u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v27);
        }
        ((void (__fastcall *)(_QWORD, __int64))*v12)(*v16, 150LL);
      }
    }
    else
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v14, v10) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = v11;
        WPP_RECORDER_SF_d(a6, 2u, 5u, 0xDDu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v27);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 148LL);
    }
    v17 = 1;
LABEL_50:
    if ( !*v6 )
      return v17;
    goto LABEL_51;
  }
  v17 = 1;
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(a6, 2u, v15, 0xDBu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v11, *a1, 7);
    goto LABEL_50;
  }
LABEL_51:
  v17 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(a6, v14, 5, 225, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v17;
}
