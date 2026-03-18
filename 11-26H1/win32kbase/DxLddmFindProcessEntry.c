/*
 * XREFs of DxLddmFindProcessEntry @ 0x1401580B0
 * Callers:
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x140157FD0 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall DxLddmFindProcessEntry(__int64 *a1, int a2)
{
  __int64 *result; // rax
  __int64 v3; // r8

  result = a1;
  while ( 1 )
  {
    v3 = *result;
    result = (__int64 *)v3;
    if ( (__int64 *)v3 == a1 )
      break;
    if ( *(_DWORD *)(v3 + 16) == a2 )
      return result;
  }
  return 0LL;
}
