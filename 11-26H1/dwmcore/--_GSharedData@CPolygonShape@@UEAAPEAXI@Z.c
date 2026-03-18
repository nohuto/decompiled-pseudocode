/*
 * XREFs of ??_GSharedData@CPolygonShape@@UEAAPEAXI@Z @ 0x180151530
 * Callers:
 *     <none>
 * Callees:
 *     ??1SharedData@CPolygonShape@@UEAA@XZ @ 0x18015156C (--1SharedData@CPolygonShape@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CPolygonShape::SharedData *__fastcall CPolygonShape::SharedData::`scalar deleting destructor'(
        CPolygonShape::SharedData *this,
        char a2)
{
  CPolygonShape::SharedData::~SharedData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
