/*
 * XREFs of ?VidMmProcessFaultAndStall@@YAJPEAVVIDMM_GLOBAL@@_KPEAXIII@Z @ 0x14004ED44
 * Callers:
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140057EA8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 * Callees:
 *     ?DdiResumeFromPageFault@ADAPTER_RENDER@@QEAAXPEBU_DXGKARG_RESUME_FROM_PAGE_FAULT@@@Z @ 0x14004CEBC (-DdiResumeFromPageFault@ADAPTER_RENDER@@QEAAXPEBU_DXGKARG_RESUME_FROM_PAGE_FAULT@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

__int64 __fastcall VidMmProcessFaultAndStall(
        KSPIN_LOCK *a1,
        KSPIN_LOCK a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v7; // rsi
  unsigned int v10; // edi
  ADAPTER_RENDER *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v14[4]; // [rsp+38h] [rbp-30h] BYREF

  v7 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 5606, &LockHandle);
  if ( a2 >= a1[5574] && a2 < a1[5575] && a3 == (void *)a1[5580] )
  {
    v10 = 0;
    if ( *((_BYTE *)a1 + 44698) )
    {
      *((_BYTE *)a1 + v7 + 44780) = 1;
      if ( (int)v7 > *((_DWORD *)a1 + 11194) )
        *((_DWORD *)a1 + 11194) = v7;
    }
    else
    {
      v11 = (ADAPTER_RENDER *)a1[2];
      v14[1] = a5;
      v14[2] = a6;
      v14[0] = 0;
      ADAPTER_RENDER::DdiResumeFromPageFault(v11, (const struct _DXGKARG_RESUME_FROM_PAGE_FAULT *)v14);
    }
  }
  else
  {
    v10 = -1073741823;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v10;
}
