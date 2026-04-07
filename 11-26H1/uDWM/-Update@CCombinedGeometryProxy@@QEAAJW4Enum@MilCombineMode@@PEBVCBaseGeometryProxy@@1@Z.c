/*
 * XREFs of ?Update@CCombinedGeometryProxy@@QEAAJW4Enum@MilCombineMode@@PEBVCBaseGeometryProxy@@1@Z @ 0x180066610
 * Callers:
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x180066508 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCombinedGeometryProxy::Update(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 480LL))(
           *(_QWORD *)(a1 + 16),
           *(unsigned int *)(a1 + 24),
           1LL);
}
