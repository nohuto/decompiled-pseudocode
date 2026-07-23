/*
 * XREFs of VslAccessPciDevice @ 0x1404B7EC0
 * Callers:
 *     KiOpPciConfigSpaceAccessCommon @ 0x1405FACC4 (KiOpPciConfigSpaceAccessCommon.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslAccessPciDevice(char a1, int a2, int a3, int a4, int a5, int a6, size_t Size, char *Src)
{
  unsigned int v13; // ebx
  int v14; // edi
  unsigned int v16; // eax
  _BYTE v17[12]; // [rsp+20h] [rbp-79h] BYREF
  int v18; // [rsp+2Ch] [rbp-6Dh]
  int v19; // [rsp+30h] [rbp-69h]
  int v20; // [rsp+34h] [rbp-65h]
  int v21; // [rsp+38h] [rbp-61h]
  int v22; // [rsp+3Ch] [rbp-5Dh]
  size_t v23; // [rsp+40h] [rbp-59h]
  _BYTE v24[72]; // [rsp+48h] [rbp-51h] BYREF

  memset_0(v17, 0, 0x68uLL);
  v21 = a5;
  v18 = a2;
  v13 = Size;
  v19 = a3;
  v14 = 0;
  v22 = a6;
  v17[8] = a1;
  v20 = a4;
  while ( v13 && v14 >= 0 )
  {
    v16 = 64;
    if ( v13 < 0x40 )
      v16 = v13;
    LODWORD(v23) = v16;
    if ( a1 )
      memmove(v24, Src, v16);
    v14 = VslpEnterIumSecureMode(2u, 0x11Bu, 0, (__int64)v17);
    if ( v14 >= 0 )
    {
      if ( !a1 )
        memmove(Src, v24, (unsigned int)v23);
      Src += (unsigned int)v23;
      v13 -= v23;
      v22 += v23;
    }
  }
  return (unsigned int)v14;
}
