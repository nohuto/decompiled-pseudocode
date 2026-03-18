/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1401C276C
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1401C0364 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401C0E78 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1401C1988 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     DwmSyncHitTestQuery @ 0x140118B24 (DwmSyncHitTestQuery.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

void __fastcall xxxSendNCHitTest(
        float **a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        int *a5,
        struct tagPNTRWINDOWHITTTESTARGS *a6)
{
  int v6; // ebp
  __int64 v7; // rbx
  float *v9; // rax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  BOOL v16; // edi
  struct tagPNTRWINDOWHITTTESTARGS *v17; // r14
  int *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rdi
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF
  struct tagPOINT v24; // [rsp+98h] [rbp+10h]
  struct tagPOINT v25; // [rsp+A0h] [rbp+18h]
  __int64 v26; // [rsp+A8h] [rbp+20h] BYREF

  v25 = a3;
  v24 = a2;
  v6 = 0;
  v7 = (__int64)a2;
  if ( a4 )
  {
    v25.x += a4->x;
    v25.y += a4->y;
    v23 = (__int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (v9 = a1[27]) != 0LL )
    {
      v11 = (int)(float)((float)(int)v23 * *v9);
      v10 = (int)(float)((float)SHIDWORD(v23) * v9[5]);
    }
    else
    {
      v10 = HIDWORD(v23);
      v11 = v23;
    }
    v24.x += v11;
    v24.y += v10;
    v7 = (__int64)v24;
    a3 = v25;
  }
  if ( PtInRect((_DWORD *)a1[5] + 22, *(_QWORD *)&a3) )
  {
    v16 = (*(_BYTE *)(v15 + 31) & 0x20) != 0 || !PtInRect((_DWORD *)(v15 + 104), v14);
    if ( a1[2] == (float *)PtiCurrent(v13, v12) )
    {
      v17 = a6;
      v18 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
        && (*((_BYTE *)a1[5] + 26) & 8) != 0
        && v16 )
      {
        v21 = ReferenceDwmApiPort(v20, v19);
        LODWORD(v26) = 1;
        v22 = (void *)v21;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v23, 1);
        DwmSyncHitTestQuery(
          v22,
          (__int64)*a1,
          *(_DWORD *)v17,
          v7,
          *((_QWORD *)v17 + 1),
          *((_QWORD *)v17 + 2),
          -2,
          v18,
          &v26);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v23);
        v6 = v26;
      }
      if ( !*((_DWORD *)v17 + 21) || !v6 )
        *v18 = xxxSendTransformableMessageTimeout(
                 (struct tagTHREADINFO **)a1,
                 132LL,
                 0LL,
                 (struct tagDRAWITEMSTRUCT *)(LOWORD(v25.x) | (LOWORD(v25.y) << 16)),
                 0,
                 0,
                 0LL,
                 1,
                 0);
    }
    else
    {
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
}
