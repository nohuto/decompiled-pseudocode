/*
 * XREFs of ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x1400296A0
 * Callers:
 *     FreeTimer @ 0x140020580 (FreeTimer.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     DestroyEventHook @ 0x14013C8F0 (DestroyEventHook.c)
 *     FreeDdeXact @ 0x1402930F0 (FreeDdeXact.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax

  *(_BYTE *)this = 0;
  v3 = _HMPheFromObjectWorker(a2);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19792) && (unsigned int)GET_USERCRIT_DISPOSITION(v7, v6) == 2 )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19800);
    *(_BYTE *)this = v11 == 0;
    if ( v11 )
    {
      if ( v3 != *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19800) )
      {
        UserSessionState = W32GetUserSessionState(v14, v13);
        ++*(_DWORD *)(UserSessionState + 19808);
      }
    }
    else
    {
      *(_QWORD *)(W32GetUserSessionState(0LL, v10) + 19800) = v3;
    }
  }
  return this;
}
