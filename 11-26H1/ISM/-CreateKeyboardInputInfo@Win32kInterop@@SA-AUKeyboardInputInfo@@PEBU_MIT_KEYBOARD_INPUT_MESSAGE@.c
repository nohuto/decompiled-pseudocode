/*
 * XREFs of ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x18005F03C
 * Callers:
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800F6050 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009AAB2 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

_DWORD *__fastcall Win32kInterop::CreateKeyboardInputInfo(_DWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _WORD *v5; // r9
  _WORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdi
  __int16 v11; // ax
  _WORD *v12; // rax
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1

  memset_0(a1, 0, 0x170uLL);
  *a1 = 4;
  v4 = (_DWORD *)(a2 + 344);
  a1[6] = 368;
  v5 = (_WORD *)(a2 + 8);
  v6 = (_WORD *)a1 + 31;
  if ( *(_QWORD *)a2 )
    v4 = (_DWORD *)a2;
  v7 = 16LL;
  v8 = 2LL;
  a1[1] = *v4;
  *((_QWORD *)a1 + 4) = *(_QWORD *)(a2 + 336);
  *((_WORD *)a1 + 178) = *(_WORD *)(a2 + 332);
  a1[2] = *(_DWORD *)(a2 + 312);
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 320);
  *((_BYTE *)a1 + 358) = *(_DWORD *)(a2 + 328) != 0;
  *((_WORD *)a1 + 28) = *v5;
  *((_WORD *)a1 + 29) = *(_WORD *)(a2 + 10);
  *((_WORD *)a1 + 30) = *(_WORD *)(a2 + 12);
  *((_WORD *)a1 + 47) = *(_WORD *)(a2 + 270);
  v9 = *(_DWORD *)(a2 + 272);
  v10 = a2 - (_QWORD)v6;
  a1[88] = v9;
  *((_BYTE *)a1 + 49) = 1;
  do
  {
    if ( v7 == -2147483630 )
      break;
    v11 = *(_WORD *)((char *)v6 + v10 + 276);
    if ( !v11 )
      break;
    *v6++ = v11;
    --v7;
  }
  while ( v7 );
  v12 = v6 - 1;
  if ( v7 )
    v12 = v6;
  v13 = a1 + 24;
  *v12 = 0;
  v14 = v5 + 3;
  if ( a1 == (_DWORD *)-96LL )
    goto LABEL_13;
  if ( v5 == (_WORD *)-6LL )
  {
    memset_0(v13, 0, 0x100uLL);
LABEL_13:
    *(_DWORD *)_o__errno(v13, v7, v8) = 22;
    invalid_parameter_noinfo();
    return a1;
  }
  do
  {
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    v13[3] = v14[3];
    v13[4] = v14[4];
    v13[5] = v14[5];
    v13[6] = v14[6];
    v13 += 8;
    v15 = v14[7];
    v14 += 8;
    *(v13 - 1) = v15;
    --v8;
  }
  while ( v8 );
  return a1;
}
