/*
 * XREFs of ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1403FFB38
 * Callers:
 *     DxgkCreateSwapChain @ 0x140208650 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x140405E20 (DxgkOpenSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x140206508 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSwapchainLocal(
        DXGSWAPCHAIN *this,
        int a2,
        struct DXGDEVICE *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  unsigned int v7; // r12d
  __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // rsi
  NTSTATUS v15; // eax
  struct _KEVENT *v16; // rcx
  __int64 CurrentProcess; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  const wchar_t *v20; // r9
  unsigned int v22; // ebx
  bool v23; // zf
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v25[24]; // [rsp+58h] [rbp-40h] BYREF

  v7 = 0;
  if ( !DXGPROCESS::GetCurrent((__int64)this) )
  {
    PsGetCurrentProcess(v12);
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2209;
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  if ( *((_DWORD *)this + 12) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2220;
    v22 = -1073741738;
  }
  else
  {
    v13 = a6 != 0 ? 0x30 : 0;
    v14 = (char *)this + v13 + 96;
    if ( !*((_QWORD *)v14 + 2) )
    {
      *((_QWORD *)v14 + 2) = PsGetCurrentProcess(v13);
      *(_DWORD *)v14 = a2;
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 412LL) == *(_QWORD *)((char *)this + 204) )
      {
        *((_DWORD *)v14 + 6) = a5;
        if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_6;
        v23 = a7 == 0;
        if ( a7 )
        {
          if ( !*((_DWORD *)this + 59) )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 2255;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"User mode fences are not supported in this version of the swapchain",
              2255LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v22 = -1073741811;
            goto LABEL_20;
          }
          v23 = a7 == 0;
        }
        v14[44] = !v23;
LABEL_6:
        if ( a4 )
        {
          if ( *((_DWORD *)v14 + 6) )
          {
            WdLogSingleEntry0(2LL);
            a4 = 2267LL;
            v20 = L"We not code currently to set event once busy surface is not busy";
            WdLogGlobalForLineNumber = 2267;
            v7 = -1073741822;
            v19 = 0LL;
          }
          else
          {
            Object = 0LL;
            v15 = ObReferenceObjectByHandle((HANDLE)a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            v16 = (struct _KEVENT *)Object;
            v7 = v15;
            *((_QWORD *)v14 + 4) = Object;
            if ( v15 >= 0 )
            {
              if ( !a6 )
                KeSetEvent(v16, 2, 0);
              goto LABEL_11;
            }
            CurrentProcess = PsGetCurrentProcess(v16);
            WdLogSingleEntry2(2LL, a4, CurrentProcess);
            WdLogGlobalForLineNumber = 2282;
            v19 = PsGetCurrentProcess(v18);
            v20 = L"Failed to open CPU signal event 0x%I64x process 0x%I64x";
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, a4, v19, 0LL, 0LL, 0LL);
          DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v14);
        }
LABEL_11:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
        return v7;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2244;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SwapChain (0x%I64x) - Attempt to open with a device that is not from the swap-chain's adapter.",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
      return 3221225485LL;
    }
    WdLogSingleEntry2(3LL, this, a6);
    WdLogGlobalForLineNumber = 2228;
    v22 = -1073740008;
  }
LABEL_20:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
  return v22;
}
