/*
 * XREFs of ?Present@CDDASwapChain@@QEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056238
 * Callers:
 *     ?Present@CDDARenderTarget@@IEAAJXZ @ 0x1800560EC (-Present@CDDARenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180056978 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDASwapChain::Present(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  CD3DDevice *v8; // rbx
  __int64 v9; // rax
  const struct tagRECT *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v14; // [rsp+38h] [rbp-10h]

  v5 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  if ( v5 && (v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5), (v8 = (CD3DDevice *)v9) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 8));
    v10 = *(const struct tagRECT **)a4;
    v14 = (__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 4;
    if ( !v14 )
      v10 = 0LL;
    v11 = CD3DDevice::Present(v8, *(struct IDXGISwapChainDWM1 **)(a1 + 56), 1u, a3, 0, 0LL, v10, v14);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x63u, 0LL);
  }
  else
  {
    v12 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x67u, 0LL);
  }
  **(_DWORD **)(a1 + 112) = 0;
  if ( v8 )
    CD3DDevice::Release(v8);
  return v12;
}
