/*
 * XREFs of ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401BA348
 * Callers:
 *     FreeTimer @ 0x140020580 (FreeTimer.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     FreeHidData @ 0x14003ABB0 (FreeHidData.c)
 *     FreeDdeXact @ 0x1402930F0 (FreeDdeXact.c)
 * Callees:
 *     <none>
 */

void __fastcall IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget(
        IdentifyPrimaryDestroyTarget *this,
        __int64 a2)
{
  if ( *(_BYTE *)this )
    *(_QWORD *)(W32GetUserSessionState(this, a2) + 19800) = 0LL;
}
