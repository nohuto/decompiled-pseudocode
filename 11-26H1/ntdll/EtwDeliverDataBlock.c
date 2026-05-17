/*
 * XREFs of EtwDeliverDataBlock @ 0x1800525B0
 * Callers:
 *     EtwpNotificationThread @ 0x1800509C0 (EtwpNotificationThread.c)
 *     EtwpSendSessionNotification @ 0x180076070 (EtwpSendSessionNotification.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x180050820 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180050B20 (EtwpFindRegistration.c)
 *     EtwpProcessNotification @ 0x180052AB0 (EtwpProcessNotification.c)
 *     RtlSetThreadSubProcessTag @ 0x180054220 (RtlSetThreadSubProcessTag.c)
 *     EtwpFindGuidEntry @ 0x180057C30 (EtwpFindGuidEntry.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpReferenceUmGuidEntry @ 0x18005863C (EtwpReferenceUmGuidEntry.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18006D3C8 (EtwpDereferenceUmGuidEntry.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180076830 (EtwProcessPrivateLoggerRequest.c)
 *     _tlgKeywordOn @ 0x1800EB8E8 (_tlgKeywordOn.c)
 *     EtwpProcessInternalNotification @ 0x1800FB0D0 (EtwpProcessInternalNotification.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180102F40 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpAllocateUmGuidEntry @ 0x180102F6C (EtwpAllocateUmGuidEntry.c)
 *     EtwReplyNotification @ 0x18010B380 (EtwReplyNotification.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EtwDeliverDataBlock(int *a1)
{
  unsigned int v1; // r15d
  char v2; // si
  char v4; // r12
  char v5; // r13
  __int64 v6; // r14
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *Registration; // rax
  __int64 v11; // rdx
  unsigned __int64 NextRegistration; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // r13
  __int16 v17; // cx
  unsigned int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 GuidEntry; // rsi
  char v25; // r9
  __int64 i; // rdx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 j; // rdx
  char v30; // [rsp+38h] [rbp-49h] BYREF
  char v31; // [rsp+39h] [rbp-48h]
  unsigned int v32; // [rsp+3Ch] [rbp-45h] BYREF
  int v33; // [rsp+40h] [rbp-41h] BYREF
  __int64 v34; // [rsp+48h] [rbp-39h] BYREF
  char v35[32]; // [rsp+58h] [rbp-29h] BYREF
  int *v36; // [rsp+78h] [rbp-9h]
  __int64 v37; // [rsp+80h] [rbp-1h]
  int *v38; // [rsp+88h] [rbp+7h]
  __int64 v39; // [rsp+90h] [rbp+Fh]
  unsigned int *v40; // [rsp+98h] [rbp+17h]
  __int64 v41; // [rsp+A0h] [rbp+1Fh]

  v1 = 0;
  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = *a1 == 3;
  v31 = *((_BYTE *)a1 + 12);
  v8 = a1[4];
  v34 = 0LL;
  v32 = 0;
  v30 = 0;
  v33 = v8;
  if ( v7 && *((__int16 *)a1 + 39) < 0 )
  {
    v5 = 1;
    a1[6] = -1;
  }
  v9 = (unsigned int)a1[6];
  if ( (_DWORD)v9 != -1 )
  {
    Registration = EtwpFindRegistration(a1 + 10, v9);
    NextRegistration = (unsigned __int64)Registration;
    if ( !Registration )
      goto LABEL_23;
    RtlAcquireSRWLockExclusive(Registration + 8, v11);
    v4 = 1;
    v13 = *(unsigned int *)(NextRegistration + 248);
    *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    v14 = RtlSetThreadSubProcessTag(v13);
    v15 = *a1;
    v16 = v14;
    v17 = *(_WORD *)(NextRegistration + 86);
    if ( *a1 == 3 )
    {
      if ( (unsigned __int16)((v17 & 0x3FFF) - 2) > 1u )
        goto LABEL_12;
      if ( *((__int16 *)a1 + 39) < 0 && PrivateLoggerNotificationEntry )
        v6 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
      else
        v6 = *(_QWORD *)(NextRegistration + 88);
      *((_QWORD *)a1 + 3) = v6;
      EtwpUpdateEnableInfoAndCallback(NextRegistration, a1);
      goto LABEL_11;
    }
    if ( v15 == 4 )
    {
      if ( (unsigned __int16)((v17 & 0x3FFF) - 2) <= 1u )
      {
        v6 = *(_QWORD *)(NextRegistration + 88);
        v1 = EtwProcessPrivateLoggerRequest(a1, 0x3FFFLL);
        goto LABEL_11;
      }
    }
    else
    {
      if ( (v17 & 0x3FFF) == v15 )
      {
        v6 = *(_QWORD *)(NextRegistration + 88);
        *((_QWORD *)a1 + 3) = v6;
        v19 = (*(__int64 (__fastcall **)(int *, _QWORD))(NextRegistration + 48))(a1, *(_QWORD *)(NextRegistration + 56));
LABEL_20:
        v1 = v19;
LABEL_11:
        v2 = 1;
        goto LABEL_12;
      }
      if ( (v17 & 0x3FFF) == 0xA && v15 == 7 && a1[9] == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
      {
        v19 = EtwpProcessInternalNotification(NextRegistration, a1);
        goto LABEL_20;
      }
    }
LABEL_12:
    RtlSetThreadSubProcessTag(v16);
    if ( v2 )
      goto LABEL_13;
    goto LABEL_23;
  }
  NextRegistration = EtwpGetNextRegistration(0LL, v9);
  if ( !NextRegistration )
    goto LABEL_39;
  do
  {
    v23 = *((_QWORD *)a1 + 5) - *(_QWORD *)(NextRegistration + 32);
    if ( !v23 )
      v23 = *((_QWORD *)a1 + 6) - *(_QWORD *)(NextRegistration + 40);
    if ( v23 )
      goto LABEL_31;
    if ( *(_DWORD *)(NextRegistration + 80) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64), v22);
      v4 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(
                            NextRegistration,
                            (_DWORD)a1,
                            (unsigned int)&v34,
                            (unsigned int)&v32,
                            (__int64)&v30) )
      break;
    if ( v4 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
      v4 = 0;
    }
LABEL_31:
    NextRegistration = EtwpGetNextRegistration(NextRegistration, v22);
  }
  while ( NextRegistration );
  v1 = v32;
  if ( v30 )
  {
    v6 = v34;
    goto LABEL_13;
  }
LABEL_39:
  if ( !v5
    || !PrivateLoggerNotificationEntry
    || (v6 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88), a1[18] == 2)
    || (GuidEntry = EtwpFindGuidEntry(a1 + 10)) == 0 && (!a1[18] || (GuidEntry = EtwpAllocateUmGuidEntry(a1 + 10)) == 0) )
  {
LABEL_23:
    v1 = 4201;
    if ( v31 && (unsigned int)dword_1801C5700 > 3 && (unsigned __int8)tlgKeywordOn(&dword_1801C5700, 9LL) )
    {
      v37 = 16LL;
      v36 = a1 + 10;
      v33 = *a1;
      v38 = &v33;
      v32 = a1[6];
      v40 = &v32;
      v39 = 4LL;
      v41 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer(
        (unsigned int)&dword_1801C5700,
        (unsigned int)&unk_18019C003,
        v20,
        v21,
        5,
        (__int64)v35);
    }
    goto LABEL_14;
  }
  EtwpAcquireGuidEntryExclusive(GuidEntry);
  v25 = *((_BYTE *)a1 + 78);
  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    v27 = GuidEntry + 24 * i;
    if ( *(_BYTE *)(v27 + 76) && *(_BYTE *)(v27 + 78) == v25 )
    {
      v28 = v27 + 56;
      if ( v28 )
      {
LABEL_48:
        *(_QWORD *)v28 = *((_QWORD *)a1 + 12);
        *(_QWORD *)(v28 + 8) = *((_QWORD *)a1 + 11);
        *(_BYTE *)(v28 + 21) = *((_BYTE *)a1 + 76);
        *(_DWORD *)(v28 + 16) = a1[20];
        *(_BYTE *)(v28 + 20) = a1[18] != 0;
        goto LABEL_49;
      }
      break;
    }
  }
  if ( a1[18] )
  {
    for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
    {
      if ( !*(_BYTE *)(GuidEntry + 24 * j + 76) )
      {
        if ( GuidEntry + 24 * j == -56 )
          break;
        *(_BYTE *)(GuidEntry + 24 * j + 78) = v25;
        EtwpReferenceUmGuidEntry(GuidEntry);
        goto LABEL_48;
      }
    }
  }
LABEL_49:
  if ( *((_BYTE *)a1 + 107) == 1 )
  {
    *(_QWORD *)(GuidEntry + 152) = *((_QWORD *)a1 + 13);
    *(_DWORD *)(GuidEntry + 160) = a1[18];
  }
  *(_DWORD *)(GuidEntry + 48) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(GuidEntry + 40));
  EtwpDereferenceUmGuidEntry(GuidEntry);
LABEL_13:
  if ( v31 == 1 )
  {
    if ( v1 )
    {
      *a1 = 1;
    }
    else if ( *a1 != 3 )
    {
LABEL_65:
      a1[4] = v33;
      *((_BYTE *)a1 + 12) = 0;
      *((_QWORD *)a1 + 3) = v6;
      v1 = EtwReplyNotification(a1);
      goto LABEL_14;
    }
    a1[1] = 72;
    goto LABEL_65;
  }
LABEL_14:
  if ( v4 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
    RtlReleaseSRWLockShared((volatile signed __int64 *)(NextRegistration + 72));
  }
  return v1;
}
