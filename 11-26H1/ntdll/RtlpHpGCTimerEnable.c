/*
 * XREFs of RtlpHpGCTimerEnable @ 0x1800CC558
 * Callers:
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppInitializeTimer @ 0x180038F40 (TppInitializeTimer.c)
 *     TpReleaseTimer @ 0x1800882C0 (TpReleaseTimer.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall RtlpHpGCTimerEnable(__int64 a1, __int64 a2)
{
  _TP_TIMER *v2; // rdi
  _PEB_LDR_DATA *Ldr; // rcx
  _TP_TIMER *Heap_0; // rax
  _TP_TIMER *v5; // rsi
  int v6; // ebx
  _DWORD v8[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  int v16; // [rsp+70h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+8h]

  v2 = 0LL;
  v8[1] = 0;
  if ( Timer )
  {
    return 255;
  }
  else
  {
    v8[0] = 3;
    v10 = 0LL;
    v11 = 0LL;
    Ldr = NtCurrentPeb()->Ldr;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v16 = 72;
    v9 = a2;
    v15 = 2;
    if ( Ldr->ShutdownInProgress )
    {
      TppRaiseInvalidParameter();
      return (unsigned int)-1073741811;
    }
    else
    {
      Heap_0 = (_TP_TIMER *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8, 0x168uLL);
      v5 = Heap_0;
      if ( Heap_0 )
      {
        Heap_0->Work.CleanupGroupMember.AllocCaller.ReturnAddress = retaddr;
        v6 = TppInitializeTimer(
               (__int64)Heap_0,
               0,
               (int)&Timer,
               (__int64)v8,
               (__int64)&TppTimerpCleanupGroupMemberVFuncs,
               (__int64)&TppTimerpTaskVFuncs);
        if ( v6 >= 0 )
        {
          v2 = v5;
          v5->Work.CleanupGroupMember.Callback = RtlpHpGCTimerCallback;
        }
      }
      else
      {
        v6 = -1073741801;
      }
      if ( v6 >= 0 )
      {
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&Timer, (signed __int64)v2, 0LL) )
          return 0;
        v6 = 255;
      }
      if ( v2 )
        TpReleaseTimer(v2);
    }
  }
  return (unsigned int)v6;
}
