/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x14011A154
 * Callers:
 *     SetManipulationInputTargetTransform @ 0x140119AA0 (SetManipulationInputTargetTransform.c)
 *     InputTransformOnInput @ 0x140119AF0 (InputTransformOnInput.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140119D60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x14011A3D8 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?OnInput@InputSink@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x14011A5BC (-OnInput@InputSink@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPU.c)
 *     MagpRemoveTransformOutputMagFac @ 0x14011A7A8 (MagpRemoveTransformOutputMagFac.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x14011A8A4 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall InputTransform::OnInput(InputTransform *this, struct tagWND *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rax
  CompositionInputObject *v8; // rcx
  unsigned __int64 *v9; // r9
  __int64 v10; // rbx
  const struct tagINPUT_TRANSFORM *v11; // rbp
  bool v12; // r9
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // [rsp+30h] [rbp-98h]
  __int128 v21; // [rsp+40h] [rbp-88h]
  __int128 v22; // [rsp+50h] [rbp-78h]
  __int128 v23; // [rsp+60h] [rbp-68h]
  _OWORD v24[5]; // [rsp+70h] [rbp-58h] BYREF
  const struct CInputSink *v25; // [rsp+D0h] [rbp+8h] BYREF
  struct tagWND *v26; // [rsp+D8h] [rbp+10h] BYREF

  v26 = a2;
  if ( ((unsigned __int8)IsInputThread()
     || (v14 = PtiCurrent(v5, v4), v14 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v16, v15) + 18824)))
    && (v6 = (__int64 *)((char *)this + 272), (v7 = *((_QWORD *)this + 34)) != 0)
    && (v8 = *(CompositionInputObject **)(v7 + 96)) != 0LL
    && (v25 = 0LL, (int)CompositionInputObject::LockForRead(v8, &v25) >= 0) )
  {
    v20 = *(_OWORD *)((char *)v25 + 88);
    v21 = *(_OWORD *)((char *)v25 + 104);
    v22 = *(_OWORD *)((char *)v25 + 120);
    v23 = *(_OWORD *)((char *)v25 + 136);
    CInputSink::UnlockAndRelease(v25);
    v24[0] = v20;
    v24[1] = v21;
    v24[2] = v22;
    v24[3] = v23;
    MagpRemoveTransformOutputMagFac(v24);
    InputTransform::StoreTransform(this, (struct tagWND *)v24, (const struct tagINPUT_TRANSFORM *)&v26, v9);
  }
  else
  {
    v6 = (__int64 *)((char *)this + 272);
  }
  v10 = *v6;
  if ( v10 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    ClearStaleEntries((struct tagINPUTTRANSFORMLIST *)v10, (unsigned __int64)a2);
    if ( (*(_DWORD *)(v10 + 88) & 1) == 0 )
    {
      v11 = (const struct tagINPUT_TRANSFORM *)(v10 + 24);
LABEL_9:
      EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 1LL);
      InputTraceLogging::InputSink::OnInput(
        (unsigned __int64)a2,
        *(HWND *)this,
        *(const struct CompositionInputObject **)(v10 + 96),
        v12,
        v11);
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
      return 1LL;
    }
    v17 = Win32AllocPoolZInit(88LL, 2020176725LL);
    if ( v17 )
    {
      *(_QWORD *)(v17 + 16) = a2;
      v11 = (const struct tagINPUT_TRANSFORM *)(v10 + 24);
      v18 = (__int64 *)(v10 + 8);
      *(_OWORD *)(v17 + 24) = *(_OWORD *)(v10 + 24);
      *(_OWORD *)(v17 + 40) = *(_OWORD *)(v10 + 40);
      *(_OWORD *)(v17 + 56) = *(_OWORD *)(v10 + 56);
      *(_OWORD *)(v17 + 72) = *(_OWORD *)(v10 + 72);
      v19 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(v19 + 8) != v10 + 8 )
        __fastfail(3u);
      *(_QWORD *)v17 = v19;
      *(_QWORD *)(v17 + 8) = v18;
      *(_QWORD *)(v19 + 8) = v17;
      *v18 = v17;
      *(_DWORD *)(v10 + 88) &= ~1u;
      goto LABEL_9;
    }
    EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 0LL);
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v10, 0);
  }
  else
  {
    EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 0LL);
  }
  return 0LL;
}
