/*
 * XREFs of ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180551320
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180551B10 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@?$map@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x180550008 (--$_Try_emplace@AEBQEAUHWND__@@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ExeDataCache::SaveExeData(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  wil::AcquireSRWLockExclusive(&v8, (RTL_SRWLOCK *)a1);
  std::map<HWND__ *,ExeData>::_Try_emplace<HWND__ * const &,unsigned int &,std::wstring const &,std::wstring const &>(
    (__int64 *)(a1 + 8),
    (__int64)v7,
    &v9,
    &v10,
    a4,
    a5);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
}
