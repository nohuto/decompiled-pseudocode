/*
 * XREFs of HalpSetPCIData @ 0x14042C4F0
 * Callers:
 *     HalSetBusDataByOffset @ 0x14042C360 (HalSetBusDataByOffset.c)
 * Callees:
 *     HalpWritePCIConfig @ 0x14042C470 (HalpWritePCIConfig.c)
 *     HalpReadPCIConfig @ 0x14042CBF0 (HalpReadPCIConfig.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HalpSetPCIData(__int64 a1, __int64 a2, __int64 a3, const void *a4, unsigned int a5, size_t Size)
{
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  char v9; // di
  unsigned int v10; // r15d
  unsigned __int16 v11; // r13
  __int64 v13; // rax
  char v14; // [rsp+30h] [rbp-99h]
  _OWORD v16[4]; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v17[4]; // [rsp+80h] [rbp-49h] BYREF

  v6 = a5;
  v7 = 4096;
  v8 = a3;
  v9 = a2;
  if ( (unsigned int)Size <= 0x1000 )
    v7 = Size;
  v10 = 0;
  v14 = a2;
  v11 = a1;
  if ( a5 < 0x40 )
  {
    HalpReadPCIConfig(a1, a2, a3, v16, 0, 64);
    if ( LOWORD(v16[0]) == 0xFFFF || (BYTE14(v16[0]) & 0x7F) != 0 )
      return 0LL;
    v10 = 64 - a5;
    v17[0] = v16[0];
    if ( 64 - a5 > v7 )
      v10 = v7;
    v17[1] = v16[1];
    v17[2] = v16[2];
    v17[3] = v16[3];
    memmove((char *)v17 + a5, a4, v10);
    v9 = v14;
    HalpWritePCIConfig(v11, v14, v8, (__int64)v17 + a5, a5, v10);
    v6 = v10 + a5;
    v13 = (__int64)a4 + v10;
    v7 -= v10;
  }
  else
  {
    HalpReadPCIConfig(a1, a2, a3, v16, 0, 4);
    if ( LOWORD(v16[0]) == 0xFFFF )
      return 0LL;
    v13 = (__int64)a4;
  }
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      HalpWritePCIConfig(v11, v9, v8, v13, v6, v7);
      v10 += v7;
    }
  }
  return v10;
}
