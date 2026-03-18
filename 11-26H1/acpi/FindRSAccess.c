/*
 * XREFs of FindRSAccess @ 0x1400371C0
 * Callers:
 *     AccessBaseField @ 0x140004F30 (AccessBaseField.c)
 *     RegRSAccess @ 0x140036D68 (RegRSAccess.c)
 *     RawFieldAccess @ 0x140036EEC (RawFieldAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindRSAccess(int a1)
{
  KIRQL v2; // al
  __int64 i; // rbx

  v2 = ExAcquireSpinLockShared(&RSAccessLock);
  for ( i = gpRSAccessHead; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 8) == a1 )
      break;
  }
  ExReleaseSpinLockShared(&RSAccessLock, v2);
  return i;
}
