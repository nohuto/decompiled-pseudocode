/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180007B40
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800075F0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1800123D0 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1800086C0 (-reset@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000E520 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

char __fastcall wil::details_abi::heap_buffer::push_back(
        wil::details_abi::heap_buffer *this,
        const void *a2,
        rsize_t a3)
{
  rsize_t v5; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v8; // rdi
  void *v9; // rcx
  rsize_t v10; // rdx
  unsigned __int64 v12; // rdi
  DWORD LastError; // r15d
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r8
  char *v16; // rax
  char *v17; // r14
  rsize_t v18; // rdx
  rsize_t v19; // rdi

  v5 = a3 + *((_QWORD *)this + 1) - *(_QWORD *)this;
  v6 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( v5 >= v6 )
  {
    v8 = a3;
    if ( a3 < 2 * v6 )
      v8 = 2 * v6;
    if ( v6 < v8 )
    {
      v12 = v8 & 0xFFFFFFFFFFFFFFC0uLL;
      LastError = GetLastError();
      v14 = v12 + 64;
      v16 = (char *)wil::details::ProcessHeapAlloc(0, v12 + 64, v15);
      v17 = v16;
      if ( !v16 )
      {
        SetLastError(LastError);
        return 0;
      }
      v18 = v12 + 64;
      v19 = *((_QWORD *)this + 1) - *(_QWORD *)this;
      memcpy_s(v16, v18, *(const void *const *)this, v19);
      wistd::unique_ptr<void,wil::process_heap_deleter>::reset((char *)this + 24, v17);
      *(_QWORD *)this = v17;
      *((_QWORD *)this + 1) = &v17[v19];
      *((_QWORD *)this + 2) = &v17[v14];
      SetLastError(LastError);
    }
  }
  v9 = (void *)*((_QWORD *)this + 1);
  v10 = 0LL;
  if ( (unsigned __int64)v9 < *((_QWORD *)this + 2) )
    v10 = *((_QWORD *)this + 2) - (_QWORD)v9;
  memcpy_s(v9, v10, a2, a3);
  *((_QWORD *)this + 1) += a3;
  return 1;
}
