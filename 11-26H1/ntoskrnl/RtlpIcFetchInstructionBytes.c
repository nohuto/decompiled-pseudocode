/*
 * XREFs of RtlpIcFetchInstructionBytes @ 0x140C5D45C
 * Callers:
 *     RtlpIcDecodeModRm @ 0x140C5C290 (RtlpIcDecodeModRm.c)
 *     RtlpIcEmulateInstruction @ 0x140C5C9F8 (RtlpIcEmulateInstruction.c)
 *     RtlpIcFetchImmediateOperand @ 0x140C5D3E0 (RtlpIcFetchImmediateOperand.c)
 *     RtlpIcParseInstructionPrefix @ 0x140C5D524 (RtlpIcParseInstructionPrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpIcFetchInstructionBytes(__int64 a1, _BYTE *a2, int a3, _DWORD *a4)
{
  __int64 v4; // r11
  __int64 v6; // rcx

  v4 = (unsigned int)*a4;
  if ( (int)v4 + a3 > (unsigned int)*(unsigned __int8 *)(a1 + 5) )
    return 3221225990LL;
  *a4 = v4 + a3;
  if ( a3 )
  {
    v6 = v4 - (_QWORD)a2 + a1;
    do
    {
      *a2 = a2[v6 + 6];
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return 0LL;
}
