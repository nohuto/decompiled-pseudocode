/*
 * XREFs of sub_14004DF60 @ 0x14004DF60
 * Callers:
 *     sub_14004C0AC @ 0x14004C0AC (sub_14004C0AC.c)
 *     sub_14004C16C @ 0x14004C16C (sub_14004C16C.c)
 *     sub_14004C5CC @ 0x14004C5CC (sub_14004C5CC.c)
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14003EB40 @ 0x14003EB40 (sub_14003EB40.c)
 *     sub_140040E64 @ 0x140040E64 (sub_140040E64.c)
 *     sub_14004BE6C @ 0x14004BE6C (sub_14004BE6C.c)
 *     sub_14004DB3C @ 0x14004DB3C (sub_14004DB3C.c)
 *     sub_14004E998 @ 0x14004E998 (sub_14004E998.c)
 *     sub_14004E9C0 @ 0x14004E9C0 (sub_14004E9C0.c)
 *     sub_14004F778 @ 0x14004F778 (sub_14004F778.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_14004DF60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int *a8,
        _WORD *a9,
        int a10,
        WCHAR *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        int a15,
        __int64 a16)
{
  int v18; // edi
  int v19; // esi
  int v20; // eax
  _WORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  int v26; // [rsp+88h] [rbp+10h]

  v26 = a2;
  *lpOutputString = 0;
  *a13 = 0;
  v18 = *a8;
  *(_DWORD *)(a16 + 8) = *a8;
  *(_DWORD *)(a16 + 12) = a8[1];
  v19 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v20 = sub_14003EB40(v18);
        break;
      case 2:
        if ( v18 >= 0 )
        {
          v18 = -2147024228;
          sub_14004BE6C(a1, a2, a3, a4, a5, a6, -2147024228);
          *(_DWORD *)(a16 + 8) = -2147024228;
          *(_DWORD *)(a16 + 12) = sub_14001DFBC(-2147024228);
        }
        v20 = sub_140040E64(v18);
        break;
      case 3:
        v20 = sub_14004E9C0((unsigned int)v18);
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    v20 = sub_14004E998((unsigned int)v18);
  }
  v19 = v20;
LABEL_12:
  *(_DWORD *)a16 = a7;
  *(_DWORD *)(a16 + 4) = a15;
  if ( a8[2] == 1 )
    *(_DWORD *)(a16 + 4) = a15 | 8;
  *(_DWORD *)(a16 + 16) = _InterlockedIncrement(&dword_1400E8470);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *(_QWORD *)(a16 + 24) = v21;
  *(_DWORD *)(a16 + 32) = GetCurrentThreadId();
  *(_QWORD *)(a16 + 56) = a3;
  *(_DWORD *)(a16 + 64) = v26;
  *(_DWORD *)(a16 + 68) = v19;
  *(_QWORD *)(a16 + 40) = a5;
  *(_QWORD *)(a16 + 48) = a4;
  *(_QWORD *)(a16 + 136) = a6;
  *(_QWORD *)(a16 + 144) = a1;
  *(_QWORD *)(a16 + 72) = 0LL;
  *(_OWORD *)(a16 + 104) = 0LL;
  *(_QWORD *)(a16 + 120) = 0LL;
  *(_OWORD *)(a16 + 80) = 0LL;
  *(_QWORD *)(a16 + 96) = 0LL;
  if ( qword_1400E83E8 )
    v23 = sub_1400B6010(v22);
  else
    v23 = 0LL;
  *(_QWORD *)(a16 + 128) = v23;
  if ( qword_1400E8350 )
    sub_1400B6010(a16);
  if ( qword_1400E8388 )
    sub_1400B6010(a16);
  if ( qword_1400E8380 )
    sub_1400B6010(a16);
  if ( qword_1400E83B0 && (*(_BYTE *)(a16 + 4) & 2) == 0 )
    sub_1400B6010(a16);
  if ( *(int *)(a16 + 8) >= 0 )
  {
    if ( a7 != 3 )
      sub_14004F778(v22);
    *(_DWORD *)(a16 + 8) = -2147418113;
    *(_DWORD *)(a16 + 12) = sub_14001DFBC(-2147418113);
  }
  if ( !byte_1400E8330
    && (!qword_1400E8320 ? (v24 = !IsDebuggerPresent()) : (v24 = (unsigned __int8)sub_1400B6010(v22) == 0), v24)
    || (*(_BYTE *)(a16 + 4) & 2) != 0 )
  {
    if ( qword_1400E8338 && !byte_1400E8360 )
      sub_1400B6010(a16);
  }
  else
  {
    if ( qword_1400E8338 && !byte_1400E8360 )
      sub_1400B6010(a16);
    if ( !*lpOutputString )
      sub_14004DB3C(lpOutputString, 2048LL, a16);
    OutputDebugStringW(lpOutputString);
  }
  if ( (*(_BYTE *)(a16 + 4) & 4) != 0 || byte_1400E8340 )
  {
    if ( qword_1400E8398 )
      sub_1400B6010(v22);
  }
}
