/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400C7A00
 * Callers:
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     FreeHook @ 0x1400C8710 (FreeHook.c)
 *     DestroyEventHook @ 0x1400C9C20 (DestroyEventHook.c)
 *     FreeTimer @ 0x140246670 (FreeTimer.c)
 *     FreeDdeXact @ 0x14026C370 (FreeDdeXact.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

IdentifyPrimaryDestroyTarget *__fastcall IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        struct _HEAD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax

  *(_BYTE *)this = 0;
  v3 = _HMPheFromObjectWorker(a2);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19760) && IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19768);
    *(_BYTE *)this = v9 == 0;
    if ( v9 )
    {
      if ( v3 != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19768) )
      {
        UserSessionState = W32GetUserSessionState(v12, v11);
        ++*(_DWORD *)(UserSessionState + 19776);
      }
    }
    else
    {
      *(_QWORD *)(W32GetUserSessionState(0LL, v8) + 19768) = v3;
    }
  }
  return this;
}
