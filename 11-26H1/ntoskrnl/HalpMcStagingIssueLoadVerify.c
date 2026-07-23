/*
 * XREFs of HalpMcStagingIssueLoadVerify @ 0x1405962F4
 * Callers:
 *     HalpMcStagePayload @ 0x14059606C (HalpMcStagePayload.c)
 * Callees:
 *     HalpMcStagingWriteData @ 0x14059643C (HalpMcStagingWriteData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcStagingIssueLoadVerify(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // edi
  int v3; // eax
  int v6; // r8d
  int v7; // eax
  __m128i *v8; // rcx
  __int64 v9; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  __m128i v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 4);
  v12 = 0LL;
  if ( (v3 & 1) != 0 || *(int *)(a1 + 4) < 0 || (v6 = HalpMcStagingWriteData(a1, a2, (unsigned int)*a2), v6 >= 0) )
  {
    while ( *(int *)(a1 + 4) >= 0 )
    {
      if ( (++v2 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v2, a2);
    }
    v7 = *(_DWORD *)(a1 + 4);
    v12 = 0LL;
    if ( v7 < 0 )
    {
      v8 = &v12;
      v9 = 4LL;
      do
      {
        v8->m128i_i32[0] = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 12) = 0;
        _InterlockedOr(v11, 0);
        v8 = (__m128i *)((char *)v8 + 4);
        --v9;
      }
      while ( v9 );
      v6 = 0;
      *a2 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v6;
}
