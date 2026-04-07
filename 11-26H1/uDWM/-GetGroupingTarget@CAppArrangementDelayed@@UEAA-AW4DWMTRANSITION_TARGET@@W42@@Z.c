/*
 * XREFs of ?GetGroupingTarget@CAppArrangementDelayed@@UEAA?AW4DWMTRANSITION_TARGET@@W42@@Z @ 0x1800C0AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppArrangementDelayed::GetGroupingTarget(__int64 a1, __int16 a2)
{
  _DWORD *v2; // rcx
  unsigned int v3; // edx
  int i; // r9d

  v2 = &unk_1800F9564;
  v3 = a2 & 0xFFF;
  for ( i = 0; !i; i = 1 )
  {
    if ( (*(v2 - 1) & 0xFFF) == v3 || (*v2 & 0xFFF) == v3 )
      return *(v2 - 1) & 0xFFF;
    v2 += 2;
  }
  return v3;
}
