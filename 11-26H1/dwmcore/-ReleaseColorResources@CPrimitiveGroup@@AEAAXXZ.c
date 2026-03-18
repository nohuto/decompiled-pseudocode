/*
 * XREFs of ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1802003AC
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180200284 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessSetColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027DF94 (-ProcessSetColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SET.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseColorResources(CPrimitiveGroup *this)
{
  struct CResource **v1; // rsi
  struct CResource **i; // rdi
  __int64 v4; // rax

  v1 = (struct CResource **)*((_QWORD *)this + 21);
  for ( i = (struct CResource **)*((_QWORD *)this + 20); i != v1; ++i )
    CResource::UnRegisterNotifierInternal(this, *i);
  v4 = *((_QWORD *)this + 20);
  if ( v4 != *((_QWORD *)this + 21) )
    *((_QWORD *)this + 21) = v4;
}
