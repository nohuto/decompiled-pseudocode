/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1403C6828
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1402A8AAC (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(struct DMMVIDPNTOPOLOGY *a1)
{
  _QWORD *v2; // r14
  __int64 v3; // rbx
  DMMVIDPNTARGET *v4; // rdi
  struct DMMVIDPNTARGETMODESET *v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rax
  int v9; // eax

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1938;
  }
  v2 = (_QWORD *)((char *)a1 + 24);
  v3 = 0LL;
  if ( (_QWORD *)*v2 != v2 )
    v3 = *v2 - 8LL;
  while ( 1 )
  {
    if ( !v3 )
      return 1;
    v4 = *(DMMVIDPNTARGET **)(v3 + 88);
    if ( !v4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1949;
    }
    v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v4);
    if ( !v5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1960;
    }
    v6 = *((_QWORD *)v5 + 18);
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v5 + 88));
    if ( v6 )
    {
      v9 = *(_DWORD *)(v6 + 96);
      if ( v9 == 41 || v9 == 20 || (unsigned int)(v9 - 23) <= 2 )
        break;
    }
    v7 = *(_QWORD **)(v3 + 8);
    v3 = (__int64)(v7 - 1);
    if ( v7 == v2 )
      v3 = 0LL;
  }
  return 0;
}
