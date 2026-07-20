/*
 * XREFs of SmpConfigureClearTempFiles @ 0x140013790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureClearTempFiles(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( a4 == 4 )
    SmpClearTempFiles = 1;
  return 0LL;
}
