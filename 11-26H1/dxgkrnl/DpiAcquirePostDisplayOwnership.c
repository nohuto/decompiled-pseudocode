/*
 * XREFs of DpiAcquirePostDisplayOwnership @ 0x14023C000
 * Callers:
 *     DpAcquirePostDisplayOwnership @ 0x1402375F0 (DpAcquirePostDisplayOwnership.c)
 *     DpAcquirePostDisplayOwnership2 @ 0x140237610 (DpAcquirePostDisplayOwnership2.c)
 * Callees:
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 */

__int64 __fastcall DpiAcquirePostDisplayOwnership(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdx
  __int128 v10; // xmm1

  v6 = 0;
  if ( KeGetCurrentIrql() > 1u )
  {
    v6 = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 117;
    return v6;
  }
  if ( !a1 || !a2 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 134;
    return v6;
  }
  if ( KeGetCurrentThread() != (struct _KTHREAD *)qword_1401691D8 || a1 != qword_1401691E0 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 155;
    return v6;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
    {
      v8 = *(_DWORD *)(v7 + 236);
      if ( v8 != 2 && (*(_DWORD *)(v7 + 240) != 2 || ((v8 - 3) & 0xFFFFFFFC) != 0 || v8 == 4) )
        *(_BYTE *)(v7 + 4040) |= 4u;
    }
  }
  if ( !DpiFdoIsPostDevice(a1) )
  {
    if ( !*(_BYTE *)(v9 + 1153) )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 197;
      *(_OWORD *)a2 = 0LL;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = -1;
      if ( a3 )
        *a3 &= 0xFFFFFFF0;
      return v6;
    }
    goto LABEL_20;
  }
  if ( *(_BYTE *)(v9 + 1153) )
  {
LABEL_20:
    *(_OWORD *)a2 = xmmword_140169130;
    v10 = xmmword_140169140;
    goto LABEL_22;
  }
  *(_OWORD *)a2 = xmmword_140169088;
  v10 = xmmword_140169098;
LABEL_22:
  *(_OWORD *)(a2 + 16) = v10;
  if ( a3 )
    *a3 = dword_14016921C & 0xF | *a3 & 0xFFFFFFF0;
  return v6;
}
