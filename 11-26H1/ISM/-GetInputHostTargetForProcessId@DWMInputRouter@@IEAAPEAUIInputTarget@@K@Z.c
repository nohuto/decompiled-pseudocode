/*
 * XREFs of ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x180065D40
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FF2C4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x180100330 (-ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z.c)
 * Callees:
 *     <none>
 */

struct IInputTarget *__fastcall DWMInputRouter::GetInputHostTargetForProcessId(DWMInputRouter *this, int a2)
{
  __int64 **v2; // rcx
  __int64 *i; // rax

  v2 = (__int64 **)*((_QWORD *)this + 12);
  for ( i = *v2; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v2 )
      return 0LL;
    if ( *((_DWORD *)i + 4) == a2 )
      break;
  }
  return (struct IInputTarget *)i[7];
}
