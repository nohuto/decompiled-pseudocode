/*
 * XREFs of sub_140182C98 @ 0x140182C98
 * Callers:
 *     sub_140182F3C @ 0x140182F3C (sub_140182F3C.c)
 *     sub_1401B9168 @ 0x1401B9168 (sub_1401B9168.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140182C98(int a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // edx

  if ( a1 == -2147483614 || a1 == -1073741275 )
  {
    result = 0LL;
    *a3 = 0LL;
    goto LABEL_8;
  }
  result = 0LL;
  *a3 = 0LL;
  if ( !a1 )
  {
    result = *(_DWORD *)(a2 + 4) & 0xB0;
    v4 = (8 * (result | (4 * (*(_DWORD *)(a2 + 4) & 0x40)))) | 0x206;
    goto LABEL_9;
  }
  if ( a1 != 279 )
  {
LABEL_8:
    v4 = 518;
    goto LABEL_9;
  }
  result = 8 * (*(_DWORD *)(a2 + 4) & 0x80u);
  v4 = result | 0x206;
LABEL_9:
  *(_DWORD *)a3 = v4;
  return result;
}
