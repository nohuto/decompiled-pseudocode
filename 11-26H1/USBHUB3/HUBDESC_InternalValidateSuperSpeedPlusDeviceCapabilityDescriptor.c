/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x14003BCDC
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140037460 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D624 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x14003CFCC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     WPP_RECORDER_SF_dDDDdDDD @ 0x1400405A0 (WPP_RECORDER_SF_dDDDdDDD.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  __int64 v5; // r8
  int *v6; // rsi
  __int64 v9; // r12
  void (__fastcall **v10)(_QWORD, __int64); // r14
  int v11; // r13d
  unsigned int v12; // r15d
  __int64 result; // rax
  __int64 v14; // r8
  unsigned int *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r15
  __int64 v19; // rdx
  void (__fastcall **v20)(_QWORD, __int64); // r13
  int v21; // r15d
  int v22; // r13d
  unsigned int v23; // r14d
  __int64 v24; // r8
  unsigned int v25; // ecx
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // r8
  int v29; // r11d
  unsigned __int16 v30; // r9
  int v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+28h] [rbp-90h]
  __int64 v33; // [rsp+30h] [rbp-88h]
  char v34; // [rsp+30h] [rbp-88h]
  unsigned int v35; // [rsp+C0h] [rbp+8h]
  _QWORD *v36; // [rsp+C0h] [rbp+8h]
  char v37; // [rsp+C0h] [rbp+8h]
  int v38; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int *v39; // [rsp+D0h] [rbp+18h]
  unsigned int v40; // [rsp+D8h] [rbp+20h]

  v39 = a3;
  v5 = 0LL;
  v6 = a4;
  v38 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v38;
  }
  v9 = a5;
  v10 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 72) - v11;
  v35 = v12;
  if ( *a1 >= 0x10u )
  {
LABEL_10:
    v16 = *a1;
    v40 = *((_DWORD *)a1 + 1) & 0x1F;
    v17 = v40;
    if ( v16 == 4LL * v40 + 16 )
    {
      v18 = (_QWORD *)(a2 + 40);
    }
    else
    {
      if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(v9, 2u, 0LL, 0xBBu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      v10 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v18 = (_QWORD *)(a2 + 40);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 213LL);
    }
    if ( *v39 <= v35 )
    {
      if ( *((_DWORD *)a1 + 1) >= 0x200u )
      {
        if ( *(_BYTE *)(a2 + 15) )
        {
          *v6 = 2;
          v36 = (_QWORD *)(a2 + 40);
          v20 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
        }
        else
        {
          v20 = v10;
          v36 = v18;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xBDu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
          v18 = v36;
          v10 = v20;
        }
        (*v10)(*v18, 215LL);
      }
      if ( (a1[8] & 0xF0) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xBEu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        (*v10)(*v18, 216LL);
        v10 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
        v18 = (_QWORD *)(a2 + 40);
      }
      if ( a1[3] )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xBFu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        v10 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
        v18 = (_QWORD *)(a2 + 40);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 218LL);
      }
      if ( *((_WORD *)a1 + 5) )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xC0u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        (*v10)(*v18, 219LL);
      }
      v21 = 0;
      v37 = 0;
      v22 = 0;
      v23 = 0;
      while ( (unsigned __int64)&a1[4 * v23 + 16] <= *(_QWORD *)(a2 + 64) )
      {
        v5 = v23;
        v17 = *(unsigned int *)&a1[4 * v23 + 12];
        if ( (v17 & 0x80u) != 0LL )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v17, v23) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v32) = v23;
            WPP_RECORDER_SF_d(v9, 2u, 5u, 0xC2u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v32);
          }
          v19 = 220LL;
          goto LABEL_100;
        }
        if ( (((unsigned __int8)v17 ^ (unsigned __int8)*((_WORD *)a1 + 4)) & 0xF) == 0 )
        {
          v37 = 1;
          if ( (v17 & 0x40) == 0 && (*((_WORD *)a1 + 4) & 0xF00) != ((*((_WORD *)a1 + 4) >> 4) & 0xF00) )
          {
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v17, v23) )
              *v6 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDD(v9, 2u, v24, 0xC3u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 225LL);
          }
        }
        v25 = *(_DWORD *)&a1[4 * v23 + 12] & 0xF;
        if ( _bittest(&v21, v25) )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v17, v5) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(v9, 2u, 5u, 0xC4u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 226LL);
        }
        else
        {
          v21 |= 1 << v25;
          ++v22;
        }
        if ( (unsigned __int64)&a1[4 * v23 + 20] > *(_QWORD *)(a2 + 64) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_88;
          v30 = 197;
          goto LABEL_112;
        }
        v26 = *(unsigned int *)&a1[4 * v23 + 16];
        v5 = v23 + 1;
        if ( (v26 & 0x80u) == 0LL )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v26, v5) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v32) = v23 + 1;
            WPP_RECORDER_SF_d(v9, 2u, 5u, 0xC6u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v32);
          }
          v19 = 221LL;
          goto LABEL_100;
        }
        v27 = *(_DWORD *)&a1[4 * v23 + 12];
        if ( (((unsigned __int8)v27 ^ (unsigned __int8)v26) & 0xF) != 0
          || (((unsigned __int8)v26 ^ (unsigned __int8)v27) & 0x40) != 0
          || (((unsigned __int16)v26 ^ (unsigned __int16)v27) & 0xC000) != 0 )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v26, v5) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = *(_DWORD *)&a1[4 * v23 + 12];
            WPP_RECORDER_SF_dDDDdDDD(
              v9,
              (unsigned __int16)*(_DWORD *)&a1[4 * v28 + 12] >> 14,
              (*(_DWORD *)&a1[4 * v28 + 12] >> 6) & 1,
              199,
              v31,
              v23,
              v29 & 0xF,
              (v29 & 0x40) != 0,
              (unsigned __int16)v29 >> 14,
              v23 + 1,
              v29 & 0xF,
              (*(_DWORD *)&a1[4 * v28 + 12] & 0x40) != 0,
              (unsigned __int16)*(_DWORD *)&a1[4 * v28 + 12] >> 14);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 223LL);
        }
        v17 = *(unsigned int *)&a1[4 * v23 + 12];
        if ( (v17 & 0x40) == 0 )
        {
          v17 = *(_DWORD *)&a1[4 * v23 + 16] ^ (unsigned int)v17;
          if ( (v17 & 0x30) != 0 || *(_WORD *)&a1[4 * v23 + 14] != *(_WORD *)&a1[4 * v23 + 18] )
          {
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v17, v5) )
              *v6 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v34 = a1[4 * v23 + 12] & 0xF;
              WPP_RECORDER_SF_dDDDdDDD(
                v9,
                *(unsigned __int16 *)&a1[4 * v23 + 18],
                (*(_DWORD *)&a1[4 * v23 + 16] >> 4) & 3,
                200,
                v31,
                v23,
                v34,
                *(_WORD *)&a1[4 * v23 + 14],
                (*(_DWORD *)&a1[4 * v23 + 12] >> 4) & 3,
                v23 + 1,
                v34,
                *(_WORD *)&a1[4 * v23 + 18],
                (*(_DWORD *)&a1[4 * v23 + 16] >> 4) & 3);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 224LL);
          }
        }
        v23 += 2;
        if ( v23 > v40 )
          goto LABEL_88;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = 193;
LABEL_112:
        LODWORD(v32) = v23;
        WPP_RECORDER_SF_d(v9, 2u, 5u, v30, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v32);
      }
LABEL_88:
      result = ((*((_DWORD *)a1 + 1) >> 5) & 0xFu) + 1;
      if ( (_DWORD)result != v22 )
      {
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v17, v5) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v33) = ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1;
          LODWORD(v32) = v22;
          WPP_RECORDER_SF_dD(v9, 2u, 5u, 0xC9u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v32, v33);
        }
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 227LL);
      }
      if ( !v37 )
      {
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v17, v5) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v32) = *(_DWORD *)&a1[4 * v23 + 12] & 0xF;
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xCAu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v32);
        }
        v19 = 228LL;
        goto LABEL_100;
      }
    }
    else
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationImmutable(a2, v17, v5) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(v9, 2u, 5u, 0xBCu, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v11);
      v19 = 217LL;
LABEL_100:
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v19);
    }
    goto LABEL_101;
  }
  result = ((__int64 (__fastcall *)(_QWORD, __int64))*v10)(*(_QWORD *)(a2 + 40), 214LL);
  if ( v12 >= 0x10 )
  {
    v15 = v39;
    *v6 = 2;
    *v15 = 16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v9, 2u, 5u, 0xB9u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    v5 = 0LL;
    goto LABEL_10;
  }
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return result;
  result = WPP_RECORDER_SF_DDD(
             v9,
             2u,
             v14,
             0xBAu,
             (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
             v11,
             *a1,
             16);
LABEL_101:
  if ( *v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      return WPP_RECORDER_SF_(v9, v17, 5, 203, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
  }
  return result;
}
