/*
 * XREFs of PpmEventHgsContainmentGroupInfo @ 0x1406110DC
 * Callers:
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x14060E258 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventHgsContainmentGroupInfo(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  _DWORD *v4; // rsi
  char *Pool2; // rdi
  int v6; // r11d
  _QWORD *v7; // r8
  __int64 *v8; // r15
  ULONG UserDataCount; // r9d
  unsigned int v10; // r14d
  _WORD *v11; // rsi
  ULONGLONG v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // [rsp+48h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+58h] [rbp-69h] BYREF

  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_CONTAINMENT_GROUP_INFO_RUNDOWN;
    if ( !a2 )
      v3 = &PPM_ETW_WPS_CONTAINMENT_GROUP_INFO;
    if ( PpmEtwRegistered )
    {
      if ( EtwEventEnabled(PpmEtwHandle, v3) )
      {
        v4 = *(_DWORD **)(a1 + 1240);
        v17 = *v4;
        Pool2 = (char *)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          *(_QWORD *)&UserData[0].Size = 4LL;
          v6 = 0;
          v7 = Pool2 + 6;
          UserData[0].Ptr = (ULONGLONG)&v17;
          v8 = (__int64 *)(v4 + 6);
          UserDataCount = 1;
          v10 = 3;
          v11 = v4 + 2;
          v12 = (ULONGLONG)(Pool2 + 6);
          do
          {
            *(_DWORD *)((char *)v7 - 6) = v6++;
            v13 = UserDataCount;
            UserDataCount += 3;
            UserData[v13].Ptr = v12 - 6;
            *(_QWORD *)&UserData[v13].Size = 1LL;
            v14 = v10 - 1;
            *((_WORD *)v7 - 1) = *v11++;
            UserData[v14].Ptr = v12 - 2;
            *(_QWORD *)&UserData[v14].Size = 1LL;
            v15 = *v8;
            v8 += 33;
            *v7 = v15;
            v7 = (_QWORD *)((char *)v7 + 14);
            v16 = v10;
            v10 += 3;
            v16 *= 2LL;
            *(&UserData[0].Ptr + v16) = v12;
            v12 += 14LL;
            *((_QWORD *)&UserData[0].Size + v16) = 8LL;
          }
          while ( v6 < 3 );
          EtwWriteEx(PpmEtwHandle, v3, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
          ExFreePoolWithTag(Pool2, 0x654D5050u);
        }
      }
    }
  }
}
