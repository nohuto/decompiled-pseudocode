/*
 * XREFs of SmpTerminateCSR @ 0x140006C40
 * Callers:
 *     SmpStopCsr @ 0x140007B00 (SmpStopCsr.c)
 *     SmpDestroyControlBlock @ 0x140007BF4 (SmpDestroyControlBlock.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpSessionIdIsInitialSessions @ 0x140007D50 (SmpSessionIdIsInitialSessions.c)
 *     SmpGetProcessId @ 0x140007F50 (SmpGetProcessId.c)
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     SmpCheckSubSysStatus @ 0x14000B880 (SmpCheckSubSysStatus.c)
 *     SmpSetCoreProcessIds @ 0x140018CC4 (SmpSetCoreProcessIds.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 */

__int64 __fastcall SmpTerminateCSR(unsigned int a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rbx
  _QWORD *i; // rax
  _QWORD *v6; // rsi
  __int64 v7; // r8
  _QWORD **v8; // r11
  unsigned int v9; // esi
  _QWORD **v10; // rbx
  NTSTATUS v11; // edi
  int ProcessId; // eax
  _QWORD *v14; // rax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  _QWORD **v17; // rdx
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // [rsp+30h] [rbp-30h] BYREF
  _QWORD **v23; // [rsp+38h] [rbp-28h]
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  _QWORD **v25; // [rsp+48h] [rbp-18h]
  __int128 v26; // [rsp+50h] [rbp-10h] BYREF

  v24 = 0LL;
  v23 = &v22;
  v22 = &v22;
  v4 = (_QWORD **)(SmpKnownSubSysTable + 24LL * (a1 & 0x1F));
  v25 = v4;
  RtlAcquireSRWLockExclusive(v4 + 2, 3LL * (a1 & 0x1F), a3);
LABEL_2:
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 2) == a1 )
    {
      v6 = i - 9;
      if ( i != (_QWORD *)72 )
      {
        while ( 1 )
        {
          v15 = (volatile signed __int32 *)(v6 + 1);
          if ( !(unsigned int)SmpCheckSubSysStatus(v6) )
          {
            _InterlockedIncrement((volatile signed __int32 *)v6);
            SmpWaitForStatusChange(v16, 0LL, &v24);
            if ( (*(_BYTE *)v15 & 4) != 0 )
            {
              SmpDereferenceKnownSubSys(v6);
              v4 = v25;
              goto LABEL_2;
            }
            SmpDereferenceKnownSubSys(v6);
          }
          v17 = (_QWORD **)v6[9];
          v18 = v6 + 9;
          _InterlockedOr(v15, 4u);
          v19 = *v18;
          if ( *(_QWORD **)(*v18 + 8LL) != v18
            || (v20 = (_QWORD *)v18[1], (_QWORD *)*v20 != v18)
            || (*v20 = v19, *(_QWORD *)(v19 + 8) = v20, v21 = v23, *v23 != &v22) )
          {
LABEL_11:
            __fastfail(3u);
          }
          v4 = v25;
          *v18 = &v22;
          v18[1] = v21;
          *v21 = v18;
          v23 = (_QWORD **)v18;
          if ( v17 != v4 )
          {
            v6 = v17 - 9;
            if ( *((_DWORD *)v17 - 2) == a1 )
              continue;
          }
          goto LABEL_6;
        }
      }
      break;
    }
  }
LABEL_6:
  RtlReleaseSRWLockExclusive(v4 + 2);
  if ( v22 != &v22 )
  {
    if ( (unsigned __int8)SmpSessionIdIsInitialSessions(a1) )
    {
      LOBYTE(v7) = 1;
      v26 = 0LL;
      SmpSetCoreProcessIds(a1, &v26, v7);
      v8 = (_QWORD **)v22;
    }
    v9 = a1;
    while ( 1 )
    {
      if ( v8[1] != &v22 )
        goto LABEL_11;
      v14 = *v8;
      if ( (_QWORD **)(*v8)[1] != v8 )
        goto LABEL_11;
      v22 = *v8;
      v10 = v8 - 9;
      v14[1] = &v22;
      v11 = NtTerminateProcess(*(v8 - 5), 0);
      if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -1073741558 )
        break;
      v11 = NtWaitForSingleObject(v10[4], 0, 0LL);
      if ( v11 < 0 )
        goto LABEL_18;
LABEL_14:
      SmpDereferenceKnownSubSys(v10);
      v8 = (_QWORD **)v22;
      if ( v22 == &v22 )
        return 0LL;
    }
    ProcessId = SmpGetProcessId(v10[4]);
    SmLogFailureInt((unsigned int)"SmpTerminateProcessAndWait", 91, ProcessId, 0, v11);
LABEL_18:
    SmLogFailureInt((unsigned int)"SmpTerminateCSR", 221, *((_DWORD *)v10 + 6), v9, v11);
    goto LABEL_14;
  }
  return 0LL;
}
