/*
 * XREFs of KiInsertQueueApc @ 0x14020B150
 * Callers:
 *     KiSuspendThread @ 0x14020917C (KiSuspendThread.c)
 *     KiQueueTebUpdateApc @ 0x1402094C4 (KiQueueTebUpdateApc.c)
 *     KiInsertDeferredPreemptionApc @ 0x14020A138 (KiInsertDeferredPreemptionApc.c)
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     KeRequestTerminationThread @ 0x1403107F4 (KeRequestTerminationThread.c)
 *     KeTryToInsertQueueApc @ 0x1403F0DB8 (KeTryToInsertQueueApc.c)
 *     KiSchedulerApc @ 0x14049B710 (KiSchedulerApc.c)
 *     KiRequestSchedulerApcThread @ 0x1405F93EC (KiRequestSchedulerApcThread.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406007F8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiInsertQueueApc(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD **v10; // r9
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(int, int, int, int, __int64); // r10
  _QWORD *v14; // rdx
  __int64 v15; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 80) && *(_BYTE *)(v1 + 586) )
  {
    v2 = v1 + 600;
  }
  else
  {
    v2 = v1 + 152;
    *(_BYTE *)(a1 + 80) = *(_BYTE *)(v1 + 586);
  }
  v3 = *(char *)(a1 + 81);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v7 = (_QWORD *)(v2 + 16 * v3);
    for ( result = (_QWORD *)v7[1]; result != v7; result = (_QWORD *)result[1] )
    {
      if ( !result[4] )
        break;
    }
    v8 = (_QWORD *)(a1 + 16);
    v9 = *result;
    if ( *(_QWORD **)(*result + 8LL) == result )
    {
      *v8 = v9;
      v8[1] = result;
      *(_QWORD *)(v9 + 8) = v8;
      *result = v8;
      return result;
    }
    goto LABEL_7;
  }
  if ( (_BYTE)v3 )
  {
    v13 = *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32);
    if ( (char *)v13 == (char *)KiSchedulerApcTerminate )
    {
      *(_BYTE *)(v1 + 194) |= 2u;
      v14 = (_QWORD *)(a1 + 16);
      v15 = v2 + 16 * v3;
      result = *(_QWORD **)v15;
      if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 )
      {
        *v14 = result;
        v14[1] = v15;
        result[1] = v14;
        *(_QWORD *)v15 = v14;
        return result;
      }
    }
    else
    {
      if ( v13 != KeSpecialUserApcKernelRoutine )
        goto LABEL_6;
      v10 = (_QWORD **)(v2 + 16 * v3);
      for ( result = *v10; result != v10; result = (_QWORD *)*result )
      {
        if ( v13 != KeSpecialUserApcKernelRoutine && (char *)v13 != (char *)KiSchedulerApcTerminate )
        {
          result = (_QWORD *)result[1];
          break;
        }
      }
      *(_BYTE *)(v1 + 194) |= 1u;
      v11 = (_QWORD *)(a1 + 16);
      v12 = *result;
      if ( *(_QWORD **)(*result + 8LL) == result )
      {
        *v11 = v12;
        v11[1] = result;
        *(_QWORD *)(v12 + 8) = v11;
        *result = v11;
        return result;
      }
    }
LABEL_7:
    __fastfail(3u);
  }
LABEL_6:
  v4 = (_QWORD *)(a1 + 16);
  v5 = v2 + 16 * v3;
  result = *(_QWORD **)(v5 + 8);
  if ( *result != v5 )
    goto LABEL_7;
  *v4 = v5;
  v4[1] = result;
  *result = v4;
  *(_QWORD *)(v5 + 8) = v4;
  return result;
}
