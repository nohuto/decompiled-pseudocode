/*
 * XREFs of MiApplyHotPatchToDriverDataPages @ 0x140874600
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiSetImageProtection @ 0x14038D6E0 (MiSetImageProtection.c)
 *     RtlFindNextForwardRunSetEx @ 0x14049CCA0 (RtlFindNextForwardRunSetEx.c)
 *     RtlApplyHotPatch @ 0x140C0827C (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyHotPatchToDriverDataPages(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ebp
  unsigned __int64 i; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 NextForwardRunSet; // rax
  unsigned __int64 v7; // rsi
  char v9; // [rsp+28h] [rbp-100h]
  int v10; // [rsp+48h] [rbp-E0h]
  int v11; // [rsp+78h] [rbp-B0h]
  int v12; // [rsp+C8h] [rbp-60h]
  __int64 v13; // [rsp+D0h] [rbp-58h]
  __int64 v14; // [rsp+D8h] [rbp-50h]
  int v15; // [rsp+E0h] [rbp-48h]
  _QWORD v16[2]; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+100h] [rbp-28h]
  unsigned __int64 v18; // [rsp+130h] [rbp+8h] BYREF

  v16[0] = MiPatchDataPagesCallback;
  v17 = *(_QWORD *)(a1 + 8);
  v18 = 0LL;
  v16[1] = 0LL;
  v2 = *(_QWORD *)(**(_QWORD **)a1 + 48LL);
  v3 = RtlApplyHotPatch(
         v2,
         v2,
         0,
         0,
         0LL,
         v9,
         0LL,
         0,
         -1LL,
         v10,
         *(_QWORD *)(*(_QWORD *)v17 + 48LL),
         *(_QWORD *)(*(_QWORD *)v17 + 48LL),
         0LL,
         0,
         0LL,
         v11,
         0LL,
         0,
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 32),
         2,
         34404,
         0LL,
         0LL,
         (__int64)v16,
         v12,
         v13,
         v14,
         v15);
  for ( i = 0LL; ; i = v7 + v5 )
  {
    NextForwardRunSet = RtlFindNextForwardRunSetEx((unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 64LL), i, &v18);
    v7 = NextForwardRunSet;
    if ( !NextForwardRunSet )
      break;
    v5 = v18;
    MiSetImageProtection(
      **(_QWORD **)(a1 + 8),
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 48LL) + (v18 << 12),
      (_DWORD)NextForwardRunSet << 12);
    RtlClearBitsEx(*(_QWORD *)(a1 + 8) + 64LL, v5, v7);
  }
  return v3;
}
