/*
 * XREFs of ?PopulateKeyboardProperties@@YAXPEAURIMDEV@@PEAX@Z @ 0x1401303BC
 * Callers:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1401EC314 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 * Callees:
 *     RIMRegQueryDWordFromKey @ 0x140130510 (RIMRegQueryDWordFromKey.c)
 */

void __fastcall PopulateKeyboardProperties(struct RIMDEV *a1, void *a2)
{
  int v3; // ebx

  v3 = 0;
  if ( (unsigned int)RIMRegQueryDWordFromKey(a2) || (unsigned int)RIMRegQueryDWordFromKey(0LL) )
  {
    LOBYTE(v3) = 0;
    *((_DWORD *)a1 + 119) = v3 | *((_DWORD *)a1 + 119) & 0xFFFFFFFE;
  }
}
