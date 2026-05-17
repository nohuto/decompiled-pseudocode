/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180037AB0
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180037300 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180037520 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800375D0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x180037E24 (RtlpFreeAllAtom.c)
 *     RtlPinAtomInAtomTable @ 0x18013F2F0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = v2 + (unsigned int)(a2 * *(_DWORD *)(a1 + 20));
  if ( v3
    && v3 >= v2
    && v3 < *(_QWORD *)(a1 + 48)
    && ((*(_DWORD *)(a1 + 20) - 1) & (unsigned int)v3) == 0
    && (*(_BYTE *)v3 & 1) != 0 )
  {
    return *(_QWORD *)(v3 + 8);
  }
  else
  {
    return 0LL;
  }
}
