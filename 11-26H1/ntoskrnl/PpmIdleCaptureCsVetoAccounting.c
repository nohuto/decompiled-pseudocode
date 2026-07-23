/*
 * XREFs of PpmIdleCaptureCsVetoAccounting @ 0x140420CC8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140420F9C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1404CEF44 (PopDiagTraceSleepStudyBlocker.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmIdleCaptureCsVetoAccounting(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  KIRQL v3; // al
  __int64 v4; // rbx
  KIRQL v5; // r14
  unsigned int i; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // ecx
  char v14; // [rsp+28h] [rbp-79h] BYREF
  int v15; // [rsp+2Ch] [rbp-75h] BYREF
  __int64 v16; // [rsp+30h] [rbp-71h] BYREF
  __int64 v17; // [rsp+38h] [rbp-69h] BYREF
  __int128 v18; // [rsp+40h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  GUID *v20; // [rsp+68h] [rbp-39h]
  __int64 v21; // [rsp+70h] [rbp-31h]
  int *v22; // [rsp+78h] [rbp-29h]
  __int64 v23; // [rsp+80h] [rbp-21h]
  __int64 v24; // [rsp+88h] [rbp-19h]
  int v25; // [rsp+90h] [rbp-11h]
  int v26; // [rsp+94h] [rbp-Dh]
  __int128 *v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A0h] [rbp-1h]
  unsigned __int64 v29; // [rsp+A8h] [rbp+7h]
  __int64 v30; // [rsp+B0h] [rbp+Fh]
  __int64 *v31; // [rsp+B8h] [rbp+17h]
  __int64 v32; // [rsp+C0h] [rbp+1Fh]
  __int64 *v33; // [rsp+C8h] [rbp+27h]
  __int64 v34; // [rsp+D0h] [rbp+2Fh]

  v2 = a2;
  v16 = PopWnfCsEnterScenarioId;
  v17 = 0LL;
  v18 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( PpmPlatformStates )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v4 = PpmPlatformStates;
    v5 = v3;
    for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
    {
      v7 = 448LL * i;
      v8 = v7 + v4 + 80;
      LOBYTE(v7) = 4;
      PpmIdleCsVetoAccountingUpdateBlock(v8, v7, 0LL);
      v4 = PpmPlatformStates;
    }
    if ( (_DWORD)v2 != -1 )
    {
      v9 = 0;
      v14 = v16;
      UserData.Ptr = (ULONGLONG)&v14;
      WORD2(v18) = v2;
      v20 = &GUID_SLEEPSTUDY_BLOCKER_PARENT_PREVETO;
      v10 = 448 * v2;
      LODWORD(v18) = -1429427508;
      *(_QWORD *)&UserData.Size = 1LL;
      v21 = 16LL;
      v27 = &v18;
      v28 = 16LL;
      if ( *(_DWORD *)(v10 + v4 + 108) )
      {
        do
        {
          v11 = *(_QWORD *)(v10 + v4 + 112);
          v12 = (unsigned __int64)v9 << 6;
          if ( *(_QWORD *)(v12 + v11 + 56) )
          {
            DWORD2(v18) = *(_DWORD *)(v12 + v11 + 16);
            v15 = *(unsigned __int16 *)(stru_140E67200.Padding[4] + 24LL * v9 + 16) >> 1;
            v22 = &v15;
            v23 = 4LL;
            v13 = *(unsigned __int16 *)(stru_140E67200.Padding[4] + 24LL * v9 + 16);
            v24 = *(_QWORD *)(stru_140E67200.Padding[4] + 24LL * v9 + 24);
            v31 = &v16;
            v25 = v13;
            v33 = &v17;
            v26 = 0;
            v29 = v12 + v11 + 56;
            v30 = 8LL;
            v32 = 8LL;
            v17 = 0LL;
            v34 = 8LL;
            PopDiagTraceSleepStudyBlocker(&UserData);
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(v10 + v4 + 108) );
      }
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, v5);
  }
}
