/*
 * XREFs of sub_1400BED78 @ 0x1400BED78
 * Callers:
 *     sub_1401ADB60 @ 0x1401ADB60 (sub_1401ADB60.c)
 * Callees:
 *     sub_140068AB8 @ 0x140068AB8 (sub_140068AB8.c)
 *     sub_14009FC80 @ 0x14009FC80 (sub_14009FC80.c)
 *     sub_140185144 @ 0x140185144 (sub_140185144.c)
 */

bool __fastcall sub_1400BED78(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  int v6; // esi
  int v7; // ebp
  bool v8; // r14

  v3 = *(_QWORD *)a1;
  v4 = (_QWORD *)(a1 + 120);
  v5 = *(_QWORD **)(a1 + 120);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( v5 != v4 )
  {
    a2 = (__int64)(v5 - 2);
    a1 = *((unsigned int *)v5 + 18);
    if ( (_DWORD)a1 )
    {
      if ( (_DWORD)a1 == 1 )
      {
        sub_140185144();
        ++v6;
        v8 = 1;
      }
    }
    else
    {
      v8 = sub_14009FC80(*(_QWORD *)(a2 + 8));
      ++v7;
    }
    v5 = (_QWORD *)*v5;
  }
  if ( *(_BYTE *)(v3 + 4370) && (v6 || v7) && (byte_1401694F6 & 1) != 0 )
    sub_140068AB8(a1, a2, a3, *(const wchar_t **)(v3 + 4720), *(_DWORD *)(v3 + 56), v3 + 5064, v6, v7);
  return v8;
}
