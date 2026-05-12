/*
 * XREFs of sub_1401B73A0 @ 0x1401B73A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140039148 @ 0x140039148 (sub_140039148.c)
 *     StorPortGetUncachedExtension @ 0x140073F80 (StorPortGetUncachedExtension.c)
 */

__int64 __fastcall sub_1401B73A0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rcx
  __int64 v3; // rdx
  _DWORD *v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // rax

  v2 = *(_BYTE **)(a1 - 16);
  if ( (v2[248] & 2) == 0 || !*(_BYTE *)(a2 + 82) )
    goto LABEL_7;
  v4 = (_DWORD *)sub_140039148(v2);
  v7 = 79LL;
  if ( *v4 != 1314275652 )
    v7 = 131LL;
  if ( ((v4[v7] + 7) & 0xFFFFFFF8) == 0 )
LABEL_7:
    KeBugCheckEx(0xF1u, 0x2002uLL, 0LL, 0LL, 0LL);
  return StorPortGetUncachedExtension(v5, v3, v6);
}
