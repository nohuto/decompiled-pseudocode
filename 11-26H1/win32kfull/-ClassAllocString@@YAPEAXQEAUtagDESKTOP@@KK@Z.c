/*
 * XREFs of ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1401503F0
 * Callers:
 *     ReferenceClass @ 0x140151720 (ReferenceClass.c)
 * Callees:
 *     DesktopAllocInternal @ 0x140150424 (DesktopAllocInternal.c)
 */

__int64 __fastcall ClassAllocString(struct tagDESKTOP *const a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    return Win32AllocPoolZInit((unsigned int)a2, 1818456917LL);
  LOBYTE(a4) = 1;
  return DesktopAllocInternal(a1, a2, a3, a4);
}
