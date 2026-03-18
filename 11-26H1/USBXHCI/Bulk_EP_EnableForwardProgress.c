/*
 * XREFs of Bulk_EP_EnableForwardProgress @ 0x14004D990
 * Callers:
 *     <none>
 * Callees:
 *     TR_EnsureSegments @ 0x140018C60 (TR_EnsureSegments.c)
 */

__int64 __fastcall Bulk_EP_EnableForwardProgress(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r10d
  int v4; // r9d
  unsigned __int64 v5; // r8
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  __int64 result; // rax

  v3 = (((unsigned __int64)a2 + 8190) >> 12) + 1;
  v4 = *(_DWORD *)(a1 + 20) >> 4;
  v5 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 160LL) + 8190LL;
  v6 = 1;
  v7 = v4 - (v4 - 1) % ((unsigned int)(v5 >> 12) + 1) - 1;
  if ( v3 > v7 )
  {
    v6 = v3 / v7 + 1;
    if ( !(v3 % v7) )
      v6 = v3 / v7;
  }
  result = TR_EnsureSegments(a1, v6, 0);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 328) = 0;
  }
  return result;
}
