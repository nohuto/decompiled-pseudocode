/*
 * XREFs of ??_GCDelayedTileActivation@@UEAAPEAXI@Z @ 0x18023C860
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDelayedTileActivation@@UEAA@XZ @ 0x1802C77A8 (--1CDelayedTileActivation@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDelayedTileActivation *__fastcall CDelayedTileActivation::`scalar deleting destructor'(
        CDelayedTileActivation *this,
        char a2)
{
  CDelayedTileActivation::~CDelayedTileActivation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
