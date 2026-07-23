/*
 * XREFs of PpmEventTraceProcessorIdle @ 0x140B13448
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTraceProcessorIdle(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  int v4; // ecx
  ULONG v5; // ebp
  struct _EVENT_DATA_DESCRIPTOR *Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v8; // r8d
  unsigned int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  const wchar_t *v14; // r11
  int v15; // eax
  __int64 v16; // r8
  __int16 v17; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+18h] BYREF
  int v19; // [rsp+68h] [rbp+20h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN) )
  {
    v2 = *(_QWORD *)(a1 + 34880);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 40);
      v18 = v3;
      v4 = *(_DWORD *)(v2 + 44);
    }
    else
    {
      v4 = 0;
      v18 = 0;
      v3 = 0;
    }
    v5 = 2 * v3 + 5;
    v19 = v4;
    Pool2 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(0x100uLL);
    UserData = Pool2;
    if ( Pool2 )
    {
      v8 = 0;
      v9 = 4;
      v10 = &Pool2[v5];
      v17 = *(unsigned __int8 *)(a1 + 208);
      Pool2->Ptr = (ULONGLONG)&v17;
      *(_QWORD *)&Pool2->Size = 2LL;
      Pool2[1].Ptr = a1 + 209;
      *(_QWORD *)&Pool2[1].Size = 1LL;
      Pool2[2].Ptr = (ULONGLONG)&v19;
      *(_QWORD *)&Pool2[2].Size = 4LL;
      Pool2[3].Ptr = (ULONGLONG)&v18;
      for ( *(_QWORD *)&Pool2[3].Size = 4LL; v8 < v18; UserData[v11].Reserved = 0 )
      {
        v11 = v9 + 1;
        v12 = 352 * (v8 + 3LL);
        LODWORD(v10->Ptr) = *(_DWORD *)(v12 + v2 + 280);
        HIDWORD(v10->Ptr) = *(_DWORD *)(v12 + v2 + 284);
        LOBYTE(v10->Size) = *(_BYTE *)(v12 + v2 + 336);
        *(ULONG *)((char *)&v10->Size + 1) = *(unsigned __int8 *)(v12 + v2 + 337);
        *(ULONG *)((char *)&v10->Reserved + 1) = *(unsigned __int8 *)(v12 + v2 + 338);
        *(_DWORD *)((char *)&v10[1].Ptr + 1) = *(unsigned __int8 *)(v12 + v2 + 339);
        *(_DWORD *)((char *)&v10[1].Ptr + 5) = *(unsigned __int8 *)(v12 + v2 + 340);
        *(ULONG *)((char *)&v10[1].Size + 1) = *(unsigned __int8 *)(v12 + v2 + 341);
        *(ULONG *)((char *)&v10[1].Reserved + 1) = *(unsigned __int8 *)(v12 + v2 + 342);
        *(_DWORD *)((char *)&v10[2].Ptr + 1) = *(unsigned __int8 *)(v12 + v2 + 343);
        v13 = v9;
        UserData[v13].Ptr = (ULONGLONG)v10;
        *(_QWORD *)&UserData[v13].Size = 37LL;
        v14 = *(const wchar_t **)(v12 + v2 + 272);
        if ( v14 )
        {
          v15 = *(unsigned __int16 *)(v12 + v2 + 266);
        }
        else
        {
          v15 = 28;
          v14 = L"<unspecified>";
        }
        UserData[v9 + 1].Ptr = (ULONGLONG)v14;
        v10 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v10 + 37);
        UserData[v9 + 1].Size = v15;
        v9 += 2;
        ++v8;
      }
      v16 = v9;
      UserData[v16].Ptr = a1 + 34952;
      *(_QWORD *)&UserData[v16].Size = 4LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN, 0LL, v5, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
