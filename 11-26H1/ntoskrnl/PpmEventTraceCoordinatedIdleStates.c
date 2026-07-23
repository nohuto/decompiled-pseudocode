/*
 * XREFs of PpmEventTraceCoordinatedIdleStates @ 0x140B490C4
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PpmEventTraceCoordinatedIdleStates()
{
  __int64 v0; // rdi
  unsigned int v1; // eax
  ULONG v2; // esi
  struct _EVENT_DATA_DESCRIPTOR *Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v5; // r9d
  struct _EVENT_DATA_DESCRIPTOR *v6; // r8
  int v7; // edx
  __int64 v8; // r11
  __int64 v9; // rcx
  const wchar_t *v10; // r10
  int v11; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN) )
  {
    v0 = PpmPlatformStates;
    v1 = PpmPlatformStates ? *(_DWORD *)PpmPlatformStates : 0;
    v2 = 2 * v1 + 1;
    v12 = v1;
    Pool2 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(0x100uLL);
    UserData = Pool2;
    if ( Pool2 )
    {
      v5 = 0;
      v6 = &Pool2[v2];
      *(_QWORD *)&Pool2->Size = 4LL;
      for ( Pool2->Ptr = (ULONGLONG)&v12; v5 < v12; UserData[v7 + 2].Reserved = 0 )
      {
        v7 = 2 * v5;
        v8 = 448LL * v5;
        v9 = 2 * v5 + 1;
        LODWORD(v6->Ptr) = *(_DWORD *)(v8 + v0 + 72);
        HIDWORD(v6->Ptr) = *(_DWORD *)(v8 + v0 + 76);
        v6->Size = *(unsigned __int8 *)(v8 + v0 + 121);
        UserData[v9].Ptr = (ULONGLONG)v6;
        *(_QWORD *)&UserData[v9].Size = 12LL;
        v10 = *(const wchar_t **)(v8 + v0 + 400);
        if ( v10 )
        {
          v11 = *(unsigned __int16 *)(v8 + v0 + 394);
        }
        else
        {
          v11 = 28;
          v10 = L"<unspecified>";
        }
        UserData[v7 + 2].Ptr = (ULONGLONG)v10;
        v6 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v6 + 12);
        UserData[v7 + 2].Size = v11;
        ++v5;
      }
      EtwWrite(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN, 0LL, v2, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
