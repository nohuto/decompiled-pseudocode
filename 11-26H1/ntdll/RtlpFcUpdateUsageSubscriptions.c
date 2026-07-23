/*
 * XREFs of RtlpFcUpdateUsageSubscriptions @ 0x180111530
 * Callers:
 *     RtlSubscribeForFeatureUsageNotification @ 0x180148CC0 (RtlSubscribeForFeatureUsageNotification.c)
 *     RtlUnsubscribeFromFeatureUsageNotifications @ 0x180148CD0 (RtlUnsubscribeFromFeatureUsageNotifications.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     ZwSetSystemInformation @ 0x1801625D0 (ZwSetSystemInformation.c)
 */

__int64 __fastcall RtlpFcUpdateUsageSubscriptions(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  int v4; // r15d
  unsigned int v6; // edi
  int v7; // r14d
  unsigned __int64 v8; // rax
  ULONG v9; // ebp
  _DWORD *Heap_0; // rax
  _DWORD *v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm0
  NTSTATUS v16; // ebx

  v4 = a3;
  if ( a2 <= 0xFFFFFFFF )
  {
    v7 = a2;
    v8 = 20LL * (unsigned int)a2;
    if ( v8 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v9 = v8 + 4;
    if ( (unsigned int)v8 >= 0xFFFFFFFC )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v9);
      v6 = 0;
      v11 = Heap_0;
      if ( Heap_0 )
      {
        *Heap_0 = v7;
        v12 = 0;
        if ( a2 )
        {
          v13 = 0LL;
          do
          {
            v14 = 5 * v13;
            ++v12;
            v11[v14 + 1] = v4;
            v15 = *(_OWORD *)(a1 + 16 * v13);
            v13 = v12;
            *(_OWORD *)&v11[v14 + 2] = v15;
          }
          while ( v12 < a2 );
        }
        v16 = ZwSetSystemInformation(SystemFeatureUsageSubscriptionInformation, v11, v9);
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v11);
        if ( v16 < 0 )
          return (unsigned int)v16;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
