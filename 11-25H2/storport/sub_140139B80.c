/*
 * XREFs of sub_140139B80 @ 0x140139B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 */

__int64 __fastcall sub_140139B80(int **a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rsi
  int v7; // r8d
  unsigned int *v8; // rdi
  char v9; // r8
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) != 1 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    {
      v14 = MEMORY[0xC];
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xCu, (__int64)&unk_1401552B8, MEMORY[8], v14);
    }
    v9 = 1;
    LOBYTE(v10) = MEMORY[8];
    v13 = MEMORY[0xC];
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(_DWORD *)(v6 + 8);
  v8 = (unsigned int *)(v6 + 12);
  if ( (unsigned int)(v7 - 7) > 7 || *v8 > 1 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    {
      v12 = *v8;
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xDu, (__int64)&unk_1401552B8, v7, v12);
    }
    v9 = 2;
    v10 = *(_DWORD *)(v6 + 8);
    v13 = *v8;
LABEL_14:
    v4 = -1073741435;
    sub_140085D5C(*a1, "ErrInvalidBoolData", v9, v10, v13, 0LL);
    return v4;
  }
  *a4 = *(_BYTE *)(v6 + 16);
  return v4;
}
