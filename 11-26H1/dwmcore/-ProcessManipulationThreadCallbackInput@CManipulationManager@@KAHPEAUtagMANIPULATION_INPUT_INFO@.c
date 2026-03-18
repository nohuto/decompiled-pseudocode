/*
 * XREFs of ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x180112DE4
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801A9100 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x18002E388 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x180112678 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x180112AF8 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x180112BF4 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18011560C (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1801260E0 (-QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x1801261F8 (-IsVailContainer@@YA_NXZ.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801AAD1C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801B4B58 (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1801BF024 (-QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?IsManipulationThread@CManipulationManager@@SA_NXZ @ 0x1801CD9B4 (-IsManipulationThread@CManipulationManager@@SA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::ProcessManipulationThreadCallbackInput(
        struct tagMANIPULATION_INPUT_INFO *a1,
        CManipulationManager *this)
{
  struct CManipulationFrame *v2; // rbx
  int *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned int v7; // r12d
  int v8; // eax
  LARGE_INTEGER v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 i; // rdx
  struct CManipulationFrame *v17; // [rsp+70h] [rbp+40h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+50h] BYREF
  struct CManipulationFrame *v19; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0LL;
  v17 = 0LL;
  if ( !a1 )
    goto LABEL_10;
  v5 = (int *)((char *)a1 + 148);
  v6 = *((_QWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 42);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&MANIPULATION_FRAME_RECEIVED,
      v7,
      *v5);
  InputTraceLogging::GestureTargeting::QueueFrame(v6, *(_QWORD *)a1, v7, *v5);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v17);
  v8 = CManipulationFrame::Create(a1, &v17);
  v2 = v17;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x15Cu, 0LL);
LABEL_14:
    v17 = (struct CManipulationFrame *)&CManipulationManager::s_rwPointerBufferLock;
    CReadWriteLock::AcquireExclusive((CReadWriteLock *)&CManipulationManager::s_rwPointerBufferLock);
    v14 = (unsigned int)*v5;
    v15 = CManipulationManager::s_rgPointerIds;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v14; v14 = (unsigned int)*v5 )
    {
      CManipulationManager::s_rgPointerIds[i] = *((_DWORD *)a1 + 60 * (unsigned int)i + 41);
      i = (unsigned int)(i + 1);
    }
    if ( (*((_DWORD *)a1 + 43) & 0x180000) == 0 )
      SetManipulationInputTarget(*((unsigned int *)a1 + 42), 0LL, v14, CManipulationManager::s_rgPointerIds, a1);
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v17, i, v14, v15);
    goto LABEL_10;
  }
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v9 = PerformanceCount;
  *(LARGE_INTEGER *)((char *)v2 + (IsVailContainer() ? 0x48 : 0) + 72) = v9;
  InputTraceLogging::TelemetryDebug::GestureTargeting::QueueFrame((struct CManipulationFrame *)((char *)v2 + 32));
  v19 = v2;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v19);
  v17 = v2;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v17);
  v12 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v11, v10, &v17);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v19);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x164u, 0LL);
    goto LABEL_14;
  }
  if ( !CManipulationManager::IsManipulationThread() )
  {
LABEL_7:
    if ( SetEvent(hEvent) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&MANIPULATION_FRAME_QUEUED,
          v7,
          *v5);
      goto LABEL_10;
    }
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(
      (__int64)&CManipulationManager::s_InputQueue,
      (__int64 *)&v17,
      0,
      0LL);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v17);
    goto LABEL_14;
  }
  if ( !this )
  {
    v5 = (int *)((char *)a1 + 148);
    goto LABEL_7;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&MANIPULATION_FRAME_QUEUED,
      v7,
      *v5);
  CManipulationManager::OnInput(this);
LABEL_10:
  if ( v2 )
    (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v2 + 8LL))(v2);
  return 1LL;
}
