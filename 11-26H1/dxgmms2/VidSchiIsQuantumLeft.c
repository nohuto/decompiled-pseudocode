/*
 * XREFs of VidSchiIsQuantumLeft @ 0x14002558C
 * Callers:
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x140024900 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x1400252A0 (VidSchiSetTransferContextRunningTime.c)
 */

__int64 __fastcall VidSchiIsQuantumLeft(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  signed __int32 v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD **v12; // r14
  unsigned int v13; // esi
  _QWORD *i; // rdi
  __int64 result; // rax
  volatile signed __int32 *v16; // r10
  __int64 v17; // rax
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 444), (*(_DWORD *)(a1 + 192) >> 1) & 1, 3);
  v6 = *(_QWORD *)(a1 + 96);
  if ( v5 == 2 )
  {
    v18 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v6 + 24) + 32LL),
      VidSchiResetContextQuantumAtISR,
      a1,
      *(unsigned int *)(*(_QWORD *)(v6 + 24) + 40LL),
      &v18);
    v7 = (_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v8 + 8) != a1 + 8
      || (v9 = *(_QWORD **)(a1 + 16), (_QWORD *)*v9 != v7)
      || (*v9 = v8,
          *(_QWORD *)(v8 + 8) = v9,
          v10 = v3 + 16LL * *(unsigned int *)(a1 + 412) + 2184,
          v11 = *(_QWORD **)(v10 + 8),
          *v11 != v10) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)(a1 + 16) = v11;
    *v7 = v10;
    *v11 = v7;
    result = 0LL;
    *(_QWORD *)(v10 + 8) = v7;
    return result;
  }
  v12 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 48LL) + 32LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v6 + 24) + 4LL))
                  + 216LL);
  v13 = 0;
LABEL_7:
  if ( v13 >= 2 )
  {
    *a2 = a1;
    return 1LL;
  }
  for ( i = *v12; ; i = (_QWORD *)*i )
  {
    if ( i == v12 )
    {
      ++v13;
      goto LABEL_7;
    }
    v16 = (volatile signed __int32 *)(i - 53);
    if ( *(i - 41) == *(_QWORD *)(a1 + 96) )
      break;
LABEL_14:
    ;
  }
  if ( _InterlockedCompareExchange(v16 + 111, (*((_DWORD *)v16 + 48) >> 1) & 1, 3) == 2 )
  {
    v17 = *((_QWORD *)v16 + 12);
    v18 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v17 + 24) + 32LL),
      VidSchiResetContextQuantumAtISR,
      i - 53,
      *(unsigned int *)(*(_QWORD *)(v17 + 24) + 40LL),
      &v18);
    goto LABEL_14;
  }
  *a2 = (__int64)v16;
  if ( v16 != (volatile signed __int32 *)a1 )
    VidSchiSetTransferContextRunningTime((__int64)(i - 53), a1, 1);
  return 1LL;
}
