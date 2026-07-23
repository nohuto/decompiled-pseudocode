/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x18003A554
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18003A200 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x18003E7A0 (RtlSetThreadSubProcessTag.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x18005ED80 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x18008E680 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpWnfETWEventCallback @ 0x1801054D4 (RtlpWnfETWEventCallback.c)
 *     RtlpWnfMarkFailure @ 0x18011E480 (RtlpWnfMarkFailure.c)
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x180138D1C (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(unsigned int *a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r12d
  unsigned int *v5; // rbx
  _RTL_SRWLOCK *v6; // r15
  _RTL_SRWLOCK *v7; // rcx
  _RTL_SRWLOCK *Value; // r9
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned int v11; // r14d
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r15d
  int v15; // r12d
  _RTL_SRWLOCK *v16; // rax
  unsigned int *v17; // r13
  __int64 v18; // rcx
  _RTL_SRWLOCK *v19; // rbx
  int v20; // r14d
  int v21; // eax
  _RTL_SRWLOCK *v23; // rcx
  BOOLEAN v24; // al
  _DWORD *v25; // rcx
  LONG v26; // eax
  int v27; // ecx
  int v28; // [rsp+44h] [rbp-C4h]
  int v29; // [rsp+4Ch] [rbp-BCh]
  _RTL_SRWLOCK *v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall *v32)(__int64, _QWORD, __int64, unsigned __int64, char *, unsigned int); // [rsp+68h] [rbp-A0h]
  PVOID SubProcessTag; // [rsp+70h] [rbp-98h]
  unsigned __int64 v34; // [rsp+78h] [rbp-90h]
  _RTL_SRWLOCK *v35; // [rsp+80h] [rbp-88h]
  char *v36; // [rsp+88h] [rbp-80h]
  _RTL_SRWLOCK *v37; // [rsp+90h] [rbp-78h]
  PVOID v38; // [rsp+A0h] [rbp-68h]
  _RTL_SRWLOCK *SRWLock; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v41; // [rsp+B8h] [rbp-50h]
  _RTL_SRWLOCK *v42; // [rsp+C0h] [rbp-48h]

  v3 = a3;
  v5 = a1;
  v28 = 0;
  v36 = (char *)a1 + a1[11];
  v6 = a2 + 8;
  v42 = a2 + 8;
  SRWLock = a2 + 8;
  RtlAcquireSRWLockExclusive(a2 + 8);
  v7 = a2 + 9;
  v37 = a2 + 9;
  Value = (_RTL_SRWLOCK *)a2[9].Value;
  v30 = Value;
  while ( Value != v7 )
  {
    v41 = (unsigned __int64 *)&Value[-1];
    v9 = (unsigned __int64 *)&Value[-1];
    v10 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0] + 500000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)&Value[3]) <= 1 )
      __fastfail(0xEu);
    v11 = v5[6] & v9[9];
    if ( !*((_DWORD *)v9 + 19)
      && v11
      && ((v11 & 1) != 0 && (!*((_DWORD *)v9 + 16) || (int)(v5[4] - *((_DWORD *)v9 + 16)) > 0)
       || (v11 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v9 + 39)
       || (v11 & 0x10) != 0)
      && (!*((_DWORD *)v9 + 30) || v10 >= v9[14] || (v27 = *((_DWORD *)v9 + 33)) == 0 || (int)(v5[4] - v27) > 0)
      && (!v3 || *((_DWORD *)v9 + 38)) )
    {
      v32 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned __int64, char *, unsigned int))v9[5];
      v12 = v9[3];
      v13 = *(_QWORD *)(v12 + 16);
      v31 = *(_QWORD *)(v12 + 56);
      v34 = v9[6];
      SubProcessTag = (PVOID)v9[7];
      *((_DWORD *)v9 + 34) = NtCurrentTeb()->ClientId.UniqueThread;
      if ( Value == (_RTL_SRWLOCK *)-136LL )
      {
        v26 = RtlNtStatusToDosErrorNoTeb(-1073741811);
        RtlSetLastWin32Error(v26);
      }
      else
      {
        v9[18] = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
      }
      RtlReleaseSRWLockExclusive(v6);
      v14 = 0;
      v29 = 0;
      v15 = 0;
      v16 = (_RTL_SRWLOCK *)v9[10];
      v35 = v16;
      if ( v16 )
      {
        v23 = v16 + 3;
        if ( a3 )
        {
          RtlAcquireSRWLockExclusive(v23);
          v15 = 1;
          goto LABEL_13;
        }
        v24 = RtlTryAcquireSRWLockExclusive(v23);
        LOBYTE(v15) = v24 != 0;
        if ( v24 )
          goto LABEL_13;
        v21 = 1;
        v20 = 0;
LABEL_33:
        *((_DWORD *)v41 + 38) = v21;
        if ( !v20 )
          RtlAcquireSRWLockExclusive(a2 + 8);
        *((_DWORD *)v9 + 34) = 0;
        v9[18] = 0LL;
        v5 = a1;
        Value = v30;
        v6 = v42;
        v3 = a3;
        goto LABEL_36;
      }
LABEL_13:
      if ( *((_DWORD *)v9 + 19) )
      {
        v17 = a1;
        v19 = v35;
        v20 = 0;
      }
      else
      {
        v38 = RtlSetThreadSubProcessTag(SubProcessTag);
        v29 = 1;
        v17 = a1;
        if ( (v11 & 1) != 0 )
          v14 = v32(v13, a1[4], v31, v34, v36, a1[5]);
        if ( (v11 & 0x10) != 0 && !*((_DWORD *)v9 + 19) && (v14 >= 0 || (*((_BYTE *)v9 + 68) & 4) == 0) )
        {
          v32(v13, 0LL, v31, v34, 0LL, 0);
          v14 = 0;
        }
        if ( (v11 & 0xFFFFFFEE) != 0 )
        {
          ((void (__fastcall *)(__int64, unsigned __int64, _QWORD))v32)(v13, v34, v11);
          v14 = 0;
        }
        if ( RtlGetCurrentServiceSessionId() )
          v18 = (__int64)NtCurrentPeb()->SharedData + 564;
        else
          v18 = 2147353486LL;
        if ( *(_BYTE *)v18 )
          RtlpWnfETWEventCallback(v13, a1[4], (_DWORD)v9, (_DWORD)a2, (__int64)v32, v11, v14);
        v19 = v35;
        v20 = 0;
        RtlSetThreadSubProcessTag(v38);
      }
      if ( v15 )
        RtlReleaseSRWLockExclusive(v19 + 3);
      if ( !v29 )
      {
LABEL_32:
        v21 = 0;
        goto LABEL_33;
      }
      RtlAcquireSRWLockExclusive(SRWLock);
      v20 = 1;
      if ( v14 == -1073741267 || v14 == -1073741801 )
      {
        if ( (*((_BYTE *)v9 + 68) & 4) != 0 )
        {
          v28 = 1;
          RtlpWnfMarkFailure(v9, (unsigned int)v14, v17[4]);
        }
        goto LABEL_32;
      }
      if ( !*((_DWORD *)v9 + 16) )
      {
        v25 = a1 + 4;
        goto LABEL_52;
      }
      v25 = v17 + 4;
      if ( (int)(v17[4] - *((_DWORD *)v9 + 16)) > 0 )
LABEL_52:
        *((_DWORD *)v9 + 16) = *v25;
      if ( *((_DWORD *)v9 + 31) )
      {
        v9[15] = 0LL;
        v9[16] = 0LL;
        v9[14] = 0LL;
      }
      goto LABEL_32;
    }
LABEL_36:
    v30 = (_RTL_SRWLOCK *)Value->Value;
    RtlpDereferenceWnfUserSubscription(v9);
    Value = v30;
    v7 = v37;
  }
  RtlReleaseSRWLockExclusive(a2 + 8);
  return v28 != 0 ? 0xC000022D : 0;
}
