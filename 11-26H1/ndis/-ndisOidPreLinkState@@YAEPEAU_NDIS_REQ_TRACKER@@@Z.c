/*
 * XREFs of ?ndisOidPreLinkState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400633D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 */

unsigned __int8 __fastcall ndisOidPreLinkState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // eax
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  char v10[4]; // [rsp+38h] [rbp-50h]
  __int128 v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+60h] [rbp-28h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x93u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      *((_QWORD *)a1 + 4));
  v5 = *(_DWORD *)(v4 + 4);
  if ( !v5 || v5 == 2 )
  {
    v6 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v4 + 48) < 0x28u )
    {
      *(_DWORD *)(v4 + 56) = 40;
      *v6 = -1073676268;
    }
    else
    {
      HIDWORD(v11) = 0;
      LODWORD(v11) = 2621824;
      if ( *((_QWORD *)a1 + 2) )
      {
        DWORD1(v11) = *(_DWORD *)(v3 + 380);
        v12 = *(_OWORD *)(v3 + 392);
        DWORD2(v11) = *(_DWORD *)(v3 + 384);
        LODWORD(v13) = *(_DWORD *)(v3 + 408);
        v7 = *(_DWORD *)(v3 + 412);
      }
      else
      {
        DWORD1(v11) = *(_DWORD *)(v1 + 480);
        v12 = *(_OWORD *)(v1 + 792);
        DWORD2(v11) = *(_DWORD *)(v1 + 488);
        LODWORD(v13) = *(_DWORD *)(v1 + 808);
        v7 = *(_DWORD *)(v1 + 468);
      }
      HIDWORD(v13) = v7;
      v8 = *(_QWORD *)(v4 + 40);
      *(_OWORD *)v8 = v11;
      *(_OWORD *)(v8 + 16) = v12;
      *(_QWORD *)(v8 + 32) = v13;
      *v6 = 0;
      *(_QWORD *)(v4 + 52) = 40LL;
    }
  }
  else
  {
    v6 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = *v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x94u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      1,
      *(_DWORD *)v10);
  }
  return 1;
}
