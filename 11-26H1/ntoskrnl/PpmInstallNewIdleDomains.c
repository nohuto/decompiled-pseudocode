/*
 * XREFs of PpmInstallNewIdleDomains @ 0x140605720
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmInstallNewIdleDomains(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebp
  int v5; // eax
  unsigned int v6; // r12d
  __int64 v7; // rbx
  struct _KAFFINITY_EX *v8; // rsi

  v2 = *(_QWORD *)(a1 + 34880);
  v3 = 0;
  if ( v2 && (v5 = *(_DWORD *)(v2 + 40), v5 == *(_DWORD *)(a2 + 4)) )
  {
    v6 = 0;
    if ( v5 )
    {
      do
      {
        v7 = 352LL * v6;
        *(_WORD *)(v7 + v2 + 1058) = 32;
        v8 = (struct _KAFFINITY_EX *)(v2 + 352 * (v6 + 3LL));
        *(_DWORD *)(v7 + v2 + 1060) = 0;
        v8->Count = 1;
        memset_0((void *)(v7 + v2 + 1064), 0, 0x100uLL);
        RtlpCopyAffinityEx(v8, *(_WORD *)(v7 + v2 + 1058), (struct _KAFFINITY_EX *)(a2 + 264LL * v6++ + 272));
      }
      while ( v6 < *(_DWORD *)(v2 + 40) );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
