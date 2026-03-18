/*
 * XREFs of ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x140122408
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140038370 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x140064F20 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x140068B20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

void __fastcall CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(
        const struct _InputHitTestResult *a1,
        __int64 a2)
{
  void *v3; // rcx
  bool v4; // di
  bool v5; // bl
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx
  char v9; // di
  __int64 v10; // rdx
  void *v11; // rcx
  bool v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // rbx
  int v20; // edx
  __int64 v21; // rdx
  char v22; // r15
  bool v23; // bp
  bool v24; // r14
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // bp
  __int64 v29; // rbx
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v3 = (void *)*((_QWORD *)a1 + 1);
  if ( v3 )
  {
    Object = 0LL;
    v9 = 1;
    if ( (int)CompositionInputObject::ResolveHandle(v3, 1u, 1, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v9 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = *((_QWORD *)a1 + 1);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v31) = v28;
        LOBYTE(v32) = v9;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v31,
          *(_QWORD *)(UserSessionState + 69144),
          3,
          2,
          22,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          v29);
      }
    }
    else
    {
      v11 = WPP_GLOBAL_Control;
      v12 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *((_QWORD *)a1 + 1);
        v14 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v15) = v12;
        LOBYTE(v16) = v33;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v16,
          *(_QWORD *)(v14 + 69144),
          4,
          2,
          20,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          v13);
      }
      v17 = W32GetUserSessionState(v11, v10);
      v18 = Object;
      v19 = v17 + 18960;
      v20 = *(_DWORD *)(v17 + 18960);
      if ( (v20 & 1) != 0 )
        *(_QWORD *)(v17 + 18980) = *((_QWORD *)Object + 2);
      if ( (v20 & 4) != 0 )
      {
        *(_OWORD *)(v17 + 19000) = *((_OWORD *)a1 + 1);
        *(_OWORD *)(v17 + 19016) = *((_OWORD *)a1 + 2);
        *(_OWORD *)(v17 + 19032) = *((_OWORD *)a1 + 3);
        *(_OWORD *)(v17 + 19048) = *((_OWORD *)a1 + 4);
      }
      if ( (v20 & 8) != 0 )
        *(_DWORD *)(v17 + 19064) = *((_DWORD *)a1 + 22);
      if ( (v20 & 2) != 0 && *(_DWORD *)(v17 + 18972) == 6 )
      {
        v33 = 0LL;
        CompositionInputObject::GetWindowForInputType(v18, 5, &v33);
        v22 = v33;
        if ( v33 )
        {
          *(_QWORD *)(v19 + 32) = v33;
          v23 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
            LOBYTE(v26) = v24;
            LOBYTE(v27) = v23;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v27,
              v26,
              *(_QWORD *)(v25 + 69144),
              4,
              2,
              21,
              (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
              v22);
          }
        }
      }
      ObfDereferenceObject(v18);
      *(_DWORD *)(v19 + 16) = 1;
    }
  }
  else
  {
    v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(v6 + 69144),
        3,
        2,
        23,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
    }
  }
}
