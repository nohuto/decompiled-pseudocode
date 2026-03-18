/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x14042F7C0
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14006611C (DpiQueryIntegratedDescriptorWrapper.c)
 *     ?Acquire@CHILD_RELATIONS_AUTO_LOCK@@QEAAXXZ @ 0x14006D3B8 (-Acquire@CHILD_RELATIONS_AUTO_LOCK@@QEAAXXZ.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x14008CDC4 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     DpiPdoRemovePdoObjects @ 0x140256E10 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1402572A4 (DpiGdoDestroyGdiObjects.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x14025A990 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x14030D100 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031B740 (DpiFdoInvalidateChildRelations.c)
 *     DpiGdoCreateGdiObjects @ 0x14041AD20 (DpiGdoCreateGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4)
{
  __int64 v4; // rbx
  unsigned int v9; // r8d
  struct _LUID v10; // rdx
  int IntegratedDescriptorWrapper; // edi
  __int16 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  unsigned __int8 v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(v4 + 4041) & 4) == 0 )
    goto LABEL_11;
  if ( *(_DWORD *)(v4 + 6032) == 1 )
  {
    if ( *(_BYTE *)(v4 + 6393) )
    {
      v9 = *(_DWORD *)(v4 + 6376);
      v10 = *(struct _LUID *)(v4 + 6036);
      v15 = 0;
      if ( (int)DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_140169448, v10, v9, &v15, 0LL) >= 0 && !v15 )
        goto LABEL_11;
    }
  }
  v13 = 0;
  v14 = v4;
  CHILD_RELATIONS_AUTO_LOCK::Acquire((CHILD_RELATIONS_AUTO_LOCK *)&v13);
  IntegratedDescriptorWrapper = DpiQueryIntegratedDescriptorWrapper(a1);
  if ( IntegratedDescriptorWrapper >= 0 )
  {
    if ( (_BYTE)v13 )
    {
      ExReleaseResourceLite((PERESOURCE)(v14 + 3440));
      KeLeaveCriticalRegion();
    }
LABEL_11:
    IntegratedDescriptorWrapper = DpiFdoInvalidateChildRelations(a1, 6u, a4);
    if ( IntegratedDescriptorWrapper >= 0 )
    {
      if ( (*(_BYTE *)(v4 + 4040) & 1) == 0 )
        return (unsigned int)IntegratedDescriptorWrapper;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 4032), 2);
      IntegratedDescriptorWrapper = DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 4032));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 4032), 2u);
      if ( IntegratedDescriptorWrapper >= 0 )
      {
        IntegratedDescriptorWrapper = DpiGdoCreateGdiObjects(a1, a2, a3);
        if ( IntegratedDescriptorWrapper >= 0 )
          return (unsigned int)IntegratedDescriptorWrapper;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1667;
      }
    }
    DpiGdoDestroyGdiObjects(a1);
    DpiPdoRemovePdoObjects(a1, 1, (__int64)a4);
    return (unsigned int)IntegratedDescriptorWrapper;
  }
  if ( (_BYTE)v13 )
  {
    ExReleaseResourceLite((PERESOURCE)(v14 + 3440));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)IntegratedDescriptorWrapper;
}
