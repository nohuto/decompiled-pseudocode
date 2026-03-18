/*
 * XREFs of ObpDeferPushRefDerefInfo @ 0x1404F4970
 * Callers:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall ObpDeferPushRefDerefInfo(__int64 a1, __int16 a2, int a3, __int64 a4, int a5)
{
  __int64 result; // rax
  signed __int64 *v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  signed __int64 v14; // rcx

  result = (__int64)RtlpInterlockedPopEntrySList(&ObpWorkItemFreeList);
  if ( result )
  {
    v10 = (signed __int64 *)(result + 16);
    *(_DWORD *)(result + 36) = a5;
    *(_QWORD *)(result + 24) = a1;
    *(_WORD *)(result + 32) = a2;
    *(_DWORD *)(result + 40) = a3;
    *(_OWORD *)(result + 48) = *(_OWORD *)a4;
    *(_OWORD *)(result + 64) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(result + 80) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(result + 96) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(result + 112) = *(_OWORD *)(a4 + 64);
    *(_OWORD *)(result + 128) = *(_OWORD *)(a4 + 80);
    *(_OWORD *)(result + 144) = *(_OWORD *)(a4 + 96);
    *(_OWORD *)(result + 160) = *(_OWORD *)(a4 + 112);
    *(_QWORD *)(result + 176) = *(_QWORD *)(a4 + 128);
    v11 = qword_140F132C0;
    *v10 = qword_140F132C0;
    v13 = v11;
    v12 = _InterlockedCompareExchange64(&qword_140F132C0, (signed __int64)v10, v11);
    if ( v13 != v12 )
    {
      do
      {
        v14 = v12;
        *v10 = v12;
        v12 = _InterlockedCompareExchange64(&qword_140F132C0, (signed __int64)v10, v12);
      }
      while ( v12 != v14 );
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&stru_140E66B30.WaitBlockFill11[32],
                             1,
                             0);
    if ( !(_DWORD)result )
      return KiInsertQueueDpc((ULONG_PTR)&dword_140F13280, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)&stru_140E66B30.WaitBlock[0].WaitListEntry.Blink);
  }
  return result;
}
