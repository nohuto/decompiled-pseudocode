/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x140099894
 * Callers:
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     InputTransformOnInput @ 0x1400980E0 (InputTransformOnInput.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140099480 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     SetManipulationInputTargetTransform @ 0x14009A5D0 (SetManipulationInputTargetTransform.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MagpRemoveTransformOutputMagFac @ 0x140099CE0 (MagpRemoveTransformOutputMagFac.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x140099DDC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?OnInput@InputSink@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x14009A148 (-OnInput@InputSink@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPU.c)
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x14009A620 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x14009A844 (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall InputTransform::OnInput(InputTransform *this, struct tagWND *a2)
{
  InputTransform *v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rax
  CompositionInputObject *v6; // rcx
  unsigned __int64 *v7; // r9
  __int64 v8; // rdi
  struct tagHID_PAGEONLY_REQUEST *v9; // r14
  struct tagHID_PAGEONLY_REQUEST **v10; // rsi
  bool v11; // r9
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  struct tagHID_PAGEONLY_REQUEST *i; // rcx
  struct tagHID_PAGEONLY_REQUEST *v18; // r13
  struct MOVESIZEDATA *v19; // rcx
  bool v20; // al
  __int64 v21; // rbx
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  bool v28; // bl
  bool v29; // si
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  int v33; // [rsp+20h] [rbp-F8h]
  int v34; // [rsp+28h] [rbp-F0h]
  int v35; // [rsp+30h] [rbp-E8h]
  int v36; // [rsp+38h] [rbp-E0h]
  __int128 v37; // [rsp+50h] [rbp-C8h]
  __int128 v38; // [rsp+60h] [rbp-B8h]
  __int128 v39; // [rsp+70h] [rbp-A8h]
  __int128 v40; // [rsp+80h] [rbp-98h]
  _OWORD v41[8]; // [rsp+90h] [rbp-88h] BYREF
  struct tagWND *v43; // [rsp+128h] [rbp+10h] BYREF
  const struct CInputSink *v44; // [rsp+130h] [rbp+18h] BYREF
  bool v45; // [rsp+138h] [rbp+20h]

  v43 = a2;
  v3 = this;
  if ( (unsigned __int8)IsInputThread()
    || (v13 = PtiCurrent(v4), v13 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v15, v14) + 18872)) )
  {
    v5 = *((_QWORD *)v3 + 34);
    if ( v5 )
    {
      v6 = *(CompositionInputObject **)(v5 + 96);
      if ( v6 )
      {
        v44 = 0LL;
        if ( (int)CompositionInputObject::LockForRead(v6, &v44) >= 0 )
        {
          v37 = *(_OWORD *)((char *)v44 + 88);
          v38 = *(_OWORD *)((char *)v44 + 104);
          v39 = *(_OWORD *)((char *)v44 + 120);
          v40 = *(_OWORD *)((char *)v44 + 136);
          CInputSink::UnlockAndRelease(v44);
          v41[0] = v37;
          v41[1] = v38;
          v41[2] = v39;
          v41[3] = v40;
          MagpRemoveTransformOutputMagFac(v41);
          InputTransform::StoreTransform(v3, (struct tagWND *)v41, (const struct tagINPUT_TRANSFORM *)&v43, v7);
        }
      }
    }
  }
  v8 = *((_QWORD *)v3 + 34);
  if ( v8 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v9 = (struct tagHID_PAGEONLY_REQUEST *)(v8 + 8);
    v10 = *(struct tagHID_PAGEONLY_REQUEST ***)(v8 + 8);
    if ( v10 != (struct tagHID_PAGEONLY_REQUEST **)(v8 + 8) && v10 != *(struct tagHID_PAGEONLY_REQUEST ***)(v8 + 16) )
    {
      v16 = gqpcAgeLimit;
      if ( gqpcAgeLimit )
      {
        for ( i = *v10; i != v9 && a2 - v10[2] <= gqpcAgeLimit; i = *(struct tagHID_PAGEONLY_REQUEST **)i )
          v10 = (struct tagHID_PAGEONLY_REQUEST **)i;
        v18 = *v10;
        if ( *v10 != v9 )
        {
          do
          {
            v19 = WPP_GLOBAL_Control;
            v20 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            LOBYTE(v44) = v20;
            v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v21 = *((_QWORD *)v18 + 2);
              LOBYTE(v19) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              UserSessionState = W32GetUserSessionState(v19, v16);
              LOBYTE(v23) = v45;
              LOBYTE(v24) = (_BYTE)v44;
              WPP_RECORDER_AND_TRACE_SF_i(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v24,
                v23,
                *(_QWORD *)(UserSessionState + 69152),
                v33,
                v34,
                v35,
                v36,
                v21);
            }
            EtwTraceTransformAgeDecay(v8, *((_QWORD *)v18 + 2));
            FreeHidPageOnlyRequest(v18);
            *(_DWORD *)(v8 + 88) |= 2u;
            v18 = *v10;
          }
          while ( *v10 != v9 );
          v3 = this;
        }
      }
      else
      {
        v28 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(v30 + 69152),
            4,
            20,
            11,
            (__int64)&WPP_c988c3f99a353e6ffe2381605806c7a5_Traceguids);
        }
      }
    }
    if ( (*(_DWORD *)(v8 + 88) & 1) == 0 )
      goto LABEL_10;
    v25 = Win32AllocPoolZInit(88LL, 2020176725LL);
    if ( v25 )
    {
      *(_QWORD *)(v25 + 16) = a2;
      v26 = (__int64 *)(v8 + 8);
      *(_OWORD *)(v25 + 24) = *(_OWORD *)(v8 + 24);
      *(_OWORD *)(v25 + 40) = *(_OWORD *)(v8 + 40);
      *(_OWORD *)(v25 + 56) = *(_OWORD *)(v8 + 56);
      *(_OWORD *)(v25 + 72) = *(_OWORD *)(v8 + 72);
      v27 = *(_QWORD *)(v8 + 8);
      if ( *(_QWORD *)(v27 + 8) != v8 + 8 )
        __fastfail(3u);
      *(_QWORD *)v25 = v27;
      *(_QWORD *)(v25 + 8) = v26;
      *(_QWORD *)(v27 + 8) = v25;
      *v26 = v25;
      *(_DWORD *)(v8 + 88) &= ~1u;
LABEL_10:
      EtwTraceOnInputXformUpdate(*(_QWORD *)v3, a2, 1LL);
      InputTraceLogging::InputSink::OnInput(
        (unsigned __int64)a2,
        *(HWND *)v3,
        *(const struct CompositionInputObject **)(v8 + 96),
        v11,
        (const struct tagINPUT_TRANSFORM *)(v8 + 24));
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
      return 1LL;
    }
    EtwTraceOnInputXformUpdate(*(_QWORD *)v3, a2, 0LL);
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v8, 0);
  }
  else
  {
    EtwTraceOnInputXformUpdate(*(_QWORD *)v3, a2, 0LL);
  }
  return 0LL;
}
