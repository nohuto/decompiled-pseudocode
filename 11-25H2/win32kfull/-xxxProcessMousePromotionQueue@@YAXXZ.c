/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140139D58
 * Callers:
 *     ?xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z @ 0x140139210 (-xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140139508 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1401398E8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z @ 0x14026D6B0 (-xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401D4478 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x140255A98 (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140276FFC (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1402B0648 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z.c)
 */

void __fastcall xxxProcessMousePromotionQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagMOUSE_PROMOTION_QUEUE *v6; // rsi
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  char v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // xmm0_8
  unsigned int v19; // ebp
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v25; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // [rsp+20h] [rbp-48h] BYREF
  int v33; // [rsp+28h] [rbp-40h]
  _QWORD v34[4]; // [rsp+30h] [rbp-38h] BYREF
  int v35; // [rsp+70h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 16672) )
  {
    v6 = (struct tagMOUSE_PROMOTION_QUEUE *)(W32GetUserSessionState(v3, v2) + 16544);
    if ( *(_QWORD *)v6 )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      v10 = PtiCurrent(v9, v8);
      *(_DWORD *)(UserSessionState + 16680) &= ~1u;
      *(_QWORD *)(UserSessionState + 16672) = v10;
      if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
        v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 18744) == 0;
      else
        v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 16340) == 0;
      if ( v13 || (v14 = 1, (unsigned __int8)IsInputThread()) )
        v14 = 0;
      while ( 1 )
      {
        v25 = DequeueMousePromotionEntry(v6);
        v26 = v25;
        if ( !v25 )
          break;
        v15 = *((unsigned int *)v25 + 11);
        if ( (v15 & 0x20) != 0
          && (unsigned __int8)HasCapture()
          && (v17 = *((_QWORD *)PtiCurrent(v15, v16) + 58),
              v18 = *(_QWORD *)(v17 + 864),
              LODWORD(v17) = *(_DWORD *)(v17 + 872),
              v32 = v18,
              v33 = v17,
              !(unsigned int)CheckIntegrityAccessToCapture(&v32)) )
        {
          v14 = 1;
          v19 = 1;
        }
        else
        {
          v19 = 0;
        }
        v20 = PtiCurrent(v15, v16);
        v34[0] = *((_QWORD *)v20 + 48);
        *((_QWORD *)v20 + 48) = v34;
        v34[2] = SpbApcRundown;
        v34[1] = v26;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v35, 1);
        v21 = v19;
        LODWORD(v21) = v19 | 0x100;
        if ( !v14 )
          v21 = v19;
        xxxSendMousePromotion(v26, v21);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v35);
        v24 = PtiCurrent(v23, v22);
        *((_QWORD *)v24 + 48) = v34[0];
        Win32FreePool(v26);
      }
      if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v14 )
          goto LABEL_20;
        if ( !*(_DWORD *)(W32GetUserSessionState(v28, v27) + 18744) )
          goto LABEL_30;
        if ( (unsigned __int8)IsInputThread() )
        {
          v31 = 1710LL;
          goto LABEL_28;
        }
      }
      else
      {
        if ( !v14 )
        {
LABEL_20:
          xxxProcessMouseEvent();
LABEL_30:
          *(_QWORD *)(W32GetUserSessionState(v30, v29) + 16672) = 0LL;
          return;
        }
        if ( !*(_DWORD *)(W32GetUserSessionState(v28, v27) + 16340) )
          goto LABEL_30;
        if ( (unsigned __int8)IsInputThread() )
        {
          v31 = 1726LL;
LABEL_28:
          v35 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v31);
        }
      }
      xxxWaitForDITMouseInjectionFlush();
      goto LABEL_30;
    }
  }
}
