/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001BA30
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x18001B4F0 (PbmReportHostedAppStateChange.c)
 *     PbmReportHostedAppStateChange_2 @ 0x180041F70 (PbmReportHostedAppStateChange_2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18001BBD0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x18001BEE8 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180041108 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x180041134 (-NewNode@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        PickerHostContextManager **a5)
{
  int v5; // esi
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // r12
  struct CPickerHostContext *v9; // rdx
  PickerHostContextManager **v10; // r13
  PickerHostContextManager *v11; // rbx
  int v12; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  ATL::CAtlException *v17; // rbx
  __int64 *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-98h] BYREF
  int v20; // [rsp+30h] [rbp-68h]
  PickerHostContextManager *v21; // [rsp+38h] [rbp-60h] BYREF
  CPickerHostContext *v22; // [rsp+40h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+48h] [rbp-50h]
  ATL::CAtlException *v24; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  v23 = &PickerHostContextManager::s_csPickerHostContextList;
  v10 = a5;
  v11 = *a5;
  if ( !*a5 || !(unsigned int)PickerHostContextManager::IsValidPickerHostContext(*a5, v9) )
  {
    v11 = (PickerHostContextManager *)operator new(0x30uLL);
    if ( !v11 )
    {
      v12 = -2147024882;
      goto LABEL_16;
    }
    try
    {
      *((_QWORD *)v11 + 5) = 10LL;
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 1) = 0LL;
      *((_QWORD *)v11 + 2) = 0LL;
      *((_QWORD *)v11 + 3) = 0LL;
      *((_QWORD *)v11 + 4) = 0LL;
      v22 = v11;
      v21 = v11;
      v16 = ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::NewNode(
              v14,
              &v21,
              v15,
              PickerHostContextManager::s_PickerHostContextList);
      if ( PickerHostContextManager::s_PickerHostContextList )
        *(_QWORD *)(PickerHostContextManager::s_PickerHostContextList + 8) = v16;
      else
        qword_180067E90 = v16;
      PickerHostContextManager::s_PickerHostContextList = v16;
    }
    catch ( ATL::CAtlException *v24 )
    {
      v18 = &v19;
      v17 = v24;
      if ( *(_DWORD *)v24 == -1073741571 )
        _o__resetstkoflw();
      v20 = *(_DWORD *)v17;
      v12 = v20;
      if ( v20 < 0 )
      {
        CPickerHostContext::`scalar deleting destructor'(v22, (unsigned int)v18);
        goto LABEL_16;
      }
      v10 = a5;
      v5 = a4;
      v6 = a3;
      v7 = a2;
      v8 = a1;
      v11 = v21;
    }
    *v10 = v22;
  }
  v12 = CPickerHostContext::AddHostedAppInteractivityNotification(v11, v8, v7, v6, v5);
  if ( v12 < 0 )
LABEL_16:
    AudPolicyLogError("PickerHostContextManager::OnHostedAppStateChanged", 77, v12);
  LeaveCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  return (unsigned int)v12;
}
