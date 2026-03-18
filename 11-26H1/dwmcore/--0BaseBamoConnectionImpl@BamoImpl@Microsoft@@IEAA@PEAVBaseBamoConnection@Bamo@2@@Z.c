/*
 * XREFs of ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180161990
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x180161864 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180162BB0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180241290 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

Microsoft::BamoImpl::BaseBamoConnectionImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  _DWORD *v3; // rax
  const char *v4; // r9
  Microsoft::BamoImpl::BamoImplObject *v5; // rcx
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 9) = 0x10000;
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v3 = operator new(0x28uLL);
  if ( v3 )
  {
    v3[2] = 1;
    *(_QWORD *)v3 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
    *((_QWORD *)v3 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
    *((_QWORD *)v3 + 3) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationBouncer'};
    *((_QWORD *)v3 + 4) = this;
  }
  else
  {
    v3 = 0LL;
  }
  v5 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = v3;
  if ( v5 )
    Microsoft::BamoImpl::BamoImplObject::Release(v5);
  v6 = *((_QWORD *)this + 13);
  if ( !v6 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0xDF,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v4);
  *((_QWORD *)this + 12) = v6;
  return this;
}
