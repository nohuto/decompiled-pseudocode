/*
 * XREFs of PopProcessDeviceWakeSource @ 0x140BF97FC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1404F94F8 (PopAcquireWakeSourceSpinLock.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404FF4EC (PopReleaseWakeSourceSpinLock.c)
 *     PopFreeWakeSource @ 0x140B45FBC (PopFreeWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x140C09180 (PopProcessWakeSourceWork.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

PVOID *PopProcessDeviceWakeSource()
{
  void *QuadPart; // rdi
  int v1; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // rdx
  struct _LIST_ENTRY *v4; // r8
  struct _LIST_ENTRY *v5; // rax
  PVOID **v6; // rax
  PVOID *v7; // rdx
  PVOID **v8; // r8
  PVOID *v9; // rcx
  _QWORD *v10; // rcx
  void **v11; // rax
  _DWORD *v12; // rcx
  PVOID *result; // rax
  __int64 v14; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v18; // [rsp+60h] [rbp+10h] BYREF
  PVOID **v19; // [rsp+68h] [rbp+18h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquireWakeSourceSpinLock(&LockHandle);
  *(_DWORD *)&stru_140F11D08.WaitBlockFill11[16] = 1;
  while ( 1 )
  {
    QuadPart = (void *)stru_140F11D08.Timer.DueTime.QuadPart;
    if ( (_ULARGE_INTEGER *)stru_140F11D08.Timer.DueTime.QuadPart == &stru_140F11D08.Timer.DueTime )
      break;
    ++HIDWORD(stru_140F11D08.Timer.Header.WaitListHead.Flink[5].Flink);
    PopReleaseWakeSourceSpinLock(&LockHandle);
    v1 = PopProcessWakeSourceWork(*((_QWORD *)QuadPart + 2), &v18, &v19);
    ObfDereferenceObjectWithTag(*((PVOID *)QuadPart + 2), 0x67446F50u);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    if ( v1 >= 0 )
    {
      Flink = stru_140F11D08.Timer.Header.WaitListHead.Flink;
      p_Blink = &stru_140F11D08.Timer.Header.WaitListHead.Flink[1].Blink;
      v4 = stru_140F11D08.Timer.Header.WaitListHead.Flink[2].Flink;
      if ( v4->Flink != (struct _LIST_ENTRY *)((char *)stru_140F11D08.Timer.Header.WaitListHead.Flink + 24) )
        goto LABEL_18;
      v5 = v18;
      v18 = 0LL;
      v5->Flink = (struct _LIST_ENTRY *)p_Blink;
      v5->Blink = v4;
      v4->Flink = v5;
      p_Blink[1] = v5;
      ++LODWORD(Flink[2].Blink);
      v6 = v19;
      if ( v19 )
      {
        v7 = *v19;
        if ( (*v19)[1] != v19
          || (v8 = (PVOID **)v19[1], *v8 != (PVOID *)v19)
          || (*v8 = v7, v7[1] = v8, --LODWORD(Flink[2].Blink), --HIDWORD(Flink[5].Flink), v9 = p_P, *p_P != &P) )
        {
LABEL_18:
          __fastfail(3u);
        }
        v6[1] = p_P;
        *v6 = &P;
        *v9 = v6;
        p_P = (PVOID *)v6;
      }
    }
    v10 = *(_QWORD **)QuadPart;
    if ( *(void **)(*(_QWORD *)QuadPart + 8LL) != QuadPart )
      goto LABEL_18;
    v11 = (void **)*((_QWORD *)QuadPart + 1);
    if ( *v11 != QuadPart )
      goto LABEL_18;
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(QuadPart, 0x206D654Du);
  }
  *(_DWORD *)&stru_140F11D08.WaitBlockFill11[16] = 2;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  while ( 1 )
  {
    v12 = P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_18;
    v14 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_18;
    P = *(PVOID *)P;
    *(_QWORD *)(v14 + 8) = &P;
    PopFreeWakeSource(v12);
  }
}
