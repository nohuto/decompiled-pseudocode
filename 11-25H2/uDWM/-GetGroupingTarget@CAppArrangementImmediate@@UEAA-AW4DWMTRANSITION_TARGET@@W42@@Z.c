/*
 * XREFs of ?GetGroupingTarget@CAppArrangementImmediate@@UEAA?AW4DWMTRANSITION_TARGET@@W42@@Z @ 0x1800C6D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppArrangementImmediate::GetGroupingTarget(__int64 a1, __int16 a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // edx
  unsigned int i; // r9d

  v2 = &unk_1800FE24C;
  v3 = a2 & 0xFFF;
  for ( i = 0; i < 3; ++i )
  {
    if ( (*(v2 - 1) & 0xFFF) == v3 || (*v2 & 0xFFF) == v3 )
      return *(v2 - 1) & 0xFFF;
    v2 += 2;
  }
  return v3;
}
