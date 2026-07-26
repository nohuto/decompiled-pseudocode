/*
 * XREFs of ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007F700
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_qDqLLLL @ 0x14006EE20 (WPP_RECORDER_SF_qDqLLLL.c)
 *     Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline @ 0x1400A1F90 (Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_LLq @ 0x1400A33C4 (WPP_RECORDER_SF_LLq_ea_1400A33C4.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

unsigned __int8 __fastcall ndisMIndicateHwTimestampCapabilitiesChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        _WORD *Buf2,
        __int64 a4,
        char a5,
        unsigned __int8 *a6)
{
  unsigned int v6; // r15d
  int v8; // r13d
  unsigned __int8 v10; // di
  int v11; // edx
  int v12; // r8d
  unsigned int v13; // eax
  unsigned __int8 result; // al
  size_t v15; // r14
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rbx
  _NDIS_TIMESTAMP_CAPABILITIES *Pool2; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v18; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v19; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v20; // rax
  int v21; // edx
  int v22; // [rsp+20h] [rbp-68h]
  char v23[8]; // [rsp+38h] [rbp-50h]

  v6 = a4;
  v8 = a2;
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)&v23[4] = HIDWORD(Buf2);
    WPP_RECORDER_SF_qDqLLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      *(unsigned __int8 *)Buf2,
      (unsigned __int16)Buf2[1],
      a4,
      v22);
  }
  if ( a6 )
    *a6 = 0;
  if ( v6 < 0x36 || *(_BYTE *)Buf2 != 0x80 || Buf2[1] < 0x36u || !*((_BYTE *)Buf2 + 1) )
    goto LABEL_38;
  if ( (unsigned int)Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline(a1, a2) )
  {
    v13 = (unsigned __int16)Buf2[1];
    if ( v13 > v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_LLq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          v12,
          262,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          v13,
          v6,
          (char)a1);
        return 0;
      }
      return 0;
    }
  }
  if ( a5 )
  {
    v15 = 56LL;
    if ( v8 == 1074073601 )
    {
      TopTimestampConfig = a1->TopTimestampConfig;
      if ( !TopTimestampConfig )
      {
        Pool2 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502LL);
        a1->TopTimestampConfig = Pool2;
        TopTimestampConfig = Pool2;
        if ( Pool2 )
          goto LABEL_32;
        return 0;
      }
    }
    else
    {
      TopTimestampConfig = a1->TopHwTimestampCapabilities;
      if ( !TopTimestampConfig )
      {
        v18 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502LL);
        a1->TopHwTimestampCapabilities = v18;
        TopTimestampConfig = v18;
        if ( v18 )
          goto LABEL_32;
        return 0;
      }
    }
LABEL_31:
    if ( !memcmp(TopTimestampConfig, Buf2, (unsigned __int16)Buf2[1]) )
      goto LABEL_33;
    goto LABEL_32;
  }
  TopTimestampConfig = a1->HwTimestampCapabilities;
  if ( v8 == 1074073601 )
  {
    if ( !TopTimestampConfig )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          24,
          263,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a1);
        return 0;
      }
      return 0;
    }
    TopTimestampConfig = a1->HwTimestampCurrentConfig;
    v15 = 56LL;
    if ( !TopTimestampConfig )
    {
      v19 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502LL);
      a1->HwTimestampCurrentConfig = v19;
      TopTimestampConfig = v19;
      if ( v19 )
        goto LABEL_32;
      return 0;
    }
    goto LABEL_31;
  }
  v15 = 56LL;
  if ( TopTimestampConfig )
    goto LABEL_31;
  v20 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502LL);
  a1->HwTimestampCapabilities = v20;
  TopTimestampConfig = v20;
  if ( !v20 )
    return 0;
LABEL_32:
  v10 = 1;
LABEL_33:
  if ( TopTimestampConfig )
  {
    if ( (unsigned __int16)Buf2[1] < 0x38u )
      v15 = (unsigned __int16)Buf2[1];
    memmove(TopTimestampConfig, Buf2, v15);
    result = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v23 = v10;
      WPP_RECORDER_SF_qDL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v21,
        0x18u,
        0x108u,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a1,
        v8,
        *(_QWORD *)v23);
      result = 1;
    }
    goto LABEL_39;
  }
LABEL_38:
  result = 0;
LABEL_39:
  if ( a6 )
    *a6 = v10;
  return result;
}
