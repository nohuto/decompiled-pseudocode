/*
 * XREFs of EtwTraceThread @ 0x140A045B0
 * Callers:
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216A20 (EtwTraceSiloKernelEvent.c)
 *     PsGetIoPriorityThread @ 0x1403750A0 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403825F0 (PsGetPagePriorityThread.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentThreadTeb @ 0x1404A26B0 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     EtwpPsProvTraceThread @ 0x140A04984 (EtwpPsProvTraceThread.c)
 */

void __fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  int v6; // r14d
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rcx
  unsigned int *v10; // rsi
  _KPROCESS *v11; // rcx
  __int16 v12; // dx
  char v13; // al
  unsigned __int16 *v14; // rdx
  __int64 ProcessServerSilo; // rax
  unsigned int *CurrentThreadTeb; // rdx
  _KPROCESS *Process; // rax
  __int16 v18; // cx
  char v19; // al
  int ULongFromUser; // eax
  unsigned int v21; // eax
  __int16 v22; // [rsp+30h] [rbp-C8h]
  int v23; // [rsp+38h] [rbp-C0h]
  _DWORD v24[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A0h]
  __int64 v26; // [rsp+60h] [rbp-98h]
  __int64 v27; // [rsp+68h] [rbp-90h]
  __int64 v28; // [rsp+70h] [rbp-88h]
  __int64 v29; // [rsp+78h] [rbp-80h]
  __int64 v30; // [rsp+80h] [rbp-78h]
  __int64 v31; // [rsp+88h] [rbp-70h]
  int ULong64FromUser; // [rsp+90h] [rbp-68h]
  char v33; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v36; // [rsp+97h] [rbp-61h]
  __int64 v37; // [rsp+98h] [rbp-60h]
  _QWORD v38[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 *v39; // [rsp+B0h] [rbp-48h]
  __int64 v40; // [rsp+B8h] [rbp-40h]
  __int64 *v41; // [rsp+C0h] [rbp-38h]
  __int64 v42; // [rsp+C8h] [rbp-30h]

  v6 = 2;
  v37 = 0LL;
  v23 = 6297859;
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 2) != 0 )
    EtwpPsProvTraceThread();
  v24[0] = *(_DWORD *)(a1 + 1288);
  v24[1] = *(_DWORD *)(a1 + 1296);
  v25 = *(_QWORD *)(a1 + 56);
  v26 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v29 = v9;
  v30 = *(_QWORD *)(a1 + 1376);
  v27 = 0LL;
  v28 = 0LL;
  v31 = *(_QWORD *)(a1 + 240);
  ULong64FromUser = 0;
  v33 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v36 = 0;
  if ( a3 )
  {
    v22 = 1281;
    if ( a2 )
    {
      v27 = *(_QWORD *)(a2 + 16);
      v28 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = (unsigned int *)PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      Process = KeGetCurrentThread()->Process;
      if ( !Process[1].ReadyTime )
        goto LABEL_24;
      v18 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v18 == 332 || (v19 = 0, v18 == 452) )
        v19 = 1;
      if ( v19 )
        ULongFromUser = RtlReadULongFromUser(CurrentThreadTeb + 3032);
      else
LABEL_24:
        ULongFromUser = RtlReadULong64FromUser(CurrentThreadTeb + 1480);
      ULong64FromUser = ULongFromUser;
    }
  }
  else
  {
    v22 = 1282;
    v23 = 73406723;
    v10 = *(unsigned int **)(a1 + 240);
    if ( v10 )
    {
      v11 = KeGetCurrentThread()->Process;
      if ( !v11[1].ReadyTime )
        goto LABEL_10;
      v12 = WORD2(v11[3].PerProcessorCycleTimes);
      if ( v12 == 332 || (v13 = 0, v12 == 452) )
        v13 = 1;
      if ( v13 )
      {
        ULong64FromUser = RtlReadULongFromUser(v10 + 3032);
        v27 = (unsigned int)RtlReadULongFromUser(v10 + 2049);
        v28 = (unsigned int)RtlReadULongFromUser(v10 + 2050);
      }
      else
      {
LABEL_10:
        ULong64FromUser = RtlReadULong64FromUser(v10 + 1480);
        v27 = RtlReadULong64FromUser(v10 + 2);
        v28 = RtlReadULong64FromUser(v10 + 4);
      }
    }
  }
  v38[0] = v24;
  v38[1] = 72LL;
  v14 = *(unsigned __int16 **)(a1 + 1696);
  if ( v14 && *((_QWORD *)v14 + 1) )
  {
    v21 = 2048;
    if ( *v14 < 0x800u )
      v21 = *v14;
    v39 = (__int64 *)*((_QWORD *)v14 + 1);
    v40 = v21;
    if ( !v21 || *(_WORD *)(*((_QWORD *)v14 + 1) + 2 * ((unsigned __int64)v21 >> 1) - 2) )
    {
      v41 = &EtwpNull;
      v42 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v39 = &EtwpNull;
    v40 = 2LL;
  }
  ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544));
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v38, v6, 2u, v22, v23);
}
