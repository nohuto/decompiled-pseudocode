/*
 * XREFs of sub_1400CB8F4 @ 0x1400CB8F4
 * Callers:
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 * Callees:
 *     sub_14007AEF8 @ 0x14007AEF8 (sub_14007AEF8.c)
 *     sub_14018B5D0 @ 0x14018B5D0 (sub_14018B5D0.c)
 *     sub_14018B7EC @ 0x14018B7EC (sub_14018B7EC.c)
 */

__int64 __fastcall sub_1400CB8F4(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  unsigned __int8 v8; // di
  int v9; // edx
  int v10; // [rsp+20h] [rbp-40h]
  int v11; // [rsp+40h] [rbp-20h] BYREF
  __int128 v12; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 v13; // [rsp+80h] [rbp+20h] BYREF
  char v14; // [rsp+88h] [rbp+28h] BYREF
  unsigned __int8 v15; // [rsp+90h] [rbp+30h] BYREF
  int v16; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0;
  v11 = 0;
  v2 = *(_QWORD *)(a1 + 584);
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0LL;
  if ( !v2 || !*(_QWORD *)(v2 + 88) || !*(_QWORD *)(v2 + 96) )
    return 0LL;
  result = sub_14007AEF8(
             (__int64 *)(v2 + 88),
             (*(_DWORD *)(a1 + 144) & 0x400LL) != 0,
             &v16,
             &v15,
             &v11,
             (bool *)&v14,
             &v12,
             &v13);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 144);
    if ( (v7 & 0x400) != 0 )
    {
      v8 = v13;
      LOBYTE(v4) = v13;
      LODWORD(result) = sub_14018B5D0(a1, v4);
    }
    else
    {
      v8 = v15;
      v9 = v16;
      LOBYTE(v6) = v15;
      *(_QWORD *)(a1 + 144) = v7 & 0xFFFFFFFFFFFFF7FFuLL;
      LOBYTE(v5) = v6;
      LODWORD(result) = sub_14018B7EC(a1, v9, v5, v6, v10, v14, (__int64)&v12);
    }
    if ( (int)result >= 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 584) + 8LL) = v8;
    return (unsigned int)result;
  }
  return result;
}
