/*
 * XREFs of ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18018E63C
 * Callers:
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18018E608 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessSetSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180205398 (-ProcessSetSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_S.c)
 *     ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x18027DF60 (-NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessSetColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027DF94 (-ProcessSetColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SET.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::ReleasePrimitiveCaches(CPrimitiveGroup *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 16) = 0LL;
    if ( a2 )
      (*(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 80LL))(this, 5LL);
  }
}
