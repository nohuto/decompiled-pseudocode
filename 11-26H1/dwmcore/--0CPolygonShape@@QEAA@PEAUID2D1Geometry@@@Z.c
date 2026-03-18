/*
 * XREFs of ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800D9BD4
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z @ 0x1802288B0 (-FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CPolygonShape *__fastcall CPolygonShape::CPolygonShape(CPolygonShape *this, struct ID2D1Geometry *a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CPolygonShape::`vftable';
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5[2] = 0;
  *(_QWORD *)v5 = &CPolygonShape::SharedData::`vftable';
  *((_QWORD *)v5 + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)this + 2) = v6;
  (**(void (__fastcall ***)(_DWORD *))v6)(v6);
  return this;
}
