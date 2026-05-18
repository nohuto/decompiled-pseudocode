/*
 * XREFs of sub_18008D42C @ 0x18008D42C
 * Callers:
 *     sub_18008D42C @ 0x18008D42C (sub_18008D42C.c)
 *     sub_18008D824 @ 0x18008D824 (sub_18008D824.c)
 * Callees:
 *     sub_18008C6C0 @ 0x18008C6C0 (sub_18008C6C0.c)
 *     sub_18008C8D8 @ 0x18008C8D8 (sub_18008C8D8.c)
 *     sub_18008D140 @ 0x18008D140 (sub_18008D140.c)
 *     sub_18008D42C @ 0x18008D42C (sub_18008D42C.c)
 */

void __fastcall sub_18008D42C(char *a1, float *a2, __int64 a3, void *a4, __int64 a5, char a6)
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
      sub_18008D42C((_DWORD)a1, v11, v10, (_DWORD)a4, a5, a6);
      sub_18008D42C((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, (_DWORD)a4, a5, a6);
    }
    else
    {
      sub_18008C8D8(a1, v11, v10, (int)a4);
      sub_18008C8D8(&a1[16 * v10], (int)a2, v9, (int)a4);
    }
    sub_18008C6C0((float *)a1, (float *)&a1[16 * v10], a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_18008D140(a1, (char *)a2);
  }
}
