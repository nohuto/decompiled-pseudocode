/*
 * XREFs of ??1CChannel@@AEAA@XZ @ 0x1802322A4
 * Callers:
 *     ?Release@CChannel@@UEAAKXZ @ 0x180233670 (-Release@CChannel@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x18014FEEC (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18022C1B0 (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1802323A4 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

void __fastcall CChannel::~CChannel(CChannel *this, unsigned int a2)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  CCommandBatch *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CChannel::`vftable';
  v3 = (_QWORD **)((char *)this + 80);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    operator delete(v4);
  }
  v6 = (CCommandBatch *)*((_QWORD *)this + 22);
  if ( v6 )
    CCommandBatch::`scalar deleting destructor'(v6, a2);
  CInternalMilCmdConnection::DestroyChannel(*((RTL_SRWLOCK **)this + 7), *((_DWORD *)this + 18));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 12);
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v7, *((_QWORD *)this + 3));
    std::_Deallocate<16>(*((void **)this + 2), (*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
