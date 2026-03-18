/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x140A413C0
 * Callers:
 *     NtQueryInformationAtom @ 0x140A40600 (NtQueryInformationAtom.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     RtlpLookupLowBox @ 0x140461E1C (RtlpLookupLowBox.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     _snwprintf_s @ 0x14053BAB0 (_snwprintf_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     RtlpLockAtomTable @ 0x140A416F0 (RtlpLockAtomTable.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  int v8; // esi
  __int64 v10; // r8
  unsigned int v11; // r12d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v13; // rdi
  __int64 v14; // rdx
  __int64 *v15; // rbx
  unsigned __int64 HandlePointer; // rdi
  __int64 v17; // rcx
  volatile __int64 *v18; // rcx
  _WORD *v19; // r13
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  signed __int32 v27[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-A8h]
  int v29; // [rsp+30h] [rbp-98h]
  unsigned int *v30; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+40h] [rbp-88h]
  void *v32; // [rsp+48h] [rbp-80h]
  __int64 v33; // [rsp+50h] [rbp-78h]
  _DWORD *v34; // [rsp+58h] [rbp-70h]
  __int64 v35; // [rsp+60h] [rbp-68h]
  wchar_t DstBuf[16]; // [rsp+68h] [rbp-60h] BYREF

  v34 = a4;
  v8 = a2;
  v32 = a5;
  v30 = a6;
  v35 = a1;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  if ( (unsigned __int16)v8 < 0xC000u )
  {
    if ( !(_WORD)v8 )
    {
      v11 = -1073741811;
      goto LABEL_32;
    }
    v11 = 0;
    v29 = 0;
    if ( a3 )
      *a3 = 1;
    if ( a4 )
      *a4 = 1;
    if ( !a5 )
      goto LABEL_45;
    LODWORD(v28) = v8;
    v22 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v28);
    v23 = *v30;
    if ( v22 >= *v30 )
    {
      if ( v23 < 2 )
        goto LABEL_42;
      v22 = v23 - 2;
    }
    if ( v22 )
    {
      memmove(v32, DstBuf, v22);
      *((_WORD *)v32 + ((unsigned __int64)v22 >> 1)) = 0;
      *v30 = v22;
      goto LABEL_45;
    }
LABEL_42:
    v11 = -1073741789;
    v29 = -1073741789;
    goto LABEL_45;
  }
  v11 = -1073741816;
  v29 = -1073741816;
  v31 = 4 * (v8 & 0x3FFFu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = *(unsigned int **)(a1 + 16);
  v14 = v31;
  v33 = v31;
  if ( ((4 * (v8 & 0x3FFF)) & 0x3FC) != 0 )
    v15 = (__int64 *)ExpLookupHandleTableEntry(v13, v31);
  else
    v15 = 0LL;
  if ( v15 )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v15);
        v10 = *v15;
        if ( (*v15 & 1) != 0 )
          break;
        if ( !v10 )
          goto LABEL_25;
        ExpBlockOnLockedHandleEntry((__int64)v13, v15, v10);
      }
    }
    while ( v10 != _InterlockedCompareExchange64(v15, v10 - 1, v10) );
    HandlePointer = ExGetHandlePointer(v15);
    v17 = *(_QWORD *)(a1 + 16);
    _InterlockedIncrement64(v15);
    v18 = (volatile __int64 *)(v17 + 48);
    _InterlockedOr(v27, 0);
    v14 = *v18;
    if ( *v18 )
      ExfUnblockPushLock(v18, 0LL);
  }
  else
  {
LABEL_25:
    HandlePointer = 0LL;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v10);
  if ( !HandlePointer || *(_WORD *)(HandlePointer + 10) != (_WORD)v8 || !RtlpLookupLowBox(a1, HandlePointer, 0) )
    goto LABEL_45;
  v11 = 0;
  v29 = 0;
  if ( a3 )
    *a3 = *(unsigned __int16 *)(HandlePointer + 36);
  if ( v34 )
    *v34 = *(unsigned __int16 *)(HandlePointer + 38);
  v19 = v32;
  if ( !v32 )
    goto LABEL_45;
  v20 = 2 * *(unsigned __int8 *)(HandlePointer + 40);
  v21 = *v30;
  if ( v20 < *v30 )
  {
LABEL_22:
    if ( v20 )
    {
      memmove(v32, (const void *)(HandlePointer + 42), v20);
      v19[(unsigned __int64)v20 >> 1] = 0;
      *v30 = v20;
      goto LABEL_45;
    }
    goto LABEL_30;
  }
  if ( v21 >= 2 )
  {
    v20 = v21 - 2;
    goto LABEL_22;
  }
  *v30 = v20;
LABEL_30:
  v11 = -1073741789;
LABEL_32:
  v29 = v11;
LABEL_45:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25);
  return v11;
}
