/*
 * XREFs of ?AllowSnapshot@CWindowData@@QEBA_NXZ @ 0x180056E54
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000F850 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 */

char __fastcall CWindowData::AllowSnapshot(CWindowData *this)
{
  char v1; // dl
  _DWORD *v3; // r8

  if ( (*((_DWORD *)this + 43) & 0x400) != 0 )
    return 0;
  if ( CAccent::s_IsPolicyActive((CWindowData *)((char *)this + 168)) )
    return *v3 == 5;
  return v1;
}
