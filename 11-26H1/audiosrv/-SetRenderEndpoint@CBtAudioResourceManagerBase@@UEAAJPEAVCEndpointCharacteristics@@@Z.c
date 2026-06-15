/*
 * XREFs of ?SetRenderEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800E74D0
 * Callers:
 *     ?SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800DF7D0 (-SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$com_weak_query_nothrow@AEAPEAVCEndpointCharacteristics@@@wil@@YAJAEAPEAVCEndpointCharacteristics@@PEAPEAUIWeakReference@@@Z @ 0x1800DFF88 (--$com_weak_query_nothrow@AEAPEAVCEndpointCharacteristics@@@wil@@YAJAEAPEAVCEndpointCharacterist.c)
 *     ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18013A130 (-GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBtAudioResourceManagerBase::SetRenderEndpoint(
        CBtAudioResourceManagerBase *this,
        struct CEndpointCharacteristics *a2)
{
  void **v4; // rsi
  const WCHAR *v5; // rcx
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // esi
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+10h] BYREF

  v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  v4 = (void **)((char *)this + 48);
  v5 = (const WCHAR *)*((_QWORD *)this + 6);
  v6 = 1;
  if ( v5 )
  {
    if ( CompareStringOrdinal(v5, -1, *((LPCWCH *)a2 + 6), -1, 1) != 2 )
    {
      v12 = -2147418113;
      v13 = 71LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v4,
      0LL);
    v9 = _AllocString<CTCoAllocPolicy>(v8, v7, *((const wchar_t **)a2 + 6), v4);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  *((_BYTE *)this + 512) = 0;
  memset(&pvar, 0, sizeof(pvar));
  CEndpointCharacteristics::GetPropertyStoreProperty(a2, &PKEY_Multicast_Target_SessionDescriptor, &pvar);
  if ( pvar.vt == 65 && pvar.lVal == 36 )
  {
    if ( *pvar.cal.pElems != 1
      || *(_OWORD *)(pvar.bstrblobVal.pData + 4) != BLUETOOTH_AUDIO_BROADCAST_PROVIDER
      || *(_QWORD *)(pvar.bstrblobVal.pData + 20) == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
      && *(_QWORD *)(pvar.bstrblobVal.pData + 28) == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
    {
      v6 = 0;
    }
    *((_BYTE *)this + 512) = v6;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v14 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v12 = wil::com_weak_query_nothrow<CEndpointCharacteristics * &>(&v17, (_QWORD *)this + 9);
  if ( v12 < 0 )
  {
    v13 = 89LL;
    goto LABEL_6;
  }
  return 0LL;
}
