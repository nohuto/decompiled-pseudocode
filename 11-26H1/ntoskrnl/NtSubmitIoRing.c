/*
 * XREFs of NtSubmitIoRing @ 0x1404D6640
 * Callers:
 *     DifNtSubmitIoRingWrapper @ 0x140692C00 (DifNtSubmitIoRingWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopIoRingSetupCompletionWait @ 0x1404D6910 (IopIoRingSetupCompletionWait.c)
 *     IopIoRingGetAvailableCqSlots @ 0x14052CB80 (IopIoRingGetAvailableCqSlots.c)
 *     IopIoRingWaitForCompletionEvent @ 0x14052DAA0 (IopIoRingWaitForCompletionEvent.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 */

NTSTATUS __cdecl NtSubmitIoRing(HANDLE IoRingHandle, ULONG Flags, ULONG WaitOperations, PLARGE_INTEGER Timeout)
{
  PLARGE_INTEGER p_ULong64FromUser; // r12
  KPROCESSOR_MODE PreviousMode; // si
  unsigned int *v7; // rdi
  char v8; // r13
  __int64 v9; // rdx
  int v10; // esi
  int v11; // r9d
  int *v12; // r15
  unsigned int v13; // r14d
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v16; // eax
  int v18; // r14d
  char v19; // al
  int v20; // ebx
  unsigned int v21; // r13d
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // [rsp+30h] [rbp-A8h] BYREF
  char v25; // [rsp+31h] [rbp-A7h]
  char v26; // [rsp+32h] [rbp-A6h]
  KPROCESSOR_MODE v27; // [rsp+33h] [rbp-A5h]
  PVOID Object; // [rsp+38h] [rbp-A0h] BYREF
  int v29; // [rsp+40h] [rbp-98h]
  int v30; // [rsp+44h] [rbp-94h]
  __int64 ULong64FromUser; // [rsp+48h] [rbp-90h] BYREF
  PLARGE_INTEGER v32; // [rsp+50h] [rbp-88h]
  __int128 v33; // [rsp+60h] [rbp-78h]
  __int128 v34; // [rsp+70h] [rbp-68h]
  __int128 v35; // [rsp+80h] [rbp-58h]
  __int128 v36; // [rsp+90h] [rbp-48h]

  p_ULong64FromUser = Timeout;
  v32 = Timeout;
  v29 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = PreviousMode;
  v7 = 0LL;
  v8 = 0;
  ULong64FromUser = 0LL;
  v24 = 0;
  if ( (_WORD)Flags )
  {
    v10 = -1069154303;
    goto LABEL_13;
  }
  if ( WaitOperations && Timeout && PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(Timeout);
    p_ULong64FromUser = (PLARGE_INTEGER)&ULong64FromUser;
    v32 = (PLARGE_INTEGER)&ULong64FromUser;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(IoRingHandle, 0, IoRingObjectType, PreviousMode, &Object, 0LL);
  v7 = (unsigned int *)Object;
  if ( v10 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)Object + 24, 1, 0) )
    {
      v10 = -1069154298;
    }
    else
    {
      v8 = 1;
      v26 = 1;
      v12 = (int *)*((_QWORD *)v7 + 8);
      LODWORD(Object) = v7[6];
      v30 = v12[1];
      v13 = v30 - *v12;
      if ( v13 > v7[5] )
      {
        v10 = -1069154297;
      }
      else
      {
        if ( WaitOperations )
        {
          v10 = IopIoRingSetupCompletionWait((_DWORD)v7, v13, WaitOperations, 0, (__int64)&v24);
          if ( v10 < 0 )
            goto LABEL_13;
        }
        else
        {
          v14 = *((_QWORD *)v7 + 14)
              + (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 10) + 4LL) - **((_DWORD **)v7 + 10))
              - *((_QWORD *)v7 + 15);
          v15 = v7[7];
          if ( v14 >= v15 )
            v16 = 0;
          else
            v16 = v15 - v14;
          if ( v13 > v16 && v13 > (unsigned int)IopIoRingGetAvailableCqSlots(v7) )
          {
            v10 = -1069154296;
            goto LABEL_13;
          }
        }
        v18 = *v12;
        v19 = 0;
        v25 = 0;
        if ( v18 != v30 )
        {
          v20 = v30;
          v21 = (unsigned int)Object;
          do
          {
            v22 = (unsigned __int64)(v18 & v21) << 6;
            v33 = *(_OWORD *)((char *)v12 + v22 + 16);
            v34 = *(_OWORD *)((char *)v12 + v22 + 32);
            v35 = *(_OWORD *)((char *)v12 + v22 + 48);
            v36 = *(_OWORD *)((char *)v12 + v22 + 64);
            *v12 = ++v18;
            IopProcessIoRingEntry(v7);
          }
          while ( v18 != v20 );
          v19 = v25;
          p_ULong64FromUser = v32;
          v8 = v26;
        }
        if ( v24 )
        {
          if ( !v19
            || (LOBYTE(v11) = 1,
                v10 = IopIoRingSetupCompletionWait((_DWORD)v7, 0, WaitOperations, v11, (__int64)&v24),
                v10 >= 0) )
          {
            if ( v24 )
            {
              v23 = Flags;
              LOBYTE(v23) = Flags & 1;
              LOBYTE(v9) = v27;
              v10 = IopIoRingWaitForCompletionEvent(v7, v9, v23, p_ULong64FromUser);
            }
          }
        }
      }
    }
  }
LABEL_13:
  if ( v8 )
    _InterlockedExchange((volatile __int32 *)v7 + 24, 0);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  return v10;
}
