/*
 * XREFs of ??1folder_change_reader_state@details@wil@@QEAA@XZ @ 0x1805841D8
 * Callers:
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x180584654 (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

void __fastcall wil::details::folder_change_reader_state::~folder_change_reader_state(
        wil::details::folder_change_reader_state *this)
{
  struct _TP_IO *v1; // rsi
  void **v2; // rbx
  void *v4; // rcx
  void *v5; // rcx
  RTL_SRWLOCK *NumberOfBytesTransferred; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _TP_IO *)*((_QWORD *)this + 21);
  v2 = (void **)((char *)this + 120);
  if ( v1 )
  {
    wil::AcquireSRWLockExclusive(&NumberOfBytesTransferred, (RTL_SRWLOCK *)this + 22);
    *((_QWORD *)this + 21) = 0LL;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&NumberOfBytesTransferred);
    v4 = *v2;
    if ( *v2 && v4 != (void *)-1LL && (CancelIoEx(v4, (LPOVERLAPPED)((char *)this + 136)) || GetLastError() != 1168) )
    {
      v5 = *v2;
      LODWORD(NumberOfBytesTransferred) = 0;
      GetOverlappedResult(v5, (LPOVERLAPPED)((char *)this + 136), (LPDWORD)&NumberOfBytesTransferred, 1);
    }
    WaitForThreadpoolIoCallbacks(v1, 1);
    CloseThreadpoolIo(v1);
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v2);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)this);
}
