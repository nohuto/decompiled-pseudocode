/*
 * XREFs of CcAllocateVacbLevel @ 0x1404B0124
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402C3430 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x1403C07EC (CcExtendVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_QWORD *__fastcall CcAllocateVacbLevel(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  if ( a2 )
  {
    v2 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0LL;
    memset_0(v2 + 1, 0, 0x3F8uLL);
    v2[256] = 0LL;
  }
  else
  {
    v2 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      KeBugCheckEx(0x34u, 0x163BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    --*(_DWORD *)(a1 + 24);
    memset_0(v2 + 1, 0, 0x400uLL);
  }
  *v2 = 0LL;
  return v2;
}
