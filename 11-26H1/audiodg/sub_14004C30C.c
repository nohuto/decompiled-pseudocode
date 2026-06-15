/*
 * XREFs of sub_14004C30C @ 0x14004C30C
 * Callers:
 *     sub_14004BB20 @ 0x14004BB20 (sub_14004BB20.c)
 * Callees:
 *     sub_14003EB40 @ 0x14003EB40 (sub_14003EB40.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004DB3C @ 0x14004DB3C (sub_14004DB3C.c)
 *     sub_14004F650 @ 0x14004F650 (sub_14004F650.c)
 *     sub_14004F778 @ 0x14004F778 (sub_14004F778.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_14004C30C(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        _WORD *a8)
{
  unsigned int v11; // r15d
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  _OWORD v16[10]; // [rsp+20h] [rbp-E0h] BYREF
  char v17; // [rsp+C0h] [rbp-40h]
  WCHAR OutputString[2048]; // [rsp+4C0h] [rbp+3C0h] BYREF

  memset(v16, 0, 0x98uLL);
  OutputString[0] = 0;
  v17 = 0;
  *((_QWORD *)&v16[0] + 1) = *a7;
  v11 = sub_14003EB40(SDWORD2(v16[0]));
  LODWORD(v16[0]) = 1;
  v12 = 0;
  if ( *(_DWORD *)(v13 + 8) == 1 )
    v12 = 8;
  DWORD1(v16[0]) = v12;
  LODWORD(v16[1]) = _InterlockedIncrement(&dword_1400E8470);
  if ( !a8 || (v15 = *a8 == 0, *((_QWORD *)&v16[1] + 1) = a8, v15) )
    *((_QWORD *)&v16[1] + 1) = 0LL;
  LODWORD(v16[2]) = GetCurrentThreadId();
  *((_QWORD *)&v16[3] + 1) = a3;
  v16[4] = __PAIR64__(v11, a2);
  *((_QWORD *)&v16[2] + 1) = 0LL;
  *(_QWORD *)&v16[3] = 0LL;
  *((_QWORD *)&v16[8] + 1) = a6;
  *(_QWORD *)&v16[9] = a1;
  memset(&v16[5], 0, 48);
  if ( qword_1400E83E8 )
    *(_QWORD *)&v16[8] = sub_1400B6010(v14);
  else
    *(_QWORD *)&v16[8] = 0LL;
  if ( qword_1400E8350 )
    sub_1400B6010(v16);
  if ( qword_1400E8388 )
    sub_1400B6010(v16);
  if ( qword_1400E8380 )
    sub_1400B6010(v16);
  if ( qword_1400E83B0 && (BYTE4(v16[0]) & 2) == 0 )
    sub_1400B6010(v16);
  if ( (SDWORD2(v16[0]) & 0x80000000) == 0 )
    sub_14004F778(v14);
  if ( !byte_1400E8330
    && (!qword_1400E8320 ? (v15 = !IsDebuggerPresent()) : (v15 = (unsigned __int8)sub_1400B6010(v14) == 0), v15)
    || (BYTE4(v16[0]) & 2) != 0 )
  {
    if ( qword_1400E8338 && !byte_1400E8360 )
      sub_1400B6010(v16);
  }
  else
  {
    if ( qword_1400E8338 && !byte_1400E8360 )
      sub_1400B6010(v16);
    if ( !OutputString[0] )
      sub_14004DB3C(OutputString, 2048LL, v16);
    OutputDebugStringW(OutputString);
  }
  if ( ((BYTE4(v16[0]) & 4) != 0 || byte_1400E8340) && qword_1400E8398 )
    sub_1400B6010(v14);
  if ( (BYTE4(v16[0]) & 1) != 0 )
    sub_14004F650(v16);
}
