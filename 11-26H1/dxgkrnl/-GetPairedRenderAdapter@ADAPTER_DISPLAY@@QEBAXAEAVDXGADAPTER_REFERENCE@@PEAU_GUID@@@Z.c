/*
 * XREFs of ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1400169D0
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140198440 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401B4454 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1401B5CFC (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetPairedRenderAdapter(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER_REFERENCE *a2,
        struct _GUID *a3)
{
  __int64 v6; // rbx
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  DXGFASTMUTEX *v11; // [rsp+60h] [rbp-18h] BYREF
  __int64 v12; // [rsp+68h] [rbp-10h]

  v11 = (ADAPTER_DISPLAY *)((char *)this + 200);
  LOBYTE(v12) = 0;
  if ( this == (ADAPTER_DISPLAY *)-200LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          628,
          v7,
          v8,
          0LL,
          2,
          -1,
          (__int64)L"m_pMutex != NULL",
          628LL,
          0LL,
          0LL,
          0LL,
          0LL,
          v11,
          v12);
    }
  }
  if ( DXGFASTMUTEX::IsOwner(v11) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          635,
          v9,
          v10,
          0LL,
          2,
          -1,
          (__int64)L"!m_pMutex->IsOwner()",
          635LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v11);
  v6 = *((_QWORD *)this + 31);
  if ( *(_QWORD *)a2 )
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)a2, *((_QWORD *)a2 + 1));
  *(_QWORD *)a2 = v6;
  if ( v6 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24));
    *((_QWORD *)a2 + 1) = -1LL;
  }
  if ( a3 )
    *a3 = *(struct _GUID *)((char *)this + 264);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v11);
}
