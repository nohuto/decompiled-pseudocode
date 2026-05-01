/*
 * XREFs of ??$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@AEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@AEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@Z @ 0x180646888
 * Callers:
 *     ?CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@3456@AEBU7RemoteSystemData@@@Z @ 0x18064AF24 (-CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AURe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCState@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1806653AC (--0RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBW4CloudPCStat.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState,std::chrono::duration<int,std::ratio<60,1>> &>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int *a4)
{
  _QWORD *v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h]

  v10 = (__int64)a1;
  v8 = operator new(0x40uLL);
  v11 = v8;
  v10 = 600000000LL * *a4;
  winrt::Windows::Internal::Shell::implementation::RemoteSystem::RemoteSystem(v8, a2, a3, &v10);
  *v8 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystem>::`vftable';
  *a1 = v8 + 2;
  return a1;
}
