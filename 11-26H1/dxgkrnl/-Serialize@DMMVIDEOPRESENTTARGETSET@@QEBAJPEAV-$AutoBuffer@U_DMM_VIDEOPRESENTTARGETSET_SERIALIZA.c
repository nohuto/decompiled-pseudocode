/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x140260908
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::Serialize(DMMVIDEOPRESENTTARGETSET *this, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r9
  unsigned __int8 v10; // si
  DMMVIDEOPRESENTTARGETSET *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 884;
    }
    v5 = 1LL;
    if ( *((_QWORD *)this + 5) > 1uLL )
      v5 = *((_QWORD *)this + 5);
    v6 = 28 * v5;
    v7 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, 28 * v5 + 4);
    v8 = v7;
    if ( v7 >= 0 )
    {
      NextTarget = 0LL;
      v10 = 0;
      *(_BYTE *)a2[4] = *((_BYTE *)this + 40);
      v11 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
      if ( v11 != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
        NextTarget = (DMMVIDEOPRESENTTARGETSET *)((char *)v11 - 8);
      for ( ; NextTarget; NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, NextTarget) )
      {
        v12 = a2[4];
        v13 = 28LL * v10;
        *(_DWORD *)(v13 + v12 + 4) = *((_DWORD *)NextTarget + 6);
        *(_DWORD *)(v13 + v12 + 8) = *((_DWORD *)NextTarget + 20);
        *(_DWORD *)(v13 + v12 + 12) = *((_DWORD *)NextTarget + 25);
        *(_DWORD *)(v13 + v12 + 16) = *((_DWORD *)NextTarget + 26);
        *(_BYTE *)(v13 + v12 + 20) = *((_BYTE *)NextTarget + 108);
        *(_DWORD *)(v13 + v12 + 24) = *((_DWORD *)NextTarget + 30);
        *(_DWORD *)(v13 + v12 + 28) = *((_DWORD *)NextTarget + 21);
        ++v10;
      }
      if ( v10 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 922;
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v6 + 4, this, v7);
      result = v8;
      WdLogGlobalForLineNumber = 902;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 878;
  }
  return result;
}
