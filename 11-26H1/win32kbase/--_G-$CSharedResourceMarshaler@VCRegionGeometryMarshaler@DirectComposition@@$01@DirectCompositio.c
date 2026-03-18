/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x140147DA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ @ 0x140147E18 (--1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CRegionGeometryMarshaler *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`scalar deleting destructor'(
        DirectComposition::CRegionGeometryMarshaler *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  *(_QWORD *)Buffer = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`vftable';
  DirectComposition::CRegionGeometryMarshaler::~CRegionGeometryMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
