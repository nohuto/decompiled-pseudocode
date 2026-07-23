/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x1409FF320
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     PspCompleteServerSiloShutdown @ 0x1407F4578 (PspCompleteServerSiloShutdown.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspGetNextJobProcess @ 0x1409FF594 (PspGetNextJobProcess.c)
 *     PspBeginServerSiloShutdown @ 0x140B543B4 (PspBeginServerSiloShutdown.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  unsigned int *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rbp
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]

  v13 = 0LL;
  v14 = 0LL;
  if ( PsIsServerSilo(a1) )
    v6 = PspBeginServerSiloShutdown(v5, *v4);
  else
    v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 8 * (*(_BYTE *)(a2 + 4) & 1) + 6;
  while ( 1 )
  {
    v10 = ((__int64 (__fastcall *)(__int64, struct _KTHREAD *, __int128 *, __int64))PspGetNextJobProcess)(
            a1,
            CurrentThread,
            &v13,
            v8);
    v11 = v10;
    if ( !v10 )
      break;
    if ( (*(_DWORD *)(v10 + 496) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain((PEPROCESS)v10, 0LL, v9, *(_DWORD *)a2);
    v8 = v11;
  }
  if ( v6 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
