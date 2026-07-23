/*
 * XREFs of TppJobpExecuteCallback @ 0x1800BDDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x180016200 (TppCompleteThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x1800167D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     RtlpTpETWCallbackStart @ 0x180087550 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800877CC (RtlpTpETWCallbackStop.c)
 *     TppStartThreadData @ 0x1800BE040 (TppStartThreadData.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppJobpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  char *v9; // r9
  signed __int64 v10; // rax
  void *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  int Count; // ebx
  PVOID BaseAddress; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  int v19; // [rsp+88h] [rbp+10h] BYREF

  v18 = 0LL;
  v6 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  TppBarrierAdjust((_RTL_SRWLOCK *)(a2 + 128), 1, 0);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 280), 2uLL) + 2;
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(v6 + 8))(v6);
  }
  else
  {
    v11 = *(void **)(a2 + 208);
    if ( !v11 )
    {
LABEL_3:
      TppCleanupGroupMemberCallbackProlog(a1, v6);
      v12 = 2147353478LL;
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v13 = 2147353478LL;
      if ( *(_BYTE *)v13 )
        RtlpTpETWCallbackStart(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppStartThreadData(&v18, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
      v14 = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 96) = v14;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        a1,
        v14,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->SharedData + 556;
      if ( *(_BYTE *)v12 )
        RtlpTpETWCallbackStop(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppCompleteThreadData(v18);
      return;
    }
    BaseAddress = 0LL;
    if ( (int)LdrpFindLoadedDllByHandle(v11, (__int64 *)&BaseAddress, &v19, v9) >= 0 )
    {
      Count = LdrpIncrementModuleLoadCount((__int64)BaseAddress, v15);
      LdrpDereferenceModule((char *)BaseAddress);
      if ( Count >= 0 )
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v11;
        goto LABEL_3;
      }
    }
  }
  TppBarrierAdjust((_RTL_SRWLOCK *)(v6 + 56), -1, 0);
  if ( !_InterlockedDecrement((volatile signed __int32 *)v6) )
    (**(void (__fastcall ***)(__int64))(v6 + 8))(v6);
}
