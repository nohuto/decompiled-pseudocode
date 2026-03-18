/*
 * XREFs of ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00
 * Callers:
 *     DxgkUnlock2Internal @ 0x14028DB00 (DxgkUnlock2Internal.c)
 *     DxgkLock2Internal @ 0x14028ED50 (DxgkLock2Internal.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402CED44 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402E2810 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1402F4940 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x1402F9170 (-DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z.c)
 *     ?DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z @ 0x1402F9490 (-DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1402F9A80 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1402FA8D0 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402FB050 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x140361170 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 *     DxgkAcquireHandleDataCB @ 0x140361780 (DxgkAcquireHandleDataCB.c)
 *     ?DxgkThreadCallout@@YAJPEAPEAXE@Z @ 0x14039FDC0 (-DxgkThreadCallout@@YAJPEAPEAXE@Z.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x1403B1AFC (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

struct DXGTHREAD *__fastcall DxgkThreadObjectCreateDxgThread(char a1)
{
  char *v2; // rax
  struct DXGTHREAD *v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  struct DXGTHREAD *result; // rax

  v2 = (char *)ExAllocateFromLookasideListEx(&g_DxgkThreadLookasideList);
  v3 = (struct DXGTHREAD *)v2;
  if ( v2 )
  {
    *((_QWORD *)v2 + 3) = 0LL;
    *(_QWORD *)v2 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v2 = &DXGTHREAD::`vftable';
    *((_QWORD *)v2 + 5) = &DXGTHREAD::m_LockOrderTrackerUpperBound;
    *((_DWORD *)v2 + 2) = 1;
    strcpy(v2 + 32, "DxgT");
    *((_QWORD *)v2 + 6) = 0LL;
    *((_DWORD *)v2 + 14) = -1;
    *((_QWORD *)v2 + 2) = KeGetCurrentThread();
    if ( !a1 || (v4 = PsTlsSetValue(g_DxgkThreadTlsId, v2), v5 = v4, v4 >= 0) )
    {
      ++dword_140168C48;
      result = v3;
      ++dword_140168C40;
      return result;
    }
    ReferenceCounted::Release(v3);
    WdLogSingleEntry2(2LL, v3, v5);
    WdLogGlobalForLineNumber = 531;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to set thread PsTls for DXGTHREAD 0xI64x (Status = 0xI64x).",
      (__int64)v3,
      v5,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 514;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGTHREAD for thread 0xI64x.",
      (__int64)KeGetCurrentThread(),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
