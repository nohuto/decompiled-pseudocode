/*
 * XREFs of Simulator_Free_Arguments @ 0x14006C93C
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIRegEventHandler @ 0x140051350 (AMLIRegEventHandler.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x14006C5E0 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     FreeObjData @ 0x14000C970 (FreeObjData.c)
 */

__int64 __fastcall Simulator_Free_Arguments(int a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  _QWORD *i; // rdi
  unsigned int v6; // ecx
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  if ( a1 > 0 && a2 )
  {
    v3 = (__int64)a2;
    v4 = (unsigned int)a1;
    for ( i = a2 + 4; ; i += 5 )
    {
      v6 = *((unsigned __int16 *)i - 15);
      if ( v6 > 0x82 )
      {
        if ( v6 - 131 <= 1 )
          goto LABEL_17;
      }
      else
      {
        if ( v6 == 130 )
          goto LABEL_17;
        if ( v6 > 8 )
        {
          v8 = v6 - 9;
          v7 = v8 == 0;
        }
        else
        {
          if ( v6 == 8 )
            goto LABEL_17;
          v8 = v6 - 2;
          v7 = v8 == 0;
        }
        if ( v7 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 || v11 == 2 )
        {
LABEL_17:
          if ( *i )
            FreeObjData(v3);
        }
      }
      v3 += 40LL;
      if ( !--v4 )
      {
        HeapFree(a2);
        return 0LL;
      }
    }
  }
  return 0LL;
}
