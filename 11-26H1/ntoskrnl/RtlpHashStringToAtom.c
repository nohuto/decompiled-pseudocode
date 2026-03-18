/*
 * XREFs of RtlpHashStringToAtom @ 0x140A2FA00
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140461AD0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x1404A5300 (RtlpFreeAllAtom.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     RtlpLookupOrCreateLowBox @ 0x140461EB0 (RtlpLookupOrCreateLowBox.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1408D5170 (RtlUpcaseUnicodeChar.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall RtlpHashStringToAtom(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 j; // rsi
  char v9; // r12
  const wchar_t *v10; // r14
  WCHAR v12; // ax
  WCHAR *v13; // rbx
  unsigned int i; // edi
  int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 LowBox; // rax
  unsigned __int64 HandlePointer; // rax
  __int64 v21; // rcx
  volatile __int64 *v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v25; // rdi
  __int64 *v26; // rbx
  signed __int32 v27[18]; // [rsp+0h] [rbp-48h] BYREF

  j = 0LL;
  v9 = a3;
  v10 = (const wchar_t *)a2;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v12 = *(_WORD *)a2;
    v13 = (WCHAR *)a2;
    for ( i = 0; *v13; i += v15 )
    {
      ++v13;
      if ( v12 >= 0x61u )
      {
        if ( v12 > 0x7Au )
          v12 = RtlUpcaseUnicodeChar(v12);
        else
          v12 -= 32;
      }
      v15 = v12 + (v12 >> 1) + 2 * v12;
      v12 = *v13;
    }
    v16 = v13 - v10;
    if ( (unsigned int)v16 > 0xFF )
    {
      v18 = 0LL;
    }
    else
    {
      v17 = i % *(_DWORD *)(a1 + 28);
      v18 = *(_QWORD *)(a1 + 32 + 8 * v17);
      for ( j = a1 + 32 + 8LL * (unsigned int)v17; v18; v18 = *(_QWORD *)v18 )
      {
        if ( *(unsigned __int8 *)(v18 + 40) == (_DWORD)v16 && !wcsicmp((const wchar_t *)(v18 + 42), v10) )
          break;
        j = v18;
      }
    }
    if ( a4 )
      *a4 = j;
    if ( !v18 )
    {
      if ( a5 )
        *a5 = 2 * v16;
      goto LABEL_25;
    }
  }
  else
  {
    v18 = 0LL;
    if ( (unsigned __int16)a2 >= 0xC000u )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v25 = *(_QWORD *)(a1 + 16);
      if ( ((4 * (a2 & 0x3FFF)) & 0x3FC) != 0
        && (v26 = (__int64 *)ExpLookupHandleTableEntry(*(unsigned int **)(a1 + 16), 4 * (unsigned int)(a2 & 0x3FFF))) != 0LL )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v26);
            a3 = *v26;
            if ( (*v26 & 1) != 0 )
              break;
            if ( !a3 )
              goto LABEL_36;
            ExpBlockOnLockedHandleEntry(v25, v26, a3);
          }
        }
        while ( a3 != _InterlockedCompareExchange64(v26, a3 - 1, a3) );
        HandlePointer = ExGetHandlePointer(v26);
        v21 = *(_QWORD *)(a1 + 16);
        v18 = HandlePointer;
        _InterlockedIncrement64(v26);
        v22 = (volatile __int64 *)(v21 + 48);
        _InterlockedOr(v27, 0);
        a2 = *v22;
        if ( *v22 )
          ExfUnblockPushLock(v22, 0LL);
      }
      else
      {
LABEL_36:
        v18 = 0LL;
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3);
    }
    if ( a4 )
      *a4 = 0LL;
    if ( !v18 )
      goto LABEL_25;
  }
  if ( !a6 )
  {
LABEL_25:
    *a7 = v18;
    return 0LL;
  }
  LowBox = RtlpLookupOrCreateLowBox(a1, v18, v9);
  if ( LowBox )
  {
    *a6 = LowBox;
    goto LABEL_25;
  }
  return 3221225495LL;
}
