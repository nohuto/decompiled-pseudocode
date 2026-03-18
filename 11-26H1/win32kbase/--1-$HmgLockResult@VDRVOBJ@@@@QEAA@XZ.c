/*
 * XREFs of ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401F1C60
 * Callers:
 *     EngDeleteDriverObj @ 0x1401F1C90 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1401F1DF0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1401F1E70 (EngUnlockDriverObj.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 */

void __fastcall HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(_QWORD *a1)
{
  if ( *a1 )
  {
    _InterlockedDecrement16((volatile signed __int16 *)(*a1 + 12LL));
    *a1 = 0LL;
  }
  PopThreadGuardedObject(a1 + 1);
}
