/*
 * XREFs of sub_18001FB68 @ 0x18001FB68
 * Callers:
 *     sub_18001F61C @ 0x18001F61C (sub_18001F61C.c)
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001EF20 @ 0x18001EF20 (sub_18001EF20.c)
 */

void **__fastcall sub_18001FB68(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  void **result; // rax
  __int64 v4; // rdx
  size_t v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx

  v2 = *(_QWORD *)(a1 + 16);
  if ( a2 > v2 )
  {
    v5 = a2 - v2;
    if ( a2 - v2 > *(_QWORD *)(a1 + 24) - v2 )
    {
      return sub_18001EF20((void **)a1, a2 - v2, v2, a2 - v2);
    }
    else
    {
      *(_QWORD *)(a1 + 16) = a2;
      v6 = sub_1800148EC(a1);
      v8 = v7 + v6;
      result = (void **)memset((void *)(v7 + v6), 0, v5);
      *(_BYTE *)(v8 + v5) = 0;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a2;
    result = (void **)sub_1800148EC(a1);
    *((_BYTE *)result + v4) = 0;
  }
  return result;
}
