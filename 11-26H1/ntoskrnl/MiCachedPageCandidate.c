/*
 * XREFs of MiCachedPageCandidate @ 0x1402A8F70
 * Callers:
 *     <none>
 * Callees:
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiCachedPagesMakeHot @ 0x1406FA5F0 (MiCachedPagesMakeHot.c)
 */

__int64 __fastcall MiCachedPageCandidate(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r8
  ULONG_PTR v5; // rbx
  __int64 v6; // rdx
  __int64 v8; // rax

  if ( qword_140E2D8C0 && (a3 & 0x10) == 0 )
    a3 &= qword_140E2D8C8;
  v4 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  v5 = 48 * v4 - 0x220000000000LL;
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(a1 + 175) )
      return 3221225496LL;
    v8 = MiHandleSpecialPurposeMemoryCachedFault(
           0LL,
           (__int64)(*(_QWORD *)(a1 + 176) << 25) >> 16,
           a2,
           48 * v4 - 0x220000000000LL);
    v5 = v8;
    if ( !v8 )
      return 3221226029LL;
    *(_QWORD *)(a1 + 192) = v8;
  }
  if ( (*(_BYTE *)(v5 + 34) & 0x20) != 0 || (*(_DWORD *)(v5 + 32) & 0x40000000) != 0 )
    return 3221225485LL;
  v6 = *(_QWORD *)(v5 + 16) >> 16;
  if ( (*(_QWORD *)(v5 + 16) & 0x400LL) != 0 )
    LOBYTE(v6) = *(_QWORD *)(v5 + 16) >> 2;
  if ( (v6 & 1) != 0 && !*(_BYTE *)(a1 + 173) )
  {
    if ( *(_BYTE *)(a1 + 175) )
    {
      *(_BYTE *)(a1 + 173) = 1;
      return 3221225496LL;
    }
    *(_BYTE *)(a1 + 174) = 1;
    if ( (int)MiCachedPagesMakeHot(a1, v5) < 0 )
      return 3221226029LL;
  }
  if ( (unsigned __int16)*(_DWORD *)(v5 + 32) )
  {
    if ( *(_BYTE *)(a1 + 175) )
      MiUnlinkPageFromListEx(v5);
  }
  return 0LL;
}
