/*
 * XREFs of ?GetPVLTarget@CInputView_SizeChangeOnly@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800C0E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputView_SizeChangeOnly::GetPVLTarget(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ecx
  const char *v4; // r8

  v2 = -1;
  v3 = 0;
  v4 = "+";
  while ( v3 < 3 )
  {
    if ( ((*(_DWORD *)v4 ^ a2) & 0xFFF) == 0 )
      return *(unsigned int *)&`CInputView_SizeChangeOnly::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[8 * v3 + 4];
    ++v3;
    v4 += 8;
  }
  return v2;
}
