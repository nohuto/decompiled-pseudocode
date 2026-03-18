/*
 * XREFs of ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B1764
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401047BC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x14010556C (-SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1401055B8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x14010565C (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x140105728 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x14010581C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140105958 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x140105ED4 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1401062D4 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z @ 0x140189E90 (-GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z.c)
 */

void __fastcall CPTPEngine::HandleMove(CPTPEngine *this, struct PTPInput *a2, struct PTPEnginePointerNode *a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  unsigned int *v6; // r14
  int v7; // r12d
  __int64 v9; // r13
  char *v10; // r15
  int v11; // eax
  __int64 v12; // rax
  int v13; // ebp
  unsigned int v14; // r10d
  char *v15; // r8
  char *v16; // r14
  struct PTPEnginePointerNode *v17; // r11
  unsigned int v18; // r9d
  int ButtonForSimulatedPresses; // eax
  unsigned int v20; // r8d
  _DWORD *v21; // r9
  char *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  LONG x; // r14d
  int y; // ebp
  __int64 v28; // rbx
  struct tagPOINT *v29; // rax
  int v30; // [rsp+60h] [rbp+8h]
  struct tagPOINT v31; // [rsp+70h] [rbp+18h]

  v3 = *((_QWORD *)a3 + 5);
  v4 = (_QWORD *)((char *)this + 816);
  v6 = (unsigned int *)((char *)this + 3072);
  v7 = 0;
  v9 = (unsigned int)(*((_DWORD *)a3 + 1) % *((_DWORD *)this + 4));
  v10 = (char *)this + 328 * v9 + 816;
  v30 = 0;
  v11 = *((_DWORD *)this + 768);
  if ( (v11 & 0x400000) != 0 )
    *v6 = v11 & 0xFFAFFFFF;
  if ( *((_DWORD *)this + 706) != 2 )
  {
    CPTPEngine::SendMouseUpIfPending((struct tagPOINT *)this, (unsigned int *)this + 697);
    CPTPEngine::CancelMouseUpTimer((struct tagPOINT *)this, 1);
    if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
    {
      CBasePTPEngine::SendInertiaOutput((__int64)this, 3);
      *((_DWORD *)a2 + 10) = 0;
    }
    *v6 &= ~0x40000u;
    *((_DWORD *)this + 696) = v9;
    *v6 &= ~0x20000u;
    v7 = 1;
    *((_DWORD *)this + 706) = 2;
    while ( v4 != (_QWORD *)((char *)this + 2784) )
    {
      *(_DWORD *)v4 &= ~0x20000u;
      v4[12] = 0LL;
      v4 += 41;
    }
    v12 = *(_QWORD *)a2;
    *(_DWORD *)v10 |= 0x20000u;
    *((_QWORD *)v10 + 12) = v12;
    if ( *((_DWORD *)this + 698) == 2 )
    {
      v13 = *((_DWORD *)this + 768);
      if ( (v13 & 0x8000000) != 0 || (v13 & 0x10000000) != 0 )
      {
        v14 = *((_DWORD *)a2 + 12);
        v15 = (char *)a2 + 56;
        v16 = 0LL;
        v17 = 0LL;
        v18 = 0;
        if ( v14 )
        {
          while ( 1 )
          {
            v16 = (char *)this + 328 * (unsigned int)(*((_DWORD *)v15 + 1) % *((_DWORD *)this + 4)) + 816;
            if ( (*(_DWORD *)v16 & 1) != 0 && v16 != v10 )
              break;
            ++v18;
            v15 += 96;
            if ( v18 >= v14 )
              goto LABEL_19;
          }
          v17 = (struct PTPEnginePointerNode *)v15;
        }
LABEL_19:
        if ( (*((_DWORD *)v16 + 1) & 8) != 0 )
        {
          ButtonForSimulatedPresses = CPTPEngine::GetButtonForSimulatedPresses(this, v17);
          if ( ButtonForSimulatedPresses )
          {
            if ( (ButtonForSimulatedPresses != 2 || (v13 & 8) == 0)
              && (ButtonForSimulatedPresses != 8 || (v13 & 0x10) == 0) )
            {
              *(_DWORD *)v16 |= 0x10000u;
              CPTPEngine::SendMouseDownAtPoint(
                (struct tagPOINT *)this,
                ButtonForSimulatedPresses,
                *(struct tagPOINT *)((char *)a2 + 28),
                1);
              return;
            }
          }
        }
      }
    }
    v20 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v21 = (_DWORD *)((char *)a2 + 60);
      do
      {
        v22 = (char *)this + 328 * (unsigned int)(*v21 % *((_DWORD *)this + 4)) + 816;
        if ( (*(_DWORD *)v22 & 1) != 0 && v22 != v10 )
          *((_DWORD *)v22 + 1) &= ~2u;
        ++v20;
        v21 += 24;
      }
      while ( v20 < *((_DWORD *)a2 + 12) );
    }
  }
  v23 = *((_DWORD *)this + 768);
  if ( (v23 & 0x80000) != 0 )
  {
    v7 = 1;
    *((_DWORD *)this + 768) = v23 & 0xFFF7FFFF;
  }
  else
  {
    if ( !v7 )
    {
      v24 = v3 - *((_DWORD *)this + 711);
      v30 = HIDWORD(v3) - *((_DWORD *)this + 712);
      goto LABEL_38;
    }
    *((_DWORD *)this + 768) = v23 & 0xFEFFFFFF;
    CBasePTPEngine::SendTotalTimeTelemetry((__int64)this, 1, *(_QWORD *)a2 - *((_QWORD *)v10 + 8));
  }
  *(_QWORD *)((char *)this + 2844) = *((_QWORD *)v10 + 1);
  *(_DWORD *)v10 &= ~0x4000000u;
  v24 = 0;
LABEL_38:
  v25 = *((_DWORD *)this + 776);
  v31.x = 100 * v24 / v25;
  x = v31.x;
  v31.y = 100 * v30 / v25;
  y = v31.y;
  v28 = (__int64)v31;
  v29 = (struct tagPOINT *)((char *)this + 2852);
  if ( !v7 )
  {
    x = v31.x - v29->x;
    y = v31.y - *((_DWORD *)this + 714);
    v28 = __PAIR64__(y, x);
  }
  *v29 = v31;
  if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                        this,
                        a2,
                        (struct tagPOINT)v28,
                        (struct CContactState *)v10)
    && (x || y) )
  {
    if ( (*((_DWORD *)this + 768) & 0x1000000) == 0 )
    {
      CBasePTPEngine::SendLastActionTelemetry((__int64)this, 10);
      *((_QWORD *)v10 + 15) = *(_QWORD *)a2;
    }
    *((_DWORD *)this + 768) |= 0x1000000u;
    CBasePTPEngine::SendMouseOutput((__int64)this, 0, v28);
  }
}
