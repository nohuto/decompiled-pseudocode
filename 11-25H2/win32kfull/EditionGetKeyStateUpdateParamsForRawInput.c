/*
 * XREFs of EditionGetKeyStateUpdateParamsForRawInput @ 0x140185110
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall EditionGetKeyStateUpdateParamsForRawInput(__int64 a1, __int64 a2, _BYTE *a3, _DWORD *a4, int *a5)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int16 v10; // cx

  result = *(unsigned int *)(a1 + 1360);
  if ( (result & 0x200000) != 0 && !*(_QWORD *)(a2 + 32) )
  {
    v8 = *(_QWORD *)(a2 + 40);
    LOBYTE(a2) = 18;
    result = HMValidateHandleNoSecure(v8, a2);
    v9 = result;
    if ( result )
    {
      if ( *(_DWORD *)(result + 56) == 1 )
      {
        *a3 = *(_BYTE *)(result + 86);
        *a4 = (*(_WORD *)(result + 82) & 1) == 0;
        v10 = *(_WORD *)(result + 82);
        result = (__int64)a5;
        *a5 = v10 & 6;
        if ( *a3 == 16 )
        {
          result = 65529LL;
          *(_WORD *)(v9 + 82) &= 0xFFF9u;
        }
      }
    }
  }
  return result;
}
