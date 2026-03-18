/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1401C9A7C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1401C9868 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 */

void __fastcall SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(char **a1, __int64 a2, int a3)
{
  char *v3; // rbx
  __int64 UserSessionState; // rax
  int v5; // r8d

  if ( *a1 != (char *)&gSmartObjNullRef && !--*((_DWORD *)*a1 + 2) )
  {
    if ( (*a1)[12] )
    {
      v3 = *a1;
      UserSessionState = W32GetUserSessionState((_DWORD)a1, (unsigned int)&gSmartObjNullRef, a3);
      Win32FreeToPagedLookasideListImpl(*(char **)(UserSessionState + 42608), v3, v5);
    }
  }
}
