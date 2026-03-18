/*
 * XREFs of ?Init@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_PROCESS@@K@Z @ 0x1400AD7C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2, int a3)
{
  struct _KEVENT *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  struct _LOOKASIDE_LIST_EX *v7; // rax
  NTSTATUS v8; // edi
  __int64 v9; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  PVOID v13; // rax
  struct _LOOKASIDE_LIST_EX *v14; // rax
  NTSTATUS v15; // eax
  unsigned __int64 v16; // rdi
  _QWORD *v17; // rsi
  PVOID v18; // rax
  struct _KTHREAD **v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  _BYTE v22[32]; // [rsp+50h] [rbp-28h] BYREF

  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 423) = a3;
  v4 = (struct _KEVENT *)operator new(24LL, 0x30316956u, 64LL);
  *((_QWORD *)this + 199) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_14008A7C0);
    WdLogSingleEntry0(6LL);
    v6 = 9736;
LABEL_23:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(v5, 262145LL);
    return 3221225495LL;
  }
  KeInitializeEvent(v4, NotificationEvent, 0);
  v7 = (struct _LOOKASIDE_LIST_EX *)operator new(96LL, 0x30316956u, 64LL);
  *((_QWORD *)this + 164) = v7;
  if ( !v7 )
  {
    _InterlockedIncrement(&dword_14008A7C0);
    WdLogSingleEntry0(6LL);
    v6 = 9750;
    goto LABEL_23;
  }
  v8 = ExInitializeLookasideListEx(v7, 0LL, 0LL, PagedPool, 0, 0xB0uLL, 0x32316956u, 0);
  if ( v8 >= 0 )
  {
    v11 = 0LL;
    v12 = (_QWORD *)((char *)this + 1624);
    do
    {
      v13 = ExAllocateFromLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 164));
      *v12 = v13;
      if ( !v13 )
      {
        _InterlockedIncrement(&dword_14008A7C0);
        WdLogSingleEntry0(6LL);
        v6 = 9771;
        goto LABEL_23;
      }
      ++v11;
      ++v12;
    }
    while ( v11 < 4 );
    *((_DWORD *)this + 404) = 4;
    v14 = (struct _LOOKASIDE_LIST_EX *)operator new(96LL, 0x30316956u, 64LL);
    *((_QWORD *)this + 165) = v14;
    if ( !v14 )
    {
      _InterlockedIncrement(&dword_14008A7C0);
      WdLogSingleEntry0(6LL);
      v6 = 9782;
      goto LABEL_23;
    }
    v15 = ExInitializeLookasideListEx(v14, 0LL, 0LL, PagedPool, 0, 0xB0uLL, 0x32316956u, 0);
    v8 = v15;
    if ( v15 < 0 )
    {
      _InterlockedIncrement(&dword_14008A7C0);
      WdLogSingleEntry1(6LL, v15);
      WdLogGlobalForLineNumber = 9791;
      goto LABEL_7;
    }
    v16 = 0LL;
    v17 = (_QWORD *)((char *)this + 1656);
    do
    {
      v18 = ExAllocateFromLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 165));
      *v17 = v18;
      if ( !v18 )
      {
        _InterlockedIncrement(&dword_14008A7C0);
        WdLogSingleEntry0(6LL);
        v6 = 9803;
        goto LABEL_23;
      }
      ++v16;
      ++v17;
    }
    while ( v16 < 4 );
    v19 = (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
    *((_DWORD *)this + 405) = 4;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, v19);
    v20 = (_QWORD *)qword_14008AAF0;
    v21 = (_QWORD *)((char *)this + 1600);
    if ( *(struct _LIST_ENTRY **)qword_14008AAF0 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
      __fastfail(3u);
    *v21 = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
    v21[1] = v20;
    *v20 = v21;
    qword_14008AAF0 = (__int64)v21;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A7C0);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 9759;
LABEL_7:
    DxgkLogInternalTriageEvent(v9, 262145LL);
    return (unsigned int)v8;
  }
}
