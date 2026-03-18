/*
 * XREFs of ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x140153340
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall W32kCddSetDeviceBitmapAdapterLuid(HSURF a1, struct _LUID a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 SessionState; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rax
  _QWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v13; // [rsp+40h] [rbp-18h]

  v2 = (unsigned int)a1;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v12, *(_QWORD *)&a2);
  v4 = 0;
  v13 = 0LL;
  SessionState = W32GetSessionState(v5);
  v7 = HmgShareLock(*(_QWORD *)(SessionState + 88), v2, 5, 17);
  v13 = (unsigned int *)v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 112) & 0x400000) != 0 || *(_WORD *)(v7 + 100) == 1 )
    {
      *(struct _LUID *)(v7 + 576) = a2;
      if ( v13 )
      {
        v9 = W32GetSessionState(v8);
        HmgDecrementShareReferenceCount(*(_QWORD *)(v9 + 88), v13);
      }
      v4 = 1;
    }
    else
    {
      v11 = W32GetSessionState(v8);
      HmgDecrementShareReferenceCount(*(_QWORD *)(v11 + 88), v13);
    }
    PopThreadGuardedObject(v12);
    return v4;
  }
  else
  {
    PopThreadGuardedObject(v12);
    return 0LL;
  }
}
