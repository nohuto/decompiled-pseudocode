/*
 * XREFs of PpmHeteroHgsGetWpsHint @ 0x14060E0F0
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall PpmHeteroHgsGetWpsHint(__int64 a1, struct _KAFFINITY_EX *a2, int *a3)
{
  __int64 v3; // r9
  int v4; // eax

  v3 = *(_QWORD *)(a1 + 1240);
  v4 = 2;
  *a3 = 2;
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 808) )
    {
      v4 = *(_DWORD *)(v3 + 812);
      *a3 = v4;
    }
    RtlpCopyAffinityEx(a2, a2->Size, (struct _KAFFINITY_EX *)(v3 + 16 + 264LL * v4));
  }
}
