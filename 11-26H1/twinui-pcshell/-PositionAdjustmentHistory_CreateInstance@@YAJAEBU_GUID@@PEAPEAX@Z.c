/*
 * XREFs of ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8D44
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1800D8BA0 (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D8630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyRec.c)
 *     ??$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@@012@@Z @ 0x1800D8688 (--$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjustmentHistory@@UIPositionAdjustmentHistoryTestHook@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801F2A78 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPositionAdjust.c)
 */

__int64 __fastcall PositionAdjustmentHistory_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  volatile int *v5; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<PositionAdjustmentHistory,PositionAdjustmentHistory,>(&v9);
  if ( v3 >= 0 )
  {
    v3 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>>(
           v9,
           &GUID_7ae7ff38_b4c2_4847_a3b7_4657c8b5bc82,
           a2);
    if ( v3 >= 0 )
      goto LABEL_6;
    v4 = 116LL;
  }
  else
  {
    v4 = 115LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
    (const char *)(unsigned int)v3);
LABEL_6:
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(
      v6,
      v5);
  }
  return (unsigned int)v3;
}
