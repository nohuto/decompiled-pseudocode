/*
 * XREFs of ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403CBDB4
 * Callers:
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1403CBC54 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001EDE0 (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x14001F544 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x14002FF30 (NtNotifyPresentToCompositionSurface.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x140041AB0 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140042470 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140046738 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::QuerySwapChainBindingStatus(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        unsigned int a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  int SwapChainBindingStatus; // edi
  DxgkCompositionObject *v7; // r14
  struct DXGFASTMUTEX *v8; // rax
  DxgkCompositionObject *v9; // rax
  __int64 v10; // rcx
  struct _KPROCESS *v11; // rbx
  DXGPROCESS *ProcessDxgProcess; // rax
  DXGPROCESS *v13; // rbx
  int v15; // eax
  HANDLE v16; // rax
  HANDLE Handle[2]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v18[16]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-9h] BYREF
  char v21; // [rsp+80h] [rbp+27h]

  SwapChainBindingStatus = -1073741823;
  v7 = 0LL;
  v8 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, v8, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v9 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                  *((_QWORD *)this + 1),
                                  a2,
                                  17LL);
  if ( v9 )
  {
    v7 = v9;
    DxgkCompositionObject::AddRef(v9);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
  if ( v7 )
  {
    v11 = (struct _KPROCESS *)*((_QWORD *)this + 3);
    v21 = 0;
    if ( (struct _KPROCESS *)PsGetCurrentProcess(v10) != v11 )
    {
      KeStackAttachProcess(v11, &ApcState);
      v21 = 1;
    }
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v18);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    v13 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
      DXGPROCESS::AcquireReference(ProcessDxgProcess);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    if ( v13 )
    {
      if ( *((_DWORD *)v13 + 10) == 1 && (*(unsigned int (**)(void))(*((_QWORD *)v13 + 11) + 232LL))() )
      {
        Handle[0] = 0LL;
        SwapChainBindingStatus = DxgkCompositionObject::OpenDwmHandle(v7, Handle);
        if ( SwapChainBindingStatus < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 809;
        }
        else
        {
          v15 = NtNotifyPresentToCompositionSurface(Handle[0], (char *)a3);
          SwapChainBindingStatus = v15;
          if ( v15 < 0 )
          {
            WdLogSingleEntry3(3LL, v15, Handle[0], a3);
            WdLogGlobalForLineNumber = 786;
          }
          else
          {
            v16 = Handle[0];
            a3->Token.Flip.Flags.Value |= 0x2000000u;
            Handle[1] = 0LL;
            a3->Token.Flip.hLogicalSurface = (ULONG64)v16;
            SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(1, 0LL, a3);
            if ( SwapChainBindingStatus < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 800;
            }
            a3->Token.Flip.hLogicalSurface = 0LL;
          }
          ObCloseHandle(Handle[0], 1);
        }
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      DXGPROCESS::ReleaseReference(v13);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
    if ( v21 )
      KeUnstackDetachProcess(&ApcState);
    DxgkCompositionObject::Release(v7);
  }
  return (unsigned int)SwapChainBindingStatus;
}
