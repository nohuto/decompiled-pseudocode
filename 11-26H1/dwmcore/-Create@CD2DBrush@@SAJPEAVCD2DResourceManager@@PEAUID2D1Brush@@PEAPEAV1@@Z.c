/*
 * XREFs of ?Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z @ 0x180104584
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180103060 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x1800F6408 (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBrush::Create(struct CD2DResourceManager *a1, struct ID2D1Brush *a2, struct CD2DBrush **a3)
{
  struct CD2DBrush *v6; // rax
  __int64 v7; // rdx
  struct CD2DBrush *v8; // rbx
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v11; // eax

  v6 = (struct CD2DBrush *)MIDL_user_allocate(0x50uLL);
  v8 = v6;
  if ( v6 )
  {
    CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(
      v6,
      v7);
    *(_QWORD *)(v9 + 40) = a1;
    *(_QWORD *)v9 = &CD2DBrush::`vftable';
    *(_WORD *)(v9 + 48) = 0;
    *(_BYTE *)(v9 + 50) = 0;
    *(_QWORD *)(v9 + 72) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)a2 + 8LL))(a2);
    (*(void (__fastcall **)(struct CD2DBrush *))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = (*(__int64 (__fastcall **)(struct CD2DBrush *))(*(_QWORD *)v8 + 112LL))(v8);
    if ( v10 >= 0 )
    {
      *a3 = v8;
      return (unsigned int)v10;
    }
    v11 = 16;
  }
  else
  {
    v8 = 0LL;
    v10 = -2147024882;
    v11 = 14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v11, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(struct CD2DBrush *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v10;
}
