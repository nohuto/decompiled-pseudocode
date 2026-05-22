/*
 * XREFs of ?GetRoutingInfo@ContextualProcessorBuffer@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x1801A7880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180054504 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContextualProcessorBuffer::GetRoutingInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = *(_QWORD *)(a1 + 152);
  if ( v3
    && (v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 16), *v4)
    && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v4, &v6) >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, a2);
  }
  else
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  return a2;
}
