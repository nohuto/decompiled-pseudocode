/*
 * XREFs of HalpAddPrmAddressTranslationToMemoryExtAmdSection @ 0x140580660
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14044C5C8 (HalpCreateMcaMemoryErrorRecord.c)
 * Callees:
 *     WheaPrmTranslatePhysicalAddress @ 0x1406DB700 (WheaPrmTranslatePhysicalAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpAddPrmAddressTranslationToMemoryExtAmdSection(__int64 a1, __int64 *a2)
{
  int v4; // r8d
  __int128 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v11; // [rsp+28h] [rbp-30h]
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v13 = 0;
  v11 = &v12;
  v12 = 0LL;
  v4 = WheaPrmTranslatePhysicalAddress(a1, &v10);
  if ( v4 < 0 )
    goto LABEL_22;
  v5 = v11;
  v6 = a2[1] | 1;
  a2[1] = v6;
  a2[2] = a1;
  if ( *(_BYTE *)v5 != 0xFF )
  {
    v6 |= 0x10uLL;
    a2[1] = v6;
    *((_BYTE *)a2 + 41) = *(_BYTE *)v5;
  }
  if ( *((_BYTE *)v5 + 1) != 0xFF )
  {
    v6 |= 0x20uLL;
    a2[1] = v6;
    *((_BYTE *)a2 + 42) = *((_BYTE *)v5 + 1);
  }
  if ( *((_BYTE *)v5 + 2) != 0xFF )
  {
    v6 |= 0x40uLL;
    a2[1] = v6;
    *((_BYTE *)a2 + 43) = *((_BYTE *)v5 + 2);
  }
  if ( *(_DWORD *)((char *)v5 + 3) != -1 )
  {
    v6 |= 0x80uLL;
    a2[1] = v6;
    *((_DWORD *)a2 + 11) = *(_DWORD *)((char *)v5 + 3);
  }
  if ( *(_WORD *)((char *)v5 + 7) != 0xFFFF )
  {
    v6 |= 0x100uLL;
    a2[1] = v6;
    *((_WORD *)a2 + 24) = *(_WORD *)((char *)v5 + 7);
  }
  if ( *((_BYTE *)v5 + 9) != 0xFF )
  {
    v6 |= 0x200uLL;
    a2[1] = v6;
    *((_BYTE *)a2 + 50) = *((_BYTE *)v5 + 9);
  }
  if ( *((_BYTE *)v5 + 10) != 0xFF )
  {
    v6 |= 0x400uLL;
    a2[1] = v6;
    *((_BYTE *)a2 + 51) = *((_BYTE *)v5 + 10);
  }
  if ( *((_BYTE *)v5 + 11) != 0xFF )
  {
    v6 |= 8uLL;
    a2[1] = v6;
    *((_BYTE *)a2 + 40) = *((_BYTE *)v5 + 11);
  }
  if ( *(_QWORD *)((char *)v5 + 12) == 255LL )
  {
LABEL_22:
    v7 = *a2;
    if ( v4 == -1073741637 )
    {
      v8 = v7 | 4;
      goto LABEL_21;
    }
    if ( v4 < 0 )
    {
      v8 = v7 | 2;
      goto LABEL_21;
    }
  }
  else
  {
    a2[1] = v6 | 4;
    a2[4] = *(_QWORD *)((char *)v5 + 12);
    v7 = *a2;
  }
  v8 = v7 | 1;
LABEL_21:
  *a2 = v8;
  return (unsigned int)v4;
}
