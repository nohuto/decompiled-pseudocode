/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D2FC0
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14008F82C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D389C (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14019FA28 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1401F02D0 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x140207C94 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x14020DEE0 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?bSandboxedCurrentProcess@@YAEXZ @ 0x140263904 (-bSandboxedCurrentProcess@@YAEXZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v8; // rdi
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdx
  UMPDOBJ *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct _UMPDHEAP *v14; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdi
  char v19; // si
  void *v20; // rcx
  struct _KEVENT *v22; // rcx
  _OWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+50h] [rbp-18h]
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  memset_0(this, 0, 0x1D0uLL);
  *((_DWORD *)this + 13) = 1886221639;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v2);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
  {
    GreGetCurrentThread(v5, v4);
    return 0LL;
  }
  CurrentThread = GreGetCurrentThread(v5, v4);
  v8 = CurrentThread;
  if ( !v6 || !CurrentThread )
    return 0LL;
  *((_QWORD *)this + 54) = KeGetCurrentThread();
  *((_DWORD *)this + 110) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v9 = bSandboxedCurrentProcess();
  *((_BYTE *)this + 456) = v9;
  if ( !v9 )
  {
    if ( *((struct _GRETHREAD **)v8 + 9) == (struct _GRETHREAD *)((char *)v8 + 72) )
    {
      v14 = (struct _UMPDHEAP *)*((_QWORD *)v8 + 6);
      if ( !v14 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v11);
        *((_QWORD *)this + 9) = UMPDHeap;
        *((_QWORD *)v8 + 6) = UMPDHeap;
        v14 = (struct _UMPDHEAP *)*((_QWORD *)this + 9);
        goto LABEL_18;
      }
      *((_DWORD *)v14 + 6) = 0;
    }
    else
    {
      v14 = UMPDOBJ::CreateUMPDHeap(v11);
    }
    *((_QWORD *)this + 9) = v14;
LABEL_18:
    if ( !v14 )
      return 0LL;
    goto LABEL_19;
  }
  v12 = *((_QWORD *)v8 + 7);
  if ( v12 )
  {
    *((_QWORD *)this + 53) = v12;
    UMPDOBJ::ResetHeap(this);
  }
  else
  {
    PROXYPORT::PROXYPORT((PROXYPORT *)&v25, v10);
    v13 = v25;
    if ( !v25 )
      return 0LL;
    *((_QWORD *)this + 53) = v25;
    *((_QWORD *)v8 + 7) = v13;
  }
  *((_QWORD *)this + 5) = v8;
LABEL_19:
  v16 = Win32AllocPoolNonPaged(24LL, 1886221639LL);
  *((_QWORD *)this + 4) = v16;
  if ( !v16 )
  {
LABEL_28:
    UMPDOBJ::FreeNonCachedUserMem(this);
    return 0LL;
  }
  v18 = *((_QWORD *)v8 + 42);
  v19 = 0;
  if ( v18 && *(_BYTE *)(v18 + 80) )
  {
    *(_BYTE *)(v18 + 80) = 0;
    v19 = 1;
  }
  memset(v23, 0, sizeof(v23));
  PushThreadGuardedObject(
    v23,
    v23,
    UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic,
    v17);
  v24 = 0LL;
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v23, this, 1, 1, 17) )
  {
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v23);
    if ( v19 )
      *(_BYTE *)(v18 + 80) = 1;
    v20 = (void *)*((_QWORD *)this + 4);
    if ( v20 )
      Win32FreePool(v20);
    goto LABEL_28;
  }
  GreInitializePushLock((UMPDOBJ *)((char *)this + 400));
  v22 = (struct _KEVENT *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = 0LL;
  KeInitializeEvent(v22, NotificationEvent, 1u);
  *((_BYTE *)this + 457) = 0;
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v23);
  if ( v19 )
    *(_BYTE *)(v18 + 80) = 1;
  return 1LL;
}
