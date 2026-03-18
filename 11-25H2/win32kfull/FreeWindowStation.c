/*
 * XREFs of FreeWindowStation @ 0x1401EEE70
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ForceEmptyClipboard @ 0x1401EF0CC (ForceEmptyClipboard.c)
 */

__int64 __fastcall FreeWindowStation(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  void *v3; // rcx
  struct _RTL_ATOM_TABLE *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  void *v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rdx
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF
  bool v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v24 = 0LL;
  *(_DWORD *)(v2 + 64) |= 0x10u;
  v3 = *(void **)(v2 + 208);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(v2 + 208) = 0LL;
    *(_DWORD *)(v2 + 200) = 0;
  }
  if ( (*(_DWORD *)(v2 + 64) & 4) == 0 && *(_QWORD *)(W32GetUserSessionState(v3, a2) + 62968) )
  {
    UserSessionState = W32GetUserSessionState(v11, v10);
    KeSetEvent(*(PRKEVENT *)(UserSessionState + 62968), 1, 0);
    v15 = W32GetUserSessionState(v14, v13);
    ObfDereferenceObject(*(PVOID *)(v15 + 62968));
    *(_QWORD *)(W32GetUserSessionState(v17, v16) + 62968) = 0LL;
  }
  v23 = IS_USERCRIT_OWNED_EXCLUSIVE();
  if ( !v23 )
    EnterCrit(1LL, 0LL);
  v4 = *(struct _RTL_ATOM_TABLE **)(v2 + 168);
  if ( v4 )
    RtlDestroyAtomTable(v4);
  ForceEmptyClipboard((struct tagWINDOWSTATION *)v2);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v2 + 152);
    if ( !v6 )
      break;
    v24 = *(_QWORD *)(v2 + 152);
    *(_QWORD *)(v2 + 152) = *(_QWORD *)(v6 + 240);
    *(_QWORD *)(v24 + 240) = 0LL;
    *(_DWORD *)(v24 + 380) &= ~0x800000u;
    HMAssignmentUnlock(&v24);
  }
  if ( (*(_DWORD *)(v2 + 64) & 4) == 0 )
  {
    v18 = *(_QWORD *)(v2 + 72);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 24);
      while ( v18 != v19 )
      {
        v20 = *(_QWORD *)(v18 + 16);
        HMMarkObjectDestroy(v18);
        *(_DWORD *)(v18 + 32) |= 0x20000000u;
        v22[0] = v2 + 72;
        v22[1] = v20;
        HMAssignmentLock(v22, 0LL);
        v18 = *(_QWORD *)(v2 + 72);
      }
      HMMarkObjectDestroy(v18);
      *(_DWORD *)(v18 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v2 + 72);
      HYDRA_HINT(0x10000LL, v21);
    }
  }
  v7 = *(void **)(v2 + 192);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(v2 + 192) = 0LL;
  }
  v8 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v7, v5);
  ExReleaseRundownProtection(v8 + 7941);
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v23);
  return 0LL;
}
