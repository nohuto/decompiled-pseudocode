/*
 * XREFs of ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140053270
 * Callers:
 *     ndisWMIDispatch @ 0x140017150 (ndisWMIDispatch.c)
 *     NdisWdfExecuteMethod @ 0x1400967B0 (NdisWdfExecuteMethod.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x14000D630 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14000E8F0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x140053CD0 (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1400B357C (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisWmiXlateNdisOffloadToWmiOffload @ 0x1400B37A8 (ndisWmiXlateNdisOffloadToWmiOffload.c)
 *     ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1400B3AC0 (ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140176540 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_METHOD_ITEM *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int *v5; // rbx
  struct _NDIS_GUID *v7; // r13
  struct _NDIS_CO_VC_PTR_BLOCK *v9; // rsi
  int v11; // edx
  struct _NDIS_MINIPORT_BLOCK *v12; // r14
  int v13; // edx
  signed int InstanceName; // ebx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned int Flags; // eax
  __int64 SizeDataBlock; // rdx
  __int64 v18; // rcx
  bool v19; // zf
  char *v20; // r9
  unsigned int v21; // eax
  int v22; // edx
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rcx
  unsigned int Oid; // edx
  NDIS_HANDLE v27; // rax
  int v28; // edx
  ULONG v29; // ecx
  int v30; // edx
  char *v31; // rax
  NDIS_HANDLE RequestHandle; // rax
  __int64 v33; // rcx
  ULONG v34; // eax
  __int64 DataBlockOffset; // rcx
  ULONG MethodId; // eax
  unsigned int v37; // ecx
  struct _NDIS_MINIPORT_BLOCK *v38; // rcx
  unsigned int v39; // eax
  int v40; // edx
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rcx
  ULONG v45; // r11d
  signed int v46; // eax
  int v47; // edx
  ULONG v48; // ecx
  ULONG v49; // eax
  UINT BytesWritten; // eax
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // r11d
  ULONG v54; // eax
  char *v55; // r8
  __m128i v56; // xmm1
  unsigned int v57; // ecx
  unsigned int *v58; // rax
  ULONG v59; // ecx
  ULONG v60; // ecx
  ULONG v61; // ecx
  __int64 v63; // [rsp+30h] [rbp-D0h]
  struct _NDIS_GUID *v64; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v65; // [rsp+58h] [rbp-A8h]
  ULONG v66; // [rsp+60h] [rbp-A0h]
  int v67; // [rsp+64h] [rbp-9Ch]
  struct _NDIS_CO_VC_PTR_BLOCK *v68; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v69; // [rsp+70h] [rbp-90h] BYREF
  char *v70; // [rsp+78h] [rbp-88h]
  struct _NDIS_OID_REQUEST v71; // [rsp+80h] [rbp-80h] BYREF

  v5 = a5;
  v7 = a2;
  v64 = a2;
  v65 = a5;
  v9 = 0LL;
  v68 = 0LL;
  memset(&v71, 0, 0xF8uLL);
  v12 = 0LL;
  v67 = 0;
  v69 = 0LL;
  v66 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      18,
      60,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_8;
  InstanceName = ndisWmiFindInstanceName(
                   &v68,
                   a1,
                   (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName + 2),
                   *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName));
  if ( InstanceName < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        18,
        61,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    goto LABEL_128;
  }
  v9 = v68;
  v5 = v65;
  if ( !v68 )
  {
LABEL_8:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v69, 0, MPREF_WMI_EXEC);
      v12 = v69;
    }
  }
  if ( !v7 )
  {
    if ( (int)ndisWmiGetGuid(&v64, a1, &a3->WnodeHeader.Guid, 0) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          18,
          62,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
      InstanceName = -1073741811;
      goto LABEL_128;
    }
    v7 = v64;
  }
  Flags = v7->Flags;
  if ( (Flags & 0x80u) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        18,
        63,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    InstanceName = -1073741637;
    goto LABEL_128;
  }
  if ( (Flags & 0x200) == 0 )
  {
    *(_DWORD *)&v71.NdisReserved[16] |= 8u;
    *(_QWORD *)&v71.NdisReserved[32] = &ndisIntReqWmi;
    EtwActivityIdControl(3u, (LPGUID)&v71.NdisReserved[96]);
    DataBlockOffset = a3->DataBlockOffset;
    MethodId = a3->MethodId;
    v71.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_QWORD *)&v71.RequestType = 12LL;
    Oid = v7->Oid;
    v71.DATA.QUERY_INFORMATION.BytesNeeded = MethodId;
    v71.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + DataBlockOffset;
    v71.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock;
    v71.DATA.QUERY_INFORMATION.BytesWritten = a4 - DataBlockOffset;
LABEL_63:
    v71.DATA.QUERY_INFORMATION.Oid = Oid;
    goto LABEL_64;
  }
  SizeDataBlock = a3->SizeDataBlock;
  if ( (unsigned int)SizeDataBlock < 0x20
    || (v18 = a3->DataBlockOffset,
        v19 = *((_BYTE *)&a3->WnodeHeader.BufferSize + v18) == 2,
        v20 = (char *)a3 + v18,
        v70 = (char *)a3 + v18,
        !v19)
    || v20[1] != 1
    || *((_WORD *)v20 + 1) < 0x20u )
  {
    InstanceName = -1073741811;
    goto LABEL_128;
  }
  LODWORD(v69) = *((_DWORD *)v20 + 1);
  v68 = (struct _NDIS_CO_VC_PTR_BLOCK *)*((_QWORD *)v20 + 2);
  LODWORD(v64) = *((_DWORD *)v20 + 6);
  if ( (Flags & 0x2000000) == 0 )
  {
    if ( v7->Oid == 66086 && a4 - (unsigned int)v18 < 0x43C )
    {
      if ( a4 >= 0x38 )
      {
        a3->WnodeHeader.Flags |= 0x20u;
        v28 = 56;
        a3->OffsetInstanceName = v18 + 1084;
        a3->WnodeHeader.BufferSize = 56;
        InstanceName = 0;
      }
      else
      {
        InstanceName = -1073741789;
        v28 = 4;
      }
      *v65 = v28;
      goto LABEL_104;
    }
    memmove((char *)a3 + v18, v20 + 32, SizeDataBlock - 32);
    if ( (v7->Flags & 0x4000000) != 0 )
    {
      if ( a3->MethodId != 1 )
      {
        InstanceName = -1073741811;
        goto LABEL_128;
      }
      v29 = a3->DataBlockOffset;
      if ( a4 - v29 < 0x10 )
      {
        if ( a4 >= 0x38 )
        {
          a3->WnodeHeader.Flags |= 0x20u;
          v30 = 56;
          a3->OffsetInstanceName = v29 + 16;
          a3->WnodeHeader.BufferSize = 56;
          InstanceName = 0;
        }
        else
        {
          InstanceName = -1073741789;
          v30 = 4;
        }
        *v65 = v30;
        goto LABEL_104;
      }
      *(_DWORD *)&v71.NdisReserved[16] |= 8u;
      *(_QWORD *)&v71.NdisReserved[32] = &ndisIntReqWmi;
      v67 = 16;
      EtwActivityIdControl(3u, (LPGUID)&v71.NdisReserved[96]);
      v71.Header = (NDIS_OBJECT_HEADER)15466902;
      Oid = v7->Oid;
      v71.PortNumber = (unsigned int)v69;
      v31 = (char *)a3 + a3->DataBlockOffset;
      v71.RequestType = NdisRequestSetInformation;
      v71.DATA.QUERY_INFORMATION.InformationBuffer = v31;
      v71.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock - 32;
    }
    else
    {
      *(_DWORD *)&v71.NdisReserved[16] |= 8u;
      *(_QWORD *)&v71.NdisReserved[32] = &ndisIntReqWmi;
      EtwActivityIdControl(3u, (LPGUID)&v71.NdisReserved[96]);
      v33 = a3->DataBlockOffset;
      v71.PortNumber = (unsigned int)v69;
      v34 = a3->MethodId;
      v71.Header = (NDIS_OBJECT_HEADER)15466902;
      v71.RequestType = NdisRequestMethod;
      Oid = v7->Oid;
      v71.DATA.QUERY_INFORMATION.BytesNeeded = v34;
      v71.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v33;
      v71.DATA.QUERY_INFORMATION.InformationBufferLength = a3->SizeDataBlock - 32;
      v71.DATA.QUERY_INFORMATION.BytesWritten = a4 - v33;
    }
    v71.RequestId = v68;
    RequestHandle = &ndisIntReqWmi;
    if ( !v68 )
      RequestHandle = v71.RequestHandle;
    v71.RequestHandle = RequestHandle;
    v71.Timeout = (unsigned int)v64;
    goto LABEL_63;
  }
  v21 = v7->Oid;
  if ( v21 == -67042805 || v21 == -67042803 )
  {
    if ( a4 - (unsigned int)v18 < 0x12C )
    {
      if ( a4 >= 0x38 )
      {
        a3->WnodeHeader.Flags |= 0x20u;
        v23 = 56;
        a3->OffsetInstanceName = v18 + 300;
        a3->WnodeHeader.BufferSize = 56;
        InstanceName = 0;
      }
      else
      {
        InstanceName = -1073741789;
        v23 = 4;
      }
      *v65 = v23;
      goto LABEL_104;
    }
  }
  else if ( v21 + 67042802 <= 1 && a4 - (unsigned int)v18 < 0x20 )
  {
    if ( a4 >= 0x38 )
    {
      a3->WnodeHeader.Flags |= 0x20u;
      v22 = 56;
      a3->OffsetInstanceName = v18 + 32;
      a3->WnodeHeader.BufferSize = 56;
      InstanceName = 0;
    }
    else
    {
      InstanceName = -1073741789;
      v22 = 4;
    }
    *v65 = v22;
    goto LABEL_104;
  }
  *(_DWORD *)&v71.NdisReserved[16] |= 8u;
  *(_QWORD *)&v71.NdisReserved[32] = &ndisIntReqWmi;
  EtwActivityIdControl(3u, (LPGUID)&v71.NdisReserved[96]);
  v25 = a3->DataBlockOffset;
  v71.Header = (NDIS_OBJECT_HEADER)15466902;
  Oid = v7->Oid;
  v71.DATA.QUERY_INFORMATION.Oid = Oid;
  v71.RequestType = NdisRequestQueryStatistics;
  v71.PortNumber = *((_DWORD *)v70 + 1);
  v71.DATA.QUERY_INFORMATION.InformationBuffer = (char *)a3 + v25;
  v71.DATA.QUERY_INFORMATION.InformationBufferLength = a4 - v25;
  v71.RequestId = v68;
  v27 = &ndisIntReqWmi;
  if ( !v68 )
    v27 = v71.RequestHandle;
  v71.RequestHandle = v27;
  v71.Timeout = (unsigned int)v64;
LABEL_64:
  v37 = v7->Oid;
  if ( v37 != -50265846 && (((v37 + 50265845) & 0xFFFFFFF9) != 0 || v37 == -50265839) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v24,
        0x40u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)&v71,
        Oid,
        a1);
    if ( v9 || (v38 = v12) == 0LL )
      v38 = a1;
    v39 = ndisQuerySetMiniport(v38, v9, &v71, 0, 0LL);
  }
  else
  {
    v39 = ndisOidPMAddRemove(a1, 0LL, &v71);
  }
  LODWORD(v64) = v39;
  v41 = v39;
  if ( ((v39 + 1073676268) & 0xFFFFFFFD) != 0 )
  {
    if ( v39 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v40,
          18,
          65,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
        v41 = (unsigned int)v64;
      }
      if ( (byte_14011D041 & 0x10) != 0 )
      {
        McTemplateK0jqxddq_EtwWriteTransfer(
          v41,
          (unsigned int)&ExecuteMethodFailed,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          v41,
          1,
          a3->MethodId);
        v41 = (unsigned int)v64;
      }
      if ( (v7->Flags & 0x200) != 0 )
      {
        if ( (v41 & 0xC0010000) == 0xC0010000 )
          v41 = (unsigned __int16)v41 | 0xC0230000;
      }
      else if ( v41 != 259 && v41 != -2147483643 )
      {
        v42 = -1073741823;
        if ( v41 != -1073741823 && v41 != -1073741670 && v41 != -1073741637 )
        {
          if ( v41 == -1073676267 )
            v42 = -1073741811;
          InstanceName = v42;
          goto LABEL_128;
        }
      }
      InstanceName = v41;
LABEL_104:
      if ( InstanceName == 259 )
        goto LABEL_130;
      goto LABEL_128;
    }
    if ( v71.RequestType == NdisRequestMethod )
    {
      v43 = v7->Oid;
      v44 = a3->DataBlockOffset;
      if ( v43 == 66086 )
      {
        ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams((char *)a3 + v44);
        v45 = a3->DataBlockOffset + 1084;
        a3->SizeDataBlock = 1084;
      }
      else if ( v43 == 66085 )
      {
        v46 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues((char *)a3 + v44, v71.DATA.METHOD_INFORMATION.BytesWritten);
        InstanceName = v46;
        if ( v46 == -1073676268 )
        {
          if ( a4 >= 0x38 )
          {
            v47 = 56;
            v48 = a3->DataBlockOffset;
            v49 = v66 + 32;
            a3->WnodeHeader.Flags |= 0x20u;
            a3->OffsetInstanceName = v49 + v48;
            InstanceName = 0;
            a3->WnodeHeader.BufferSize = 56;
          }
          else
          {
            InstanceName = -1073741789;
            v47 = 4;
          }
          *v65 = v47;
          goto LABEL_104;
        }
        if ( v46 )
        {
          if ( (v46 & 0xC0010000) == 0xC0010000 )
            InstanceName = (unsigned __int16)v46 | 0xC0230000;
          goto LABEL_104;
        }
        v45 = v66 + a3->DataBlockOffset;
        a3->SizeDataBlock = v66;
      }
      else
      {
        BytesWritten = v71.DATA.METHOD_INFORMATION.BytesWritten;
        a3->SizeDataBlock = v71.DATA.METHOD_INFORMATION.BytesWritten;
        v45 = v44 + BytesWritten;
      }
    }
    else
    {
      v51 = v7->Oid;
      if ( v71.RequestType == NdisRequestSetInformation )
      {
        if ( v51 == -50265846 || v51 == -50265843 )
        {
          v54 = 196;
          v45 = a3->DataBlockOffset + 196;
        }
        else
        {
          v52 = a3->DataBlockOffset;
          v53 = v67;
          *(_OWORD *)((char *)&a3->WnodeHeader.BufferSize + v52) = 0LL;
          *(ULONG *)((char *)&a3->WnodeHeader.BufferSize + v52) = 1048837;
          *((_BYTE *)&a3->WnodeHeader.HistoricalContext + v52) = v71.SupportedRevision;
          v45 = a3->DataBlockOffset + v53;
          v54 = v67;
        }
        a3->SizeDataBlock = v54;
      }
      else if ( v51 == -67042805 || v51 == -67042803 )
      {
        ndisWmiXlateNdisOffloadToWmiOffload((char *)a3 + a3->DataBlockOffset);
        v45 = a3->DataBlockOffset + 300;
        a3->SizeDataBlock = 300;
      }
      else if ( v51 + 67042802 <= 1 )
      {
        v55 = (char *)a3 + a3->DataBlockOffset;
        v56 = *(__m128i *)v55;
        *((_DWORD *)v55 + 7) = *((_DWORD *)v55 + 4);
        *(_DWORD *)v55 = _mm_cvtsi128_si32(v56);
        *((_WORD *)v55 + 1) = 32;
        *((_DWORD *)v55 + 1) = v56.m128i_i32[1];
        v57 = _mm_cvtsi128_si32(_mm_srli_si128(v56, 8));
        *((_DWORD *)v55 + 2) = v57 & 3;
        *((_DWORD *)v55 + 3) = (v57 >> 2) & 3;
        *((_DWORD *)v55 + 4) = (v57 >> 4) & 3;
        *((_DWORD *)v55 + 5) = (unsigned __int8)v57 >> 6;
        *((_DWORD *)v55 + 6) = _mm_srli_si128(v56, 8).m128i_i32[1];
        v45 = a3->DataBlockOffset + 32;
        a3->SizeDataBlock = 32;
      }
      else
      {
        v45 = v71.DATA.QUERY_INFORMATION.BytesWritten + a3->DataBlockOffset;
        a3->SizeDataBlock = v71.DATA.QUERY_INFORMATION.BytesWritten;
      }
    }
    v58 = v65;
    a3->WnodeHeader.BufferSize = v45;
    *v58 = v45;
  }
  else
  {
    v59 = a3->DataBlockOffset;
    if ( v71.RequestType == NdisRequestMethod )
      v60 = v71.DATA.METHOD_INFORMATION.BytesNeeded + v59;
    else
      v60 = v71.DATA.QUERY_INFORMATION.BytesNeeded + v59;
    v61 = v60 + 32;
    if ( a4 < 0x38 )
    {
      InstanceName = -1073741789;
      *v65 = 4;
      goto LABEL_128;
    }
    a3->WnodeHeader.Flags |= 0x20u;
    a3->WnodeHeader.BufferSize = 56;
    a3->OffsetInstanceName = v61;
    *v5 = 56;
  }
  InstanceName = 0;
LABEL_128:
  if ( v9 )
    ndisDereferenceVcPtr(v9);
LABEL_130:
  if ( v12 )
    ndisDereferenceMiniport(v12, 0x62u);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v63) = InstanceName;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x42u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      v63);
  }
  return (unsigned int)InstanceName;
}
