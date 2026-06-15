/*
 * XREFs of ?SendNotification@AudioStateMonitorManager@@AEAAJ_K@Z @ 0x180027090
 * Callers:
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x18001210C (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180026DEC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$unique_ptr@UAUDIOSTATEMONITOR_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIOSTATEMONITOR_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18002EA5C (--1-$unique_ptr@UAUDIOSTATEMONITOR_NOTIFICATION_BLOCK@@U-$default_delete@UAUDIOSTATEMONITOR_NOTI.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioStateMonitorManager::SendNotification(AudioStateMonitorManager *this, __int64 a2)
{
  _DWORD *v2; // rbx
  unsigned int v3; // edi
  unsigned int v6; // esi
  _DWORD *v7; // rax
  void *v8; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _DWORD *v15; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v16; // [rsp+60h] [rbp+18h] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 2);
  v3 = 0;
  if ( *v2 > 4u && tlgKeywordOn(*((_QWORD *)this + 2), 0x20000LL) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 40LL))(*((_QWORD *)this + 17));
    v11 = *((_QWORD *)this + 17);
    LODWORD(v15) = v10;
    v16 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL))(v11);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v2,
      byte_18005B8A5,
      v12,
      v13,
      &v16,
      (__int64)&v15);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 40LL))(*((_QWORD *)this + 17));
  v7 = operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v7;
  v8 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = 0LL;
    *v7 = 32;
    v7[1] = 0x80000;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 3) = a2;
    GenerateMediaEvent(v7, v6);
    operator delete(v8, (const struct std::nothrow_t *)0x20);
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<AUDIOSTATEMONITOR_NOTIFICATION_BLOCK>::~unique_ptr<AUDIOSTATEMONITOR_NOTIFICATION_BLOCK>(&v15);
  }
  return v3;
}
