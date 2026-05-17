/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x18004FFD4
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004FC80 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlTryAcquireSRWLockExclusive @ 0x180013650 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x180054220 (RtlSetThreadSubProcessTag.c)
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x18006E230 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpWnfETWEventCallback @ 0x180105C84 (RtlpWnfETWEventCallback.c)
 *     RtlpWnfMarkFailure @ 0x18011E6D0 (RtlpWnfMarkFailure.c)
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x180138FAC (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(unsigned int *a1, __int64 a2, int a3)
{
  int v3; // r12d
  unsigned int *v5; // rbx
  volatile signed __int64 *v6; // r15
  _QWORD *v7; // rcx
  _QWORD *v8; // r9
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // r15d
  int v16; // r12d
  __int64 v17; // rax
  unsigned int *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // r14d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  volatile signed __int64 *v26; // rcx
  char v27; // al
  _DWORD *v28; // rcx
  unsigned int v29; // eax
  int v30; // ecx
  int v31; // [rsp+44h] [rbp-C4h]
  int v32; // [rsp+4Ch] [rbp-BCh]
  _QWORD *v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall *v35)(__int64, _QWORD, __int64, __int64, char *, unsigned int); // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h]
  __int64 v37; // [rsp+78h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-88h]
  char *v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  _QWORD *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  volatile signed __int64 *v43; // [rsp+A8h] [rbp-60h]
  unsigned int *v44; // [rsp+B0h] [rbp-58h]
  _QWORD *v45; // [rsp+B8h] [rbp-50h]
  volatile signed __int64 *v46; // [rsp+C0h] [rbp-48h]
  void (__fastcall *v50)(__int64, __int64, __int64, _QWORD *); // [rsp+128h] [rbp+20h] BYREF

  v3 = a3;
  v5 = a1;
  v44 = a1;
  v31 = 0;
  v39 = (char *)a1 + a1[11];
  v6 = (volatile signed __int64 *)(a2 + 64);
  v46 = (volatile signed __int64 *)(a2 + 64);
  v43 = (volatile signed __int64 *)(a2 + 64);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 64), a2);
  v7 = (_QWORD *)(a2 + 72);
  v40 = a2 + 72;
  v8 = *(_QWORD **)(a2 + 72);
  v33 = v8;
  while ( v8 != v7 )
  {
    v45 = v8 - 1;
    v9 = v8 - 1;
    v41 = v8 - 1;
    v10 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0] + 500000;
    if ( _InterlockedIncrement64(v8 + 3) <= 1 )
      __fastfail(0xEu);
    v11 = v5[6] & v9[9];
    if ( !*((_DWORD *)v9 + 19)
      && v11
      && ((v11 & 1) != 0 && (!*((_DWORD *)v9 + 16) || (int)(v5[4] - *((_DWORD *)v9 + 16)) > 0)
       || (v11 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v9 + 39)
       || (v11 & 0x10) != 0)
      && (!*((_DWORD *)v9 + 30) || v10 >= v9[14] || (v30 = *((_DWORD *)v9 + 33)) == 0 || (int)(v5[4] - v30) > 0)
      && (!v3 || *((_DWORD *)v9 + 38)) )
    {
      v35 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, char *, unsigned int))v9[5];
      v12 = v9[3];
      v13 = *(_QWORD *)(v12 + 16);
      v34 = *(_QWORD *)(v12 + 56);
      v37 = v9[6];
      v36 = v9[7];
      *((_DWORD *)v9 + 34) = NtCurrentTeb()->ClientId.UniqueThread;
      if ( v8 == (_QWORD *)-136LL )
      {
        v29 = RtlNtStatusToDosErrorNoTeb(0xC000000D);
        RtlSetLastWin32Error(v29);
      }
      else
      {
        v9[18] = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
      }
      RtlReleaseSRWLockExclusive(v6);
      v15 = 0;
      v32 = 0;
      LODWORD(v50) = 0;
      v16 = 0;
      v17 = v9[10];
      v38 = v17;
      if ( v17 )
      {
        v26 = (volatile signed __int64 *)(v17 + 24);
        if ( a3 )
        {
          RtlAcquireSRWLockExclusive(v26, v14);
          v16 = 1;
          goto LABEL_13;
        }
        v27 = RtlTryAcquireSRWLockExclusive((volatile signed __int32 *)v26);
        LOBYTE(v16) = v27 != 0;
        if ( v27 )
          goto LABEL_13;
        v22 = 1;
        v21 = 0;
LABEL_33:
        *((_DWORD *)v45 + 38) = v22;
        if ( !v21 )
          RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 64), v14);
        *((_DWORD *)v9 + 34) = 0;
        v9[18] = 0LL;
        v5 = a1;
        v8 = v33;
        v6 = v46;
        v3 = a3;
        goto LABEL_36;
      }
LABEL_13:
      if ( *((_DWORD *)v9 + 19) )
      {
        v18 = a1;
        v20 = v38;
        v21 = 0;
      }
      else
      {
        v42 = RtlSetThreadSubProcessTag(v36);
        v32 = 1;
        LODWORD(v36) = 1;
        v18 = a1;
        if ( (v11 & 1) != 0 )
          v15 = v35(v13, a1[4], v34, v37, v39, a1[5]);
        if ( (v11 & 0x10) != 0 && !*((_DWORD *)v9 + 19) && (v15 >= 0 || (*((_BYTE *)v9 + 68) & 4) == 0) )
        {
          v35(v13, 0LL, v34, v37, 0LL, 0);
          v15 = 0;
        }
        if ( (v11 & 0xFFFFFFEE) != 0 )
        {
          ((void (__fastcall *)(__int64, __int64, _QWORD))v35)(v13, v37, v11);
          v15 = 0;
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v19 = (__int64)NtCurrentPeb()->SharedData + 564;
        else
          v19 = 2147353486LL;
        if ( *(_BYTE *)v19 )
          RtlpWnfETWEventCallback(v13, a1[4], (_DWORD)v9, a2, (__int64)v35, v11, v15);
        v20 = v38;
        v21 = (int)v50;
        RtlSetThreadSubProcessTag(v42);
      }
      if ( v16 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v20 + 24));
      if ( !v32 )
      {
LABEL_32:
        v22 = 0;
        goto LABEL_33;
      }
      RtlAcquireSRWLockExclusive(v43, v14);
      v21 = 1;
      if ( v15 == -1073741267 || v15 == -1073741801 )
      {
        if ( (*((_BYTE *)v9 + 68) & 4) != 0 )
        {
          v31 = 1;
          RtlpWnfMarkFailure(v9, (unsigned int)v15, v18[4]);
        }
        goto LABEL_32;
      }
      if ( !*((_DWORD *)v9 + 16) )
      {
        v28 = v44 + 4;
        goto LABEL_53;
      }
      v28 = v18 + 4;
      if ( (int)(v18[4] - *((_DWORD *)v9 + 16)) > 0 )
LABEL_53:
        *((_DWORD *)v9 + 16) = *v28;
      if ( *((_DWORD *)v9 + 31) )
      {
        v9[15] = 0LL;
        v9[16] = 0LL;
        v9[14] = 0LL;
      }
      goto LABEL_32;
    }
LABEL_36:
    v33 = (_QWORD *)*v8;
    v50 = 0LL;
    v34 = 0LL;
    RtlpDereferenceWnfUserSubscription(v9, &v50, &v34);
    v8 = v33;
    v7 = (_QWORD *)v40;
    if ( v50 )
    {
      v50(v34, v23, v24, v33);
      v8 = v33;
      v7 = (_QWORD *)v40;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 64));
  return v31 != 0 ? 0xC000022D : 0;
}
