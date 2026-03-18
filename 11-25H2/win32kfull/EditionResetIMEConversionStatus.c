/*
 * XREFs of EditionResetIMEConversionStatus @ 0x140225890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionResetIMEConversionStatus(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !a1
    || !a2
    || (a1 = *(unsigned __int16 *)(a1 + 40), result = 1023LL, LOWORD(a1) = *(_WORD *)(a2 + 40) ^ a1, (a1 & 0x3FF) != 0) )
  {
    result = W32GetUserSessionState(a1, a2);
    *(_DWORD *)(result + 14288) = -1;
  }
  return result;
}
