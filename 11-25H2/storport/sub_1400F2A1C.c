/*
 * XREFs of sub_1400F2A1C @ 0x1400F2A1C
 * Callers:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400344E0 @ 0x1400344E0 (sub_1400344E0.c)
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400F2A1C(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  void *v4; // rcx
  __int64 v5; // rcx
  char *v6; // r8
  char v7; // r9
  __int64 v8; // rax
  __int64 v9; // rsi
  _BYTE *v10; // rax
  char v12[128]; // [rsp+20h] [rbp-98h] BYREF

  v1 = a1[74];
  v2 = 0;
  if ( v1 )
  {
    v4 = (void *)a1[99];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x52436152u);
      v1 = a1[74];
      a1[99] = 0LL;
    }
    v5 = 0LL;
    v6 = v12;
    do
    {
      v7 = *(_BYTE *)(v5 + v1 + 4);
      if ( v7 == 32 )
        break;
      *v6 = v7;
      v5 = (unsigned int)(v5 + 1);
      ++v6;
    }
    while ( (unsigned int)v5 < 0x14 );
    sub_1400344E0(&v12[v5], 128 - v5, "_%u", *(unsigned __int16 *)(a1[74] + 78LL));
    v8 = -1LL;
    do
      ++v8;
    while ( v12[v8] );
    v9 = (unsigned int)(v8 + 1);
    v10 = (_BYTE *)sub_1400143E0(64LL, v9, 1380147538LL, *(_QWORD *)(a1[16] + 8LL));
    a1[99] = v10;
    if ( v10 )
      sub_14006FED8(v10, v9, (__int64)v12);
    else
      return (unsigned int)-1073741670;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
