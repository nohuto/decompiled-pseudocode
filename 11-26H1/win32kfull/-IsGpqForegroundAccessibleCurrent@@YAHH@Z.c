/*
 * XREFs of ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140197844
 * Callers:
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x14029B104 (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14029B5FC (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGpqForegroundAccessibleCurrent(__int64 a1)
{
  int v1; // ebp
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v13; // r8
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  int v16; // [rsp+28h] [rbp-10h]

  v1 = a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v5 = 0;
  if ( CurrentThreadWin32Thread )
    v6 = *CurrentThreadWin32Thread;
  else
    v6 = 0LL;
  v7 = *(_QWORD *)(v6 + 456);
  v8 = *(_DWORD *)(v7 + 12);
  v15 = *(_QWORD *)(v7 + 864);
  v16 = *(_DWORD *)(v7 + 872);
  if ( !v1 )
    return 1;
  if ( !*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18928) )
    return 1;
  if ( v8 < 0 )
    return 1;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v6 + 456)) )
  {
    v10 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928);
    v11 = *(_QWORD *)(v6 + 464);
    if ( v10 == v11 && (*(_DWORD *)(v11 + 436) & 0x2000000) != 0 )
    {
      v10 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928);
      if ( *(_QWORD *)(v10 + 120) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928) + 120LL) + 16LL);
        if ( v10 )
        {
          if ( *(_QWORD *)(v10 + 456) == *(_QWORD *)(v6 + 456) )
            return 1;
        }
      }
    }
  }
  UserSessionState = W32GetUserSessionState(v10, v9);
  if ( UIPrivilegeIsolation::CheckAccess(
         (UIPrivilegeIsolation *)&v15,
         (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18928) + 472LL),
         v13) )
  {
    return 1;
  }
  return v5;
}
