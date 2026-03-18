/*
 * XREFs of ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140060BF4
 * Callers:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z @ 0x1400937E0 (--0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireRemoveLock@CInterfaceCallContext@@AEAA_NXZ @ 0x140061B7C (-AcquireRemoveLock@CInterfaceCallContext@@AEAA_NXZ.c)
 *     Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledDeviceUsageNoInline @ 0x140093990 (Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x140191754 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x14019243C (DxgkReleaseAdapterStopResetSync.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1403760F0 (DpiDisableD3Requests.c)
 *     DxgkAcquireAdapterReference @ 0x1403C1828 (DxgkAcquireAdapterReference.c)
 */

void __fastcall CInterfaceCallContext::CommonConstructor(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        char a6,
        char a7,
        char a8)
{
  __int64 *v8; // rdi
  __int64 *v11; // rbp
  __int64 *v12; // r14
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  char v21; // cl
  int v22; // eax
  __int64 v23; // rcx

  v8 = a1 + 1;
  *a1 = a2;
  a1[1] = *(_QWORD *)(a2 + 64);
  v11 = a1 + 1;
  if ( a4 )
  {
    if ( !CInterfaceCallContext::AcquireRemoveLock((CInterfaceCallContext *)a1) )
      return;
    v11 = a1 + 1;
  }
  a1[2] = *(_QWORD *)(*v8 + 4032);
  if ( !a6 )
  {
    KeEnterCriticalRegion();
    v12 = v8;
    if ( *(_BYTE *)(*v8 + 484) )
    {
      DpiCheckForOutstandingD3Requests(*v8);
      v12 = v11;
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*v8 + 168), 1u);
    *((_BYTE *)a1 + 40) = 1;
    if ( (unsigned int)Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledDeviceUsageNoInline() )
    {
      v13 = *(_DWORD *)(*v12 + 236);
      if ( v13 != 2 && (*(_DWORD *)(*v12 + 240) != 2 || ((v13 - 3) & 0xFFFFFFFC) != 0 || v13 == 4) )
      {
        *((_DWORD *)a1 + 8) = -1073741130;
        return;
      }
    }
  }
  if ( a8 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1[1] + 3440), 1u);
    *((_BYTE *)a1 + 42) = 1;
  }
  if ( a5 )
  {
    v14 = *a1;
    LOBYTE(a2) = a5 == 2;
    *((_BYTE *)a1 + 38) = a5 == 2;
    v15 = DpiAcquireCoreSyncAccessSafe(v14, a2);
    *((_DWORD *)a1 + 8) = v15;
    if ( v15 >= 0 )
    {
      v16 = a1[1] + 5552;
      *((_BYTE *)a1 + 37) = 1;
      ExAcquirePushLockExclusiveEx(v16, 0LL);
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  if ( !a6 )
    goto LABEL_34;
  KeEnterCriticalRegion();
  v17 = a1[1];
  if ( *(_BYTE *)(v17 + 484) )
    DpiDisableD3Requests(*(_QWORD *)(v17 + 24));
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1[1] + 168), 1u);
  v18 = *(_QWORD *)(a1[1] + 4032);
  if ( v18 )
    v19 = DxgkAcquireAdapterStopResetSync(v18, 0LL);
  else
    v19 = -1073741661;
  *((_DWORD *)a1 + 8) = v19;
  v20 = a1[1];
  if ( *(_BYTE *)(v20 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v20 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(a1[1] + 168));
  KeLeaveCriticalRegion();
  if ( *((int *)a1 + 8) >= 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1[1] + 4032) + 200LL) == 1 )
    {
      *((_BYTE *)a1 + 39) = 1;
LABEL_29:
      if ( !a3 || (v21 = 0, !*(_BYTE *)(a3 + 64)) )
        v21 = 1;
      *(_BYTE *)(a1[1] + 5596) = v21;
      goto LABEL_34;
    }
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(a1[1] + 4032), 0LL);
    *((_DWORD *)a1 + 8) = -1073741130;
LABEL_34:
    if ( *((int *)a1 + 8) >= 0 && *((_BYTE *)a1 + 40) && a7 )
    {
      v22 = DxgkAcquireAdapterReference(a1[2], a1 + 3);
      *((_DWORD *)a1 + 8) = v22;
      if ( v22 >= 0 )
      {
        v23 = a1[1];
        *((_BYTE *)a1 + 41) = 1;
        if ( *(_BYTE *)(v23 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v23 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(a1[1] + 168));
        KeLeaveCriticalRegion();
        *((_BYTE *)a1 + 40) = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 180;
      }
    }
  }
}
