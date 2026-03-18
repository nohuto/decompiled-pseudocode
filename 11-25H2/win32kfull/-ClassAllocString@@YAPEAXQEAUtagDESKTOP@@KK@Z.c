/*
 * XREFs of ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1400B49FC
 * Callers:
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1401A4040 (ReferenceClass.c)
 * Callees:
 *     DesktopAllocInternal @ 0x1400B4A30 (DesktopAllocInternal.c)
 */

__int64 __fastcall ClassAllocString(struct tagDESKTOP *const a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    return Win32AllocPoolZInit((unsigned int)a2, 1818456917LL);
  LOBYTE(a4) = 1;
  return DesktopAllocInternal(a1, a2, a3, a4);
}
