/*
 * XREFs of ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180123428
 * Callers:
 *     ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x1801233F0 (-ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x180125000 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::GetPrimitiveBlend(CGenericInk *this, enum D2D1_PRIMITIVE_BLEND *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef((char *)this + 152, 0LL, &v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x21Du, 0LL);
  else
    *a2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 72) + 24LL))(*(_QWORD *)(v6 + 72));
  return v4;
}
