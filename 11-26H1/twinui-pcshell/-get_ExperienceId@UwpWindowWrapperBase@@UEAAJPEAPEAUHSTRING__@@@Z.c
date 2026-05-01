/*
 * XREFs of ?get_ExperienceId@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801CC460
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_203093511f95463d7d1c677a7846780f___ @ 0x1804430A0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_203093511f95463d7d1c677a7846780f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_ExperienceId(UwpWindowWrapperBase *this, HSTRING *a2)
{
  char *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  HSTRING *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (char *)this - 8;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  v3 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v6, v2, &v8);
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_203093511f95463d7d1c677a7846780f___(v3);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v4;
}
