/*
 * XREFs of PopGetPowerRequestListInfo @ 0x140AEA314
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PoStoreDiagnosticContext @ 0x1404372B0 (PoStoreDiagnosticContext.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetPowerRequestListInfo(_QWORD *a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *QuantumTarget; // rbx
  unsigned __int64 v7; // rdi
  __int64 StateSaveArea; // rcx
  __int64 Pool2; // rax
  _QWORD *v10; // rsi
  __int64 *v11; // r15
  __int64 StackLimit_low; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  _DWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // ebx
  unsigned __int64 v20; // rax
  unsigned __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F12D20.Header.Lock, (__int64)a2, a3, a4);
  QuantumTarget = (struct _KTHREAD *)stru_140F12D20.QuantumTarget;
  v7 = (8LL * LODWORD(stru_140F12D20.StackLimit) + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  while ( QuantumTarget != (struct _KTHREAD *)&stru_140F12D20.QuantumTarget )
  {
    StateSaveArea = (__int64)QuantumTarget->StateSaveArea;
    v22 = 0LL;
    PoStoreDiagnosticContext(StateSaveArea, 0LL, &v22);
    v7 = (v22 + 39 + v7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v7 > 0xFFFFFFFF )
    {
      v19 = -1073741789;
      goto LABEL_16;
    }
    QuantumTarget = *(struct _KTHREAD **)&QuantumTarget->Header.Lock;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v10 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v11 = (__int64 *)(Pool2 + 8);
    StackLimit_low = LODWORD(stru_140F12D20.StackLimit);
    *v10 = LODWORD(stru_140F12D20.StackLimit);
    v13 = stru_140F12D20.QuantumTarget;
    v14 = 8 * StackLimit_low + 8;
    v15 = v7 - v14;
    while ( (unsigned __int64 *)v13 != &stru_140F12D20.QuantumTarget )
    {
      if ( v15 < 0x48 )
        goto LABEL_14;
      *(_DWORD *)((char *)v10 + v14) = *(_DWORD *)(v13 + 20);
      v16 = (_DWORD *)((char *)v10 + v14 + 4);
      v17 = 6LL;
      do
      {
        *v16 = *(_DWORD *)((char *)v16 + v13 - ((_QWORD)v10 + v14) + 36);
        ++v16;
        --v17;
      }
      while ( v17 );
      v18 = *(_QWORD *)(v13 + 96);
      v22 = v15 - 32;
      v19 = PoStoreDiagnosticContext(v18, (_QWORD *)((char *)v10 + v14 + 32), &v22);
      if ( v19 < 0 )
        goto LABEL_15;
      v20 = (v22 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 < v20 )
      {
LABEL_14:
        v19 = -1073741789;
LABEL_15:
        ExFreePoolWithTag(v10, 0x206D654Du);
        goto LABEL_16;
      }
      *v11 = v14;
      v15 -= v20;
      v13 = *(_QWORD *)v13;
      v14 += v20;
      ++v11;
    }
    *a1 = v10;
    v19 = 0;
    *a2 = v14;
  }
  else
  {
    v19 = -1073741670;
  }
LABEL_16:
  PopReleaseRwLock(&stru_140F12D20);
  return (unsigned int)v19;
}
