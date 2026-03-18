/*
 * XREFs of ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x140108CFC
 * Callers:
 *     DestroyKF @ 0x1400F6304 (DestroyKF.c)
 *     HMDestroyObject @ 0x1400F6780 (HMDestroyObject.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        __int64 a2)
{
  if ( *(_BYTE *)this )
    *(_QWORD *)(W32GetUserSessionState(this, a2) + 19768) = 0LL;
}
