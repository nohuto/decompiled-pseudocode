/*
 * XREFs of ??_GCPathGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14011DD30
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CPathGeometryMarshaler *__fastcall DirectComposition::CPathGeometryMarshaler::`scalar deleting destructor'(
        DirectComposition::CPathGeometryMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CGeometryMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
