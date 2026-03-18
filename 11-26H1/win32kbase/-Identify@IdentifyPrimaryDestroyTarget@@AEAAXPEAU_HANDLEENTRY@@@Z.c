/*
 * XREFs of ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x140049540
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyMonitor @ 0x1401181C0 (DestroyMonitor.c)
 *     DestroyKL @ 0x140118548 (DestroyKL.c)
 *     HMDestroyObject @ 0x1401186A0 (HMDestroyObject.c)
 *     DestroyKF @ 0x140118D3C (DestroyKF.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall IdentifyPrimaryDestroyTarget::Identify(Identify *this, struct _HANDLEENTRY *a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 UserSessionState; // rax

  if ( !*(_DWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v6, v5) == 2 )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 19800);
    *(_BYTE *)this = v11 == 0;
    if ( v11 )
    {
      if ( a2 != *(struct _HANDLEENTRY **)(W32GetUserSessionState(v11, v10, v12) + 19800) )
      {
        UserSessionState = W32GetUserSessionState(v14, v13, v15);
        ++*(_DWORD *)(UserSessionState + 19808);
      }
    }
    else
    {
      *(_QWORD *)(W32GetUserSessionState(0, v10, v12) + 19800) = a2;
    }
  }
}
