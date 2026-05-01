/*
 * XREFs of SHRegSetBinaryData @ 0x18067ADD4
 * Callers:
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803982D0 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801DE804 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall SHRegSetBinaryData(__int64 a1, __int64 a2, __int64 a3, BYTE *a4)
{
  __int64 result; // rax

  result = _RegSetKeyValueWithSDDL(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Touchpad\\", L"Anchor", 3u, a4, 0x4Cu);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
