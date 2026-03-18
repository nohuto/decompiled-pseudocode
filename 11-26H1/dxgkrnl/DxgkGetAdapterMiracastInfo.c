/*
 * XREFs of DxgkGetAdapterMiracastInfo @ 0x14006B28C
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x140392D40 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkGetAdapterMiracastInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // ecx
  int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  int v8; // ecx
  int v9; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 128;
  v4 = *(_DWORD *)(v2 + 3360);
  *(_DWORD *)(a2 + 24) = (v4 != -1) + 128;
  if ( v4 != -1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v5 = *(_DWORD *)(a2 + 24) ^ ((unsigned __int8)*(_DWORD *)(a2 + 24) ^ (unsigned __int8)(2 * *(_DWORD *)(v2 + 3356))) & 2;
    *(_DWORD *)(a2 + 24) = v5;
    v6 = *(_QWORD *)(v2 + 3368);
    v7 = v5 & 0xFFFFFFFB | (v6 != 0 ? 4 : 0);
    *(_DWORD *)(a2 + 24) = v7;
    if ( v6 )
    {
      v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3368) + 600LL))) & 8;
      *(_DWORD *)(a2 + 24) = v8;
      v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3368) + 600LL))) & 0x10;
      *(_DWORD *)(a2 + 24) = v9;
      *(_DWORD *)(a2 + 24) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(8
                                                                         * *(_DWORD *)(*(_QWORD *)(v2 + 3368) + 600LL))) & 0x20;
      *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(v2 + 3368) + 608LL);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(v2 + 3368) + 616LL);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v2 + 3368) + 624LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
