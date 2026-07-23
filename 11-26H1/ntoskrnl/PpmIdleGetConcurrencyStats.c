/*
 * XREFs of PpmIdleGetConcurrencyStats @ 0x140AFE990
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmParkGetParkNode @ 0x140421EA4 (PpmParkGetParkNode.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmIdleGetConcurrencyStats(int a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v5; // edi
  _DWORD *v6; // r12
  __int64 *v7; // r13
  __int16 v8; // bx
  __int64 ParkNode; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 Pool2; // rax
  _DWORD *v14; // r12
  __int64 v16; // r14
  __int64 v17; // r13
  bool v18; // zf
  void *v19; // rcx
  unsigned int v20; // ebx
  int v21; // [rsp+20h] [rbp-48h]

  v21 = 0;
  v5 = 0;
  *a3 = 0LL;
  v6 = a4;
  *a4 = 0;
  v7 = a3;
  v8 = a2;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, (unsigned int)a3);
  ParkNode = PpmParkGetParkNode(v8);
  v10 = ParkNode;
  if ( ParkNode && (v11 = *(_QWORD *)(ParkNode + 1072)) != 0 )
  {
    if ( a1 == 76 )
    {
      v12 = 1;
    }
    else
    {
      v12 = *(unsigned __int8 *)(ParkNode + 10);
      if ( (unsigned __int8)v12 <= 2u )
        v12 = 2;
    }
    *v6 = 8 * (v12 + *(_DWORD *)(v11 + 8)) + 8;
    Pool2 = ExAllocatePool2(0x100uLL);
    *v7 = Pool2;
    v14 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( a1 == 76 )
      {
        memmove(
          (void *)(Pool2 + 8),
          (const void *)(*(_QWORD *)(v10 + 1072) + 328LL),
          8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 1072) + 8LL) + 1));
        *v14 = *(_DWORD *)(*(_QWORD *)(v10 + 1072) + 8LL);
      }
      else
      {
        if ( a1 != 77 )
          goto LABEL_19;
        v16 = 0LL;
        if ( !*(_BYTE *)(v10 + 10) )
          goto LABEL_19;
        do
        {
          if ( (unsigned int)v16 >= 2 )
            break;
          v17 = *(_QWORD *)(624LL * (unsigned int)v16 + *(_QWORD *)(v10 + 1256) + 552);
          if ( v17 )
          {
            v20 = *(_DWORD *)(v17 + 8) + 1;
            v5 = 1;
            memmove(&v14[2 * v21 + 2], (const void *)(v17 + 328), 8LL * v20);
            v21 += v20;
            v14[v16] = *(_DWORD *)(v17 + 8);
          }
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < *(unsigned __int8 *)(v10 + 10) );
        v7 = a3;
        v18 = v5 == 0;
        v5 = 0;
        if ( v18 )
LABEL_19:
          v5 = -1073741637;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    v6 = a4;
  }
  else
  {
    v5 = -1073741637;
  }
  PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  if ( v5 < 0 )
  {
    v19 = (void *)*v7;
    *v6 = 0;
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0x206D654Du);
      *v7 = 0LL;
    }
  }
  return (unsigned int)v5;
}
