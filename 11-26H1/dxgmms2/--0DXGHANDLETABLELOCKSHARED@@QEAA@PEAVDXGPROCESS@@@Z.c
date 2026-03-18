/*
 * XREFs of ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140029058
 * Callers:
 *     ?VidMmCopyContentEscape@@YAJW4_D3DKMT_ESCAPE_COPY_CONTENT_DIRECTION@@PEAXI_K2@Z @ 0x1400A2820 (-VidMmCopyContentEscape@@YAJW4_D3DKMT_ESCAPE_COPY_CONTENT_DIRECTION@@PEAXI_K2@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

DXGHANDLETABLELOCKSHARED *__fastcall DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        DXGHANDLETABLELOCKSHARED *this,
        struct _KTHREAD **a2)
{
  void (__fastcall *v3)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  DXGHANDLETABLELOCKSHARED *result; // rax

  *((_QWORD *)this + 1) = a2 + 31;
  *((_DWORD *)this + 4) = 0;
  if ( a2 != (struct _KTHREAD **)-248LL && a2[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    v3 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 1495;
    v3(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v7 = *(unsigned int *)(v4 + 24);
      if ( (_DWORD)v7 != -1 && (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, &EventBlockThread, v6, v7);
    }
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
  result = this;
  *((_DWORD *)this + 4) = 1;
  return result;
}
