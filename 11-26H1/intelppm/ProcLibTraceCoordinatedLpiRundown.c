/*
 * XREFs of ProcLibTraceCoordinatedLpiRundown @ 0x14002C560
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall ProcLibTraceCoordinatedLpiRundown(__int64 a1)
{
  void *v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  struct _EVENT_DATA_DESCRIPTOR *Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // r9d
  _DWORD *v10; // r10
  _DWORD *v11; // rsi
  unsigned __int64 v12; // r11
  int v13; // ecx
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rcx

  v2 = 0LL;
  if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PROCESSOR_CONTAINER_LPI_STATES) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 + 16);
      Pool2 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(256LL, 16LL * (unsigned int)(2 * v4 + 4), 1919119952LL);
      UserData = Pool2;
      if ( Pool2 )
      {
        v7 = *(unsigned __int16 *)(a1 + 2);
        Pool2->Ptr = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&Pool2->Size = v7;
        Pool2[1].Ptr = v3;
        *(_QWORD *)&Pool2[1].Size = 4LL;
        Pool2[2].Ptr = v3 + 8;
        *(_QWORD *)&Pool2[2].Size = 8LL;
        Pool2[3].Ptr = v3 + 16;
        *(_QWORD *)&Pool2[3].Size = 4LL;
        if ( (_DWORD)v4 )
        {
          v8 = ExAllocatePool2(256LL, 60 * v4, 1919119952LL);
          v2 = (void *)v8;
          if ( !v8 )
            goto LABEL_9;
          v9 = 0;
          v10 = (_DWORD *)(v8 + 8);
          v11 = (_DWORD *)(v3 + 28);
          v12 = v8;
          do
          {
            *(v10 - 2) = *(v11 - 1);
            v13 = *v11;
            v11 += 20;
            *(v10 - 1) = v13;
            v14 = 2 * v9 + 4;
            *v10 = *(v11 - 19);
            v10 += 15;
            *(v10 - 14) = *(v11 - 18);
            *(v10 - 13) = *(v11 - 17);
            *(v10 - 12) = *(v11 - 16);
            *(_QWORD *)(v10 - 11) = *(_QWORD *)(v11 - 15);
            *(v10 - 9) = *(v11 - 13);
            *((_QWORD *)v10 - 4) = *((_QWORD *)v11 - 6);
            *(v10 - 6) = *(v11 - 10);
            *(_QWORD *)(v10 - 5) = *(_QWORD *)(v11 - 9);
            *(v10 - 3) = *(v11 - 7);
            UserData[v14].Ptr = v12;
            v12 += 60LL;
            *(_QWORD *)&UserData[v14].Size = 60LL;
            v15 = *((unsigned __int16 *)v11 - 9);
            v16 = 2 * v9++ + 5;
            UserData[v16].Ptr = *(_QWORD *)(v11 - 3);
            *(_QWORD *)&UserData[v16].Size = v15;
          }
          while ( v9 < (unsigned int)v4 );
        }
        EtwWrite(
          (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
          &PPM_ETW_PROCESSOR_CONTAINER_LPI_STATES,
          0LL,
          (ULONG)(2 * v4 + 4),
          UserData);
LABEL_9:
        ExFreePoolWithTag(UserData, (ULONG)1919119952);
        if ( v2 )
          ExFreePoolWithTag(v2, (ULONG)1919119952);
      }
    }
  }
}
