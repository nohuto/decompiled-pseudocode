/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180072D20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800717E8 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180071868 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ??$PersistData@UVirtualDesktopPersistedData@CApplicationViewBase@@@CPersistence@ApplicationViewManagement@@QEAAJPEBGAEBUVirtualDesktopPersistedData@CApplicationViewBase@@@Z @ 0x1801B7474 (--$PersistData@UVirtualDesktopPersistedData@CApplicationViewBase@@@CPersistence@ApplicationViewM.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  volatile signed __int32 *v4; // rsi
  char *v5; // rax
  __m128i v6; // xmm6
  volatile signed __int32 *v8; // [rsp+20h] [rbp-50h] BYREF
  LPVOID pv[3]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+50h] [rbp-20h] BYREF

  v4 = (volatile signed __int32 *)&this[6];
  AcquireSRWLockExclusive(this + 6);
  v8 = v4;
  *(struct _GUID *)&this[14].Ptr = *a2;
  v5 = (char *)this[14].Ptr - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v5 )
    v5 = (char *)this[15].Ptr - *(_QWORD *)GUID_NULL.Data4;
  if ( v5 )
  {
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( (*((int (__fastcall **)(RTL_SRWLOCK *, LPVOID *))this[2].Ptr + 4))(this + 2, pv) >= 0 )
    {
      v6 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                         v11,
                         pv,
                         this);
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v8);
      if ( v8 )
      {
        v10 = *(_OWORD *)(_mm_srli_si128(v6, 8).m128i_u64[0] + 112);
        ApplicationViewManagement::CPersistence::PersistData<CApplicationViewBase::VirtualDesktopPersistedData>(
          v8 + 10,
          *(_QWORD *)v6.m128i_i64[0],
          &v10);
      }
      Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v8);
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( v4 )
    ReleaseSRWLockExclusive((PSRWLOCK)v4);
  return 0LL;
}
