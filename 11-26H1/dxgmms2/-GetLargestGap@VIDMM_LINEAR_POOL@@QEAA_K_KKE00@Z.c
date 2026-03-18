/*
 * XREFs of ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1400FFF24
 * Callers:
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1400FFC9C (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 * Callees:
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x140100070 (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

unsigned __int64 __fastcall VIDMM_LINEAR_POOL::GetLargestGap(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  VIDMM_LINEAR_POOL *v6; // rsi
  VIDMM_LINEAR_POOL *v8; // rdi
  unsigned __int64 v11; // rbx
  VIDMM_LINEAR_POOL *v12; // rax
  unsigned __int64 *v13; // r14
  VIDMM_LINEAR_POOL *v14; // rdx
  unsigned __int64 v16; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  VIDMM_LINEAR_POOL *v18; // [rsp+60h] [rbp-10h]
  bool v19; // [rsp+A0h] [rbp+30h] BYREF

  v6 = (VIDMM_LINEAR_POOL *)((char *)this + 48);
  v8 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 6);
  v17 = 0LL;
  v16 = 0LL;
  v11 = 0LL;
  if ( v8 != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
  {
    v12 = 0LL;
    this = 0LL;
    do
    {
      v13 = (unsigned __int64 *)((char *)v8 - 24);
      v14 = v8;
      v8 = *(VIDMM_LINEAR_POOL **)v8;
      v18 = v14;
      if ( (VIDMM_LINEAR_POOL *)*v13 != v12 )
      {
        v19 = 0;
        VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(this, &v19, &v17, &v16, a2, a3, a4, a5, a6);
        if ( !v19 && v11 <= v16 - v17 )
          v11 = v16 - v17;
        this = (VIDMM_LINEAR_POOL *)*v13;
        v14 = v18;
        v17 = *v13;
      }
      v12 = (VIDMM_LINEAR_POOL *)((char *)this + *((_QWORD *)v14 - 2));
      v16 = (unsigned __int64)v12;
      this = v12;
    }
    while ( v8 != v6 );
  }
  v19 = 0;
  VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(this, &v19, &v17, &v16, a2, a3, a4, a5, a6);
  if ( !v19 && v11 <= v16 - v17 )
    return v16 - v17;
  return v11;
}
