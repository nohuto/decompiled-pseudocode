/*
 * XREFs of ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18005483C
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18004F3B8 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x180053598 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??0?$atomic@PEAUID2D1PathGeometry@@@std@@QEAA@QEAUID2D1PathGeometry@@@Z @ 0x180054E00 (--0-$atomic@PEAUID2D1PathGeometry@@@std@@QEAA@QEAUID2D1PathGeometry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathData::CPathData(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // r8
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
    a1,
    a2);
  *(_QWORD *)a1 = &CPathData::`vftable';
  v5 = v4[2];
  v4[2] = 0LL;
  v6 = v4[1];
  v4[1] = 0LL;
  v7 = *v4;
  *v4 = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)(a1 + 48) = 0LL;
  std::atomic<ID2D1PathGeometry *>::atomic<ID2D1PathGeometry *>(a1 + 56);
  result = a1;
  *(_BYTE *)(a1 + 66) = 0;
  return result;
}
