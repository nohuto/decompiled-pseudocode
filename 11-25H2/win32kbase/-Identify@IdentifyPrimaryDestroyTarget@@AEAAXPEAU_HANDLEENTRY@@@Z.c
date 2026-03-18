/*
 * XREFs of ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400F6C9C
 * Callers:
 *     DestroyKF @ 0x1400F6304 (DestroyKF.c)
 *     DestroyMonitor @ 0x1400F63A0 (DestroyMonitor.c)
 *     DestroyKL @ 0x1400F6658 (DestroyKL.c)
 *     HMDestroyObject @ 0x1400F6780 (HMDestroyObject.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall IdentifyPrimaryDestroyTarget::Identify(Identify *this, struct _HANDLEENTRY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax

  if ( !*(_DWORD *)(W32GetUserSessionState(this, a2) + 19760) && IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19768);
    *(_BYTE *)this = v7 == 0;
    if ( v7 )
    {
      if ( a2 != *(struct _HANDLEENTRY **)(W32GetUserSessionState(v7, v6) + 19768) )
      {
        UserSessionState = W32GetUserSessionState(v9, v8);
        ++*(_DWORD *)(UserSessionState + 19776);
      }
    }
    else
    {
      *(_QWORD *)(W32GetUserSessionState(0LL, v6) + 19768) = a2;
    }
  }
}
