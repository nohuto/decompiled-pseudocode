/*
 * XREFs of XmPortDX @ 0x1404A1ED0
 * Callers:
 *     <none>
 * Callees:
 *     XmSetDataType @ 0x1404A1FB0 (XmSetDataType.c)
 */

__int64 __fastcall XmPortDX(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r8d

  v1 = *(unsigned __int16 *)(a1 + 32);
  *(_DWORD *)(a1 + 120) = 1;
  *(_DWORD *)(a1 + 108) = v1;
  XmSetDataType();
  return v2;
}
