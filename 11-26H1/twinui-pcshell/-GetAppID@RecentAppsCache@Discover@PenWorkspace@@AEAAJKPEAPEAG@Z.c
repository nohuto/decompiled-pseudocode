/*
 * XREFs of ?GetAppID@RecentAppsCache@Discover@PenWorkspace@@AEAAJKPEAPEAG@Z @ 0x1803EBED4
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x1803ED4D0 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800C1DF4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C1E58 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??$?8V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x1801C2A44 (--$-8V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetAppID(
        PenWorkspace::Discover::RecentAppsCache *this,
        DWORD a2,
        unsigned __int16 **a3)
{
  wil::details *v6; // rcx
  unsigned __int16 **v7; // r8
  void *v8; // r9
  signed int LastErrorFailHr; // eax
  unsigned int v10; // ebx
  HANDLE v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = OpenProcess(0x410u, 0, a2);
  if ( wil::operator==<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v12) )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
  }
  else if ( (int)CallerIdentity::GetProcessAppId(v8, a3, v7) >= 0
         || (LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 23) + 48LL))(
                                 *((_QWORD *)this + 23),
                                 a2,
                                 a3,
                                 0LL,
                                 0LL,
                                 0LL),
             LastErrorFailHr >= 0) )
  {
    v10 = 0;
    goto LABEL_7;
  }
  v10 = LastErrorFailHr;
LABEL_7:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v12);
  return v10;
}
