/*
 * XREFs of ?UpdateRule@RemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x18012BE20
 * Callers:
 *     ?UpdateRule@CommunicationsRemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x18012BA20 (-UpdateRule@CommunicationsRemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x18012A7A8 (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 */

__int64 __fastcall RemapPolicyRule::UpdateRule(
        RemapPolicyRule *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3)
{
  struct _DynamicRoutingRule *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  _OWORD *v7; // rdi
  __int128 v8; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = 2LL;
  if ( *((_DWORD *)a3 + 2) != 3 && *((_DWORD *)a3 + 2) != 2 )
  {
    v5 = 650LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\defaultdevice.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *((int *)a3 + 3) >= 6 )
  {
    v5 = 651LL;
    goto LABEL_4;
  }
  v7 = (_OWORD *)((char *)this + 64);
  if ( *(_DWORD *)a3 != *((_DWORD *)this + 16) )
  {
    v5 = 652LL;
    goto LABEL_4;
  }
  if ( *((_DWORD *)this + 17) != *((_DWORD *)a3 + 1) )
  {
    v5 = 653LL;
    goto LABEL_4;
  }
  if ( !ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
          (_QWORD *)this + 2,
          (__int64)a2,
          (__int64)a3) )
  {
    v5 = 654LL;
    goto LABEL_4;
  }
  do
  {
    *v7 = *(_OWORD *)v3;
    v7[1] = *((_OWORD *)v3 + 1);
    v7[2] = *((_OWORD *)v3 + 2);
    v7[3] = *((_OWORD *)v3 + 3);
    v7[4] = *((_OWORD *)v3 + 4);
    v7[5] = *((_OWORD *)v3 + 5);
    v7[6] = *((_OWORD *)v3 + 6);
    v7 += 8;
    v8 = *((_OWORD *)v3 + 7);
    v3 = (struct _DynamicRoutingRule *)((char *)v3 + 128);
    *(v7 - 1) = v8;
    --v4;
  }
  while ( v4 );
  *v7 = *(_OWORD *)v3;
  *((_DWORD *)v7 + 4) = *((_DWORD *)v3 + 4);
  return 0LL;
}
