/*
 * XREFs of sub_1400184D0 @ 0x1400184D0
 * Callers:
 *     sub_1400160C0 @ 0x1400160C0 (sub_1400160C0.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_140018030 @ 0x140018030 (sub_140018030.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_1400537EC @ 0x1400537EC (sub_1400537EC.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14006A2B0 @ 0x14006A2B0 (sub_14006A2B0.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 * Callees:
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_140025A70 @ 0x140025A70 (sub_140025A70.c)
 *     sub_140026E80 @ 0x140026E80 (sub_140026E80.c)
 *     sub_140027800 @ 0x140027800 (sub_140027800.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     sub_14002A5E0 @ 0x14002A5E0 (sub_14002A5E0.c)
 *     sub_1400566F8 @ 0x1400566F8 (sub_1400566F8.c)
 *     sub_14005CFC0 @ 0x14005CFC0 (sub_14005CFC0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400184D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  PSLIST_ENTRY v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  bool v12; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, _QWORD); // rax
  char v26; // di
  LARGE_INTEGER v27; // rax
  __int64 CurrentNodeNumber; // rdi
  unsigned int v29; // r14d
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  char v34; // r14
  LARGE_INTEGER v35; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+8h]
  __int64 v38; // [rsp+A8h] [rbp+10h]

  *(_QWORD *)(a2 + 216) = a1;
  v37 = 0LL;
  v3 = *(_QWORD *)(a2 + 224);
  v4 = *(_QWORD *)(a2 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v38 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(unsigned __int8 *)(v4 + 2);
  if ( (_BYTE)v9 == 40 )
  {
    v9 = *(_DWORD *)(v4 + 20);
    v10 = *(_DWORD *)(v4 + 24);
  }
  else
  {
    v10 = *(_DWORD *)(v4 + 12);
  }
  if ( !v3 )
  {
    v15 = *(_QWORD *)(a1 + 960);
    if ( !v15 || !*(_DWORD *)(*(_QWORD *)(v15 + 48) + 988LL) || (unsigned int)(v9 - 36) <= 1 )
      goto LABEL_10;
    v14 = (*(_BYTE *)(a2 + 17) & 8) == 0;
    goto LABEL_22;
  }
  if ( *(int *)(v3 + 744) <= 0 )
  {
    if ( *(_BYTE *)(v3 + 756) && (v10 & 0x10) == 0 )
      goto LABEL_23;
    if ( !*(_BYTE *)(v3 + 757) )
      goto LABEL_10;
    v14 = (v10 & 0x80000) == 0;
LABEL_22:
    if ( !v14 )
      goto LABEL_10;
LABEL_23:
    *(_BYTE *)(*(_QWORD *)(a2 + 168) + 3LL) = 5;
    sub_14002A5E0(*(_QWORD *)(a2 + 224), 0LL, a2);
    LOBYTE(v16) = 1;
    sub_140026E80(a1, a2, v16);
    return 0LL;
  }
  if ( v9 == 32 || (v11 = 1, v9 == 19) )
    v11 = 0;
  if ( v11 )
    goto LABEL_23;
LABEL_10:
  if ( byte_140168DAA )
  {
    v12 = byte_140168724 == 0;
    goto LABEL_12;
  }
  if ( dword_1401684A8 )
  {
    if ( !byte_140168724 )
    {
LABEL_27:
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      goto LABEL_29;
    }
    v12 = dword_1401684AC == 0;
LABEL_12:
    if ( !v12 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  PerformanceCounter.QuadPart = 0LL;
LABEL_29:
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  sub_140027800(a2);
  if ( *(_BYTE *)(a1 + 4370) )
  {
    if ( (unsigned int)sub_1400566F8() )
      sub_14005CFC0(a1, a2);
    if ( (qword_140168458 & 1) != 0 )
    {
      v18 = sub_140025A70(a2);
      v19 = *(_QWORD *)(a2 + 160);
      v20 = *(_QWORD *)(a2 + 168);
      if ( !v19 && v20 )
      {
        if ( *(_BYTE *)(v20 + 2) == 40 )
          v19 = *(_QWORD *)(v20 + 80);
        else
          v19 = *(_QWORD *)(v20 + 48);
      }
      v21 = *(_QWORD *)(a2 + 224);
      if ( v21 )
        v22 = (unsigned __int8)BYTE2(*(_DWORD *)(v21 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v21 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v21 + 104))) << 8);
      else
        v22 = 0LL;
      sub_14000FB90(*(_QWORD *)(a2 + 216), 36, v19, v22, v20, v18, 0LL);
    }
    v23 = *(_QWORD *)(a2 + 160);
    if ( v23 )
      *(_BYTE *)(v23 + 141) = -82;
    v24 = *(_QWORD *)(a2 + 216);
    v25 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v24 + 608) + 128LL);
    if ( v25 )
      v26 = v25(*(_QWORD *)(v24 + 616) + 16LL, *(_QWORD *)(a2 + 168));
    else
      v26 = 1;
    if ( byte_140168DAA && ((byte_1401694F1 & 1) != 0 || (byte_1401694F3 & 2) != 0) )
    {
      if ( byte_140168724 )
        v27 = KeQueryPerformanceCounter(0LL);
      else
        v27.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v27;
    }
    if ( !v26 )
    {
      sub_14002A5E0(*(_QWORD *)(a2 + 224), 0LL, a2);
      return 0LL;
    }
    if ( *(int *)(a1 + 4664) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 872) )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 864), &LockHandle);
      else
        LOBYTE(LockHandle.LockQueue.Next) = sub_14001E1F0(a1);
    }
    else if ( *(_DWORD *)(a1 + 4664) >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    {
      *(_DWORD *)(a2 + 24) = HIDWORD(KeGetPcr()[1].LockArray);
    }
    else
    {
      CurrentNodeNumber = KeGetCurrentNodeNumber();
      v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4672) + (CurrentNodeNumber << 6)));
      if ( !v6 )
      {
        v29 = KeQueryHighestNodeNumber() + 1;
        do
          LODWORD(CurrentNodeNumber) = 0;
        while ( !v29 );
        while ( 1 )
        {
          v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4672)
                                                         + ((unsigned __int64)(unsigned int)CurrentNodeNumber << 6)));
          if ( v6 )
            break;
          _mm_pause();
          LODWORD(CurrentNodeNumber) = CurrentNodeNumber + 1;
          if ( (unsigned int)CurrentNodeNumber >= v29 )
            LODWORD(CurrentNodeNumber) = 0;
        }
      }
      LODWORD(v6[1].Next) = CurrentNodeNumber;
      *(_DWORD *)(a2 + 24) = HIDWORD(v6[1].Next);
    }
  }
  if ( (qword_140168458 & 4) != 0 )
  {
    v30 = *(_QWORD *)(a2 + 224);
    if ( v30 )
      v7 = (unsigned __int8)BYTE2(*(_DWORD *)(v30 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v30 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v30 + 104))) << 8);
    v31 = sub_140025A70(a2);
    v8 = *(_QWORD *)(a2 + 168);
    v38 = v31;
    if ( *(_QWORD *)(a2 + 160) )
    {
      v37 = *(_QWORD *)(a2 + 160);
    }
    else if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 2) == 40 )
        v37 = *(_QWORD *)(v8 + 80);
      else
        v37 = *(_QWORD *)(v8 + 48);
    }
  }
  sub_14002A5E0(*(_QWORD *)(a2 + 224), 0LL, a2);
  v32 = *(_QWORD *)(a2 + 160);
  if ( v32 )
    *(_BYTE *)(v32 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  v33 = MEMORY[0xFFFFF78000000014];
  v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 608) + 16LL))(
          *(_QWORD *)(a1 + 616) + 16LL,
          *(_QWORD *)(a2 + 168));
  if ( byte_140168DAA && ((byte_1401694F1 & 1) != 0 || (byte_1401694F3 & 2) != 0) )
  {
    if ( byte_140168724 )
      v35 = KeQueryPerformanceCounter(0LL);
    else
      v35.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v35;
  }
  if ( *(_BYTE *)(a1 + 4370) )
  {
    if ( *(int *)(a1 + 4664) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 872) )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      else
        sub_140029830(a1, LOBYTE(LockHandle.LockQueue.Next));
    }
    else if ( v6 )
    {
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(a1 + 4672) + ((unsigned __int64)LODWORD(v6[1].Next) << 6)),
        v6);
    }
  }
  if ( (qword_140168458 & 4) != 0 )
    sub_14000FB90(a1, 0, v37, v7, v8, v38, v33);
  result = 3221225473LL;
  if ( v34 )
    return 0LL;
  return result;
}
