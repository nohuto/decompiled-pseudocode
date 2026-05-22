/*
 * XREFs of ??_GAlpcSection@@UEAAPEAXI@Z @ 0x18010F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009B2C4 (--3@YAXPEAX@Z.c)
 *     ??1AlpcSection@@UEAA@XZ @ 0x18010F7D0 (--1AlpcSection@@UEAA@XZ.c)
 */

AlpcSection *__fastcall AlpcSection::`scalar deleting destructor'(AlpcSection *this, char a2)
{
  AlpcSection::~AlpcSection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
