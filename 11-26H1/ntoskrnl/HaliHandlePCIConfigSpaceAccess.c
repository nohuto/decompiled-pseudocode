/*
 * XREFs of HaliHandlePCIConfigSpaceAccess @ 0x14059C2E0
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceReadConfig @ 0x14042C850 (HaliPciInterfaceReadConfig.c)
 *     HaliPciInterfaceWriteConfig @ 0x14042CD60 (HaliPciInterfaceWriteConfig.c)
 */

__int64 __fastcall HaliHandlePCIConfigSpaceAccess(char a1, int a2, unsigned int a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  ULONG_PTR v8; // [rsp+20h] [rbp-18h]
  size_t v9; // [rsp+28h] [rbp-10h]

  v4 = 0;
  if ( a2 == 3320 )
  {
    dword_140E10CD8 = *(_DWORD *)a4;
    byte_140E10CDC = 1;
  }
  else if ( (unsigned int)(a2 - 3324) <= 3 && byte_140E10CDC )
  {
    LODWORD(v9) = a3;
    LODWORD(v8) = a2 + (dword_140E10CD8 & 0xFC) - 3324;
    v6 = (dword_140E10CD8 & 0x700 | ((unsigned int)dword_140E10CD8 >> 8) & 0xF8) >> 3;
    if ( a1 )
      HaliPciInterfaceReadConfig(0LL, BYTE2(dword_140E10CD8), v6, a4, v8, v9);
    else
      HaliPciInterfaceWriteConfig(0LL, BYTE2(dword_140E10CD8), v6, (__int64)a4, v8, a3);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
