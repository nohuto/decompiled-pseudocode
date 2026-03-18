/*
 * XREFs of ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x14017E968
 * Callers:
 *     ?xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14017E740 (-xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B5EDC (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x14004E07C (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x14005E124 (DwmAsyncOwnerChange.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14005E1E4 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x140285E98 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

__int64 __fastcall zzzImeCanDestroyDefIME(struct tagWND **a1, struct tagWND *a2)
{
  __int64 v4; // rdx
  ULONG64 v5; // rcx
  struct tagWND *v7; // rax
  struct tagWND *i; // r14
  __int16 *v9; // rbx
  __int16 v10; // bx
  __int64 v11; // rdx
  struct tagWND *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  void *v16; // rax
  ULONG64 v17; // [rsp+70h] [rbp+18h]
  ULONG64 *v18; // [rsp+78h] [rbp+20h]

  v18 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
  if ( !v18 )
    return 0LL;
  v17 = *v18;
  if ( !*v18 || v17 == -1LL )
    return 0LL;
  v5 = MmUserProbeAddress;
  if ( v17 < MmUserProbeAddress )
    v5 = *v18;
  if ( (*(_DWORD *)(v5 + 44) & 4) != 0 )
    return 0LL;
  v7 = a1[15];
  if ( v7 )
  {
    while ( v7 != a2 )
    {
      if ( !v7 )
        return 0LL;
      v7 = (struct tagWND *)*((_QWORD *)v7 + 15);
    }
    if ( !v7 )
      return 0LL;
  }
  for ( i = a2; i; i = (struct tagWND *)*((_QWORD *)i + 15) )
  {
    v9 = *(__int16 **)(*((_QWORD *)i + 17) + 8LL);
    if ( (v9[5] & 1) != 0 )
      return 0LL;
    v10 = *v9;
    v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
    if ( v10 == *(_WORD *)(v5 + 898) )
      return 0LL;
  }
  zzzImeSetFutureOwner((struct tagWND *)a1, a2);
  ImeCheckTopmost(a1, v11);
  v12 = a1[15];
  if ( v12 )
  {
    if ( a2 != v12 )
      return 0LL;
  }
  *((_QWORD *)a1[5] + 8) = 0LL;
  HMAssignmentUnlock(a1 + 15);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v15 = (__int64)*a1;
    v16 = (void *)ReferenceDwmApiPort(v14, v13);
    DwmAsyncOwnerChange(v16, v15, 0LL);
  }
  return 1LL;
}
