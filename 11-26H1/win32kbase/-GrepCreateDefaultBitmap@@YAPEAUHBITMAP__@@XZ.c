/*
 * XREFs of ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x14017CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     GreCreateBitmap @ 0x140025CE0 (GreCreateBitmap.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

HBITMAP GrepCreateDefaultBitmap(void)
{
  HBITMAP v0; // rdi
  HBITMAP result; // rax
  __int64 v2; // rcx
  HBITMAP v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 SessionState; // rax
  _QWORD v9[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v10; // [rsp+50h] [rbp-18h]

  v0 = 0LL;
  result = (HBITMAP)GreCreateBitmap(1, 1, 1, 1, 0LL);
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)(W32GetSessionState(v2) + 88);
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v9, v5);
    v6 = HmgShareLock(v4, (unsigned int)v3, 5, 0);
    v10 = (unsigned int *)v6;
    if ( v6 )
    {
      *(_WORD *)(v6 + 14) |= 0x10u;
      if ( v10 )
      {
        SessionState = W32GetSessionState(v7);
        HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v10);
      }
      v0 = v3;
    }
    PopThreadGuardedObject(v9);
    return v0;
  }
  return result;
}
