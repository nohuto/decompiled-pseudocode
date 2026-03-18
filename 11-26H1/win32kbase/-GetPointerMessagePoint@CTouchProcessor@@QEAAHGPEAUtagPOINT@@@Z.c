/*
 * XREFs of ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x140215940
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x14004F870 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x140160CCC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessagePoint(PERESOURCE *this, unsigned __int16 a2, struct tagPOINT *a3)
{
  struct tagPOINT *v3; // r14
  unsigned __int16 v4; // di
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  unsigned int v10; // ebp
  unsigned __int64 ThreadPointerData; // rax
  __int64 v12; // rdx
  CTouchProcessor *v13; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  void *v18; // r8
  PERESOURCE *v20[6]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      102,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v20, this + 4, 0LL);
  v9 = PtiCurrent(v8, v7);
  *v3 = 0LL;
  v10 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)this,
                        (struct _LIST_ENTRY *)((char *)v9 + 1208),
                        v4,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v13, ThreadPointerData);
    v15 = NonConstMsgData;
    if ( NonConstMsgData )
    {
      v16 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
      if ( v16 )
      {
        v17 = 480LL * *((unsigned int *)v15 + 8) + v16[30];
        if ( v17 )
        {
          v10 = 1;
          *v3 = *(struct tagPOINT *)(v17 + 200);
        }
        CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v16);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v6 = 0;
  if ( (_BYTE)v12 || v6 )
  {
    v18 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v18) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_WORD)v12,
      (_DWORD)v18,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      103,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v20, v12);
  return v10;
}
