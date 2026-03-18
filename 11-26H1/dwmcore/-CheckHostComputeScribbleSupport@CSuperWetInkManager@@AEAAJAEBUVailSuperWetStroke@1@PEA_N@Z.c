/*
 * XREFs of ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x18023020C
 * Callers:
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180230E6C (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x1801DAD0C (-CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x1802185CC (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetInkDevice@CD3DDevice@@QEAAPEAUID3D12Device@@XZ @ 0x1802982AC (-TryGetInkDevice@CD3DDevice@@QEAAPEAUID3D12Device@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckHostComputeScribbleSupport(
        struct ID3D12CommandQueue *this,
        CD3DDevice **a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct ID3D12Device *InkDevice; // rax
  CD3DDevice *v9; // rcx
  int HighPriorityComputeCommandQueueNoRef; // eax
  __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ID3D12CommandQueue *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = this;
  *a3 = 0;
  LOBYTE(v13) = 0;
  v5 = CSuperWetInkManager::CheckCommonComputeScribbleSupport((CSuperWetInkManager *)this, (bool *)&v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !(_BYTE)v13 )
      return 0LL;
    InkDevice = CD3DDevice::TryGetInkDevice(a2[2]);
    wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
      &v14,
      (__int64)InkDevice);
    if ( !v14 )
      goto LABEL_9;
    v9 = a2[2];
    v13 = 0LL;
    HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(v9, &v13);
    v6 = HighPriorityComputeCommandQueueNoRef;
    if ( HighPriorityComputeCommandQueueNoRef < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x327,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)HighPriorityComputeCommandQueueNoRef);
LABEL_14:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
      return v6;
    }
    if ( v13 )
    {
      LOBYTE(v11) = 1;
      if ( (*(unsigned __int8 (__fastcall **)(CD3DDevice *, CD3DDevice *, char *, __int64))(*(_QWORD *)*a2 + 320LL))(
             *a2,
             a2[2],
             (char *)a2 + 32,
             v11) )
      {
        *a3 = 1;
      }
    }
    else
    {
LABEL_9:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          0LL);
    }
    v6 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x312,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
