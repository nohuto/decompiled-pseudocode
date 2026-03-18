/*
 * XREFs of ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1801C1FB8
 * Callers:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1801C1DA8 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?AllocateStubUnderLock@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z @ 0x1801C209C (-AllocateStubUnderLock@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBam.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18023FA30 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  struct Microsoft::BamoImpl::BamoStubImpl *StubUnderLock; // rdi
  void (__fastcall *v4)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, struct Microsoft::BamoImpl::BamoStubImpl *); // rbx
  struct IMessageCallSendHost *SendHost; // rax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)a2 + 3) != *((_QWORD *)this + 2) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A4,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)0x87B20819LL,
      v8);
  StubUnderLock = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 4);
  if ( !StubUnderLock )
    goto LABEL_7;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)StubUnderLock + 4) + 36LL) == *((_DWORD *)a2 + 9) )
      break;
    StubUnderLock = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)StubUnderLock + 5);
  }
  while ( StubUnderLock );
  if ( !StubUnderLock )
LABEL_7:
    StubUnderLock = Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStubUnderLock(this, a2);
  if ( !*((_BYTE *)StubUnderLock + 56) )
  {
    *((_BYTE *)StubUnderLock + 56) = 1;
    *((_BYTE *)StubUnderLock + 59) = 1;
    v4 = *(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 64LL);
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)StubUnderLock
                                                                  + 4));
    v4(this, SendHost, StubUnderLock);
    v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)StubUnderLock + 48LL))(StubUnderLock);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v6,
        v8);
  }
  ++*((_DWORD *)StubUnderLock + 4);
  *((_BYTE *)StubUnderLock + 60) = 1;
  return *((unsigned int *)this + 6);
}
