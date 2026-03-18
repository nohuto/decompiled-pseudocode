/*
 * XREFs of HalpInterruptPowerChange @ 0x14059101C
 * Callers:
 *     HalpInterruptPowerComponentActiveCallback @ 0x1405910B0 (HalpInterruptPowerComponentActiveCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x1405910D0 (HalpInterruptPowerComponentIdleCallback.c)
 *     HalpInterruptPowerCriticalTransitionCallback @ 0x140591110 (HalpInterruptPowerCriticalTransitionCallback.c)
 * Callees:
 *     HalpInterruptRestoreController @ 0x1404DE24C (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpInterruptInitializeController @ 0x1405901D0 (HalpInterruptInitializeController.c)
 */

__int64 __fastcall HalpInterruptPowerChange(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  int v5; // eax

  v2 = *(_DWORD *)(BugCheckParameter3 + 248);
  if ( (_BYTE)a2 )
  {
    result = v2 & 0xFFFFFFFB;
    *(_DWORD *)(BugCheckParameter3 + 248) = result;
    if ( (result & 2) == 0 )
    {
      v5 = HalpInterruptInitializeController(BugCheckParameter3, a2);
      if ( v5 < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, HalpInterruptLastProblem, BugCheckParameter3, v5);
      result = HalpInterruptRestoreController(BugCheckParameter3, 0);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, HalpInterruptLastProblem, BugCheckParameter3, (int)result);
    }
  }
  else
  {
    result = v2 & 0xFFFFFFFA | 4;
    *(_DWORD *)(BugCheckParameter3 + 248) = result;
  }
  return result;
}
