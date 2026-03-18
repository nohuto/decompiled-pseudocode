/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140426A58
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140434008 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2@@@Z @ 0x1401AB2A4 (-DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport2DDI(
        __int64 a1,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  __int64 v8; // rbx
  __int64 v10; // rdi
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *Pool2; // r9
  __int64 CurrentProcess; // rax
  int v13; // ebx
  PVOID v14; // rcx
  bool v15; // zf
  UINT *p_LayerIndex; // r10
  signed __int64 v17; // r12
  __int64 v18; // r8
  int v19; // edx
  unsigned int v20; // ecx
  UINT v21; // edx
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v23; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v25[336]; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+198h] [rbp+98h]

  v8 = (unsigned int)a1;
  P = 0LL;
  *a5 = 0;
  a6->Value = 0;
  v26 = 0;
  if ( (unsigned int)a1 <= 3 )
  {
    Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)v25;
    P = v25;
    if ( (_DWORD)a1 )
    {
      memset(v25, 0, 112LL * (unsigned int)a1);
      Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)P;
    }
  }
  else
  {
    v10 = (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x70 )
    {
LABEL_7:
      CurrentProcess = PsGetCurrentProcess(a1);
      v13 = -1073741801;
      WdLogSingleEntry3(3LL, v10, -1073741801LL, CurrentProcess);
      v14 = P;
      v15 = P == v25;
      WdLogGlobalForLineNumber = 10241;
      goto LABEL_18;
    }
    Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)ExAllocatePool2(256LL, 112LL * (unsigned int)a1, 1265072196LL);
    P = Pool2;
  }
  v26 = v8;
  v10 = v8;
  if ( !Pool2 )
    goto LABEL_7;
  if ( (_DWORD)v8 )
  {
    p_LayerIndex = &Pool2->LayerIndex;
    v17 = (char *)a2 - (char *)a3;
    do
    {
      v18 = *(__int64 *)((char *)a3 + v17);
      *(_QWORD *)(p_LayerIndex - 3) = *a3;
      *(p_LayerIndex - 1) = *(_DWORD *)(v18 + 16);
      *p_LayerIndex = *(_DWORD *)v18;
      *(_OWORD *)(p_LayerIndex + 2) = *(_OWORD *)(*(_QWORD *)(v18 + 24) + 4LL);
      *(_OWORD *)(p_LayerIndex + 6) = *(_OWORD *)(*(_QWORD *)(v18 + 24) + 20LL);
      *(_OWORD *)(p_LayerIndex + 10) = *(_OWORD *)(*(_QWORD *)(v18 + 24) + 36LL);
      p_LayerIndex[14] = *(_DWORD *)(*(_QWORD *)(v18 + 24) + 52LL);
      p_LayerIndex[17] = *(_DWORD *)(*(_QWORD *)(v18 + 24) + 72LL);
      v19 = p_LayerIndex[1] ^ (**(_DWORD **)(v18 + 24) ^ p_LayerIndex[1]) & 1;
      p_LayerIndex[1] = v19;
      v20 = v19 & 0xFFFFFFFD | **(_DWORD **)(v18 + 24) & 2;
      v21 = p_LayerIndex[15];
      p_LayerIndex[1] = v20;
      p_LayerIndex[15] = v21 ^ (*(_DWORD *)(*(_QWORD *)(v18 + 24) + 56LL) ^ v21) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v18 + 24) + 76LL) == 1 )
      {
        p_LayerIndex[22] = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v18 + 24) + 76LL) == 2 )
      {
        p_LayerIndex[22] = 2;
      }
      ++a3;
      p_LayerIndex += 28;
      --v10;
    }
    while ( v10 );
  }
  *(&v23.PlaneCount + 1) = 0;
  *(_QWORD *)&v23.Supported = 0LL;
  v23.PlaneCount = v8;
  v23.pPlanes = Pool2;
  v13 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(a4, &v23);
  if ( v13 >= 0 )
  {
    *a5 = v23.Supported;
    a6->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v23.ReturnInfo.0;
  }
  v14 = P;
  v15 = P == v25;
LABEL_18:
  if ( !v15 && v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v13;
}
