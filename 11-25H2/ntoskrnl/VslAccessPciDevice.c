/*
 * XREFs of VslAccessPciDevice @ 0x1402816B0
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x140281470 (HaliPciInterfaceReadConfig.c)
 *     KiOpPciConfigSpaceAccessCommon @ 0x1405C1164 (KiOpPciConfigSpaceAccessCommon.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslAccessPciDevice(char a1, int a2, int a3, int a4, int a5, int a6, size_t Size, char *Src)
{
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // edi
  unsigned int v17; // eax
  _BYTE v18[12]; // [rsp+20h] [rbp-79h] BYREF
  int v19; // [rsp+2Ch] [rbp-6Dh]
  int v20; // [rsp+30h] [rbp-69h]
  int v21; // [rsp+34h] [rbp-65h]
  int v22; // [rsp+38h] [rbp-61h]
  int v23; // [rsp+3Ch] [rbp-5Dh]
  size_t v24; // [rsp+40h] [rbp-59h]
  _BYTE v25[72]; // [rsp+48h] [rbp-51h] BYREF

  memset_0(v18, 0, 0x68uLL);
  v22 = a5;
  v19 = a2;
  v14 = Size;
  v20 = a3;
  v15 = 0;
  v23 = a6;
  v18[8] = a1;
  v21 = a4;
  while ( v14 && v15 >= 0 )
  {
    v17 = 64;
    if ( v14 < 0x40 )
      v17 = v14;
    LODWORD(v24) = v17;
    if ( a1 )
      memmove(v25, Src, v17);
    LOBYTE(v13) = 2;
    v15 = VslpEnterIumSecureMode(v13, 268LL, 0LL, v18);
    if ( v15 >= 0 )
    {
      if ( !a1 )
        memmove(Src, v25, (unsigned int)v24);
      Src += (unsigned int)v24;
      v14 -= v24;
      v23 += v24;
    }
  }
  return (unsigned int)v15;
}
