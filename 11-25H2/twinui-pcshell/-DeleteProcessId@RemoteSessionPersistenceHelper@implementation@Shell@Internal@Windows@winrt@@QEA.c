/*
 * XREFs of ?DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x18063D554
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x18062B078 (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x18062C890 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$?RH@?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@QEBA_KAEBH@Z @ 0x1800988F4 (--$-RH@-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std@@QEBA_KAEBH@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@1@AEBI@Z @ 0x1801FA6C8 (--$find@X@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$al.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x180297B78 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@UHostProcessData@implementation@Shell@Int.c)
 *     ??$_Erase@I@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x18063C498 (--$_Erase@I@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@UHostProcessData@implementation@Shell@Interna.c)
 *     ??$_Erase@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x18063C53C (--$_Erase@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x18063C694 (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@.c)
 *     ?DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXAEB_KAEBUhstring@6@AEB_N@Z @ 0x18063D498 (-DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteProcessId(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *this,
        unsigned int a2,
        const struct winrt::hstring *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  v13 = a2;
  LOBYTE(v12) = 1;
  v14 = a2;
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteIdFromStorage(
    this,
    &v14,
    a3,
    (bool *)&v12);
  wil::AcquireSRWLockExclusive(&v12, (RTL_SRWLOCK *)this);
  v5 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Try_emplace<winrt::hstring const &,>(
         (_QWORD *)this + 9,
         (__int64)v11,
         (__int64 *)a3);
  v6 = std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::find<void>(
         (_QWORD *)(*(_QWORD *)v5 + 24LL),
         &v14,
         &v13);
  if ( *v6 != *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Try_emplace<winrt::hstring const &,>(
                                       (_QWORD *)this + 9,
                                       (__int64)v11,
                                       (__int64 *)a3)
                        + 32LL) )
  {
    v7 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Try_emplace<winrt::hstring const &,>(
           (_QWORD *)this + 9,
           (__int64)v11,
           (__int64 *)a3);
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Erase<unsigned int>(
      (_QWORD *)(*(_QWORD *)v7 + 24LL),
      (__int64)&v13);
    v9 = std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>::operator()<int>(v8, (__int64)&v13);
    v10 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>,0>>::_Find_last<unsigned int>(
            (_QWORD *)this + 17,
            v11,
            &v13,
            v9)[1];
    if ( !v10 )
      v10 = *((_QWORD *)this + 18);
    if ( v10 != *((_QWORD *)this + 18) )
      std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>,0>>::_Erase<unsigned int>(
        (_QWORD *)this + 17,
        (__int64)&v13);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
}
