/*
 * XREFs of sub_18008D334 @ 0x18008D334
 * Callers:
 *     sub_18008D334 @ 0x18008D334 (sub_18008D334.c)
 *     sub_18008D758 @ 0x18008D758 (sub_18008D758.c)
 * Callees:
 *     sub_18008C5BC @ 0x18008C5BC (sub_18008C5BC.c)
 *     sub_18008C7C4 @ 0x18008C7C4 (sub_18008C7C4.c)
 *     sub_18008D0A4 @ 0x18008D0A4 (sub_18008D0A4.c)
 *     sub_18008D334 @ 0x18008D334 (sub_18008D334.c)
 */

void __fastcall sub_18008D334(char *a1, float *a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  __int64 v9; // r15
  __int64 v10; // rdi
  int v11; // edx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (_DWORD)a1 + 16 * v10;
    if ( v10 > a5 )
    {
      sub_18008D334((_DWORD)a1, v11, v10, (_DWORD)a4, a5, a6);
      sub_18008D334((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, (_DWORD)a4, a5, a6);
    }
    else
    {
      sub_18008C7C4(a1, v11, v10, (int)a4);
      sub_18008C7C4(&a1[16 * v10], (int)a2, v9, (int)a4);
    }
    sub_18008C5BC((float *)a1, (float *)&a1[16 * v10], a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_18008D0A4(a1, (char *)a2);
  }
}
