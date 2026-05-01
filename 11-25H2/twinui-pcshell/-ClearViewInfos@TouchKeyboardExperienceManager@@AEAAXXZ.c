/*
 * XREFs of ?ClearViewInfos@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802A2DB8
 * Callers:
 *     _lambda_764a1297a52a98304490b9424ce1b78f_::operator() @ 0x18045E3B4 (_lambda_764a1297a52a98304490b9424ce1b78f_--operator().c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180462E90 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18002A0C0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180098D24 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801FAE18 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::ClearViewInfos(RTL_SRWLOCK *this)
{
  _BYTE *v2; // rdi
  RTL_SRWLOCK *v3; // r15
  bool v4; // r8
  struct KBViewInfo ***v5; // rax
  struct KBViewInfo **v6; // rbx
  struct KBViewInfo **Ptr; // r14
  struct KBViewInfo **v8; // rsi
  __int64 v9; // r12
  int v10; // eax
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  _BYTE *v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v17; // [rsp+90h] [rbp+40h] BYREF
  const wchar_t *v18; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  v2 = 0LL;
  v15 = 0LL;
  v3 = this + 53;
  AcquireSRWLockExclusive(this + 53);
  v5 = (struct KBViewInfo ***)&this[54];
  v6 = 0LL;
  Ptr = 0LL;
  if ( &v14 == (__int128 *)&this[54] )
  {
    v9 = *((_QWORD *)&v14 + 1);
    v8 = (struct KBViewInfo **)v14;
  }
  else
  {
    v6 = *v5;
    v8 = *v5;
    *(_QWORD *)&v14 = *v5;
    *v5 = 0LL;
    Ptr = (struct KBViewInfo **)this[55].Ptr;
    v9 = (__int64)Ptr;
    *((_QWORD *)&v14 + 1) = Ptr;
    this[55].Ptr = 0LL;
    v2 = this[56].Ptr;
    v15 = v2;
    this[56].Ptr = 0LL;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  while ( v6 != Ptr )
  {
    v10 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, *v6, v4);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1612,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    v6 += 2;
  }
  v11 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v11 > 5u )
  {
    v17 = (v9 - (__int64)v8) >> 4;
    v18 = (const wchar_t *)"viewInfo cleared";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)v11,
      byte_1807D1B1C,
      v12,
      v13,
      &v18,
      (__int64)&v17);
  }
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v8, v9);
    std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)((v2 - (_BYTE *)v8) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
