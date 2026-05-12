/*
 * XREFs of sub_140035DC0 @ 0x140035DC0
 * Callers:
 *     sub_140035C34 @ 0x140035C34 (sub_140035C34.c)
 * Callees:
 *     sub_1400360DC @ 0x1400360DC (sub_1400360DC.c)
 *     sub_1400361D0 @ 0x1400361D0 (sub_1400361D0.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140035DC0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  int v9; // ebx
  int v10; // ecx
  unsigned __int64 v11; // r13
  char v12; // al
  void *v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int128 v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-10h]

  *(_QWORD *)(a4 + 8) = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  result = sub_1400360DC(&v18, a1);
  v9 = result;
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)a4;
    v11 = *(unsigned int *)(*(_QWORD *)(a1 + 184) + 8LL);
    BYTE2(v18) = *(_BYTE *)(a2 + 4);
    v12 = *(_BYTE *)(a2 + 3);
    if ( v12 >= 0 )
    {
      LOBYTE(v14) = 0;
      BYTE7(v18) = 0;
    }
    else
    {
      if ( BYTE7(v18) )
        v13 = (void *)(*(_QWORD *)(a1 + 24) + (unsigned int)v20);
      else
        v13 = 0LL;
      v14 = *(unsigned __int8 *)(a2 + 11);
      BYTE7(v18) = *(_BYTE *)(a2 + 11);
      if ( v13 && (_BYTE)v14 )
      {
        memmove(v13, *(const void **)(a2 + 32), v14);
        v12 = *(_BYTE *)(a2 + 3);
      }
      v10 = 0;
    }
    v15 = *(unsigned int *)(a2 + 16);
    v9 = 0;
    HIDWORD(v18) = *(_DWORD *)(a2 + 16);
    if ( (v12 & 0x3F) != 0x12 )
      v9 = v10;
    if ( (_BYTE)v14 )
    {
      v16 = (unsigned int)v20 + (unsigned __int8)v14;
    }
    else
    {
      v16 = (unsigned __int16)v18;
      if ( v9 < 0 && *(_BYTE *)(a2 + 4) )
      {
        v9 = 0;
        v16 = 3LL;
      }
    }
    v17 = v16;
    if ( !a3 && BYTE8(v18) && (_DWORD)v15 && *((_QWORD *)&v19 + 1) )
      v17 = *((_QWORD *)&v19 + 1) + v15;
    if ( v17 >= v11 )
      v17 = v11;
    *(_QWORD *)(a4 + 8) = v17;
    result = sub_1400361D0(&v18, a1);
  }
  *(_DWORD *)a4 = v9;
  return result;
}
