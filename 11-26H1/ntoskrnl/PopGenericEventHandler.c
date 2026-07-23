/*
 * XREFs of PopGenericEventHandler @ 0x140AF2C50
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 */

__int64 __fastcall PopGenericEventHandler(char a1, _DWORD *a2)
{
  unsigned __int8 IsPlatformAoAc; // al
  _DWORD *v4; // rdx

  if ( a1 )
  {
    *a2 = 1;
  }
  else
  {
    IsPlatformAoAc = SSHSupportIsPlatformAoAc();
    *v4 = IsPlatformAoAc != 0 ? 3 : 0;
  }
  return 0LL;
}
