/*
 * XREFs of ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x14014890C
 * Callers:
 *     HMDestroyObject @ 0x1401186A0 (HMDestroyObject.c)
 *     DestroyKF @ 0x140118D3C (DestroyKF.c)
 * Callees:
 *     <none>
 */

void __fastcall IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        int a2,
        int a3)
{
  if ( *(_BYTE *)this )
    *(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19800) = 0LL;
}
