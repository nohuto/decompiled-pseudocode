/*
 * XREFs of ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180200344
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180200284 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessSetSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180205398 (-ProcessSetSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_S.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::ReleaseSurfaceResources(CPrimitiveGroup *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rdi
  __int64 v4; // rax

  v1 = (_QWORD *)*((_QWORD *)this + 18);
  for ( i = (_QWORD *)*((_QWORD *)this + 17); i != v1; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
  v4 = *((_QWORD *)this + 17);
  if ( v4 != *((_QWORD *)this + 18) )
    *((_QWORD *)this + 18) = v4;
}
