/*
 * XREFs of ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0
 * Callers:
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     EngDeleteSurface @ 0x140121E90 (EngDeleteSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1401A02C8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall bDeleteSurface(struct Gre::Base::SESSION_GLOBALS *a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int *v5; // rax
  unsigned int v7; // eax
  unsigned int *v8; // rcx
  unsigned int v9; // ebx
  __int64 SessionState; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v12; // [rsp+40h] [rbp-18h]

  v3 = a2;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v11, a2);
  v4 = 0;
  v12 = 0LL;
  v5 = (unsigned int *)HmgShareLock((__int64)a1, v3, 5, 16);
  v12 = v5;
  if ( v5 )
  {
    v7 = SURFACE::bDeleteSurface((__int64 *)v5, (__int64)a1, 0, 0);
    v8 = v12;
    v9 = v7;
    if ( v7 )
      v8 = 0LL;
    v12 = v8;
    if ( v8 )
    {
      SessionState = W32GetSessionState(v8);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v12);
    }
    v4 = v9;
  }
  PopThreadGuardedObject(v11);
  return v4;
}
