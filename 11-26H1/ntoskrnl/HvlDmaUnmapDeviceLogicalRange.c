/*
 * XREFs of HvlDmaUnmapDeviceLogicalRange @ 0x1402F4860
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  _QWORD v13[2]; // [rsp+40h] [rbp-48h] BYREF
  int v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+54h] [rbp-34h]
  __int64 v16; // [rsp+58h] [rbp-30h]

  if ( *((_BYTE *)a1 + 4) )
    return 3221225659LL;
  v5 = 0;
  v13[0] = -1LL;
  v13[1] = 0LL;
  v6 = 0LL;
  v7 = 0;
  v14 = 0;
  v8 = 4095;
  v15 = *a1;
  do
  {
    v9 = *a3;
    if ( !*a3 )
      break;
    v16 = a2;
    if ( v8 > v9 )
      v8 = v9;
    v7 = v8 & 0xFFF | v7 & 0xFFFFF000;
    v10 = HvcallFastExtended(65716, (unsigned int)v13, 32, 0, 0);
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
