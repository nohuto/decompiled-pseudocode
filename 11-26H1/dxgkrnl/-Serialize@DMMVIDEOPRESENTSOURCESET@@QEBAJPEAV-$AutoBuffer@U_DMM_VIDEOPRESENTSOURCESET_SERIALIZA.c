/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x140268788
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x140268610 (-Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::Serialize(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  char v9; // al
  _QWORD *v10; // r14
  DMMVIDEOPRESENTSOURCE *v11; // rdi
  unsigned __int8 v12; // si
  _QWORD *v13; // rax

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 449;
    }
    v5 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v5 = *(_QWORD *)(a1 + 40);
    v6 = 8 * v5 + 4;
    v7 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v6);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = *(_BYTE *)(a1 + 40);
      v10 = (_QWORD *)(a1 + 24);
      v11 = 0LL;
      v12 = 0;
      *(_BYTE *)a2[4] = v9;
      if ( (_QWORD *)*v10 != v10 )
        v11 = (DMMVIDEOPRESENTSOURCE *)(*v10 - 8LL);
      while ( v11 )
      {
        DMMVIDEOPRESENTSOURCE::Serialize(
          v11,
          (struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const)(a2[4] + 4LL + 8LL * v12));
        v13 = (_QWORD *)*((_QWORD *)v11 + 1);
        v11 = (DMMVIDEOPRESENTSOURCE *)(v13 - 1);
        if ( v13 == v10 )
          v11 = 0LL;
        ++v12;
      }
      if ( v12 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 487;
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v6, a1, v7);
      result = v8;
      WdLogGlobalForLineNumber = 467;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 443;
  }
  return result;
}
