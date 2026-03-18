/*
 * XREFs of Simulator_Copy_Arguments @ 0x14006C874
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 * Callees:
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 */

__int64 __fastcall Simulator_Copy_Arguments(int a1, __int64 a2, __int64 **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 *v7; // r15
  int v9; // esi
  unsigned __int64 v10; // rcx

  v3 = 0;
  v4 = a1;
  if ( a3 )
  {
    if ( a2 && a1 > 0 )
    {
      v7 = HeapAlloc((_QWORD *)gpheapGlobal, 1413563464, 40 * a1);
      if ( !v7 )
        return 3221225495LL;
      v9 = 0;
      do
      {
        v10 = 5LL * (unsigned int)v9;
        if ( v10 > 5 * v4 )
          break;
        if ( (unsigned int)DupObjData((_QWORD *)gpheapGlobal, (__int64)&v7[v10], v10 * 8 + a2) )
          break;
        ++v9;
      }
      while ( v9 < (int)v4 );
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
