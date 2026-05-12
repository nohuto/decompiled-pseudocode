/*
 * XREFs of sub_140068B90 @ 0x140068B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140038E7C @ 0x140038E7C (sub_140038E7C.c)
 */

__int64 __fastcall sub_140068B90(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, _DWORD *a5)
{
  unsigned int v8; // eax
  _BYTE *v9; // rax
  __int64 v10; // rdi

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return sub_1400229C8(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_DWORD *)(a2 + 60);
  else
    v8 = *(_DWORD *)(a2 + 16);
  if ( v8 >= 0x23C )
  {
    v9 = (_BYTE *)sub_1400143E0(64LL, 50LL, 842096978LL, *(_QWORD *)(*a1 + 8LL));
    *(_QWORD *)(a3 + 72) = v9;
    if ( v9 )
    {
      v10 = a1[5];
      sub_140038E7C(v9, v10 + 114, 0x28u);
      sub_140038E7C((_BYTE *)(*(_QWORD *)(a3 + 72) + 41LL), v10 + 106, 8u);
      if ( !byte_1401688B4 && *(char *)(v10 + 198) < 0 )
        *(_WORD *)(a3 + 56) |= 1u;
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    *a4 = 1;
    *a5 = 572;
    return 3221225507LL;
  }
}
