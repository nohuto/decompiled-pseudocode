/*
 * XREFs of ?IsKeyDownSpecified@@YAHEPEBE@Z @ 0x140217820
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x14002B018 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsKeyDownSpecified(char a1, const unsigned __int8 *a2)
{
  __int64 i; // r8
  unsigned __int8 v3; // r9

  for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
  {
    v3 = a2[i];
    if ( !v3 )
      break;
    if ( a1 == v3 )
      return 1LL;
  }
  return 0LL;
}
