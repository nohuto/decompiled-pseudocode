/*
 * XREFs of ?GrepDeleteReferencedSurface@@YAJPEAUHSURF__@@_N@Z @ 0x14005537C
 * Callers:
 *     GreDereferenceObject @ 0x140055340 (GreDereferenceObject.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareUnlockRemoveObject @ 0x140054820 (HmgShareUnlockRemoveObject.c)
 */

__int64 __fastcall GrepDeleteReferencedSurface(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebp
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 SessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int *v14[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v15; // [rsp+50h] [rbp-18h]

  v2 = a2;
  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v14, v5);
  v6 = 0;
  v15 = (unsigned int *)HmgShareLock(v4, a1, 5, 0);
  if ( v15 )
  {
    if ( (a1 & 0x800000) != 0 )
    {
      SessionState = W32GetSessionState(v7);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v15);
      if ( v15 )
      {
        v12 = W32GetSessionState(v11);
        HmgDecrementShareReferenceCount(*(_QWORD *)(v12 + 88), v15);
      }
    }
    else if ( HmgShareUnlockRemoveObject(a1, 0, 1, v2, 5)
           && (unsigned int)SURFACE::bDeleteSurface((__int64 *)v15, v4, 0, 1) )
    {
      v15 = 0LL;
    }
    else
    {
      if ( v15 )
      {
        v9 = W32GetSessionState(v8);
        HmgDecrementShareReferenceCount(*(_QWORD *)(v9 + 88), v15);
      }
      v6 = -1073741823;
    }
    PopThreadGuardedObject(v14);
    return v6;
  }
  else
  {
    SURFREF::~SURFREF(v14);
    return 3221225480LL;
  }
}
