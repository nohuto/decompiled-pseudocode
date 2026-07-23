/*
 * XREFs of XmOutsOp @ 0x1405AFF90
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosWriteIoSpace @ 0x1404A16E0 (x86BiosWriteIoSpace.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 *     XmGetStringAddress @ 0x1405B11B8 (XmGetStringAddress.c)
 */

char __fastcall XmOutsOp(__int64 a1)
{
  char result; // al
  int v3; // edi
  unsigned __int16 i; // si
  unsigned __int16 *StringAddress; // rax

  result = 0;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      v3 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
    }
    else
    {
      v3 = *(unsigned __int16 *)(a1 + 28);
      *(_WORD *)(a1 + 28) = 0;
    }
  }
  for ( i = *(_WORD *)(a1 + 108); v3; --v3 )
  {
    StringAddress = (unsigned __int16 *)XmGetStringAddress(a1, *(unsigned int *)(a1 + 116), 6LL);
    XmSetSourceValue(a1, StringAddress);
    result = x86BiosWriteIoSpace(*(unsigned int *)(a1 + 120), i, *(_DWORD *)(a1 + 108));
  }
  return result;
}
