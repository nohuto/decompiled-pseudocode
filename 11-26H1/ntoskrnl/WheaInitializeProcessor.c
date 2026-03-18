/*
 * XREFs of WheaInitializeProcessor @ 0x140BFFBC8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 * Callees:
 *     WheapCallErrorSourceInitialize @ 0x1406D67EC (WheapCallErrorSourceInitialize.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall WheaInitializeProcessor(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  __int64 v6; // rdx
  __int64 i; // rbx

  result = 0LL;
  if ( a2 )
  {
    for ( i = qword_140EEEDC8; (__int64 *)i != &qword_140EEEDC8; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 108) == 1 )
      {
        *(_DWORD *)(i + 108) = 2;
        result = WheapCallErrorSourceInitialize(i, a2);
        if ( (int)result < 0 )
        {
          *(_DWORD *)(i + 108) = 1;
          return result;
        }
      }
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(0x42uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = &WheapErrorSourceTable;
      *(_DWORD *)Pool2 = dword_140EEEDBC;
      *(_QWORD *)(Pool2 + 16) = &WheapConfigTableLock.QuantumTarget;
      result = 0LL;
      *(_QWORD *)(a1 + 35808) = v6;
    }
    else
    {
      ++*(_DWORD *)&WheapConfigTableLock.ApcStateFill[24];
      result = 3221225626LL;
      *(_DWORD *)&WheapConfigTableLock.ApcStateFill[28] |= 0x10u;
    }
  }
  return result;
}
