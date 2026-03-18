/*
 * XREFs of ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ @ 0x18021F088
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180126880 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x18021D28C (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CSynchronousSuperWetInk::GetLatestLookupId(CSynchronousSuperWetInk *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 31);
  if ( result )
    return *(_QWORD *)result;
  return result;
}
