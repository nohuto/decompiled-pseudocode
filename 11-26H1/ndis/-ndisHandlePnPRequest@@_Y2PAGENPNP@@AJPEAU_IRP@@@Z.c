/*
 * XREFs of ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0
 * Callers:
 *     ndisDispatchRequest @ 0x14000C5E0 (ndisDispatchRequest.c)
 * Callees:
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x14001A8F0 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001B760 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x140034820 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x14003F230 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x140045A40 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x140049D50 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x140049F30 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisGetVersion @ 0x140057D40 (NdisGetVersion.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x14006B9E0 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z @ 0x140071060 (-UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z.c)
 *     ndisHandleUModePnPOp @ 0x140072630 (ndisHandleUModePnPOp.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x14009734C (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1400974A0 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     Feature_359445817__private_IsEnabledDeviceUsageNoInline @ 0x1400A60C4 (Feature_359445817__private_IsEnabledDeviceUsageNoInline.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1400B278C (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400D1D10 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     WdmlibIoValidateDeviceIoControlAccess @ 0x1400E7D44 (WdmlibIoValidateDeviceIoControlAccess.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x140138B10 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x14013B6CC (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x14013BA78 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x14013C038 (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisValidateEmbeddedBufferBounds @ 0x14013C094 (ndisValidateEmbeddedBufferBounds.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x14013C154 (ndisValidateNdisVarDataDesc32InputString.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x14013C1E4 (ndisValidateNdisVarDataDescInputString.c)
 *     ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x14013C274 (-ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z.c)
 *     ?ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_STATISTICS_OUT@@KAEA_K@Z @ 0x140141E08 (-ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_S.c)
 *     ?ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_SINGLE_STATISTIC_OUT@@AEA_K@Z @ 0x140141EE8 (-ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_S.c)
 *     NdisIfAllocateNetLuidIndex @ 0x140146A10 (NdisIfAllocateNetLuidIndex.c)
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x140147148 (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x140167E70 (NdisIfFreeNetLuidIndex.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x140169750 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x14016A940 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ndisPnpRefresh @ 0x14016B150 (ndisPnpRefresh.c)
 *     ndisEnumerateInterfaces32 @ 0x140174CBC (ndisEnumerateInterfaces32.c)
 *     ndisEnumerateInterfaces @ 0x140179810 (ndisEnumerateInterfaces.c)
 */

NTSTATUS __fastcall ndisHandlePnPRequest(struct _IRP *a1, __int64 a2, __int64 a3, enum _NDIS_MP_REFTAG a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v6; // edi
  _FILE_OBJECT *FileObject; // rax
  char *FsContext; // r10
  NTSTATUS result; // eax
  unsigned int LowPart; // eax
  char v11; // r12
  unsigned __int64 Options; // r14
  unsigned __int64 Length; // r15
  _DWORD *p_Type; // rbx
  __int64 v15; // r9
  unsigned __int64 MasterIrp; // rdi
  unsigned int v17; // r15d
  unsigned int v18; // edx
  unsigned int v19; // ecx
  _DWORD *Pool2; // rax
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // r9
  __int64 v24; // r9
  size_t v25; // r8
  void *v26; // rdx
  char *v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // r9
  __int64 v32; // r9
  const WCHAR *v33; // rdx
  unsigned __int64 *p_Information; // rsi
  int v35; // edi
  unsigned __int64 v36; // rax
  NDIS_STATUS v37; // edi
  int v38; // eax
  unsigned int v39; // r13d
  struct _NDIS_MINIPORT_BLOCK *v40; // r14
  int active; // edi
  struct _NDIS_MINIPORT_BLOCK *v42; // rsi
  int v43; // edi
  int v44; // r9d
  int v45; // edi
  int v46; // r9d
  int v47; // edi
  enum _NDIS_IDLE_CONDITION v48; // r14d
  struct _NDIS_MINIPORT_BLOCK *v49; // rax
  struct _NDIS_MINIPORT_BLOCK *v50; // rsi
  unsigned int *v51; // rcx
  struct _NDIS_MINIPORT_BLOCK *v52; // rcx
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int32 v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  bool v59; // zf
  int v60; // eax
  struct _NDIS_MINIPORT_BLOCK **v61; // [rsp+30h] [rbp-49h]
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *v62; // [rsp+50h] [rbp-29h]
  struct _UNICODE_STRING v63; // [rsp+58h] [rbp-21h] BYREF
  struct _UNICODE_STRING v64; // [rsp+68h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-1h] BYREF
  void *v66; // [rsp+E0h] [rbp+67h] BYREF
  void *Src; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int pNetLuidIndex; // [rsp+F0h] [rbp+77h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v69; // [rsp+F8h] [rbp+7Fh] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  DestinationString = 0LL;
  v6 = 0;
  LODWORD(Src) = 0;
  LODWORD(v66) = 0;
  FileObject = CurrentStackLocation->FileObject;
  pNetLuidIndex = 0;
  v69 = 0LL;
  *(_QWORD *)&v63.Length = CurrentStackLocation;
  FsContext = (char *)FileObject->FsContext;
  v62 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext;
  if ( !FsContext )
    return -1073741809;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v11 = *FsContext;
  if ( (LowPart & 3) != 0 )
    return -1073741811;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  p_Type = &a1->AssociatedIrp.MasterIrp->Type;
  if ( LowPart <= 0x170008 )
  {
    if ( LowPart != 1507336 )
    {
      if ( LowPart == 1198084 || LowPart == 1198092 || LowPart == 1214472 || LowPart == 1214480 )
      {
        v6 = ndisKnobIoctl(FsContext[1] != 0, LowPart, Options, Length, p_Type, (unsigned int *)&v66);
        if ( !v6 )
        {
          a1->IoStatus.Information = (unsigned int)v66;
          return 0;
        }
      }
      return v6;
    }
    if ( v11 )
    {
      if ( !IoIs32bitProcess(a1) )
      {
        v22 = 0LL;
LABEL_29:
        if ( (unsigned int)Options < 0x48 )
        {
          v6 = -1073741789;
          goto LABEL_41;
        }
        v28 = *((unsigned __int16 *)p_Type + 13)
            + *((unsigned __int16 *)p_Type + 21)
            + *((unsigned __int16 *)p_Type + 29);
        v29 = v28 + p_Type[4];
        if ( v29 < v28 )
          goto LABEL_40;
        v30 = v29 + 72;
        if ( v30 < 0x48 )
          goto LABEL_40;
        if ( (unsigned int)Options < v30 )
        {
          v6 = -1073741789;
          goto LABEL_41;
        }
        if ( ndisValidateNdisVarDataDescInputString(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int16 *)p_Type + 12,
               v15,
               (__int64)(p_Type + 6))
          && ndisValidateNdisVarDataDescInputString(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int16 *)p_Type + 20,
               v31,
               (__int64)(p_Type + 10))
          && ndisValidateNdisVarDataDescInputString(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int16 *)p_Type + 28,
               v32,
               (__int64)(p_Type + 14))
          && ndisValidateEmbeddedBufferBounds(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int64)(p_Type + 2),
               0xCu,
               0,
               p_Type[2],
               p_Type[4],
               8,
               (unsigned __int64 *)p_Type + 1) )
        {
          v6 = ndisHandleUModePnPOp((__int64)p_Type);
        }
        else
        {
LABEL_40:
          v6 = -1073741811;
        }
LABEL_41:
        if ( v22 )
          goto LABEL_42;
        return v6;
      }
      MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
      v64 = 0LL;
      v17 = *(_DWORD *)(*(_QWORD *)&v63.Length + 16LL);
      Src = 0LL;
      if ( (unsigned int)Options >= 0x28 )
      {
        v18 = *(unsigned __int16 *)(MasterIrp + 18)
            + *(unsigned __int16 *)(MasterIrp + 26)
            + *(unsigned __int16 *)(MasterIrp + 34);
        v19 = v18 + *(_DWORD *)(MasterIrp + 12);
        if ( v19 < v18 || v19 >= 0xFFFFFFD8 )
          return -1073741811;
        if ( (unsigned int)Options >= v19 + 40 )
        {
          if ( v19 < 0xFFFFFFB8 )
          {
            LODWORD(Options) = v19 + 80;
            if ( v19 + 80 >= 8 )
            {
              Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)Options, 538985550LL);
              v22 = (__int64)Pool2;
              if ( !Pool2 )
                return -1073741670;
              *Pool2 = *(_DWORD *)MasterIrp;
              Pool2[1] = *(_DWORD *)(MasterIrp + 4);
              p_Type = Pool2;
              v66 = Pool2 + 18;
              if ( !ndisValidateNdisVarDataDesc32InputString(
                      MasterIrp,
                      v17,
                      (unsigned __int16 *)(MasterIrp + 16),
                      v21,
                      (__int64)&v64)
                || (ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v64, v22, &v66, v22 + 24),
                    !ndisValidateNdisVarDataDesc32InputString(
                       MasterIrp,
                       v17,
                       (unsigned __int16 *)(MasterIrp + 24),
                       v23,
                       (__int64)&v64))
                || (ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v64, v22, &v66, v22 + 40),
                    !ndisValidateNdisVarDataDesc32InputString(
                       MasterIrp,
                       v17,
                       (unsigned __int16 *)(MasterIrp + 32),
                       v24,
                       (__int64)&v64))
                || (ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v64, v22, &v66, v22 + 56),
                    !ndisValidateEmbeddedBufferBounds(
                       MasterIrp,
                       v17,
                       MasterIrp + 8,
                       8u,
                       0,
                       *(_DWORD *)(MasterIrp + 8),
                       *(_DWORD *)(MasterIrp + 12),
                       4,
                       (unsigned __int64 *)&Src)) )
              {
                v6 = -1073741811;
LABEL_42:
                ExFreePoolWithTag((PVOID)v22, 0);
                return v6;
              }
              v25 = *(unsigned int *)(MasterIrp + 12);
              v26 = Src;
              v27 = (char *)(((unsigned __int64)v66 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              *(_DWORD *)(v22 + 16) = v25;
              *(_QWORD *)(v22 + 8) = &v27[-v22];
              memmove(v27, v26, v25);
              goto LABEL_29;
            }
          }
          return -1073741811;
        }
      }
      return -1073741789;
    }
    return -1073741790;
  }
  if ( LowPart <= 0x170804 )
  {
    if ( LowPart != 1509380 )
    {
      switch ( LowPart )
      {
        case 0x170010u:
          if ( IoIs32bitProcess(a1) )
          {
            if ( (unsigned int)Length < 0x20 )
            {
              a1->IoStatus.Information = 0LL;
              return -1073741789;
            }
            else
            {
              p_Information = &a1->IoStatus.Information;
              v35 = ndisEnumerateInterfaces32((char *)p_Type, (unsigned int)Length, &v66);
              v36 = (unsigned int)v66;
              *p_Information = Length;
              *p_Information = v36;
              return v35;
            }
          }
          else if ( (unsigned int)Length < 0x30 )
          {
LABEL_56:
            v37 = -1073741789;
LABEL_57:
            a1->IoStatus.Information = 0LL;
            return v37;
          }
          else
          {
            result = ndisEnumerateInterfaces((char *)p_Type, (unsigned int)Length, &v66);
            a1->IoStatus.Information = (unsigned int)v66;
          }
          return result;
        case 0x170014u:
          if ( !v11 )
            return -1073741790;
          v6 = -1073741811;
          if ( !(_DWORD)Options || (Options & 1) != 0 )
            return v6;
          v33 = &a1->AssociatedIrp.MasterIrp->Type;
          *((_WORD *)p_Type + (Options >> 1) - 1) = 0;
          RtlInitUnicodeString(&DestinationString, v33);
          return ndisHandleLegacyTransport(&DestinationString);
        case 0x170020u:
          if ( (unsigned int)Length >= 4 )
          {
            *p_Type = NdisGetVersion();
            v39 = 4;
            if ( (unsigned int)Length >= 8 )
            {
              v39 = 8;
              p_Type[1] = ndisChecked;
            }
            a1->IoStatus.Information = v39;
            return 0;
          }
          else
          {
            a1->IoStatus.Information = 0LL;
            return -1073741789;
          }
        case 0x170034u:
          NdisTraceLoggingRareFeaturePath((int)CurrentStackLocation);
          if ( !v11 )
            return -1073741790;
          if ( (unsigned int)Options < 0x30 || (unsigned int)Length < 0x30 )
            goto LABEL_56;
          result = ndisIfEnumerateNsiObjects((struct _NDIS_ENUM_NSI_OBJECTS *)p_Type, Length, (unsigned int *)&v66);
          a1->IoStatus.Information = (unsigned int)v66;
          return result;
        case 0x170040u:
          if ( !v11 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( (unsigned int)Options >= 0x10 )
          {
            if ( ndisPeriodicReceives )
            {
              if ( *(_WORD *)p_Type == 1 && *((_WORD *)p_Type + 1) == 16 )
              {
                v38 = p_Type[1];
                if ( v38 && (v38 == -1 || *((_QWORD *)p_Type + 1)) )
                {
                  ndisConfigurePeriodicReceives((struct _NDIS_SET_RECEIVE_RATE *)p_Type);
                  a1->IoStatus.Information = 0LL;
                  return 0;
                }
                else
                {
                  a1->IoStatus.Information = 0LL;
                  return -1073741811;
                }
              }
              else
              {
                a1->IoStatus.Information = 0LL;
                return -1073741735;
              }
            }
            else
            {
              a1->IoStatus.Information = 0LL;
              return -1073741823;
            }
          }
          else
          {
            a1->IoStatus.Information = 0LL;
            return -1073741789;
          }
        case 0x170044u:
          if ( !v11 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( (unsigned int)Options < 2 || (unsigned int)Length < 4 )
            goto LABEL_56;
          v37 = NdisIfAllocateNetLuidIndex(*(_WORD *)p_Type, &pNetLuidIndex);
          if ( v37 )
            goto LABEL_57;
          *p_Type = pNetLuidIndex;
          a1->IoStatus.Information = 4LL;
          return 0;
        case 0x170048u:
          if ( !v11 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( (unsigned int)Options < 8 )
            goto LABEL_90;
          result = NdisIfFreeNetLuidIndex(*((_WORD *)p_Type + 2), *p_Type);
          a1->IoStatus.Information = 0LL;
          return result;
        case 0x170054u:
          if ( !v11 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( (unsigned int)Options < 0x20C )
          {
LABEL_90:
            a1->IoStatus.Information = 0LL;
            return -1073741789;
          }
          else
          {
            result = ndisIfSetIfDescr((const WCHAR *)p_Type);
            a1->IoStatus.Information = 0LL;
          }
          return result;
        case 0x170058u:
        case 0x17005Cu:
        case 0x170060u:
          return -1073741637;
        case 0x170088u:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   1,
                                   MPREF_AOAC_NA_ACQUIRE,
                                   (int *)&Src,
                                   &v69) )
            return (int)Src;
          v40 = v69;
          if ( (mem::ReadNoFence<unsigned long,void>(&v69->Flags) & 0x80u) == 0LL )
          {
            active = ndisNicActiveAcquire(v40, v62, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, a1);
            ndisDereferenceMiniport(v40, 0);
            return active;
          }
          else
          {
            ndisDereferenceMiniport(v40, 0);
            return 0;
          }
        case 0x17008Cu:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   0,
                                   MPREF_AOAC_NA_RELEASE,
                                   (int *)&Src,
                                   &v69) )
            return (int)Src;
          v42 = v69;
          if ( (mem::ReadNoFence<unsigned long,void>(&v69->Flags) & 0x80u) == 0LL )
          {
            v43 = ndisNicActiveRelease(v42, v62, (struct _NDIS_PM_NIC_ACTIVE *)p_Type);
            ndisDereferenceMiniport(v42, 1u);
            return v43;
          }
          else
          {
            ndisDereferenceMiniport(v42, 1u);
            return 0;
          }
        case 0x1700A0u:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   1,
                                   MPREF_AOAC_WAKE_ENABLE,
                                   (int *)&Src,
                                   &v69) )
            return (int)Src;
          v45 = ndisAoAcEnableRemoteWake(v69, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 1, v44);
          ndisDereferenceMiniport(v69, 5u);
          return v45;
        case 0x1700A4u:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   1,
                                   MPREF_AOAC_WAKE_DISABLE,
                                   (int *)&Src,
                                   &v69) )
            return (int)Src;
          v47 = ndisAoAcEnableRemoteWake(v69, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 0, v46);
          ndisDereferenceMiniport(v69, 6u);
          return v47;
        case 0x1700ACu:
          if ( !v11 )
            return -1073741790;
          if ( (unsigned int)Options < 0x18 )
            return -1073741789;
          if ( *((_QWORD *)FsContext + 6) )
            return -1073740024;
          else
            return ndisIfReferenceCompartmentForUser(
                     (struct _GUID *)(p_Type + 1),
                     p_Type[5],
                     (struct _NDIS_IF_COMPARTMENT_BLOCK **)FsContext + 6);
        case 0x1700B8u:
          if ( !v11 )
            return -1073741790;
          if ( (unsigned int)Options < 4 )
            return -1073741789;
          v48 = p_Type[1];
          v49 = ndisReferenceMiniportByNetLuid(*(union _NET_LUID_LH *)(p_Type + 2), 0x6Eu);
          v50 = v49;
          if ( v49 )
          {
            if ( (mem::ReadNoFence<unsigned long,void>(&v49->Flags) & 0x80u) != 0LL
              && (mem::ReadNoFence<unsigned long,void>(v51) & 0x100) == 0 )
            {
              v52 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v62 + 4);
              if ( v52 )
              {
                if ( v52 != v50 )
                {
                  ndisDereferenceMiniport(v50, 0x6Eu);
                  return -1073741816;
                }
              }
              else
              {
                *((_QWORD *)v62 + 4) = v50;
              }
              *((_DWORD *)v62 + 14) = v48;
              NdisWdfIdle::UpdateIdleCondition(v50->IdleSm.__ptr_.__value_, v48);
              CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(v50);
              CxBlockFromMiniport->Chars.EvtCxUpdateIdleCondition(v50->MiniportAdapterContext, v48);
            }
            ndisDereferenceMiniport(v50, 0x6Eu);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0xEu,
                0x19u,
                (struct _GUID *)&WPP_a6906b87f958369cb2c210602346859b_Traceguids,
                BYTE6(*((_QWORD *)p_Type + 1)),
                (*((_QWORD *)p_Type + 1) >> 24) & 0xFFFFFF);
            v6 = -1071448058;
          }
          v54 = _InterlockedExchange((volatile __int32 *)&ndisIdleCondition, v48);
          if ( v54 != v48 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v61) = v48;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x1Au,
              (struct _GUID *)&WPP_a6906b87f958369cb2c210602346859b_Traceguids,
              v54,
              v61);
            return v6;
          }
          break;
        default:
          return v6;
      }
      return v6;
    }
    if ( FsContext[2] )
    {
      if ( (unsigned int)Options >= 0x10 )
      {
        ndisPnpRefresh((struct _GUID *)a1->AssociatedIrp.MasterIrp, a2, 0);
        return 0;
      }
      return -1073741789;
    }
    return -1073741790;
  }
  if ( LowPart > 0x175C04 )
  {
    v57 = LowPart - 1530888;
    if ( v57 )
    {
      v58 = v57 - 12;
      if ( v58 )
      {
        if ( v58 != 16388 )
          return v6;
        if ( v11 )
          return ndisReinitializeHistograms();
        return -1073741790;
      }
      if ( v11 )
      {
        if ( (unsigned int)Options >= 0xC )
        {
          if ( *p_Type != 1313105969 )
            return -1073741736;
          LODWORD(v66) = 0;
          v59 = *((_BYTE *)p_Type + 8) == 0;
          if ( *((_BYTE *)p_Type + 8) )
          {
            result = WdmlibIoValidateDeviceIoControlAccess(a1, a2);
            if ( result )
              return result;
            v59 = *((_BYTE *)p_Type + 8) == 0;
          }
          v60 = ndisCollectHistogramsForIoctl(p_Type[1], !v59, (wchar_t *)p_Type, Length, (unsigned int *)&v66);
          v6 = v60;
          if ( !v60 || v60 == -2147483643 )
          {
            a1->IoStatus.Information = (unsigned int)v66;
            if ( (unsigned int)Feature_359445817__private_IsEnabledDeviceUsageNoInline() )
            {
              if ( v6 == -2147483643 )
                a1->Flags &= ~0x40u;
            }
          }
          return v6;
        }
        return -1073741811;
      }
    }
    else if ( v11 )
    {
      if ( (unsigned int)Options >= 0x28 && (unsigned int)Length >= 0x90 )
        return ndisCollectSingleStatisticForIoctl(
                 (const struct NDIS_COLLECT_SINGLE_STATISTIC_IN *)a1->AssociatedIrp.MasterIrp,
                 (wchar_t *)a1->AssociatedIrp.MasterIrp,
                 &a1->IoStatus.Information);
      return -1073741789;
    }
    return -1073741790;
  }
  if ( LowPart != 1530884 )
  {
    v55 = LowPart - 1509384;
    if ( v55 )
    {
      v56 = v55 - 4;
      if ( !v56 )
      {
        result = ndisQueryDeviceReset(
                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                   Options,
                   Length,
                   (unsigned int *)&v66,
                   (struct _NDIS_QUERY_DEVICE_RESET *)a1->AssociatedIrp.MasterIrp);
        a1->IoStatus.Information = (unsigned int)v66;
        return result;
      }
      if ( v56 == 4 )
        return ndisInvokeDeviceReset(
                 (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                 Options,
                 (union _NET_LUID_LH *)a1->AssociatedIrp.MasterIrp,
                 a4);
      return v6;
    }
    if ( FsContext[2] )
    {
      if ( (unsigned int)Options >= 0x1C )
      {
        v66 = 0LL;
        v64 = 0LL;
        v63 = 0LL;
        if ( (unsigned __int8)ndisValidateNdisOffsetAndLengthInputString(
                                (__int64)a1,
                                (__int64)(p_Type + 1),
                                (__int64)&v63)
          && (unsigned __int8)ndisValidateNdisOffsetAndLengthInputString(
                                (__int64)a1,
                                (__int64)(p_Type + 3),
                                (__int64)&v64)
          && ndisValidateNdisOffsetAndLengthInputBufferBounds((__int64)a1, p_Type + 5, (unsigned __int64 *)&v66) )
        {
          return ndisPnpInvokeTdi(*p_Type, &v63, &v64, v66, p_Type[6]);
        }
        return -1073741811;
      }
      return -1073741789;
    }
    return -1073741790;
  }
  if ( !v11 )
    return -1073741790;
  if ( (unsigned int)Options < 0x28 || (unsigned int)Length < 0x18 )
    return -1073741789;
  if ( !*((_BYTE *)p_Type + 32) )
    return ndisCollectAllStatisticsForIoctl(
             (const struct NDIS_COLLECT_ALL_STATISTICS_IN *)p_Type,
             (struct NDIS_COLLECT_ALL_STATISTICS_OUT *)p_Type,
             Length,
             &a1->IoStatus.Information);
  result = WdmlibIoValidateDeviceIoControlAccess(a1, a2);
  if ( !result )
    return ndisCollectAllStatisticsForIoctl(
             (const struct NDIS_COLLECT_ALL_STATISTICS_IN *)p_Type,
             (struct NDIS_COLLECT_ALL_STATISTICS_OUT *)p_Type,
             Length,
             &a1->IoStatus.Information);
  return result;
}
