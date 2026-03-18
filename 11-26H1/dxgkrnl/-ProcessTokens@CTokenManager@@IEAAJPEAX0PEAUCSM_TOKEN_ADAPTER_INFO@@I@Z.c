/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14001FA50
 * Callers:
 *     ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x140059190 (-TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001FD20 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x140036F80 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x14003B0E4 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x14005FAA4 (-SetTokenThreadProcess@CTokenManager@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::ProcessTokens(
        CTokenManager *this,
        HANDLE Handle,
        void *a3,
        struct CSM_TOKEN_ADAPTER_INFO *a4,
        unsigned int a5)
{
  ULONG v9; // r15d
  unsigned __int64 v10; // rax
  _OWORD *v11; // r14
  __int64 Win32kImportTable; // rax
  NTSTATUS inited; // ebx
  NTSTATUS v15; // eax
  int v16; // eax
  int v17; // esi
  CTokenManager *v18; // rax
  char *v19; // rbx
  void *v20; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v22[3]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v23; // [rsp+68h] [rbp-50h]

  v23 = 0LL;
  v9 = a5 + 2;
  memset(v22, 0, sizeof(v22));
  if ( a5 <= 5 )
  {
    v11 = v22;
  }
  else
  {
    v10 = 8LL * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v10 = -1LL;
    v11 = (_OWORD *)operator new[](v10, 0x62634D54u, 256LL);
    if ( !v11 )
      return 3221225495LL;
  }
  *(_QWORD *)v11 = Handle;
  *((_QWORD *)v11 + 1) = a3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    inited = -2147483631;
  }
  else
  {
    CTokenManager::SetTokenThreadProcess(this);
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (__fastcall **)(struct CSM_TOKEN_ADAPTER_INFO *, _QWORD))(Win32kImportTable + 80))(a4, a5) )
    {
      v20 = (void *)*((_QWORD *)this + 8);
      Timeout.LowPart = 0;
      ZwSetEvent(v20, (PLONG)&Timeout);
    }
    inited = CTokenManager::InitAdapterCollection(this, a4, (void **)v11 + 2, a5);
    if ( inited >= 0 )
    {
      while ( 1 )
      {
LABEL_16:
        while ( 1 )
        {
          v15 = ZwWaitForMultipleObjects(v9, (HANDLE *)v11, WaitAny, 1u, 0LL);
          inited = v15;
          if ( v15 >= 0 )
            break;
          if ( v15 == -1073741801 || v15 == -1073741789 )
          {
            Timeout.QuadPart = -160000LL;
            inited = ZwWaitForSingleObject(Handle, 0, &Timeout);
            if ( inited == 258 )
              continue;
          }
          goto LABEL_11;
        }
        if ( !v15 || v15 == 192 || v15 == 257 )
          break;
        if ( v15 == 1 )
        {
          CTokenManager::ProcessGdiSysmemTokens(this);
        }
        else
        {
          v16 = *((_DWORD *)this + 20);
          if ( v16 && inited <= (unsigned int)(v16 + 1) )
          {
            v17 = inited - 2;
            ExAcquirePushLockSharedEx((char *)this + 144, 0LL);
            *((_BYTE *)this + 152) = 0;
            if ( (unsigned int)(inited - 2) < *((_DWORD *)this + 27) )
            {
              v18 = (CTokenManager *)*((_QWORD *)this + 16);
              while ( v18 != (CTokenManager *)((char *)this + 128) )
              {
                v19 = (char *)v18 - 8;
                if ( !v18 )
                  v19 = 0LL;
                if ( !v17 )
                {
                  ExReleasePushLockSharedEx((char *)this + 144, 0LL);
                  CTokenManager::ProcessDxgkAdapterTokens(this, *((_DWORD *)v19 + 10));
                  goto LABEL_16;
                }
                v18 = *(CTokenManager **)v18;
                --v17;
              }
            }
            ExReleasePushLockSharedEx((char *)this + 144, 0LL);
          }
        }
      }
      inited = 0;
    }
LABEL_11:
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( v11 != v22 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)inited;
}
