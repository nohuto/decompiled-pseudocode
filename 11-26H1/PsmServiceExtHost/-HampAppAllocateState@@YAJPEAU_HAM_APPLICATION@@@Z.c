/*
 * XREFs of ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x18006E260
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 * Callees:
 *     ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180056524 (-HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z.c)
 */

__int64 __fastcall HampAppAllocateState(struct _HAM_APPLICATION *a1)
{
  int TerminateReason; // edx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  TerminateReason = TpAllocWork((char *)a1 + 560, HampAppInterruptiveUIChangeWorker, a1, 0LL);
  if ( TerminateReason >= 0 )
  {
    TerminateReason = HampAppQueryTerminateReason(a1, (enum _HAM_TERMINATE_REASON *)&v4);
    if ( (int)(TerminateReason + 0x80000000) < 0 || TerminateReason == -1073283070 )
    {
      TerminateReason = 0;
      *((_WORD *)a1 + 308) = v4;
    }
  }
  return (unsigned int)TerminateReason;
}
