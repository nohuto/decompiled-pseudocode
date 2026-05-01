/*
 * XREFs of ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x1805610E8
 * Callers:
 *     ?make_folder_change_reader@wil@@YA?AV?$unique_any_t@V?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@1@PEBG_NW4FolderChangeEvents@1@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x180561278 (-make_folder_change_reader@wil@@YA-AV-$unique_any_t@V-$folder_change_reader_t@V-$unique_storage@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800D2B94 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0folder_change_reader_state@details@wil@@QEAA@_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x1802B072C (--0folder_change_reader_state@details@wil@@QEAA@_NW4FolderChangeEvents@2@$$QEAV-$function@$$A6AX.c)
 *     ?StartIo@folder_change_reader_state@details@wil@@QEAAJXZ @ 0x1802B9F30 (-StartIo@folder_change_reader_state@details@wil@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x180560654 (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x1805612D0 (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create_common(
        __int64 a1,
        const WCHAR *a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5)
{
  void *v9; // rax
  __int64 v10; // rdi
  unsigned int LastError; // ebx
  HANDLE FileW; // rax
  const char *v14; // r9
  void *v15; // rcx
  __int64 v16; // rdx
  PTP_IO ThreadpoolIo; // rax
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = operator new(0x10B8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
    v10 = wil::details::folder_change_reader_state::folder_change_reader_state((__int64)v9, a3, a4, a5);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x321,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
      (const char *)0x8007000ELL);
    return LastError;
  }
  FileW = CreateFileW(a2, 1u, 7u, 0LL, 3u, 0x42000000u, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(v10 + 120),
    FileW);
  v15 = *(void **)(v10 + 120);
  if ( (((unsigned __int64)v15 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v16 = 811LL;
LABEL_11:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v16,
                  (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                  v14);
LABEL_14:
    wil::details::folder_change_reader_state::`scalar deleting destructor'((wil::details::folder_change_reader_state *)v10);
    return LastError;
  }
  ThreadpoolIo = CreateThreadpoolIo(
                   v15,
                   (PTP_WIN32_IO_CALLBACK)wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_exception_policy>::callback,
                   (PVOID)v10,
                   0LL);
  *(_QWORD *)(v10 + 168) = ThreadpoolIo;
  if ( !ThreadpoolIo )
  {
    v16 = 815LL;
    goto LABEL_11;
  }
  started = wil::details::folder_change_reader_state::StartIo((wil::details::folder_change_reader_state *)v10);
  LastError = started;
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x330,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
      (const char *)(unsigned int)started);
    goto LABEL_14;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
    a1,
    v10);
  return 0LL;
}
