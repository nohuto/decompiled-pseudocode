/*
 * XREFs of ?_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1402C2FF8
 * Callers:
 *     EdgyUnregisterListener @ 0x14025B158 (EdgyUnregisterListener.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1402C2E94 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edgy::_FindListener(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // r10d
  __int64 result; // rax

  for ( i = 0; i < *(_DWORD *)a1; ++i )
  {
    result = 32LL * i + *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)result == a2 && *(_DWORD *)(result + 16) == a3 )
      return result;
  }
  return 0LL;
}
