/*
 * XREFs of ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x140045F20
 * Callers:
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1400455E0 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ndisQuerySupportedGuidToOidList @ 0x140083C30 (ndisQuerySupportedGuidToOidList.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140047930 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1400C4804 (WPP_RECORDER_SF_Ddd_ea_1400C4804.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CO_VC_PTR_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        __int64 a4,
        struct _NDIS_FILTER_BLOCK *a5,
        struct _NDIS_FILTER_BLOCK *a6,
        unsigned int a7,
        void **a8,
        unsigned int *a9,
        unsigned int *a10)
{
  void *v10; // rbp
  unsigned int v11; // edi
  struct _NDIS_OID_REQUEST *v12; // rsi
  struct _NDIS_MINIPORT_BLOCK *i; // r15
  unsigned int SetMiniport; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // ebx
  UINT BytesNeeded; // ecx
  __int64 Pool2; // rax
  int v22; // edx
  int v23; // [rsp+20h] [rbp-38h]

  v10 = 0LL;
  v11 = 0;
  v12 = a3;
  for ( i = a1; ; a1 = i )
  {
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, 0LL);
    v18 = SetMiniport;
    if ( SetMiniport != -1073676268 && SetMiniport != -1073676266 && SetMiniport != -2147483643 )
    {
      if ( !SetMiniport )
      {
        *a10 = v12->DATA.QUERY_INFORMATION.BytesWritten;
        goto LABEL_7;
      }
      goto LABEL_18;
    }
    BytesNeeded = v12->DATA.QUERY_INFORMATION.BytesNeeded;
    if ( BytesNeeded <= v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          v16,
          v17,
          v23,
          v12->DATA.QUERY_INFORMATION.Oid,
          BytesNeeded,
          v11);
      v18 = -1073741823;
LABEL_18:
      *a10 = 0;
      v11 = 0;
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0);
        v10 = 0LL;
      }
      goto LABEL_7;
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    v11 = v12->DATA.QUERY_INFORMATION.BytesNeeded;
    Pool2 = ExAllocatePool2(64LL, v11, a7);
    v10 = (void *)Pool2;
    if ( !Pool2 )
      break;
    v12->DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)Pool2;
    a3 = v12;
    v12->DATA.QUERY_INFORMATION.InformationBufferLength = v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      11,
      11,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v11,
      v12->DATA.QUERY_INFORMATION.Oid);
  }
  v18 = -1073741670;
  *a10 = 0;
  v11 = 0;
LABEL_7:
  *a8 = v10;
  *a9 = v11;
  return v18;
}
