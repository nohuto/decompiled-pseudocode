/*
 * XREFs of ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800CF540
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180013780 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     WPP_SF__guid_ @ 0x1800CFB54 (WPP_SF__guid_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParamInternal(
        CAudioSession *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  void (__fastcall **v3)(_QWORD, void **); // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  void (__fastcall **v10[5])(_QWORD, void **); // [rsp+20h] [rbp-28h] BYREF

  v3 = (void (__fastcall **)(_QWORD, void **))((char *)this + 204);
  v7 = *(_QWORD *)((char *)this + 204) - *(_QWORD *)&a2->Data1;
  if ( !v7 )
    v7 = *(_QWORD *)((char *)this + 212) - *(_QWORD *)a2->Data4;
  if ( v7 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, a2);
    }
    v8 = *((_QWORD *)this - 1);
    *(struct _GUID *)((char *)this + 204) = *a2;
    (*(void (__fastcall **)(char *))(v8 + 8))((char *)this - 8);
    v10[1] = (void (__fastcall **)(_QWORD, void **))((char *)this - 8);
    v10[0] = (void (__fastcall **)(_QWORD, void **))&CAudioSessionGroupingParamChanged::`vftable';
    v10[2] = v3;
    v10[3] = (void (__fastcall **)(_QWORD, void **))a3;
    CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
      (LPCRITICAL_SECTION)((char *)this + 424),
      v10);
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 16LL))((char *)this - 8);
  }
  return 0LL;
}
