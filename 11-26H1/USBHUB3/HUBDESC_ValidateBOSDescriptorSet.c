/*
 * XREFs of HUBDESC_ValidateBOSDescriptorSet @ 0x14003D978
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x14002C51C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x140031228 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x140036368 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x140036A6C (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140037460 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     WPP_RECORDER_SF_Ddd @ 0x140040388 (WPP_RECORDER_SF_Ddd.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

bool __fastcall HUBDESC_ValidateBOSDescriptorSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _BYTE *a6,
        _WORD *a7,
        _WORD *a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11,
        _BYTE *a12,
        _BYTE *a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v15; // rdi
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _BYTE *v20; // rbx
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  __int64 v23; // rsi
  int v24; // edx
  bool v25; // bl
  int v26; // r8d
  unsigned __int16 *v27; // r12
  unsigned __int8 *v28; // rdi
  int v29; // r15d
  __int64 v30; // r12
  bool v31; // al
  _DWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v35; // [rsp+28h] [rbp-D1h]
  __int64 v36; // [rsp+30h] [rbp-C9h]
  _BYTE v37[96]; // [rsp+60h] [rbp-99h] BYREF
  _BYTE v38[112]; // [rsp+C0h] [rbp-39h] BYREF
  int v40; // [rsp+158h] [rbp+5Fh] BYREF

  v14 = a5;
  v15 = a4;
  v40 = 0;
  LODWORD(a5) = 0;
  memset(v37, 0, 0x5EuLL);
  memset(v38, 0, 0x40uLL);
  v18 = *(_OWORD *)v14;
  *(_QWORD *)&v37[88] = a3;
  v19 = *(_OWORD *)(v14 + 16);
  *(_QWORD *)&v37[64] = v15 + a2;
  v20 = v38;
  *(_OWORD *)v37 = v18;
  v21 = *(_OWORD *)(v14 + 32);
  if ( a6 )
    v20 = a6;
  *(_OWORD *)&v37[16] = v19;
  v22 = *(_QWORD *)(v14 + 48);
  *(_DWORD *)&v37[72] = v15;
  *(_QWORD *)&v37[56] = a2;
  *(_OWORD *)&v37[32] = v21;
  *(_QWORD *)&v37[48] = v22;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a12 )
    *a12 = 0;
  if ( a13 )
    *a13 = 0;
  memset(v20, 0, 0x40uLL);
  *(_QWORD *)&v37[80] = v20;
  if ( (unsigned int)v15 < 5 )
  {
    LODWORD(v23) = a14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a14, 2u, 5u, 0xF5u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v15, 5);
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 23LL);
    goto LABEL_15;
  }
  v23 = a14;
  HUBDESC_InternalValidateBOSDescriptor((unsigned __int8 *)a2, (__int64)v37, &a5, &v40, a14);
  if ( v40 == 1 )
  {
LABEL_15:
    v25 = 0;
    goto LABEL_57;
  }
  v25 = v40 != 2;
  if ( (unsigned int)v15 >= *(unsigned __int16 *)(a2 + 2) )
  {
    v27 = (unsigned __int16 *)(a2 + 2);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 23LL);
    v27 = (unsigned __int16 *)(a2 + 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Ddd(v23, v24, v26, 246);
      v27 = (unsigned __int16 *)(a2 + 2);
    }
    v25 = 0;
  }
  if ( (unsigned int)v15 > *(unsigned __int16 *)(a2 + 2) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 32))(*(_QWORD *)(v14 + 40), 22LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(v23, 2u, 5u, 0xF7u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v15, *v27);
  }
  v28 = (unsigned __int8 *)(a2 + (unsigned int)a5);
  v29 = 0;
  if ( (unsigned __int64)v28 < *(_QWORD *)&v37[64] )
  {
    v30 = (__int64)a13;
    while ( 1 )
    {
      v40 = 0;
      HUBDESC_InternalValidateCommonDescriptorHeader(v28, (__int64)v37, (unsigned int *)&a5, &v40, v23);
      if ( v40 == 1 )
        break;
      v31 = v25;
      if ( v40 == 2 )
        v31 = 0;
      v40 = 0;
      v25 = v31;
      if ( v28[1] == 16 )
      {
        HUBDESC_InternalValidateDeviceCapabilityDescriptor(
          v28,
          (__int64)v37,
          (unsigned int *)&a5,
          &v40,
          a7,
          a8,
          a9,
          a10,
          (__int64)a12,
          v30,
          v23);
        if ( v40 == 1 )
        {
          v25 = 0;
          goto LABEL_57;
        }
        if ( v40 == 2 )
          v25 = 0;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v36) = v28[1];
          LODWORD(v35) = (_DWORD)v28 - a2;
          WPP_RECORDER_SF_dD(v23, 2u, 5u, 0xF8u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v35, v36);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v14 + 32))(*(_QWORD *)(v14 + 40), 28LL);
      }
      ++v29;
      v28 += (unsigned int)a5;
      if ( (unsigned __int64)v28 >= *(_QWORD *)&v37[64] )
        goto LABEL_38;
    }
    v25 = 0;
    goto LABEL_57;
  }
LABEL_38:
  if ( *(unsigned __int8 *)(a2 + 4) != v29 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v36) = *(unsigned __int8 *)(a2 + 4);
      LODWORD(v35) = v29;
      WPP_RECORDER_SF_dD(v23, 2u, 5u, 0xF9u, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids, v35, v36);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 25LL);
    v25 = 0;
  }
  v32 = a11;
  if ( *(_QWORD *)(*(_QWORD *)&v37[80] + 8LL) )
  {
    if ( a11 )
      *a11 |= 0x800u;
  }
  else if ( *(_DWORD *)&v37[4] == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_(v23, v24, 5, 250, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 26LL);
    v25 = 0;
  }
  HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(a1);
  if ( v32 )
  {
    v33 = *(_QWORD *)&v37[80];
    if ( *(_QWORD *)(*(_QWORD *)&v37[80] + 16LL) )
      *v32 |= 0x1000u;
    if ( *(_BYTE *)(v33 + 42) )
      *v32 |= 0x10000u;
  }
  if ( !v25 )
  {
LABEL_57:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_(v23, v24, 5, 251, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
    }
  }
  return v25;
}
