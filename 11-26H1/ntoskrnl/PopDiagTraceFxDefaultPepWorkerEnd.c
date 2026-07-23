/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerEnd @ 0x14025727C
 * Callers:
 *     PopPepWork @ 0x1403B84E0 (PopPepWork.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDefaultPepWorkerEnd(__int64 a1, int a2, char a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rax
  int v6; // esi
  int v7; // ebx
  REGHANDLE v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  REGHANDLE v13; // rdx
  __int64 v14; // rcx
  REGHANDLE v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // al
  const EVENT_DESCRIPTOR *v20; // rdx
  int v21; // r8d
  __int16 *v22; // rdx
  int v23; // ett
  int ActivityId; // [rsp+28h] [rbp-91h]
  int RelatedActivityId; // [rsp+30h] [rbp-89h]
  ULONG UserDataCount; // [rsp+38h] [rbp-81h]
  char v28; // [rsp+48h] [rbp-71h] BYREF
  char v29; // [rsp+49h] [rbp-70h] BYREF
  char v30; // [rsp+4Ah] [rbp-6Fh] BYREF
  int v31; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int64 v32; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-61h] BYREF
  char *v34; // [rsp+68h] [rbp-51h]
  __int64 v35; // [rsp+70h] [rbp-49h]
  char *v36; // [rsp+78h] [rbp-41h]
  __int64 v37; // [rsp+80h] [rbp-39h]
  char *v38; // [rsp+88h] [rbp-31h]
  __int64 v39; // [rsp+90h] [rbp-29h]
  __int64 v40[4]; // [rsp+98h] [rbp-21h] BYREF
  int *v41; // [rsp+B8h] [rbp-1h]
  __int64 v42; // [rsp+C0h] [rbp+7h]
  __int64 *v43; // [rsp+C8h] [rbp+Fh]
  __int64 v44; // [rsp+D0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+57h] BYREF
  __int64 v46; // [rsp+118h] [rbp+5Fh] BYREF

  v5 = (unsigned __int64)&retaddr;
  v46 = a1;
  v6 = a5;
  v7 = a4;
  if ( (_DWORD)a4 == 2 )
  {
    if ( (unsigned int)dword_140E07560 <= 5 )
      goto LABEL_3;
    LOBYTE(v5) = tlgKeywordOn(&dword_140E07560, 0x400000000000LL);
    if ( !(_BYTE)v5 )
      goto LABEL_3;
    v41 = &v31;
    v22 = word_14004BACA;
    UserDataCount = 3;
  }
  else
  {
    if ( (_DWORD)a4 != 3 )
      goto LABEL_3;
    _m_prefetchw(&PopLogFxDefaultPepWorkerOrphaned);
    LODWORD(v5) = PopLogFxDefaultPepWorkerOrphaned;
    do
    {
      v23 = v5;
      LODWORD(v5) = _InterlockedCompareExchange(&PopLogFxDefaultPepWorkerOrphaned, 0, v5);
    }
    while ( v23 != (_DWORD)v5 );
    if ( !(_DWORD)v5 )
      goto LABEL_3;
    if ( (unsigned int)dword_140E07560 <= 5 )
      goto LABEL_3;
    LOBYTE(v5) = tlgKeywordOn(&dword_140E07560, 0x400000000000LL);
    if ( !(_BYTE)v5 )
      goto LABEL_3;
    v32 = 0x1000000LL;
    v41 = &v31;
    v22 = (__int16 *)&byte_14004BB09;
    v44 = 8LL;
    v43 = &v32;
    UserDataCount = 4;
  }
  v31 = v6;
  v42 = 4LL;
  LOBYTE(v5) = tlgWriteEx_EtwWriteEx(
                 (int)&dword_140E07560,
                 (int)v22,
                 v21,
                 1,
                 ActivityId,
                 RelatedActivityId,
                 UserDataCount,
                 (__int64)v40);
LABEL_3:
  if ( PopDiagHandleRegistered )
  {
    v10 = PopDiagHandle;
    v11 = 256LL;
    if ( PopDiagHandle )
    {
      v12 = *(_QWORD *)(PopDiagHandle + 32);
      if ( *(_DWORD *)(v12 + 96) )
      {
        LOBYTE(v5) = *(_BYTE *)(v12 + 100);
        if ( (unsigned __int8)v5 >= 4u || !(_BYTE)v5 )
        {
          LODWORD(v5) = *(_DWORD *)(v12 + 112);
          if ( (v5 & 0x100) != 0 )
          {
            LOBYTE(v5) = 0;
            if ( (*(_QWORD *)(v12 + 120) & 0x100LL) == *(_QWORD *)(v12 + 120) )
              goto LABEL_29;
          }
        }
      }
      if ( *(_WORD *)(PopDiagHandle + 102) )
      {
        LOBYTE(v10) = 4;
        LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 40) + 96LL, v10, 256LL, a4);
        if ( (_BYTE)v5 )
          goto LABEL_29;
      }
    }
    v13 = PopDiagHandle;
    if ( PopDiagHandle )
    {
      v14 = *(_QWORD *)(PopDiagHandle + 32);
      if ( *(_DWORD *)(v14 + 96) )
      {
        v5 = *(unsigned int *)(v14 + 112);
        if ( (v5 & v11) != 0 )
        {
          v17 = *(_QWORD *)(v14 + 120);
          LOBYTE(v5) = v11 & v17;
          if ( (v11 & v17) == v17 )
            goto LABEL_29;
        }
      }
      if ( *(_WORD *)(PopDiagHandle + 102) )
      {
        LOBYTE(v13) = 1;
        LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 40) + 96LL, v13, v11, a4);
        if ( (_BYTE)v5 )
          goto LABEL_29;
      }
    }
    v15 = PopDiagHandle;
    if ( PopDiagHandle )
    {
      if ( (v16 = *(_QWORD *)(PopDiagHandle + 32), *(_DWORD *)(v16 + 96))
        && (v5 = *(unsigned int *)(v16 + 112), (v5 & v11) != 0)
        && (v18 = *(_QWORD *)(v16 + 120), LOBYTE(v5) = v11 & v18, (v11 & v18) == v18)
        || *(_WORD *)(PopDiagHandle + 102)
        && (LOBYTE(v15) = 1,
            LOBYTE(v5) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 40) + 96LL, v15, v11, a4),
            (_BYTE)v5) )
      {
LABEL_29:
        if ( a2 )
        {
          if ( a2 == 1 )
          {
            v19 = -1;
          }
          else
          {
            v19 = a3;
            if ( a2 == 3 )
              v19 = -2;
          }
        }
        else
        {
          v19 = -3;
        }
        v28 = v19;
        UserData.Ptr = (ULONGLONG)&v46;
        v34 = &v28;
        v36 = &v29;
        v38 = &v30;
        v29 = v7;
        v30 = v6;
        *(_QWORD *)&UserData.Size = 8LL;
        v35 = 1LL;
        v37 = 1LL;
        v39 = 1LL;
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END);
        if ( (_BYTE)v5 )
          LOBYTE(v5) = EtwWriteEx(
                         PopDiagHandle,
                         &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END,
                         0LL,
                         1u,
                         0LL,
                         0LL,
                         4u,
                         &UserData);
        if ( v7 == 2 )
        {
          LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED);
          if ( !(_BYTE)v5 )
            return v5;
          v20 = &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED;
          goto LABEL_39;
        }
        if ( v7 == 3 )
        {
          LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED);
          if ( (_BYTE)v5 )
          {
            v20 = &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED;
LABEL_39:
            LOBYTE(v5) = EtwWriteEx(PopDiagHandle, v20, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
          }
        }
      }
    }
  }
  return v5;
}
