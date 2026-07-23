/*
 * XREFs of KiInitiateGenericCallDpc @ 0x1403CC3E8
 * Callers:
 *     KiGenericCallDpcInitiatorDpc @ 0x1403CC0E0 (KiGenericCallDpcInitiatorDpc.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x1403CC2F0 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiInitiateGenericCallDpc(__int64 a1, _QWORD *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  ULONG_PTR v8; // rcx
  unsigned int v9; // ebx
  __int64 result; // rax
  ULONG v11; // [rsp+50h] [rbp+8h] BYREF
  ULONG v12; // [rsp+58h] [rbp+10h] BYREF
  ULONG v13; // [rsp+5Ch] [rbp+14h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v11 = ActiveProcessorCount;
  v13 = ActiveProcessorCount;
  v12 = ActiveProcessorCount;
  if ( ActiveProcessorCount )
  {
    v5 = KiProcessorBlock;
    v6 = ActiveProcessorCount;
    do
    {
      v7 = *v5;
      v8 = *v5 + 33632;
      *(_QWORD *)(v8 + 24) = *a2;
      *(_QWORD *)(v8 + 32) = a2[1];
      if ( v7 != a1 )
        KiInsertQueueDpc(v8, (__int64)&v11, (__int64)&v12, 0LL, 0);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  guard_dispatch_icall_no_overrides(a1 + 33632, a2[1]);
  v9 = 0;
  while ( 1 )
  {
    result = v11;
    if ( !v11 )
      break;
    if ( (++v9 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v9);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
