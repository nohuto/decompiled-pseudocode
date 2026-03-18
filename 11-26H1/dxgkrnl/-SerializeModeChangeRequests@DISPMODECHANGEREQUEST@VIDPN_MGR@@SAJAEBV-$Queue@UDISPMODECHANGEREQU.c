/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x14025D5E0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  char v9; // al
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  char v12; // bp
  __int64 v13; // rbx
  _QWORD *v14; // rax

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6511;
    }
    v5 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v5 = *(_QWORD *)(a1 + 40);
    v6 = 96 * v5 + 8;
    v7 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v6);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = *(_BYTE *)(a1 + 40);
      v10 = 0LL;
      v11 = (_QWORD *)(a1 + 24);
      v12 = 0;
      *(_BYTE *)a2[4] = v9;
      v13 = a2[4] + 8LL;
      if ( (_QWORD *)*v11 != v11 )
        v10 = *v11 - 8LL;
      while ( v10 )
      {
        *(_DWORD *)v13 = *(_DWORD *)(v10 + 48);
        *(_OWORD *)(v13 + 4) = *(_OWORD *)(v10 + 52);
        *(_OWORD *)(v13 + 20) = *(_OWORD *)(v10 + 68);
        *(_QWORD *)(v13 + 36) = *(_QWORD *)(v10 + 84);
        *(_DWORD *)(v13 + 44) = *(_DWORD *)(v10 + 92);
        *(_DWORD *)(v13 + 48) = *(_DWORD *)(v10 + 96);
        *(_DWORD *)(v13 + 52) = *(_DWORD *)(v10 + 100);
        *(_DWORD *)(v13 + 56) = *(_DWORD *)(v10 + 104);
        *(_QWORD *)(v13 + 64) = *(_QWORD *)(v10 + 112);
        *(_DWORD *)(v13 + 92) = *(_DWORD *)(v10 + 140);
        *(_OWORD *)(v13 + 72) = *(_OWORD *)(v10 + 120);
        *(_DWORD *)(v13 + 88) = *(_DWORD *)(v10 + 136);
        v13 += 96LL;
        v14 = *(_QWORD **)(v10 + 8);
        v10 = (__int64)(v14 - 1);
        if ( v14 == v11 )
          v10 = 0LL;
        ++v12;
      }
      if ( v12 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6555;
      }
      if ( v12 )
      {
        if ( v6 != v13 - a2[4] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6561;
        }
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v6, a1, v7);
      result = v8;
      WdLogGlobalForLineNumber = 6525;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6505;
  }
  return result;
}
