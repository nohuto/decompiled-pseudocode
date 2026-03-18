/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x14091A550
 * Callers:
 *     NtFindAtom @ 0x1408417F0 (NtFindAtom.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     RtlpLookupOrCreateLowBox @ 0x140461EB0 (RtlpLookupOrCreateLowBox.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1408D5170 (RtlUpcaseUnicodeChar.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     RtlUnicodeStringToInteger @ 0x14091AAE0 (RtlUnicodeStringToInteger.c)
 */

__int64 __fastcall RtlLookupAtomInAtomTable(__int64 a1, WCHAR *a2, _WORD *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  __int64 v11; // r8
  AutoBoost *v12; // rbx
  __int16 v13; // cx
  unsigned __int16 *v14; // rax
  WCHAR *v15; // r9
  __int16 i; // dx
  WCHAR *v17; // rbx
  unsigned int v18; // edi
  WCHAR v19; // ax
  __int64 v20; // rbx
  unsigned __int64 HandlePointer; // rdi
  __int64 LowBox; // rax
  int v23; // ebx
  __int16 v24; // cx
  struct _KTHREAD *v25; // rax
  unsigned int *v26; // rdi
  __int64 v27; // rdx
  __int64 *v28; // rbx
  unsigned __int64 v29; // rdi
  __int64 v30; // rcx
  volatile __int64 *v31; // rcx
  unsigned int v32; // ecx
  struct _KTHREAD *v33; // rax
  unsigned int *v34; // rdi
  __int64 v35; // rdx
  __int64 *v36; // rbx
  __int64 v37; // rcx
  volatile __int64 *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  signed __int32 v42[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v43; // [rsp+20h] [rbp-98h]
  unsigned int j; // [rsp+24h] [rbp-94h]
  unsigned __int64 v45; // [rsp+28h] [rbp-90h]
  __int64 v46; // [rsp+30h] [rbp-88h]
  __int64 v47; // [rsp+38h] [rbp-80h]
  unsigned __int16 *v48; // [rsp+40h] [rbp-78h]
  WCHAR *v49; // [rsp+48h] [rbp-70h]
  UNICODE_STRING String; // [rsp+50h] [rbp-68h] BYREF
  WCHAR *v51; // [rsp+60h] [rbp-58h]
  __int64 v52; // [rsp+68h] [rbp-50h]
  __int64 v53; // [rsp+70h] [rbp-48h]
  __int64 v54; // [rsp+78h] [rbp-40h]
  __int64 v55; // [rsp+80h] [rbp-38h]
  __int16 v56; // [rsp+C0h] [rbp+8h]
  ULONG Value; // [rsp+D8h] [rbp+20h] BYREF

  v54 = a1;
  v7 = 0LL;
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  v12 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 8), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 8), v9, a1 + 8);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v51 = a2;
  String = 0LL;
  v48 = 0LL;
  Value = 0;
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (unsigned __int16)a2 >= 0xC000u )
      goto LABEL_13;
    if ( !(_WORD)a2 )
      LOWORD(a2) = -16384;
LABEL_71:
    if ( (unsigned __int16)a2 >= 0xC000u )
    {
      LOWORD(a2) = 0;
      v23 = -1073741811;
    }
    else
    {
      v23 = 0;
    }
    v43 = v23;
    if ( a3 )
      *a3 = (_WORD)a2;
    goto LABEL_84;
  }
  if ( *a2 == 35 )
  {
    v13 = (_WORD)a2 + 2;
    v51 = a2 + 1;
    v14 = a2 + 1;
    v48 = a2 + 1;
    v15 = a2 + 1;
    for ( i = (_WORD)a2 + 2; ; i = (__int16)v14 )
    {
      v11 = *v14;
      if ( !(_WORD)v11 )
        break;
      LOWORD(v11) = v11 - 48;
      if ( (unsigned __int16)v11 > 9u )
        goto LABEL_13;
      v14 = v15 + 1;
      v48 = v14;
      ++v15;
    }
    Value = 0;
    String.Buffer = a2 + 1;
    String.Length = i - v13;
    String.MaximumLength = i - v13;
    if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
    {
      if ( Value - 1 > 0xBFFF )
        v56 = -16384;
      else
        v56 = Value;
      LOWORD(a2) = v56;
      goto LABEL_71;
    }
  }
LABEL_13:
  if ( !*a2 )
  {
    v23 = -1073741773;
    v43 = -1073741773;
    goto LABEL_84;
  }
  j = 0;
  v49 = 0LL;
  v45 = 0LL;
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v17 = a2;
    v49 = a2;
    v18 = 0;
    for ( j = 0; ; j = v18 )
    {
      v19 = *v17;
      if ( !*v17 )
        break;
      v49 = ++v17;
      if ( v19 >= 0x61u )
      {
        if ( v19 > 0x7Au )
          v19 = RtlUpcaseUnicodeChar(v19);
        else
          v19 -= 32;
      }
      v18 += v19 + (v19 >> 1) + 2 * v19;
    }
    v20 = v17 - a2;
    if ( (unsigned int)v20 > 0xFF )
    {
      HandlePointer = 0LL;
      v45 = 0LL;
    }
    else
    {
      HandlePointer = a1 + 8 * (v18 % *(_DWORD *)(a1 + 28) + 4LL);
      while ( 1 )
      {
        HandlePointer = *(_QWORD *)HandlePointer;
        v45 = HandlePointer;
        if ( !HandlePointer )
          break;
        if ( *(unsigned __int8 *)(HandlePointer + 40) == (_DWORD)v20
          && !wcsicmp((const wchar_t *)(HandlePointer + 42), a2) )
        {
          goto LABEL_27;
        }
      }
    }
    goto LABEL_30;
  }
  HandlePointer = 0LL;
  v45 = 0LL;
  if ( (unsigned __int16)a2 >= 0xC000u )
  {
    v32 = 4 * ((unsigned __int16)a2 & 0x3FFF);
    v46 = v32;
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v34 = *(unsigned int **)(a1 + 16);
    v35 = v46;
    v52 = v46;
    if ( (v32 & 0x3FC) != 0 )
      v36 = (__int64 *)ExpLookupHandleTableEntry(v34, v46);
    else
      v36 = 0LL;
    if ( v36 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v36);
          v11 = *v36;
          if ( (*v36 & 1) != 0 )
            break;
          if ( !v11 )
            goto LABEL_66;
          ExpBlockOnLockedHandleEntry((__int64)v34, v36, v11);
        }
      }
      while ( v11 != _InterlockedCompareExchange64(v36, v11 - 1, v11) );
      HandlePointer = ExGetHandlePointer(v36);
      v37 = *(_QWORD *)(a1 + 16);
      _InterlockedIncrement64(v36);
      v38 = (volatile __int64 *)(v37 + 48);
      _InterlockedOr(v42, 0);
      v35 = *v38;
      if ( *v38 )
        ExfUnblockPushLock(v38, 0LL);
    }
    else
    {
LABEL_66:
      HandlePointer = 0LL;
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v35, v11);
    v45 = HandlePointer;
  }
LABEL_27:
  if ( !HandlePointer )
    goto LABEL_30;
  LowBox = RtlpLookupOrCreateLowBox(a1, HandlePointer, 1);
  if ( LowBox )
  {
    v55 = LowBox;
LABEL_30:
    v7 = HandlePointer;
    v23 = 0;
    goto LABEL_31;
  }
  v23 = -1073741801;
LABEL_31:
  v43 = v23;
  if ( v23 >= 0 )
  {
    if ( v7 )
    {
      v24 = 4 * *(_WORD *)(v7 + 8);
      v47 = 4 * (unsigned int)*(unsigned __int16 *)(v7 + 8);
      v25 = KeGetCurrentThread();
      --v25->KernelApcDisable;
      v26 = *(unsigned int **)(a1 + 16);
      v27 = v47;
      v53 = v47;
      if ( (v24 & 0x3FC) != 0 )
        v28 = (__int64 *)ExpLookupHandleTableEntry(v26, v47);
      else
        v28 = 0LL;
      if ( v28 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v28);
            v11 = *v28;
            if ( (*v28 & 1) != 0 )
              break;
            if ( !v11 )
              goto LABEL_65;
            ExpBlockOnLockedHandleEntry((__int64)v26, v28, v11);
          }
        }
        while ( v11 != _InterlockedCompareExchange64(v28, v11 - 1, v11) );
        v29 = ExGetHandlePointer(v28);
        v30 = *(_QWORD *)(a1 + 16);
        _InterlockedIncrement64(v28);
        v31 = (volatile __int64 *)(v30 + 48);
        _InterlockedOr(v42, 0);
        v27 = *v31;
        if ( *v31 )
          ExfUnblockPushLock(v31, 0LL);
      }
      else
      {
LABEL_65:
        v29 = 0LL;
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v11);
      if ( v29 )
      {
        v23 = 0;
        v43 = 0;
        if ( a3 )
          *a3 = *(_WORD *)(v7 + 10);
        goto LABEL_84;
      }
      v23 = -1073741816;
    }
    else
    {
      v23 = -1073741772;
    }
    v43 = v23;
  }
LABEL_84:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v39, v40);
  return (unsigned int)v23;
}
