/*
 * XREFs of HalpTimerRegisterQueryCounterHandler @ 0x14058538C
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 *     HalpTimerRegister @ 0x14059A8EC (HalpTimerRegister.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpTimerRegisterQueryCounterHandler(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // r8
  int v5; // edx

  result = 0xFFFFFFFFLL;
  if ( a1 )
  {
    v4 = HalpTimerQueryCounterHandlers;
    for ( result = 0LL; ; result = (unsigned int)(result + 1) )
    {
      v5 = HalpTimerQueryCounterHandlerCount;
      if ( (unsigned int)result >= HalpTimerQueryCounterHandlerCount )
        break;
      if ( a1 == *v4 && a2 == v4[1] )
        return result;
      v4 += 2;
    }
    if ( (unsigned int)result >= 0x20 )
      KeBugCheckEx(0x5Cu, 0x110uLL, 0LL, 0x2CuLL, 0LL);
    *v4 = a1;
    HalpTimerQueryCounterHandlerCount = v5 + 1;
    v4[1] = a2;
  }
  return result;
}
