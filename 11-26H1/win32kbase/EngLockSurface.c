/*
 * XREFs of EngLockSurface @ 0x140166920
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1401668B0 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 SessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  SURFOBJ *v7; // rbx
  __int64 v8; // rax
  _QWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v11; // [rsp+40h] [rbp-18h]

  v2 = (unsigned int)hsurf;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v10, v1);
  v11 = 0LL;
  SessionState = W32GetSessionState(v3);
  v11 = (unsigned int *)HmgShareLock(*(_QWORD *)(SessionState + 88), v2, 5, 16);
  if ( v11 )
  {
    v6 = W32GetSessionState(v5);
    HmgIncrementShareReferenceCount(*(_QWORD *)(v6 + 88), v11);
    v7 = (SURFOBJ *)((unsigned __int64)(v11 + 6) & -(__int64)(v11 != 0LL));
    if ( v11 )
    {
      v8 = W32GetSessionState(v11 + 6);
      HmgDecrementShareReferenceCount(*(_QWORD *)(v8 + 88), v11);
    }
  }
  else
  {
    v7 = 0LL;
  }
  PopThreadGuardedObject(v10);
  return v7;
}
