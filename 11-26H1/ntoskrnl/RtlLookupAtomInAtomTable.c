/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x140974FB0
 * Callers:
 *     NtFindAtom @ 0x140847A30 (NtFindAtom.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     RtlpLookupOrCreateLowBox @ 0x14045AE70 (RtlpLookupOrCreateLowBox.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 */

NTSTATUS __cdecl RtlLookupAtomInAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  struct _KLOCK_ENTRIES *v3; // r9
  const wchar_t *v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbx
  __int16 v12; // ax
  PWSTR v13; // rdx
  __int16 v14; // cx
  PWSTR v15; // r9
  PWSTR v16; // rbx
  unsigned int v17; // edi
  WCHAR v18; // ax
  __int64 v19; // rbx
  const wchar_t *HandlePointer; // rdi
  __int64 LowBox; // rax
  NTSTATUS v22; // ebx
  __int16 v23; // cx
  struct _KTHREAD *v24; // rax
  unsigned int *v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // r8
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  volatile __int64 *v30; // rcx
  unsigned int v31; // ecx
  struct _KTHREAD *v32; // rax
  unsigned int *v33; // rdi
  __int64 *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // rcx
  volatile __int64 *v37; // rcx
  signed __int32 v39[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v40; // [rsp+20h] [rbp-98h]
  unsigned int i; // [rsp+24h] [rbp-94h]
  const wchar_t *v42; // [rsp+28h] [rbp-90h]
  __int64 v43; // [rsp+30h] [rbp-88h]
  __int64 v44; // [rsp+38h] [rbp-80h]
  PWSTR v45; // [rsp+40h] [rbp-78h]
  PWSTR v46; // [rsp+48h] [rbp-70h]
  UNICODE_STRING String; // [rsp+50h] [rbp-68h] BYREF
  PWSTR v48; // [rsp+60h] [rbp-58h]
  __int64 v49; // [rsp+68h] [rbp-50h]
  __int64 v50; // [rsp+70h] [rbp-48h]
  PVOID v51; // [rsp+78h] [rbp-40h]
  __int64 v52; // [rsp+80h] [rbp-38h]
  __int16 v53; // [rsp+C0h] [rbp+8h]
  ULONG Value; // [rsp+D8h] [rbp+20h] BYREF

  v51 = AtomTableHandle;
  v7 = 0LL;
  if ( !AtomTableHandle || *(_DWORD *)AtomTableHandle != 1836020801 )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)AtomTableHandle + 8, 0LL, 0LL, v3);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)AtomTableHandle + 2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)AtomTableHandle + 1, v9, (__int64)AtomTableHandle + 8);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v48 = AtomName;
  String = 0LL;
  v45 = 0LL;
  Value = 0;
  if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (unsigned __int16)AtomName >= 0xC000u )
      goto LABEL_13;
    if ( !(_WORD)AtomName )
      LOWORD(AtomName) = -16384;
LABEL_71:
    if ( (unsigned __int16)AtomName >= 0xC000u )
    {
      LOWORD(AtomName) = 0;
      v22 = -1073741811;
    }
    else
    {
      v22 = 0;
    }
    v40 = v22;
    if ( Atom )
      *Atom = (unsigned __int16)AtomName;
    goto LABEL_84;
  }
  if ( *AtomName == 35 )
  {
    v12 = (_WORD)AtomName + 2;
    v48 = AtomName + 1;
    v13 = AtomName + 1;
    v45 = AtomName + 1;
    v14 = (_WORD)AtomName + 2;
    v15 = AtomName + 1;
    while ( *v13 )
    {
      if ( (unsigned __int16)(*v13 - 48) > 9u )
        goto LABEL_13;
      v13 = v15 + 1;
      v45 = v15 + 1;
      v14 = (_WORD)v15++ + 2;
    }
    Value = 0;
    String.Buffer = AtomName + 1;
    String.Length = v14 - v12;
    String.MaximumLength = v14 - v12;
    if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
    {
      if ( Value - 1 > 0xBFFF )
        v53 = -16384;
      else
        v53 = Value;
      LOWORD(AtomName) = v53;
      goto LABEL_71;
    }
  }
LABEL_13:
  if ( !*AtomName )
  {
    v22 = -1073741773;
    v40 = -1073741773;
    goto LABEL_84;
  }
  i = 0;
  v46 = 0LL;
  v42 = 0LL;
  if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v16 = AtomName;
    v46 = AtomName;
    v17 = 0;
    for ( i = 0; ; i = v17 )
    {
      v18 = *v16;
      if ( !*v16 )
        break;
      v46 = ++v16;
      if ( v18 >= 0x61u )
      {
        if ( v18 > 0x7Au )
          v18 = RtlUpcaseUnicodeChar(v18);
        else
          v18 -= 32;
      }
      v17 += v18 + (v18 >> 1) + 2 * v18;
    }
    v19 = v16 - AtomName;
    if ( (unsigned int)v19 > 0xFF )
    {
      HandlePointer = 0LL;
      v42 = 0LL;
    }
    else
    {
      HandlePointer = (const wchar_t *)((char *)AtomTableHandle + 8 * (v17 % *((_DWORD *)AtomTableHandle + 7)) + 32);
      while ( 1 )
      {
        HandlePointer = *(const wchar_t **)HandlePointer;
        v42 = HandlePointer;
        if ( !HandlePointer )
          break;
        if ( *((unsigned __int8 *)HandlePointer + 40) == (_DWORD)v19 && !wcsicmp(HandlePointer + 21, AtomName) )
          goto LABEL_27;
      }
    }
    goto LABEL_30;
  }
  HandlePointer = 0LL;
  v42 = 0LL;
  if ( (unsigned __int16)AtomName >= 0xC000u )
  {
    v31 = 4 * ((unsigned __int16)AtomName & 0x3FFF);
    v43 = v31;
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = (unsigned int *)*((_QWORD *)AtomTableHandle + 2);
    v49 = v43;
    if ( (v31 & 0x3FC) != 0 )
      v34 = (__int64 *)ExpLookupHandleTableEntry(v33, v43);
    else
      v34 = 0LL;
    if ( v34 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v34);
          v35 = *v34;
          if ( (*v34 & 1) != 0 )
            break;
          if ( !v35 )
            goto LABEL_66;
          ExpBlockOnLockedHandleEntry((__int64)v33, v34, v35);
        }
      }
      while ( v35 != _InterlockedCompareExchange64(v34, v35 - 1, v35) );
      HandlePointer = (const wchar_t *)ExGetHandlePointer(v34);
      v36 = *((_QWORD *)AtomTableHandle + 2);
      _InterlockedIncrement64(v34);
      v37 = (volatile __int64 *)(v36 + 48);
      _InterlockedOr(v39, 0);
      if ( *v37 )
        ExfUnblockPushLock(v37, 0LL);
    }
    else
    {
LABEL_66:
      HandlePointer = 0LL;
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v42 = HandlePointer;
  }
LABEL_27:
  if ( !HandlePointer )
    goto LABEL_30;
  LowBox = RtlpLookupOrCreateLowBox((__int64)AtomTableHandle, (__int64)HandlePointer, 1);
  if ( LowBox )
  {
    v52 = LowBox;
LABEL_30:
    v7 = HandlePointer;
    v22 = 0;
    goto LABEL_31;
  }
  v22 = -1073741801;
LABEL_31:
  v40 = v22;
  if ( v22 >= 0 )
  {
    if ( v7 )
    {
      v23 = 4 * v7[4];
      v44 = 4 * (unsigned int)v7[4];
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      v25 = (unsigned int *)*((_QWORD *)AtomTableHandle + 2);
      v50 = v44;
      if ( (v23 & 0x3FC) != 0 )
        v26 = (__int64 *)ExpLookupHandleTableEntry(v25, v44);
      else
        v26 = 0LL;
      if ( v26 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v26);
            v27 = *v26;
            if ( (*v26 & 1) != 0 )
              break;
            if ( !v27 )
              goto LABEL_65;
            ExpBlockOnLockedHandleEntry((__int64)v25, v26, v27);
          }
        }
        while ( v27 != _InterlockedCompareExchange64(v26, v27 - 1, v27) );
        v28 = ExGetHandlePointer(v26);
        v29 = *((_QWORD *)AtomTableHandle + 2);
        _InterlockedIncrement64(v26);
        v30 = (volatile __int64 *)(v29 + 48);
        _InterlockedOr(v39, 0);
        if ( *v30 )
          ExfUnblockPushLock(v30, 0LL);
      }
      else
      {
LABEL_65:
        v28 = 0LL;
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v28 )
      {
        v22 = 0;
        v40 = 0;
        if ( Atom )
          *Atom = v7[5];
        goto LABEL_84;
      }
      v22 = -1073741816;
    }
    else
    {
      v22 = -1073741772;
    }
    v40 = v22;
  }
LABEL_84:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
  KeAbPostRelease((unsigned __int64)AtomTableHandle + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v22;
}
