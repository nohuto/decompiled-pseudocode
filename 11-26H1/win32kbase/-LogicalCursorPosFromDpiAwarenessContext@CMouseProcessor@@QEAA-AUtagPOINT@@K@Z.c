/*
 * XREFs of ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140084250
 * Callers:
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1400840D0 (CaptureLogicalCursorPosToQMouseMove.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400853E0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct tagPOINT __fastcall CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(
        CMouseProcessor *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v4; // esi
  int v5; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int (*v13)(void); // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ebx
  unsigned __int16 v19; // si
  __int128 v20; // xmm0
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r10
  signed int v23; // r9d
  int v24; // edx
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // rax
  int v27; // edx
  int v28; // r9d
  signed int v29; // r9d
  int v30; // edx
  unsigned __int64 v31; // rax
  int v32; // r10d
  unsigned int v33; // r9d
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  signed int v36; // r10d
  int v37; // ecx
  unsigned __int64 v38; // rax
  signed int v39; // r10d
  int v40; // edx
  unsigned __int64 v41; // rax
  bool v42; // cc
  __int64 v43; // [rsp+30h] [rbp-58h]

  *(_QWORD *)a2 = 0LL;
  v5 = *((_DWORD *)this + 13) >> 8;
  v4 = a3;
  LOWORD(v5) = (a3 >> 8) ^ v5;
  if ( (v5 & 0x1FF) != 0 )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState((_DWORD)this, v5, a3) + 19904);
    if ( !v4 )
    {
      v4 = 18;
      CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v8, v7);
      if ( CurrentThreadWin32Thread )
      {
        v11 = *CurrentThreadWin32Thread;
        if ( *CurrentThreadWin32Thread )
        {
          if ( *(_QWORD *)(v11 + 400) )
            CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadWin32Thread);
          if ( *(_DWORD *)(v11 + 392) )
          {
            v4 = *(_DWORD *)(v11 + 392);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
            if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
              v4 = *(_DWORD *)(CurrentProcessWin32Process + 268);
          }
        }
      }
    }
    if ( (v4 & 0xF) == 2
      || (v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48) + 3472LL)) == 0LL
      || v13() < 0 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v9 + 4960);
    }
    else
    {
      v15 = *(_QWORD *)(v9 + 4960);
      v16 = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14) + 48) + 3480LL);
      if ( v16 )
        v16 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v16)(v15, 2LL, 18LL);
      v17 = *(_QWORD *)(v16 + 40);
      v18 = 0x80000000;
      v19 = (v4 >> 8) & 0x1FF;
      v20 = *(_OWORD *)(v17 + 28);
      v21 = *(unsigned __int16 *)(v17 + 60);
      v43 = v20;
      if ( v19 )
      {
        v22 = *(unsigned __int16 *)(v17 + 62);
        v23 = ((int)v20 >> 31) & 0xFFFFFFFE;
        v24 = -(int)v20;
        if ( (int)v20 > 0 )
          v24 = v20;
        if ( *(_WORD *)(v17 + 62) )
        {
          v25 = (__int64)(((unsigned __int64)*(unsigned __int16 *)(v17 + 62) >> 1) + v24 * (unsigned __int64)v19)
              / *(unsigned __int16 *)(v17 + 62);
          if ( v25 > 0x7FFFFFFF )
          {
            v26 = DWORD1(v20);
            v42 = v23 <= -1;
            v27 = DWORD1(v20);
            v28 = DWORD1(v20);
            if ( v42 )
              LODWORD(v25) = 0x80000000;
            else
              LODWORD(v25) = 0x7FFFFFFF;
          }
          else
          {
            if ( v23 <= -1 )
              LODWORD(v25) = -(int)v25;
            v26 = DWORD1(v20);
            v27 = DWORD1(v20);
            v28 = DWORD1(v20);
          }
          v29 = (v28 >> 31) & 0xFFFFFFFE;
          v30 = -v27;
          if ( v30 < 0 )
            v30 = v26;
          v31 = (__int64)((v22 >> 1) + v30 * (unsigned __int64)v19) / (int)v22;
          v32 = v31;
          if ( v31 > 0x7FFFFFFF )
          {
            v32 = 0x80000000;
            if ( v29 > -1 )
              v32 = 0x7FFFFFFF;
          }
          else if ( v29 <= -1 )
          {
            v32 = -(int)v31;
          }
        }
        else
        {
          LODWORD(v25) = 0x7FFFFFFF;
          if ( v23 <= -1 )
            LODWORD(v25) = 0x80000000;
          v32 = 0x80000000;
          if ( (int)((SDWORD1(v20) >> 31) & 0xFFFFFFFE) > -1 )
            v32 = 0x7FFFFFFF;
        }
        v33 = v21;
        if ( !(_DWORD)v21 || (v34 = (v21 >> 1) / (int)v21, v34 > 0x7FFFFFFF) )
          LODWORD(v34) = 0x7FFFFFFF;
        LODWORD(v43) = v34 + v25;
        if ( !(_DWORD)v21 || (v35 = (__int64)(v21 >> 1) / (int)v21, v35 > 0x7FFFFFFF) )
          LODWORD(v35) = 0x7FFFFFFF;
        HIDWORD(v43) = v35 + v32;
      }
      else
      {
        v33 = *(unsigned __int16 *)(v17 + 60);
      }
      v36 = ((*(_DWORD *)(v9 + 4960) - (int)v20) >> 31) & 0xFFFFFFFE;
      v37 = v20 - *(_DWORD *)(v9 + 4960);
      if ( v37 < 0 )
        v37 = *(_DWORD *)(v9 + 4960) - v20;
      if ( v33 && (v38 = (__int64)(((unsigned __int64)v33 >> 1) + v37 * (unsigned __int64)v19) / v33, v38 <= 0x7FFFFFFF) )
      {
        if ( v36 <= -1 )
          LODWORD(v38) = -(int)v38;
      }
      else
      {
        LODWORD(v38) = 0x80000000;
        if ( v36 > -1 )
          LODWORD(v38) = 0x7FFFFFFF;
      }
      *(_DWORD *)a2 = v43 + v38;
      v39 = ((*(_DWORD *)(v9 + 4964) - DWORD1(v20)) >> 31) & 0xFFFFFFFE;
      v40 = DWORD1(v20) - *(_DWORD *)(v9 + 4964);
      if ( v40 < 0 )
        v40 = *(_DWORD *)(v9 + 4964) - DWORD1(v20);
      if ( v33 && (v41 = (__int64)(((unsigned __int64)v33 >> 1) + v40 * (unsigned __int64)v19) / v33, v41 <= 0x7FFFFFFF) )
      {
        v18 = (__int64)(((unsigned __int64)v33 >> 1) + v40 * (unsigned __int64)v19) / v33;
        if ( v39 <= -1 )
          v18 = -(int)v41;
      }
      else if ( v39 > -1 )
      {
        v18 = 0x7FFFFFFF;
      }
      *(_DWORD *)(a2 + 4) = v18 + HIDWORD(v43);
    }
  }
  else
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 11);
    *(_DWORD *)(a2 + 4) = *((_DWORD *)this + 12);
  }
  return (struct tagPOINT)a2;
}
