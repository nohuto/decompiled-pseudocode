/*
 * XREFs of ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015D440
 * Callers:
 *     ndisLwmIoctlIrpHandler @ 0x14000CEA0 (ndisLwmIoctlIrpHandler.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x14000DC60 (-ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1400471A0 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ndisIsOidAllowedFromUsermode @ 0x1400568A0 (ndisIsOidAllowedFromUsermode.c)
 *     ndisIsOidAllowedFromUsermode_0 @ 0x140057750 (ndisIsOidAllowedFromUsermode_0.c)
 *     ndisQueryStatisticsOids @ 0x1400888D0 (ndisQueryStatisticsOids.c)
 *     ndisValidOid @ 0x1400890F0 (ndisValidOid.c)
 *     ndisMethodDeviceOid @ 0x1400C8D94 (ndisMethodDeviceOid.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisMiniportOidIoctl(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_USER_OPEN_CONTEXT *a2,
        int a3,
        unsigned int a4,
        unsigned int Size,
        unsigned __int8 *Src,
        struct _MDL *MemoryDescriptorList,
        unsigned int *a8)
{
  __int64 v10; // r14
  unsigned int v11; // edi
  _DWORD *v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned __int8 *v16; // r15
  int v17; // r8d
  NDIS_OID v18; // r12d
  int v19; // ecx
  int v20; // eax
  NDIS_REQUEST_TYPE RequestType; // ecx
  UINT BytesNeeded; // eax
  int v23; // edx
  __int64 v24; // r14
  unsigned int v25; // r12d
  size_t v26; // r14
  _DWORD *v27; // rax
  _DWORD *v28; // r14
  ULONG v29; // ebx
  unsigned int *v30; // rax
  int v31; // eax
  char v32; // r8
  int v34; // ecx
  int v35; // eax
  NDIS_OID v36; // r12d
  size_t ByteCount; // r14
  PVOID MappedSystemVa; // rsi
  void *Pool2; // rax
  void *v40; // rbx
  int v41; // eax
  unsigned int BytesWritten; // r9d
  int v43; // edx
  _DWORD *v44; // rax
  unsigned int v45; // r9d
  int v46; // edx
  int v47; // ecx
  __int64 v48; // r14
  int v49; // ecx
  unsigned int v50; // r14d
  _DWORD *v51; // rax
  _DWORD *v52; // rdi
  __int64 v53; // rax
  int v54; // eax
  ULONG Priority[2]; // [rsp+28h] [rbp-D8h]
  __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+58h] [rbp-A8h]
  char v58[8]; // [rsp+60h] [rbp-A0h]
  struct _NDIS_OID_REQUEST v59; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)v58 = a1;
  v57 = (__int64)a8;
  v10 = a4;
  memset(&v59, 0, 0xF8uLL);
  v11 = 0;
  v12 = 0LL;
  LOBYTE(v56) = 0;
  *a8 = 0;
  if ( a3 != 1507484 )
  {
    switch ( a3 )
    {
      case 1507330:
        if ( (unsigned int)v10 < 4 )
          return (unsigned int)-1073741811;
        v36 = *(_DWORD *)Src;
        if ( !ndisIsOidAllowedFromUsermode(*(_DWORD *)Src) )
          return (unsigned int)-1073741790;
        if ( !ndisValidOid((__int64)a2, v36) )
          return (unsigned int)-1073741811;
        if ( MemoryDescriptorList )
        {
          ByteCount = MemoryDescriptorList->ByteCount;
          if ( (_DWORD)ByteCount )
          {
            if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
              MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
            else
              MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000000u);
            if ( !MappedSystemVa )
              return v11;
            Pool2 = (void *)ExAllocatePool2(64LL, ByteCount, 1835091022LL);
            v40 = Pool2;
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            memmove(Pool2, MappedSystemVa, ByteCount);
LABEL_61:
            v41 = ndisQueryDeviceOid(a2, &v59, v36, v40, ByteCount);
            BytesWritten = v59.DATA.QUERY_INFORMATION.BytesWritten;
            v43 = v41;
            v44 = (_DWORD *)v57;
            *(_DWORD *)v57 = v59.DATA.QUERY_INFORMATION.BytesWritten;
            if ( BytesWritten > (unsigned int)ByteCount )
            {
              *v44 = 0;
              v11 = ndisConvertNdisStatusToNtStatusForIoctl(0, -1073676266, 0);
            }
            else
            {
              v11 = ndisConvertNdisStatusToNtStatusForIoctl(0, v43, 0);
              if ( !v46 && v45 && MappedSystemVa )
              {
                if ( !v40 )
                  return v11;
                memmove(MappedSystemVa, v40, v45);
                goto LABEL_67;
              }
            }
            if ( !v40 )
              return v11;
LABEL_67:
            ExFreePoolWithTag(v40, 0);
            return v11;
          }
        }
        else
        {
          LODWORD(ByteCount) = 0;
        }
        v40 = 0LL;
        MappedSystemVa = 0LL;
        goto LABEL_61;
      case 1507334:
        v48 = *((_QWORD *)a2 + 2);
        if ( !v48 )
          return (unsigned int)-1073741808;
        v25 = *(_DWORD *)v48;
        v28 = *(_DWORD **)(v48 + 8);
        goto LABEL_33;
      case 1507342:
        goto LABEL_29;
      case 1507368:
      case 1507372:
        if ( a3 == 1507372 )
        {
          if ( (unsigned int)v10 < 4 || ((unsigned __int8)Src & 3) != 0 || (v10 & 3) != 0 )
            return (unsigned int)-1073741811;
          v50 = (unsigned int)v10 >> 2;
          v51 = (_DWORD *)ExAllocatePool2(66LL, 4LL * v50, 1835091022LL);
          v12 = v51;
          if ( !v51 )
            return v11;
          memmove(v51, Src, 4LL * v50);
          v52 = v12;
        }
        else
        {
          v53 = *((_QWORD *)a2 + 2);
          if ( !v53 )
            return (unsigned int)-1073741808;
          v50 = *(_DWORD *)v53;
          v52 = *(_DWORD **)(v53 + 8);
        }
        if ( !ndisIsOidAllowedFromUsermode_0(v52, v50) )
        {
          v11 = -1073741790;
          goto LABEL_41;
        }
        Priority[0] = Size;
        v31 = ndisQueryStatisticsOids(
                *(__int64 *)v58,
                a2,
                (__int64)v52,
                v50,
                (unsigned int *)Src,
                *(size_t *)Priority,
                (_DWORD *)v57,
                1,
                &v56);
        v32 = 0;
        goto LABEL_40;
      case 1507376:
        if ( (unsigned int)v10 < 0xC || ((unsigned __int8)Src & 7) != 0 || !ndisValidOid((__int64)a2, *(_DWORD *)Src) )
          return (unsigned int)-1073741811;
        v54 = ndisMethodDeviceOid((__int64)a2, &v59, (int *)Src, v10, Size);
        *(_DWORD *)v57 = v59.DATA.METHOD_INFORMATION.BytesWritten + 8;
        v23 = v54;
        return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v23, 0);
      case 1507390:
        LOBYTE(v56) = 1;
LABEL_29:
        if ( (unsigned int)v10 < 4 || ((unsigned __int8)Src & 3) != 0 || (v10 & 3) != 0 )
          return (unsigned int)-1073741811;
        v24 = (unsigned int)v10 >> 2;
        v25 = v24;
        v26 = 4 * v24;
        v27 = (_DWORD *)ExAllocatePool2(66LL, v26, 1835091022LL);
        v12 = v27;
        if ( !v27 )
          return v11;
        memmove(v27, Src, v26);
        v28 = v12;
LABEL_33:
        if ( ndisIsOidAllowedFromUsermode_0(v28, v25) )
        {
          if ( MemoryDescriptorList )
          {
            v29 = MemoryDescriptorList->ByteCount;
            if ( v29 )
            {
              v30 = (unsigned int *)((MemoryDescriptorList->MdlFlags & 5) != 0
                                   ? MemoryDescriptorList->MappedSystemVa
                                   : MmMapLockedPagesSpecifyCache(
                                       MemoryDescriptorList,
                                       0,
                                       MmCached,
                                       0LL,
                                       0,
                                       0x40000000u));
              if ( v30 )
              {
                Priority[0] = v29;
                v31 = ndisQueryStatisticsOids(
                        *(__int64 *)v58,
                        a2,
                        (__int64)v28,
                        v25,
                        v30,
                        *(size_t *)Priority,
                        (_DWORD *)v57,
                        0,
                        &v56);
                v32 = v56;
LABEL_40:
                v11 = ndisConvertNdisStatusToNtStatusForIoctl(0, v31, v32);
              }
            }
          }
        }
        else
        {
          v11 = -1073741790;
        }
LABEL_41:
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
        return v11;
      default:
        return (unsigned int)-1073741822;
    }
  }
  if ( (unsigned int)v10 < 0x2C )
    return (unsigned int)-1073741811;
  if ( Size < 0x2C )
    return (unsigned int)-1073741811;
  if ( *Src != 0xB9 )
    return (unsigned int)-1073741811;
  if ( *((_WORD *)Src + 1) < 0x2Cu )
    return (unsigned int)-1073741811;
  v13 = *((unsigned __int16 *)Src + 20);
  if ( v13 < 0x2C )
    return (unsigned int)-1073741811;
  v14 = v10;
  if ( (unsigned int)v10 >= Size )
    v14 = Size;
  if ( v13 > v14 )
    return (unsigned int)-1073741811;
  if ( !Src[1] )
    return (unsigned int)-1071448060;
  if ( !ndisIsOidAllowedFromUsermode(*((_DWORD *)Src + 3)) )
    return (unsigned int)-1073741790;
  if ( !ndisValidOid((__int64)a2, v15) )
    return (unsigned int)-1073741637;
  v16 = &Src[*((unsigned __int16 *)Src + 20)];
  if ( ((unsigned __int8)v16 & 3) != 0 )
    return (unsigned int)-2147483646;
  if ( !*((_BYTE *)a2 + 24) )
  {
    v35 = *((_DWORD *)Src + 1);
    if ( v35 )
    {
      if ( v35 != 2 )
        return (unsigned int)-1073741790;
    }
  }
  *(_DWORD *)&v59.NdisReserved[16] |= 8u;
  *(_QWORD *)&v59.NdisReserved[32] = &ndisIntReqIoctl;
  EtwActivityIdControl(3u, (LPGUID)&v59.NdisReserved[96]);
  v18 = *((_DWORD *)Src + 3);
  v59.RequestType = *((_DWORD *)Src + 1);
  v59.PortNumber = *((_DWORD *)Src + 2);
  v59.Header = (NDIS_OBJECT_HEADER)15466902;
  v59.DATA.QUERY_INFORMATION.Oid = v18;
  v59.DATA.QUERY_INFORMATION.InformationBuffer = v16;
  v59.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  if ( (unsigned int)v10 < Size )
    memset(&Src[v10], 0, Size - (unsigned int)v10);
  v19 = *((_DWORD *)Src + 1);
  if ( v19 == 2 || !v19 )
  {
    v59.DATA.QUERY_INFORMATION.InformationBufferLength = Size - *((unsigned __int16 *)Src + 20);
    memset(v16, 0, v59.DATA.QUERY_INFORMATION.InformationBufferLength);
    LOBYTE(v18) = v59.DATA.QUERY_INFORMATION.Oid;
  }
  else
  {
    v34 = v19 - 1;
    if ( v34 )
    {
      if ( v34 != 11 )
        return (unsigned int)-1073741811;
      v49 = *((unsigned __int16 *)Src + 20);
      v59.DATA.QUERY_INFORMATION.InformationBufferLength = v10 - v49;
      v59.DATA.QUERY_INFORMATION.BytesWritten = Size - v49;
      v59.DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Src + 4);
    }
    else
    {
      v59.DATA.QUERY_INFORMATION.InformationBufferLength = v10 - *((unsigned __int16 *)Src + 20);
    }
  }
  v59.Timeout = *((_DWORD *)Src + 5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v17,
      0xFu,
      (struct _GUID *)&WPP_a48ea93cdc4f3f22353657f4d507625f_Traceguids,
      (char)&v59,
      v18,
      *(_QWORD *)v58);
  v20 = ndisQuerySetMiniport(*((struct _NDIS_MINIPORT_BLOCK **)a2 + 1), 0LL, &v59, 0, 0LL);
  RequestType = v59.RequestType;
  *((_DWORD *)Src + 9) = v20;
  if ( RequestType == NdisRequestQueryStatistics || RequestType == NdisRequestQueryInformation )
  {
    *((_DWORD *)Src + 6) = v59.DATA.QUERY_INFORMATION.BytesWritten;
LABEL_23:
    BytesNeeded = v59.DATA.QUERY_INFORMATION.BytesNeeded;
LABEL_24:
    *((_DWORD *)Src + 8) = BytesNeeded;
    goto LABEL_25;
  }
  v47 = RequestType - 1;
  if ( !v47 )
  {
    *((_DWORD *)Src + 7) = v59.DATA.QUERY_INFORMATION.BytesWritten;
    goto LABEL_23;
  }
  if ( v47 == 11 )
  {
    *((_QWORD *)Src + 3) = *(_QWORD *)&v59.DATA.METHOD_INFORMATION.BytesWritten;
    BytesNeeded = v59.DATA.METHOD_INFORMATION.BytesNeeded;
    goto LABEL_24;
  }
LABEL_25:
  v23 = 0;
  *(_DWORD *)v57 = Size;
  return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v23, 0);
}
