/*
 * XREFs of ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401850D8
 * Callers:
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     FreeHidData @ 0x1400C7E10 (FreeHidData.c)
 *     FreeTimer @ 0x140246670 (FreeTimer.c)
 *     FreeDdeXact @ 0x14026C370 (FreeDdeXact.c)
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
