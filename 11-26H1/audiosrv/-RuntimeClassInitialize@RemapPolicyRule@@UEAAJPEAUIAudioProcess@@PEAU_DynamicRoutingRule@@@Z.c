/*
 * XREFs of ?RuntimeClassInitialize@RemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x18012CBB0
 * Callers:
 *     ?RuntimeClassInitialize@CommunicationsRemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x18012CB20 (-RuntimeClassInitialize@CommunicationsRemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRouti.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIPolicyRule@@@Z @ 0x18012975C (-AddHead@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U.c)
 */

__int64 __fastcall RemapPolicyRule::RuntimeClassInitialize(
        RemapPolicyRule *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3)
{
  __int64 v3; // rdi
  struct _DynamicRoutingRule *v4; // rbx
  __int64 v6; // rdx
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 2LL;
  v4 = a3;
  if ( *((_DWORD *)a3 + 2) != 2 && *((_DWORD *)a3 + 2) != 3 )
  {
    v6 = 15LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\remappolicyrule.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *((int *)a3 + 3) >= 6 )
  {
    v6 = 17LL;
    goto LABEL_4;
  }
  if ( *(int *)a3 >= 6 )
  {
    v6 = 18LL;
    goto LABEL_4;
  }
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::AddHead(
    (__int64 *)this + 2,
    (__int64)a2,
    (__int64)a3);
  v8 = (_OWORD *)((char *)this + 64);
  do
  {
    *v8 = *(_OWORD *)v4;
    v8[1] = *((_OWORD *)v4 + 1);
    v8[2] = *((_OWORD *)v4 + 2);
    v8[3] = *((_OWORD *)v4 + 3);
    v8[4] = *((_OWORD *)v4 + 4);
    v8[5] = *((_OWORD *)v4 + 5);
    v8[6] = *((_OWORD *)v4 + 6);
    v8 += 8;
    v9 = *((_OWORD *)v4 + 7);
    v4 = (struct _DynamicRoutingRule *)((char *)v4 + 128);
    *(v8 - 1) = v9;
    --v3;
  }
  while ( v3 );
  *v8 = *(_OWORD *)v4;
  *((_DWORD *)v8 + 4) = *((_DWORD *)v4 + 4);
  return 0LL;
}
