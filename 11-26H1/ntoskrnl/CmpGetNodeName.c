/*
 * XREFs of CmpGetNodeName @ 0x140CF5B38
 * Callers:
 *     CmpAddDriverToList @ 0x140CF493C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140CF5DD8 (CmpIsLoadType.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 */

_WORD *__fastcall CmpGetNodeName(__int64 a1, __int64 a2, _WORD *a3)
{
  __int16 v5; // dx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  _WORD *v8; // rbx
  _WORD *v9; // rax

  if ( a3 )
    *a3 = 0;
  v5 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
  {
    v6 = (unsigned __int16)(v5 + 2);
    v9 = (_WORD *)guard_dispatch_icall_no_overrides(v6, 0LL);
    v8 = v9;
    if ( v9 )
    {
      memmove(v9, (const void *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
      v8[(v6 >> 1) - 1] = 0;
      goto LABEL_9;
    }
    return 0LL;
  }
  LODWORD(v6) = (unsigned __int16)(2 * (v5 + 1));
  v7 = guard_dispatch_icall_no_overrides((unsigned __int16)(2 * (v5 + 1)), 0LL);
  v8 = (_WORD *)v7;
  if ( !v7 )
    return 0LL;
  CmpCopyCompressedName(v7, v6, a2 + 76, *(unsigned __int16 *)(a2 + 72));
  v8[((unsigned __int64)(unsigned int)v6 >> 1) - 1] = 0;
LABEL_9:
  if ( a3 )
    *a3 = v6;
  return v8;
}
