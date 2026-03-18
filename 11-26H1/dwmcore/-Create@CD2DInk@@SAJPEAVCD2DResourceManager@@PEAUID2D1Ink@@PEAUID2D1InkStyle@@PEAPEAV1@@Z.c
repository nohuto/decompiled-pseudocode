/*
 * XREFs of ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1802A92FC
 * Callers:
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180298530 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800F6260 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x1800F6408 (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DInk::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1Ink *a2,
        struct ID2D1InkStyle *a3,
        struct CD2DInk **a4)
{
  _OWORD *v8; // rax
  __int64 v9; // rdx
  _OWORD *v10; // rbx
  __int64 v11; // rcx
  void (*v12)(void); // rax
  unsigned int v13; // edi

  *a4 = 0LL;
  v8 = operator new(0x58uLL);
  v10 = v8;
  if ( v8 )
  {
    CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(
      v8,
      v9);
    *(_QWORD *)(v11 + 40) = a1;
    *(_QWORD *)v11 = &CD2DInk::`vftable';
    v12 = (void (*)(void))*(&CD2DInk::`vftable' + 1);
    *(_WORD *)(v11 + 48) = 0;
    *(_BYTE *)(v11 + 50) = 0;
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_QWORD *)(v11 + 80) = 0LL;
    v12();
    *((_QWORD *)v10 + 9) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_QWORD *)v10 + 10) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)a3 + 8LL))(a3);
    CD2DResourceManager::AddResource(*((CD2DResourceManager **)v10 + 5), (struct CD2DResource *)v10);
    v13 = 0;
    *a4 = (struct CD2DInk *)v10;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x13u, 0LL);
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(0LL);
  return v13;
}
