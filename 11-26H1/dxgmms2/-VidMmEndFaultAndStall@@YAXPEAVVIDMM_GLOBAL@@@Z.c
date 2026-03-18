/*
 * XREFs of ?VidMmEndFaultAndStall@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x14004EC3C
 * Callers:
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DdiResumeFromPageFault@ADAPTER_RENDER@@QEAAXPEBU_DXGKARG_RESUME_FROM_PAGE_FAULT@@@Z @ 0x14004CEBC (-DdiResumeFromPageFault@ADAPTER_RENDER@@QEAAXPEBU_DXGKARG_RESUME_FROM_PAGE_FAULT@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

void __fastcall VidMmEndFaultAndStall(struct VIDMM_GLOBAL *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  bool v8; // cf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 5606, &LockHandle);
  v2 = *((_QWORD *)a1 + 2);
  v3 = 0LL;
  *((_BYTE *)a1 + 44698) = 0;
  v4 = *(_QWORD *)(v2 + 744);
  if ( *((int *)a1 + 11194) >= 0 )
  {
    v5 = (char *)a1 + 44780;
    do
    {
      if ( *v5 )
      {
        v6 = *(_QWORD *)(v4 + 696);
        v10 = 0LL;
        v11 = 0;
        v7 = v6 + 8 * v3;
        v8 = (unsigned int)v3 < *(_DWORD *)(v4 + 768);
        if ( (unsigned int)v3 >= *(_DWORD *)(v4 + 768) )
          v7 = v6;
        HIDWORD(v10) = *(unsigned __int16 *)(*(_QWORD *)v7 + 8LL);
        if ( v8 )
          v6 += 8 * v3;
        v11 = *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL);
        ADAPTER_RENDER::DdiResumeFromPageFault(
          *((ADAPTER_RENDER **)a1 + 2),
          (const struct _DXGKARG_RESUME_FROM_PAGE_FAULT *)&v10);
        *v5 = 0;
      }
      v3 = (unsigned int)(v3 + 1);
      ++v5;
    }
    while ( (int)v3 <= *((_DWORD *)a1 + 11194) );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
