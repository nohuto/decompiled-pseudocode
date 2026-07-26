/*
 * XREFs of ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009F9E0
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     WPP_RECORDER_SF_qDqL @ 0x140062FC0 (WPP_RECORDER_SF_qDqL.c)
 *     WPP_RECORDER_SF_DL @ 0x140070860 (WPP_RECORDER_SF_DL_ea_140070860.c)
 *     WPP_RECORDER_SF_LLLLLLLL @ 0x1400A3228 (WPP_RECORDER_SF_LLLLLLLL.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B269C (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C3C84 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

unsigned __int8 __fastcall ndisMIndicateQosParametersChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int Type,
        struct _NDIS_QOS_PARAMETERS *a3,
        unsigned int a4)
{
  unsigned int v4; // ebp
  int v6; // esi
  _QWORD *v8; // rcx
  int v9; // r9d
  unsigned int Size; // eax
  int v11; // eax
  _NDIS_OBJECT_HEADER v12; // r15d
  __int64 v13; // r12
  __int64 v14; // r14
  const void **v15; // r14
  __int64 Pool2; // r13
  int v18; // [rsp+20h] [rbp-78h]
  char v19[8]; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-68h]
  char v21[4]; // [rsp+40h] [rbp-58h]

  v4 = a4;
  v6 = Type;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    *(_DWORD *)v21 = a4;
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x18u,
      0xABu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      Type,
      (char)a3);
  }
  if ( !a1->QosHwCapabilities )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      return 0;
    v9 = 172;
    LOBYTE(Type) = 5;
    goto LABEL_45;
  }
  if ( v4 < 0x34 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      *(_DWORD *)v19 = v4;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x18u,
        0xADu,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        *(_QWORD *)v19);
    }
    goto LABEL_43;
  }
  Type = a3->Header.Type;
  if ( (_BYTE)Type != 0xB6
    || (Size = a3->Header.Size, (unsigned __int16)Size < 0x34u)
    || a3->Header.Revision != 1
    || (a4 = a3->Header.Size, v4 < Size) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_LLLLLLLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        Type,
        a3->Header.Size,
        a4,
        v18,
        Type,
        v20,
        a3->Header.Size,
        *(_DWORD *)v21,
        a3->Header.Revision);
LABEL_43:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = WPP_GLOBAL_Control;
      v9 = 175;
      LOBYTE(Type) = 2;
LABEL_45:
      WPP_RECORDER_SF_(v8[8], Type, 24, v9, (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids);
    }
    return 0;
  }
  v11 = ndisValidateQosParameters(a1, v6 == 1073873056, a3, Size, 0LL);
  if ( v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v19 = v11;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x18u,
        0xB0u,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        *(_QWORD *)v19);
    }
    return 0;
  }
  v12 = (_NDIS_OBJECT_HEADER)a3->Header.Size;
  v13 = 4936LL;
  if ( v6 != 1073873056 )
    v13 = 4952LL;
  v14 = 4928LL;
  if ( v6 != 1073873056 )
    v14 = 4944LL;
  v15 = (const void **)(&a1->Header.Type + v14);
  if ( *(unsigned int *)&v12 <= *(_DWORD *)((char *)&a1->Header + v13) )
  {
    if ( *((_WORD *)*v15 + 1) == *(_WORD *)&v12.Type && !memcmp(*v15, a3, a3->Header.Size) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v19 = v6;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0xB2u,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          *(_QWORD *)v19);
      }
      return 0;
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, a3->Header.Size, 1936802894LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v20) = v6;
        WPP_RECORDER_SF_DL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0xB1u,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          v12.Type,
          v20);
      }
      return 0;
    }
    if ( *v15 )
      ExFreePoolWithTag((PVOID)*v15, 0);
    *v15 = (const void *)Pool2;
    *(_NDIS_OBJECT_HEADER *)((char *)&a1->Header + v13) = v12;
  }
  memmove((void *)*v15, a3, a3->Header.Size);
  if ( v6 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x18u,
      0xB3u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      v6,
      (char)a3,
      v4);
  return 1;
}
