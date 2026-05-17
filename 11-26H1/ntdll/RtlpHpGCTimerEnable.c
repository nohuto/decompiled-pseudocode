/*
 * XREFs of RtlpHpGCTimerEnable @ 0x1800CEDE8
 * Callers:
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppInitializeTimer @ 0x18004E9C0 (TppInitializeTimer.c)
 *     TpReleaseTimer @ 0x180067E70 (TpReleaseTimer.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall RtlpHpGCTimerEnable(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi
  _PEB_LDR_DATA *Ldr; // rcx
  __int64 Heap_0; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  signed __int64 v7; // rsi
  int v8; // ebx
  _DWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  int v18; // [rsp+70h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h]

  v2 = 0LL;
  v10[1] = 0;
  if ( qword_1801C7268 )
  {
    return 255;
  }
  else
  {
    v10[0] = 3;
    v12 = 0LL;
    v13 = 0LL;
    Ldr = NtCurrentPeb()->Ldr;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0;
    v18 = 72;
    v11 = a2;
    v17 = 2;
    if ( Ldr->ShutdownInProgress )
    {
      TppRaiseInvalidParameter();
      return (unsigned int)-1073741811;
    }
    else
    {
      Heap_0 = RtlAllocateHeap_0();
      v7 = Heap_0;
      if ( Heap_0 )
      {
        *(_QWORD *)(Heap_0 + 176) = retaddr;
        v8 = TppInitializeTimer(
               Heap_0,
               0,
               (int)&qword_1801C7268,
               (__int64)v10,
               (__int64)TppTimerpCleanupGroupMemberVFuncs,
               (__int64)TppTimerpTaskVFuncs);
        if ( v8 >= 0 )
        {
          v2 = v7;
          *(_QWORD *)(v7 + 80) = RtlpHpGCTimerCallback;
        }
      }
      else
      {
        v8 = -1073741801;
      }
      if ( v8 >= 0 )
      {
        if ( !_InterlockedCompareExchange64(&qword_1801C7268, v2, 0LL) )
          return 0;
        v8 = 255;
      }
      if ( v2 )
        TpReleaseTimer(v2, v5, v6);
    }
  }
  return (unsigned int)v8;
}
