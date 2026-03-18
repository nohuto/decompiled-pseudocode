/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x14010C320
 * Callers:
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x14010C3A0 (HmgMarkUndeletable.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(__int64 **this)
{
  __int64 v2; // rdx

  *((_DWORD *)*this + 10) |= 0x40200u;
  HmgSetOwner(**this, 0, 16);
  LOBYTE(v2) = 16;
  HmgMarkUndeletable(**this, v2);
}
