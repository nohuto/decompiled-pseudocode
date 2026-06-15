/*
 * XREFs of ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180081510
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180029304 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180029710 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180037160 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180044870 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::GetId(const void **this, unsigned __int16 **a2)
{
  int v4; // ebx
  unsigned __int16 *v5; // rbx
  size_t v6; // rdi
  unsigned __int16 *v7; // rax
  unsigned __int16 *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v4 = CAudioSessionInstanceId::ToPersistedString(this + 73, &v9, 0);
  if ( v4 < 0 )
    goto LABEL_6;
  v5 = v9;
  v6 = 2LL * (*((_DWORD *)v9 - 4) + 1);
  v7 = (unsigned __int16 *)MIDL_user_allocate(v6);
  *a2 = v7;
  if ( !v7 )
  {
    ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
    return 2147942414LL;
  }
  v4 = StringCbCopyW((char *)v7, v6, (char *)v5);
  if ( v4 < 0 )
  {
    operator delete(*a2);
    *a2 = 0LL;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetId", 403, v4);
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v9);
  return (unsigned int)v4;
}
