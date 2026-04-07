/*
 * XREFs of ??_GCSWRListener@@UEAAPEAXI@Z @ 0x18006AED8
 * Callers:
 *     ??_ECSWRListener@@W7EAAPEAXI@Z @ 0x1800DF7D0 (--_ECSWRListener@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CSWRListener@@UEAA@XZ @ 0x18006AF14 (--1CSWRListener@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CSWRListener *__fastcall CSWRListener::`scalar deleting destructor'(CSWRListener *this, char a2)
{
  CSWRListener::~CSWRListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
