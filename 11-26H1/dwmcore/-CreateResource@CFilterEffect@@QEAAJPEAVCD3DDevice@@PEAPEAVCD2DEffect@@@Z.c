/*
 * XREFs of ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x18026720C
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x1801D1BE8 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180102130 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::CreateResource(CFilterEffect *this, struct CD3DDevice *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rax
  struct CD2DEffect *v4; // rdi
  const struct _GUID *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  struct CD2DEffect *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v11 = 0LL;
  v7 = (const struct _GUID *)(*(__int64 (__fastcall **)(CFilterEffect *))(v3 + 208))(this);
  v8 = CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)a2 + 16), v7, &v11);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2F1u, 0LL);
    v4 = v11;
  }
  else
  {
    *a3 = v11;
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v4);
  return v9;
}
