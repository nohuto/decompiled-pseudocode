/*
 * XREFs of HvlDmaUnmapDeviceLogicalRange @ 0x1403E7980
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaUnmapDeviceLogicalRange(int *a1, __int64 a2, unsigned __int64 *a3)
{
  int v5; // edx
  unsigned __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-58h]
  _QWORD v14[2]; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+54h] [rbp-34h]
  __int64 v17; // [rsp+58h] [rbp-30h]

  if ( *((_BYTE *)a1 + 4) )
    return 3221225659LL;
  v5 = 0;
  v14[0] = -1LL;
  v14[1] = 0LL;
  v6 = 0LL;
  v7 = 0;
  v15 = 0;
  v8 = 4095;
  v16 = *a1;
  LODWORD(v13) = 65716;
  do
  {
    v9 = *a3;
    if ( !*a3 )
      break;
    v17 = a2;
    if ( v8 > v9 )
      v8 = v9;
    v7 = v8 & 0xFFF | v7 & 0xFFFFF000;
    HIDWORD(v13) = v7;
    v10 = HvcallFastExtended(v13, (unsigned __int64)v14, 0x20u, 0LL, 0);
    v11 = HIDWORD(v10) & 0xFFF;
    *a3 -= v11;
    v6 += v11;
    a2 += (unsigned __int16)(WORD2(v10) & 0xFFF) << 12;
    v5 = HvlpHvToNtStatus((unsigned __int16)v10);
  }
  while ( v5 >= 0 );
  *a3 = v6;
  return (unsigned int)v5;
}
