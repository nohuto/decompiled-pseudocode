/*
 * XREFs of StorGUIDToSCSINameString @ 0x1400972A0
 * Callers:
 *     StorBuildNVMeIdentifier @ 0x1400969B4 (StorBuildNVMeIdentifier.c)
 * Callees:
 *     RaidHexFromUchar @ 0x140053630 (RaidHexFromUchar.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall StorGUIDToSCSINameString(int a1, unsigned __int8 *a2, __int64 a3, void *a4)
{
  __int64 v6; // rbx
  __int64 v9; // r9
  _DWORD Src[6]; // [rsp+20h] [rbp-18h] BYREF

  strcpy((char *)Src, "eui.");
  v6 = -1LL;
  do
    ++v6;
  while ( *((_BYTE *)Src + v6) );
  if ( (unsigned int)(v6 + 2 * a1) > 0x80 )
    return 3221225485LL;
  memmove(a4, Src, (unsigned int)v6);
  if ( a1 )
  {
    do
    {
      RaidHexFromUchar(*a2, (_BYTE *)a4 + (unsigned int)v6, 128 - v6);
      LODWORD(v6) = v6 + 2;
      ++a2;
    }
    while ( v9 != 1 );
  }
  return 0LL;
}
