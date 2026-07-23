/*
 * XREFs of XmXlatOpcode @ 0x1405AF1D0
 * Callers:
 *     <none>
 * Callees:
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 *     XmGetOffsetAddress @ 0x1405B1170 (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmXlatOpcode(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ecx
  int v4; // eax
  unsigned __int16 *OffsetAddress; // rax

  *(_DWORD *)(a1 + 120) = 0;
  v2 = a1 + 24;
  v3 = *(unsigned __int8 *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 137) )
    v4 = *(_DWORD *)(a1 + 36);
  else
    v4 = *(unsigned __int16 *)(a1 + 36);
  OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(a1, (unsigned int)(v3 + v4));
  XmSetSourceValue(a1, OffsetAddress);
  *(_QWORD *)(a1 + 88) = v2;
  return 1LL;
}
