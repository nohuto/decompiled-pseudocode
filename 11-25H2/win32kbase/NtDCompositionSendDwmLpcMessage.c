/*
 * XREFs of NtDCompositionSendDwmLpcMessage @ 0x140227130
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x140047820 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x140057AD0 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x140057B20 (CheckOrAcquireDwmStateLock.c)
 *     UserDereferenceDwmProcess @ 0x140057B50 (UserDereferenceDwmProcess.c)
 *     UserReferenceDwmApiPort @ 0x140057B80 (UserReferenceDwmApiPort.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionSendDwmLpcMessage(void *Src, size_t Size)
{
  void *v5; // r12
  __int64 v6; // rcx
  signed int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 CurrentProcess; // rax
  signed int v14; // eax
  __int64 i; // rdx
  int v17; // [rsp+38h] [rbp-110h]
  char v18; // [rsp+40h] [rbp-108h]
  struct _KPROCESS *PROCESS; // [rsp+48h] [rbp-100h]
  __int64 *v20; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-F0h]
  void *v22; // [rsp+68h] [rbp-E0h]
  void *v23; // [rsp+70h] [rbp-D8h]
  void *v24; // [rsp+80h] [rbp-C8h]
  size_t v25; // [rsp+88h] [rbp-C0h]
  _DWORD v26[20]; // [rsp+90h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-68h] BYREF

  v23 = Src;
  v24 = Src;
  v25 = Size;
  v20 = (__int64 *)Size;
  v21 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  PROCESS = 0LL;
  v18 = 0;
  memset(v26, 0, 0x48uLL);
  v7 = Size > 0x20 ? 0xC000000D : 0;
  if ( Size <= 0x20 )
    RtlCopyFromUser(&v26[10], Src, Size);
  v8 = 0LL;
  if ( Size <= 0x20 )
  {
    v6 = (unsigned int)(v26[10] - 1073741900);
    if ( v26[10] == 1073741900 )
    {
      if ( Size == 32 )
      {
        *(_QWORD *)&v21 = &v26[11];
        v8 = 1LL;
        goto LABEL_23;
      }
    }
    else
    {
      v6 = (unsigned int)(v26[10] - 1073741953);
      if ( v26[10] == 1073741953 )
      {
        if ( Size == 28 )
        {
          *(_QWORD *)&v21 = &v26[13];
          *((_QWORD *)&v21 + 1) = &v26[15];
        }
        else
        {
          v7 = -1073741811;
        }
        if ( Size == 28 )
          v8 = 2LL;
        goto LABEL_23;
      }
      v6 = (unsigned int)(v26[10] - 1073741956);
      if ( v26[10] == 1073741956
        || (v6 = (unsigned int)(v26[10] - 1073741957), v26[10] == 1073741957)
        || (v6 = (unsigned int)(v26[10] - 1073741961), v26[10] == 1073741961)
        || v26[10] == 1073741966 )
      {
        if ( Size == 28 )
          *(_QWORD *)&v21 = &v26[13];
        else
          v7 = -1073741811;
        LOBYTE(v8) = Size == 28;
LABEL_23:
        if ( v7 >= 0 )
        {
          v5 = (void *)UserReferenceDwmApiPort();
          v22 = v5;
          if ( !v5 )
            v7 = -1073741823;
        }
        goto LABEL_26;
      }
    }
    v7 = -1073741811;
    goto LABEL_23;
  }
LABEL_26:
  if ( v7 >= 0 )
  {
    if ( CheckOrAcquireDwmStateLock() )
    {
      v18 = 1;
    }
    else
    {
      v18 = 0;
      v7 = -1073741823;
    }
    if ( v7 >= 0 )
    {
      PROCESS = (struct _KPROCESS *)ReferenceDwmProcess(v6, v9);
      if ( !PROCESS )
        v7 = -1073741823;
      if ( v7 >= 0 && v8 )
      {
        v11 = 0LL;
        while ( 1 )
        {
          v20 = (__int64 *)*((_QWORD *)&v21 + v11);
          v12 = *v20;
          if ( *v20 )
          {
            CurrentProcess = PsGetCurrentProcess(v6, v10);
            LOBYTE(v17) = 1;
            v7 = ObDuplicateObject(CurrentProcess, v12, PROCESS, v20, 0, 0, 6, v17);
            if ( v7 < 0 )
              break;
          }
          if ( ++v11 >= v8 )
            goto LABEL_44;
        }
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(PROCESS, &ApcState);
        while ( v11 > 0 )
        {
          --v11;
          ObCloseHandle(**((HANDLE **)&v21 + v11), 1);
        }
        KeUnstackDetachProcess(&ApcState);
      }
    }
  }
LABEL_44:
  if ( PROCESS )
    UserDereferenceDwmProcess(PROCESS);
  if ( v18 )
    GreUnlockDwmState(v6);
  if ( v7 >= 0 )
  {
    v20 = (__int64 *)(Size + 40);
    LOWORD(v26[0]) = Size;
    HIWORD(v26[0]) = Size + 40;
    LOWORD(v26[1]) = 0x8000;
    v14 = LpcSendWaitReceivePort(v5, 0x20000LL, v26, v26, &v20, 0LL);
    v7 = v14;
    if ( v14 == 192 || v14 == 258 )
      v7 = -1073741823;
    if ( v7 >= 0 )
    {
      if ( v8 )
      {
        for ( i = 0LL; i < v8; ++i )
          **((_QWORD **)&v21 + i) = 0LL;
      }
      RtlCopyToUser(v23, &v26[10], Size);
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v7;
}
