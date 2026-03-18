/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D8368
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D6FD0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x14013FBDC (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1401DEC60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x140235B14 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?bSandboxedCurrentProcess@@YAEXZ @ 0x140296588 (-bSandboxedCurrentProcess@@YAEXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDOBJ::bInit(struct _UMPDHEAP **this)
{
  __int64 v2; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v8; // rcx
  struct _GRETHREAD *v9; // rbx
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rdx
  UMPDOBJ *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  char v15; // r14
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  struct _UMPDHEAP *v17; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  struct _UMPDHEAP *v19; // rax
  _OWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  UMPDOBJ *v21; // [rsp+40h] [rbp-10h]
  char v22; // [rsp+48h] [rbp-8h]
  struct _UMPDHEAP *v23; // [rsp+78h] [rbp+28h] BYREF

  memset_0(this, 0, 0x1C0uLL);
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v2);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
  {
    GreGetCurrentThread(v4);
    return 0LL;
  }
  CurrentThread = GreGetCurrentThread(v4);
  v9 = CurrentThread;
  if ( !v5 || !CurrentThread )
    return 0LL;
  this[52] = GreGetCurrentThread(v8);
  *((_DWORD *)this + 106) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v10 = bSandboxedCurrentProcess();
  *((_BYTE *)this + 440) = v10;
  if ( !v10 )
  {
    if ( *((struct _GRETHREAD **)v9 + 9) == (struct _GRETHREAD *)((char *)v9 + 72) )
    {
      v17 = (struct _UMPDHEAP *)*((_QWORD *)v9 + 6);
      if ( !v17 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v12);
        this[7] = UMPDHeap;
        *((_QWORD *)v9 + 6) = UMPDHeap;
        v17 = this[7];
LABEL_23:
        if ( !v17 )
          return 0LL;
        goto LABEL_11;
      }
      *((_DWORD *)v17 + 6) = 0;
    }
    else
    {
      v17 = UMPDOBJ::CreateUMPDHeap(v12);
    }
    this[7] = v17;
    goto LABEL_23;
  }
  v13 = *((_QWORD *)v9 + 7);
  if ( v13 )
  {
    this[51] = (struct _UMPDHEAP *)v13;
    *(_DWORD *)(v13 + 72) = 0;
  }
  else
  {
    PROXYPORT::PROXYPORT((PROXYPORT *)&v23, v11);
    v19 = v23;
    if ( !v23 )
      return 0LL;
    this[51] = v23;
    *((_QWORD *)v9 + 7) = v19;
  }
  this[3] = v9;
LABEL_11:
  v14 = *((_QWORD *)v9 + 41);
  v15 = 0;
  if ( v14 && *(_BYTE *)(v14 + 80) )
  {
    *(_BYTE *)(v14 + 80) = 0;
    v15 = 1;
  }
  v16 = Gre::Base::Globals(v12);
  memset(v20, 0, sizeof(v20));
  PushThreadGuardedObject(
    v20,
    v20,
    UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  v21 = 0LL;
  v22 = 0;
  if ( !HmgInsertObjectInternal(v16, this, 0xBu, 0x11u) )
  {
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v20);
    if ( v15 )
      *(_BYTE *)(v14 + 80) = 1;
    UMPDOBJ::FreeNonCachedUserMem((UMPDOBJ *)this);
    return 0LL;
  }
  v21 = (UMPDOBJ *)this;
  GreInitializePushLock((struct W32_PUSH_LOCK *)(this + 48));
  if ( v21 && !v22 )
    _InterlockedDecrement16((volatile signed __int16 *)v21 + 6);
  PopThreadGuardedObject(v20);
  if ( v15 )
    *(_BYTE *)(v14 + 80) = 1;
  return 1LL;
}
