/*
 * XREFs of ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180153B44
 * Callers:
 *     ?MilCompositionEngine_CreateChannel@@YAJPEAUIDwmChannelProvider@@PEAPEAUIDwmChannelPrivate@@@Z @ 0x180153A90 (-MilCompositionEngine_CreateChannel@@YAJPEAUIDwmChannelProvider@@PEAPEAUIDwmChannelPrivate@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18011560C (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z @ 0x180153C74 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180153DFC (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801AAD1C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801DD7C8 (--1-$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x180233670 (-Release@CChannel@@UEAAKXZ.c)
 */

__int64 __fastcall CInternalMilCmdConnection::CreateChannel(
        RTL_SRWLOCK *this,
        struct IDwmChannelProvider *a2,
        struct CChannel **a3)
{
  RTL_SRWLOCK *v3; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  struct CChannel *v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CChannel *v19; // [rsp+50h] [rbp+8h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v20; // [rsp+68h] [rbp+20h] BYREF

  v3 = this + 16;
  *(_QWORD *)v17 = this + 16;
  CReadWriteLock::AcquireExclusive(this + 16);
  v19 = 0LL;
  v7 = CChannel::Create((struct CInternalMilCmdConnection *)this, a2, &v19);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)v7);
    if ( v19 )
      CChannel::Release(v19);
    if ( v3 )
    {
      LODWORD(v3[1].Ptr) = 0;
      ReleaseSRWLockExclusive(v3);
    }
    return v8;
  }
  else
  {
    v9 = v19;
    v20 = 0LL;
    v10 = CChannelTable::AssignChannelEntry((CChannelTable *)&this[6], *((_DWORD *)v19 + 18), &v20);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<CChannel,wil::err_returncode_policy>::~com_ptr_t<CChannel,wil::err_returncode_policy>(&v19);
      CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(v17, v14, v15, v16);
      return v11;
    }
    else
    {
      v12 = v20;
      *a3 = v9;
      *((_QWORD *)v12 + 1) = v9;
      if ( v3 )
      {
        LODWORD(v3[1].Ptr) = 0;
        ReleaseSRWLockExclusive(v3);
      }
      return 0LL;
    }
  }
}
