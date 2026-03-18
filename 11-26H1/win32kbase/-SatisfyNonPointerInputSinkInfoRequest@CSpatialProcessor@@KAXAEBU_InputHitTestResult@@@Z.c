/*
 * XREFs of ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1400A3194
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140070610 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x14006EC50 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400A4600 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

void __fastcall CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(
        const struct _InputHitTestResult *a1,
        int a2,
        int a3)
{
  void *v4; // rcx
  bool v5; // di
  bool v6; // bl
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  char v10; // di
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  bool v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rbx
  int v18; // edx
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  char v25; // r15
  bool v26; // bp
  bool v27; // r14
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // bp
  __int64 v32; // rbx
  __int64 UserSessionState; // rax
  int v34; // r8d
  int v35; // edx
  __int64 v36; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v4 = (void *)*((_QWORD *)a1 + 1);
  if ( v4 )
  {
    v10 = 1;
    Object = 0LL;
    if ( CompositionInputObject::ResolveHandle(v4, 1u, 1, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v10 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = *((_QWORD *)a1 + 1);
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
        LOBYTE(v34) = v31;
        LOBYTE(v35) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v34,
          *(_QWORD *)(UserSessionState + 69136),
          3,
          2,
          22,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
          v32);
      }
    }
    else
    {
      v13 = (int)WPP_GLOBAL_Control;
      v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = *((_QWORD *)a1 + 1);
        v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
        LOBYTE(v21) = v14;
        LOBYTE(v22) = v36;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v22,
          *(_QWORD *)(v20 + 69136),
          4,
          2,
          20,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
          v19);
      }
      v15 = W32GetUserSessionState(v13, v11, v12);
      v16 = Object;
      v17 = v15;
      v18 = *(_DWORD *)(v15 + 19000);
      if ( (v18 & 1) != 0 )
        *(_QWORD *)(v15 + 19020) = *((_QWORD *)Object + 2);
      if ( (v18 & 4) != 0 )
      {
        *(_OWORD *)(v15 + 19040) = *((_OWORD *)a1 + 1);
        *(_OWORD *)(v15 + 19056) = *((_OWORD *)a1 + 2);
        *(_OWORD *)(v15 + 19072) = *((_OWORD *)a1 + 3);
        *(_OWORD *)(v15 + 19088) = *((_OWORD *)a1 + 4);
      }
      if ( (v18 & 8) != 0 )
        *(_DWORD *)(v15 + 19104) = *((_DWORD *)a1 + 22);
      if ( (v18 & 2) != 0 && *(_DWORD *)(v15 + 19012) == 6 )
      {
        v36 = 0LL;
        CompositionInputObject::GetWindowForInputType(v16, 5, &v36);
        v25 = v36;
        if ( v36 )
        {
          *(_QWORD *)(v17 + 19032) = v36;
          v26 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v24);
            LOBYTE(v29) = v27;
            LOBYTE(v30) = v26;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v30,
              v29,
              *(_QWORD *)(v28 + 69136),
              4,
              2,
              21,
              (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
              v25);
          }
        }
      }
      ObfDereferenceObject(v16);
      *(_DWORD *)(v17 + 19016) = 1;
    }
  }
  else
  {
    v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(v7 + 69136),
        3,
        2,
        23,
        (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids);
    }
  }
}
