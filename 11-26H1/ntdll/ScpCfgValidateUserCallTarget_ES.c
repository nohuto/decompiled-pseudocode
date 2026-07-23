/*
 * XREFs of ScpCfgValidateUserCallTarget_ES @ 0x18016C140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ScpCfgValidateUserCallTarget_ES(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(8 * (a1 >> 9) + 0x123456789ABCDEFLL);
  result = a1 >> 3;
  if ( (a1 & 0xF) != 0 )
  {
    result &= ~1uLL;
    if ( !_bittest64(&v1, result) )
      return ScpCfgHandleInvalidCallTarget_ES();
LABEL_5:
    result |= 1uLL;
    if ( _bittest64(&v1, result) )
      return result;
    return ScpCfgHandleInvalidCallTarget_ES();
  }
  if ( !_bittest64(&v1, result) )
    goto LABEL_5;
  return result;
}
