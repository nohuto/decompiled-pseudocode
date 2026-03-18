/*
 * XREFs of ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193AB4
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB168 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x1400C911C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400C92CC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400C9380 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x1400C944C (-SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400C9490 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1400C9990 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400C9D9C (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140129474 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z @ 0x140156734 (-GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z.c)
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CPTPEngine::HandleMove(CPTPEngine *this, struct PTPInput *a2, struct PTPEnginePointerNode *a3)
{
  __int64 v3; // rbx
  int v5; // eax
  int v6; // ebp
  int v7; // r13d
  __int64 v8; // rsi
  int v9; // r12d
  char *v10; // r15
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  char *i; // rax
  __int64 v15; // rax
  int v16; // ebp
  unsigned int v17; // r10d
  char *v18; // r8
  char *v19; // rsi
  struct PTPEnginePointerNode *v20; // r11
  unsigned int v21; // r9d
  int ButtonForSimulatedPresses; // eax
  unsigned int v23; // r8d
  _DWORD *v24; // r9
  char *v25; // rcx
  int v26; // eax
  int v27; // ecx
  int v28; // ebp
  int y; // esi
  __int64 v30; // rbx
  __int64 v31; // rcx
  struct tagPOINT v32; // [rsp+60h] [rbp+8h]

  v3 = *((_QWORD *)a3 + 5);
  v5 = *((_DWORD *)this + 770);
  v6 = 0;
  v7 = 0;
  v8 = (unsigned int)(*((_DWORD *)a3 + 1) % *((_DWORD *)this + 4));
  v9 = 0;
  v10 = (char *)this + 328 * v8 + 816;
  if ( (v5 & 0x400000) != 0 )
    *((_DWORD *)this + 770) = v5 & 0xFFAFFFFF;
  if ( *((_DWORD *)this + 706) != 2 )
  {
    CPTPEngine::SendMouseUpIfPending((struct tagPOINT *)this, (unsigned int *)this + 697);
    v9 = 1;
    CPTPEngine::CancelMouseUpTimer(this, 1);
    if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
    {
      CBasePTPEngine::SendInertiaOutput((__int64)this, 3);
      *((_DWORD *)a2 + 10) = 0;
    }
    v12 = (unsigned __int64)this + 2784;
    v13 = *((_DWORD *)this + 770) & 0xFFFBFFFF;
    *((_DWORD *)this + 706) = 2;
    *((_DWORD *)this + 696) = v8;
    *((_DWORD *)this + 770) = v13 & 0xFFFDFFFF;
    for ( i = (char *)this + 816; i != (char *)v12; i += 328 )
    {
      *((_QWORD *)i + 12) = 0LL;
      *(_DWORD *)i &= ~0x20000u;
    }
    v15 = *(_QWORD *)a2;
    *(_DWORD *)v10 |= 0x20000u;
    *((_QWORD *)v10 + 12) = v15;
    if ( *((_DWORD *)this + 698) == 2 )
    {
      v16 = *((_DWORD *)this + 770);
      if ( (v16 & 0x8000000) != 0 || (v16 & 0x10000000) != 0 )
      {
        v17 = *((_DWORD *)a2 + 12);
        v18 = (char *)a2 + 56;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0;
        if ( v17 )
        {
          while ( 1 )
          {
            v12 = (unsigned int)(*((_DWORD *)v18 + 1) % *((_DWORD *)this + 4));
            v19 = (char *)this + 328 * v12 + 816;
            if ( (*(_DWORD *)v19 & 1) != 0 && v19 != v10 )
              break;
            ++v21;
            v18 += 96;
            if ( v21 >= v17 )
            {
              v7 = 0;
              goto LABEL_18;
            }
          }
          v7 = 0;
          v20 = (struct PTPEnginePointerNode *)v18;
        }
LABEL_18:
        if ( (*((_DWORD *)v19 + 1) & 0x10) != 0 )
        {
          ButtonForSimulatedPresses = CPTPEngine::GetButtonForSimulatedPresses(this, v20);
          if ( ButtonForSimulatedPresses )
          {
            if ( (ButtonForSimulatedPresses != 2 || (v16 & 8) == 0)
              && (ButtonForSimulatedPresses != 8 || (v16 & 0x10) == 0) )
            {
              *(_DWORD *)v19 |= 0x10000u;
              CPTPEngine::SendMouseDownAtPoint(
                this,
                ButtonForSimulatedPresses,
                *(struct tagPOINT *)((char *)a2 + 28),
                1);
              return;
            }
          }
        }
        v6 = 0;
      }
      else
      {
        v6 = 0;
      }
    }
    if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline(v12) )
    {
      v23 = 0;
      if ( *((_DWORD *)a2 + 12) )
      {
        v24 = (_DWORD *)((char *)a2 + 60);
        do
        {
          v25 = (char *)this + 328 * (unsigned int)(*v24 % *((_DWORD *)this + 4)) + 816;
          if ( (*(_DWORD *)v25 & 1) != 0 && v25 != v10 )
            *((_DWORD *)v25 + 1) &= ~4u;
          ++v23;
          v24 += 24;
        }
        while ( v23 < *((_DWORD *)a2 + 12) );
      }
    }
  }
  v26 = *((_DWORD *)this + 770);
  if ( (v26 & 0x80000) != 0 )
  {
    v9 = 1;
    *((_DWORD *)this + 770) = v26 & 0xFFF7FFFF;
  }
  else
  {
    if ( !v9 )
    {
      v6 = v3 - *((_DWORD *)this + 711);
      v7 = HIDWORD(v3) - *((_DWORD *)this + 712);
      goto LABEL_41;
    }
    *((_DWORD *)this + 770) = v26 & 0xFEFFFFFF;
    CBasePTPEngine::SendTotalTimeTelemetry((__int64)this, 1, *(_QWORD *)a2 - *((_QWORD *)v10 + 8));
  }
  *(_QWORD *)((char *)this + 2844) = *((_QWORD *)v10 + 1);
  *(_DWORD *)v10 &= ~0x8000000u;
LABEL_41:
  v27 = *((_DWORD *)this + 778);
  v28 = 100 * v6 / v27;
  v32.x = v28;
  v32.y = 100 * v7 / v27;
  y = v32.y;
  v30 = (__int64)v32;
  if ( !v9 )
  {
    v28 -= *((_DWORD *)this + 713);
    y = v32.y - *((_DWORD *)this + 714);
    v30 = __PAIR64__(y, v28);
  }
  *(struct tagPOINT *)((char *)this + 2852) = v32;
  if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                        this,
                        a2,
                        (struct tagPOINT)v30,
                        (struct CContactState *)v10)
    && (v28 || y) )
  {
    if ( (*((_DWORD *)this + 770) & 0x1000000) == 0 )
    {
      CBasePTPEngine::SendLastActionTelemetry((__int64)this, 10);
      if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline(v31) )
        *((_QWORD *)v10 + 15) = *(_QWORD *)a2;
    }
    *((_DWORD *)this + 770) |= 0x1000000u;
    CBasePTPEngine::SendMouseOutput((__int64)this, 0, v30);
  }
}
