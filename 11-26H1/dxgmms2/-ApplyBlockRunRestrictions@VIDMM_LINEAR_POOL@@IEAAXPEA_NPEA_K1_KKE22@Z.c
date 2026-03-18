/*
 * XREFs of ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x140100070
 * Callers:
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1400FFF24 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(
        VIDMM_LINEAR_POOL *this,
        bool *a2,
        unsigned __int64 *a3,
        VIDMM_LINEAR_POOL **a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8,
        VIDMM_LINEAR_POOL *a9)
{
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax

  if ( a8 )
  {
    if ( a8 >= (unsigned __int64)*a4 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        WdLogGlobalForLineNumber = 820;
        *a2 = 1;
        return;
      }
LABEL_6:
      *a2 = 1;
      return;
    }
    if ( a8 > *a3 )
    {
      *a3 = a8;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        WdLogGlobalForLineNumber = 832;
        v20 = WdLogNewEntry5_WdTrace(v19);
        *(_QWORD *)(v20 + 24) = *a3;
        this = *a4;
        *(_QWORD *)(v20 + 32) = *a4;
        WdLogGlobalForLineNumber = 835;
      }
    }
  }
  if ( a9 )
  {
    if ( (unsigned __int64)a9 <= *a3 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        WdLogGlobalForLineNumber = 851;
      }
      goto LABEL_6;
    }
    if ( a9 < *a4 )
    {
      *a4 = a9;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        WdLogGlobalForLineNumber = 863;
        v22 = WdLogNewEntry5_WdTrace(v21);
        *(_QWORD *)(v22 + 24) = *a3;
        *(_QWORD *)(v22 + 32) = *a4;
        WdLogGlobalForLineNumber = 866;
      }
    }
  }
  if ( !a7 )
  {
    v16 = 0LL;
    if ( a6 )
      v16 = ((unsigned __int64)*a4 - a5) % a6;
    v17 = (unsigned __int64)*a4 - v16 - a5;
    if ( v17 < *a3 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(a6);
        WdLogGlobalForLineNumber = 919;
      }
      goto LABEL_6;
    }
    *a3 = v17;
    if ( g_IsInternalReleaseOrDbg )
    {
      v18 = WdLogNewEntry5_WdTrace(a6);
      *(_QWORD *)(v18 + 24) = *a3;
      *(_QWORD *)(v18 + 32) = *a4;
      WdLogGlobalForLineNumber = 928;
    }
    goto LABEL_13;
  }
  v12 = a6;
  if ( !a6 || (v13 = *a3, (v14 = *a3 % a6) == 0) )
  {
LABEL_11:
    if ( g_IsInternalReleaseOrDbg )
    {
      v15 = WdLogNewEntry5_WdTrace(v12);
      *(_QWORD *)(v15 + 24) = *a3;
      *(_QWORD *)(v15 + 32) = *a4;
      WdLogGlobalForLineNumber = 902;
    }
LABEL_13:
    *a2 = 0;
    return;
  }
  v12 = a6 - v14;
  if ( v12 + v13 < (unsigned __int64)*a4 )
  {
    *a3 = v12 + v13;
    goto LABEL_11;
  }
  if ( !g_IsInternalReleaseOrDbg )
    goto LABEL_6;
  WdLogNewEntry5_WdTrace(v12);
  WdLogGlobalForLineNumber = 892;
  *a2 = 1;
}
