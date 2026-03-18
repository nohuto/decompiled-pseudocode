/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1400C8D90
 * Callers:
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400E5588 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400C8E94 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        VIDMM_PROCESS_BUDGET_STATE *this,
        unsigned __int64 *a2,
        char a3,
        unsigned __int8 a4,
        struct VIDMM_GLOBAL *a5,
        unsigned int a6)
{
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v6; // esi
  char *v8; // r14
  __int64 v10; // r15
  __int64 v12; // rbx
  unsigned __int64 *v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]

  v6 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
  *a2 = 0LL;
  v8 = (char *)this + 32 * (a4 ^ 1LL);
  v10 = this - (VIDMM_PROCESS_BUDGET_STATE *)&v19;
  v12 = 0LL;
  do
  {
    v13 = (unsigned __int64 *)((char *)&v19 + v12);
    if ( a3 )
      v14 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(
                          a5,
                          a6,
                          v6,
                          *(struct VIDMM_PARTITION **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 336LL))
            + 3);
    else
      v14 = *(unsigned __int64 *)((char *)v13 + v10 + 24);
    *v13 = v14;
    v15 = *(_QWORD *)&v8[v12 + 72];
    if ( v15 > v14 )
    {
      v17 = v15 - v14;
      v18 = *a2;
      if ( *a2 <= v17 )
        v18 = v17;
      *a2 = v18;
    }
    else
    {
      *v13 = v14 - v15;
    }
    ++v6;
    v12 += 8LL;
  }
  while ( v6 < 2 );
  if ( !*a2 )
  {
    v16 = *((_QWORD *)v8 + 11);
    if ( v16 > v20 + v19 )
      *a2 = v16 - (v20 + v19);
  }
}
