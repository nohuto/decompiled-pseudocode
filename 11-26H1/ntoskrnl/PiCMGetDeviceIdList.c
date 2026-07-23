/*
 * XREFs of PiCMGetDeviceIdList @ 0x140AA1B80
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140498338 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x140498420 (McTemplateK0d_EtwWriteTransfer.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureDeviceListInputData @ 0x140AA1F70 (PiCMCaptureDeviceListInputData.c)
 *     PiCMConvertDeviceListFilters @ 0x140AA2238 (PiCMConvertDeviceListFilters.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140AA2310 (_CmGetMatchingFilteredDeviceList.c)
 *     _CmGetDeviceRelationsList @ 0x140AA2650 (_CmGetDeviceRelationsList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(void *a1, __int64 a2, char *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _WORD *Pool2; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  int v11; // r14d
  __int64 v12; // r12
  unsigned int v13; // esi
  unsigned int v14; // r10d
  int DeviceRelationsList; // ebx
  int v16; // r10d
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  char (__fastcall *v20)(int, int, int, struct _SECURITY_SUBJECT_CONTEXT *); // r9
  int v21; // edx
  int v22; // eax
  const wchar_t *v24; // rcx
  _QWORD v25[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v26; // [rsp+68h] [rbp-19h]
  __int64 v27; // [rsp+78h] [rbp-9h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-1h] BYREF

  v25[0] = 0LL;
  v27 = 0LL;
  Pool2 = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  *a6 = 0;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  v26 = 0LL;
  v9 = PiCMCaptureDeviceListInputData(a1);
  if ( v9 < 0 )
    goto LABEL_23;
  v11 = DWORD1(v26);
  v12 = *((_QWORD *)&v26 + 1);
  if ( (byte_140EF412B & 4) != 0 )
  {
    if ( WORD2(v26) )
    {
      switch ( WORD2(v26) )
      {
        case 1u:
          v24 = L"Enum";
          break;
        case 2u:
          v24 = L"Service";
          break;
        case 4u:
          v24 = L"EjectRelations";
          break;
        case 8u:
          v24 = L"RemovalRelations";
          break;
        case 0x10u:
          v24 = L"PowerRelations";
          break;
        case 0x20u:
          v24 = L"BusRelations";
          break;
        case 0x40u:
          v24 = L"TransportRelations";
          break;
        case 0x80u:
          v24 = L"Class";
          break;
        default:
          v24 = L"Unknown";
          break;
      }
    }
    else
    {
      v24 = L"None";
    }
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v24,
      (__int64)KMPnPEvt_CfgMgr_DeviceList_Start,
      v10,
      *((const wchar_t **)&v26 + 1),
      v24,
      BYTE6(v26) & 1);
  }
  if ( !a3 || a4 < 0x14 )
    goto LABEL_51;
  if ( (DWORD1(v26) & 0x20000) != 0 && !PiAuDoesClientHaveAccess(2u) )
  {
    DeviceRelationsList = -1073741790;
    goto LABEL_29;
  }
  v13 = 0;
  if ( a4 - 20 >= 2 )
    v13 = a4 - 20;
  if ( v13 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      DeviceRelationsList = -1073741670;
      goto LABEL_29;
    }
    v14 = v13 >> 1;
  }
  else
  {
    Pool2 = 0LL;
    v14 = 0;
  }
  LODWORD(v25[0]) = v14;
  DeviceRelationsList = PiCMConvertDeviceListFilters(DWORD1(v26), (char *)v25 + 4);
  if ( DeviceRelationsList < 0 )
    goto LABEL_29;
  if ( (unsigned __int16)v11 == 4
    || (v17 = (unsigned int)(unsigned __int16)v11 - 8, (unsigned int)v17 <= 0x38)
    && (v18 = 0x100000001000101LL, _bittest64(&v18, v17)) )
  {
    if ( v12 )
    {
      DeviceRelationsList = CmGetDeviceRelationsList(
                              PiPnpRtlCtx,
                              v12,
                              HIDWORD(v25[0]) & 0xFFFFFEFF,
                              (_DWORD)Pool2,
                              v16,
                              (__int64)v25);
      if ( DeviceRelationsList < 0 )
        goto LABEL_29;
      goto LABEL_19;
    }
LABEL_51:
    DeviceRelationsList = -1073741811;
    goto LABEL_29;
  }
  SeCaptureSubjectContext(&SubjectContext);
  p_SubjectContext = &SubjectContext;
  LODWORD(v20) = 0;
  if ( (v11 & 0x20000) != 0 )
    p_SubjectContext = 0LL;
  else
    v20 = PiCMMandatoryFilterCallback;
  DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                          PiPnpRtlCtx,
                          v12,
                          HIDWORD(v25[0]),
                          (_DWORD)v20,
                          (__int64)p_SubjectContext,
                          (__int64)Pool2,
                          v25[0],
                          (__int64)v25);
  SeReleaseSubjectContext(&SubjectContext);
  if ( DeviceRelationsList < 0 )
    goto LABEL_29;
LABEL_19:
  v21 = v25[0];
  if ( LODWORD(v25[0]) )
  {
LABEL_20:
    v22 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v21, 0, Pool2, 2 * v21, SHIDWORD(v27), a3, a4, a6);
    goto LABEL_21;
  }
  LODWORD(v25[0]) = 1;
  if ( v13 >= 2 )
  {
    *Pool2 = 0;
    v21 = v25[0];
    goto LABEL_20;
  }
  DeviceRelationsList = -1073741789;
LABEL_29:
  v22 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * LODWORD(v25[0]), 0, 0LL, 0, SHIDWORD(v27), a3, a4, a6);
LABEL_21:
  v9 = v22;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_23:
  if ( *((_QWORD *)&v26 + 1) )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, *((void **)&v26 + 1));
  if ( (byte_140EF412B & 4) != 0 )
    McTemplateK0d_EtwWriteTransfer(v8, (__int64)KMPnPEvt_CfgMgr_DeviceList_Stop, v10, v9);
  return (unsigned int)v9;
}
