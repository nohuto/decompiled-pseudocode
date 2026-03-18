/*
 * XREFs of ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801B1F30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800E5A50 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x18010B190 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1801B2114 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::Push2DVisualTransformToRenderThread(CInteraction *this)
{
  struct CManipulationManager *v1; // r15
  CComposition *v2; // rdi
  struct IMessageCallSendHost *v4; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v6; // rdi
  unsigned int v7; // esi
  int v8; // eax
  __int64 v10; // rbx
  struct _D3DMATRIX *D3DMatrix; // rax
  int v12; // eax
  struct _D3DMATRIX v13; // [rsp+40h] [rbp-49h] BYREF
  struct _D3DMATRIX v14; // [rsp+80h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+F0h] [rbp+67h] BYREF
  struct CManipulationManager *v16; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+100h] [rbp+77h] BYREF

  v1 = (CInteraction *)((char *)this - 72);
  v16 = 0LL;
  v2 = (CComposition *)*((_QWORD *)this - 6);
  v4 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  ManipulationManager = CComposition::GetManipulationManager(v2, &v16);
  v6 = v16;
  v7 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ManipulationManager, 0x2DDu, 0LL);
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    v8 = CManipulationManager::GetManipulationThreadMessageCallSendHost(v6, &v15);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2DFu, 0LL);
LABEL_4:
      v4 = v15;
      goto LABEL_5;
    }
    v10 = *((_QWORD *)v6 + 7);
    if ( !v10 )
    {
      v7 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x2E2u, 0LL);
      goto LABEL_4;
    }
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v1 + 8LL))(v1);
    D3DMatrix = CMILMatrix::GetD3DMatrix((CInteraction *)((char *)this + 1196), &v14);
    v17 = v10;
    v4 = v15;
    v16 = v1;
    v13 = *D3DMatrix;
    v12 = CoreUICallSend(v15, &v17, 1LL, 7LL, 3, &unk_1802F5B12, (unsigned int)&v16, &v13, LODWORD(v13._11));
    v7 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x2EBu, 0LL);
    else
      CComposition::ScheduleCompositionPass(*((_QWORD *)this - 6), 0, 0x4000u);
  }
LABEL_5:
  if ( v4 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v6 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
