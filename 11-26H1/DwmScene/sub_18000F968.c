/*
 * XREFs of sub_18000F968 @ 0x18000F968
 * Callers:
 *     sub_18000DCEC @ 0x18000DCEC (sub_18000DCEC.c)
 *     sub_18000E044 @ 0x18000E044 (sub_18000E044.c)
 * Callees:
 *     sub_18000DC2C @ 0x18000DC2C (sub_18000DC2C.c)
 *     sub_18000EF94 @ 0x18000EF94 (sub_18000EF94.c)
 *     sub_18000F774 @ 0x18000F774 (sub_18000F774.c)
 *     sub_18001004C @ 0x18001004C (sub_18001004C.c)
 *     sub_180010070 @ 0x180010070 (sub_180010070.c)
 *     sub_180010084 @ 0x180010084 (sub_180010084.c)
 *     sub_1800100A4 @ 0x1800100A4 (sub_1800100A4.c)
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_18000F968(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int *a8,
        _WORD *a9,
        int a10,
        WCHAR *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        int a15,
        __int64 a16)
{
  unsigned int v17; // edi
  int v18; // ebp
  int v19; // eax
  _WORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  int v25; // [rsp+88h] [rbp+10h]

  v25 = a2;
  *lpOutputString = 0;
  *a13 = 0;
  v17 = *a8;
  *(_DWORD *)(a16 + 8) = *a8;
  *(_DWORD *)(a16 + 12) = a8[1];
  v18 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v19 = sub_1800100A4(v17);
        break;
      case 2:
        if ( (v17 & 0x80000000) == 0 )
        {
          v17 = -2147024228;
          sub_18000DC2C(a1, a2, a3, a4, a5, a6, 0x8007029C);
          *(_DWORD *)(a16 + 8) = -2147024228;
          *(_DWORD *)(a16 + 12) = sub_18000F774(-2147024228);
        }
        v19 = sub_180010084(v17);
        break;
      case 3:
        v19 = sub_180010070(v17);
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    v19 = sub_18001004C(v17);
  }
  v18 = v19;
LABEL_12:
  *(_DWORD *)a16 = a7;
  *(_DWORD *)(a16 + 4) = a15;
  if ( a8[2] == 1 )
    *(_DWORD *)(a16 + 4) = a15 | 8;
  *(_DWORD *)(a16 + 16) = _InterlockedIncrement(&dword_1801C83A8);
  v20 = a9;
  if ( !a9 || !*a9 )
    v20 = 0LL;
  *(_QWORD *)(a16 + 24) = v20;
  *(_DWORD *)(a16 + 32) = GetCurrentThreadId();
  *(_QWORD *)(a16 + 56) = a3;
  *(_DWORD *)(a16 + 64) = v25;
  *(_DWORD *)(a16 + 68) = v18;
  *(_QWORD *)(a16 + 40) = a5;
  *(_QWORD *)(a16 + 48) = a4;
  *(_QWORD *)(a16 + 136) = a6;
  *(_QWORD *)(a16 + 144) = a1;
  *(_QWORD *)(a16 + 72) = 0LL;
  *(_OWORD *)(a16 + 104) = 0LL;
  *(_QWORD *)(a16 + 120) = 0LL;
  *(_OWORD *)(a16 + 80) = 0LL;
  *(_QWORD *)(a16 + 96) = 0LL;
  if ( qword_1801C8450 )
    v22 = qword_1801C8450(v21);
  else
    v22 = 0LL;
  *(_QWORD *)(a16 + 128) = v22;
  if ( qword_1801C83D8 )
    qword_1801C83D8(a16);
  if ( qword_1801C8408 )
    qword_1801C8408(a16, a13, 1024LL);
  if ( qword_1801C8400 )
    qword_1801C8400(a16);
  if ( qword_1801C8428 && (*(_BYTE *)(a16 + 4) & 2) == 0 )
    qword_1801C8428(a16);
  if ( *(int *)(a16 + 8) >= 0 )
  {
    if ( a7 != 3 )
      sub_180010F3C(v21);
    *(_DWORD *)(a16 + 8) = -2147418113;
    *(_DWORD *)(a16 + 12) = sub_18000F774(-2147418113);
  }
  if ( !byte_1801C83C0
    && (!qword_1801C83B0 ? (v23 = !IsDebuggerPresent()) : (v23 = (unsigned __int8)qword_1801C83B0(v21) == 0), v23)
    || (*(_BYTE *)(a16 + 4) & 2) != 0 )
  {
    if ( qword_1801C83C8 && !byte_1801C83E8 )
      qword_1801C83C8(a16, 0LL, 0LL);
  }
  else
  {
    if ( qword_1801C83C8 && !byte_1801C83E8 )
      qword_1801C83C8(a16, lpOutputString, 2048LL);
    if ( !*lpOutputString )
      sub_18000EF94(lpOutputString, 2048LL, a16);
    OutputDebugStringW(lpOutputString);
  }
  if ( (*(_BYTE *)(a16 + 4) & 4) != 0 || byte_1801C83D0 )
  {
    if ( qword_1801C8418 )
      qword_1801C8418(v21);
  }
}
