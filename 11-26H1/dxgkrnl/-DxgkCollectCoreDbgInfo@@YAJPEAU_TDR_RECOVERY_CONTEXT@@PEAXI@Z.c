/*
 * XREFs of ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1401B46D8
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D8D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x14019731C (-CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 *     ?CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1401C1584 (-CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 *     ?CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1401C1D58 (-CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DxgkCollectCoreDbgInfo(struct _TDR_RECOVERY_CONTEXT *a1, void *a2)
{
  PERESOURCE *v3; // rcx
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  struct _TDR_RECOVERY_CONTEXT *v8; // rdx
  DXGCONTEXT *v9; // rdi
  DXGDEVICE *v10; // rcx
  unsigned int v11[6]; // [rsp+50h] [rbp-18h] BYREF
  void *v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v11[0] = 2048;
  v3 = (PERESOURCE *)*((_QWORD *)a1 + 4);
  if ( !v3 )
  {
    v5 = -1073741823;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6483;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Try to collect core debug information without adapter (Status = 0x%I64x)!",
      -1073741823LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v5;
  }
  result = DXGADAPTER::CollectDbgInfo(v3, (struct _TDR_RECOVERY_CONTEXT *)a2, &v12, v11);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 3168LL);
    if ( !v6 )
      return v5;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 480LL))(*((_QWORD *)a1 + 6));
    v9 = (DXGCONTEXT *)v7;
    if ( !v7 )
      return v5;
    v10 = *(DXGDEVICE **)(v7 + 16);
    if ( !v10 || (result = DXGDEVICE::CollectDbgInfo(v10, v8, &v12, v11), (int)result >= 0) )
    {
      result = DXGCONTEXT::CollectDbgInfo(v9, v8, &v12, v11);
      v5 = result;
      if ( (int)result >= 0 )
        return v5;
    }
  }
  return result;
}
