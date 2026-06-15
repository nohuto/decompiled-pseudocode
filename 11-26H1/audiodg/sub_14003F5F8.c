/*
 * XREFs of sub_14003F5F8 @ 0x14003F5F8
 * Callers:
 *     sub_140043B74 @ 0x140043B74 (sub_140043B74.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_14003F5F8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  __int64 result; // rax
  _QWORD v19[8]; // [rsp+20h] [rbp-79h] BYREF
  int v20; // [rsp+60h] [rbp-39h]
  int v21; // [rsp+64h] [rbp-35h]
  int v22; // [rsp+68h] [rbp-31h]
  int v23; // [rsp+6Ch] [rbp-2Dh]
  int v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+74h] [rbp-25h]
  int v26; // [rsp+78h] [rbp-21h]
  int v27; // [rsp+7Ch] [rbp-1Dh]
  int v28; // [rsp+80h] [rbp-19h]
  int v29; // [rsp+84h] [rbp-15h]
  int v30; // [rsp+88h] [rbp-11h]
  int v31; // [rsp+8Ch] [rbp-Dh]
  int v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+94h] [rbp-5h]

  result = 0LL;
  v33 = 0;
  if ( (unsigned int)dword_1400B7008 >= 4 )
  {
    memset(v19, 0, sizeof(v19));
    HIDWORD(v19[5]) = 0x20000;
    LOWORD(v19[0]) = 120;
    v20 = a5;
    v21 = a6;
    v22 = a7;
    v23 = a8;
    v24 = a9;
    v25 = a10;
    v26 = a11;
    v27 = a12;
    v28 = a13;
    v29 = a14;
    v30 = a15;
    v31 = a16;
    v32 = a17;
    *(_OWORD *)&v19[3] = xmmword_1400C7300;
    WORD2(v19[0]) = 1025;
    v19[6] = a2;
    LODWORD(v19[7]) = 0;
    return EtwLogTraceEvent(TraceHandle, v19);
  }
  return result;
}
