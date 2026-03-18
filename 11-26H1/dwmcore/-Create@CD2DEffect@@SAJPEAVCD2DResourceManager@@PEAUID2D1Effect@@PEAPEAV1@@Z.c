/*
 * XREFs of ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180102CC4
 * Callers:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180102130 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800F6260 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x1800F6408 (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DEffect::Create(struct CD2DResourceManager *a1, struct ID2D1Effect *a2, struct CD2DEffect **a3)
{
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rbx
  unsigned int v9; // edi
  void (*v11)(void); // rax

  *a3 = 0LL;
  v6 = operator new(0x50uLL);
  v8 = v6;
  if ( v6 )
  {
    CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(
      v6,
      v7);
    *((_QWORD *)v8 + 5) = a1;
    *(_QWORD *)v8 = &CD2DEffect::`vftable';
    v11 = (void (*)(void))*(&CD2DEffect::`vftable' + 1);
    *((_WORD *)v8 + 24) = 0;
    *((_BYTE *)v8 + 50) = 0;
    *((_QWORD *)v8 + 9) = 0LL;
    v11();
    *((_QWORD *)v8 + 9) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)a2 + 8LL))(a2);
    CD2DResourceManager::AddResource(*((CD2DResourceManager **)v8 + 5), (struct CD2DResource *)v8);
    v9 = 0;
    *a3 = (struct CD2DEffect *)v8;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(0LL);
  return v9;
}
