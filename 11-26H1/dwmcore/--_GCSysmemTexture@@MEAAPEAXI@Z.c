/*
 * XREFs of ??_GCSysmemTexture@@MEAAPEAXI@Z @ 0x1802B9010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CSysmemTexture@@MEAA@XZ @ 0x1802B8FC4 (--1CSysmemTexture@@MEAA@XZ.c)
 */

CSysmemTexture *__fastcall CSysmemTexture::`scalar deleting destructor'(CSysmemTexture *this, char a2)
{
  CSysmemTexture::~CSysmemTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
