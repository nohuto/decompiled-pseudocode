/*
 * XREFs of LNot @ 0x140011ED0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 */

__int64 __fastcall LNot(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi

  v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "I");
  if ( !v3 )
  {
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)((unsigned __int8)IsCompatableDSDTRevision() != 0) & 0xFFFFFFFF00000000uLL)
                                               + 0xFFFFFFFF;
  }
  return v3;
}
