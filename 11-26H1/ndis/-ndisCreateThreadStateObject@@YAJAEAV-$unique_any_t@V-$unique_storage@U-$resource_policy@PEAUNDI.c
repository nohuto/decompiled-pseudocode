/*
 * XREFs of ?ndisCreateThreadStateObject@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1400E775C
 * Callers:
 *     NdisRegisterUserThreadExitCallback @ 0x1400E7110 (NdisRegisterUserThreadExitCallback.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUNDIS_THREAD_STATE@@@Z @ 0x1400E70B8 (-reset@-$unique_storage@U-$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1-ObfDereference.c)
 */

__int64 __fastcall ndisCreateThreadStateObject(__int64 *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  result = ObCreateObject(0LL, qword_14011F6E8, 0LL, 0LL, 0LL, 32, 0, 0, &v4);
  if ( !(_DWORD)result )
  {
    v3 = v4;
    *v4 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<NDIS_THREAD_STATE *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,NDIS_THREAD_STATE *,NDIS_THREAD_STATE *,0,std::nullptr_t>>::reset(
      a1,
      (__int64)v3);
    return 0LL;
  }
  return result;
}
