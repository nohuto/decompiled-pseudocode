/*
 * XREFs of NtGdiGetCOPPCompatibleOPMInformation @ 0x1401C9610
 * Callers:
 *     <none>
 * Callees:
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1400831A8 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1400836EC (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ??1CAutoUnlockBuffer@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x140149098 (--1CAutoUnlockBuffer@-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ?AcquireBufferSafe@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA?AVCAutoUnlockBuffer@1@XZ @ 0x14014A4DC (-AcquireBufferSafe@-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA-AVCAutoUnl.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x14015D748 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1401C9480 (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 */

__int64 __fastcall NtGdiGetCOPPCompatibleOPMInformation(unsigned __int64 a1, const void *a2, void *a3)
{
  __int64 v6; // rbp
  PLOOKASIDE_LIST_EX *v7; // rbx
  struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *v8; // rax
  PLOOKASIDE_LIST_EX *v9; // rcx
  struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *v10; // r14
  unsigned int v11; // edi
  int HandleObject; // ebx
  __int64 v13; // rbx
  struct _KMUTANT **v14; // rbp
  int COPPCompatibleInformation; // eax
  void *Src[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[7]; // [rsp+30h] [rbp-38h] BYREF
  COPMProtectedOutput *v19; // [rsp+88h] [rbp+20h] BYREF

  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = (PLOOKASIDE_LIST_EX *)(*(_QWORD *)(v6 + 3648) + 16LL);
  v8 = (struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *)ExAllocateFromLookasideListEx(*v7);
  v9 = (PLOOKASIDE_LIST_EX *)(*(_QWORD *)(v6 + 3648) + 8LL);
  v18[0] = v8;
  v10 = v8;
  v18[1] = v7;
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::AcquireBufferSafe(v9, Src);
  v11 = 0;
  if ( !v10 || !Src[0] )
  {
    HandleObject = -1073741670;
LABEL_11:
    v11 = HandleObject;
    goto LABEL_12;
  }
  HandleObject = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(v10, a2);
  if ( HandleObject < 0 )
    goto LABEL_11;
  v13 = *(_QWORD *)(v6 + 3648);
  v14 = (struct _KMUTANT **)(v13 + 48);
  OPM::CMutex::Lock((void **)(v13 + 48));
  v19 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v13 + 24, a1, &v19);
  if ( HandleObject >= 0 )
  {
    COPPCompatibleInformation = COPMProtectedOutput::GetCOPPCompatibleInformation(
                                  v19,
                                  v10,
                                  (struct _DXGKMDT_OPM_REQUESTED_INFORMATION *)Src[0]);
    HandleObject = 0;
    if ( COPPCompatibleInformation < 0 )
      HandleObject = COPPCompatibleInformation;
  }
  OPM::CMutex::Unlock(v14);
  if ( HandleObject < 0 )
    goto LABEL_11;
  HandleObject = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(a3, Src[0]);
  if ( HandleObject < 0 )
    goto LABEL_11;
LABEL_12:
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::CAutoUnlockBuffer::~CAutoUnlockBuffer((__int64)Src);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::CAutoUnlockBuffer::~CAutoUnlockBuffer((__int64)v18);
  return v11;
}
