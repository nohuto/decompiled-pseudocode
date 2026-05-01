/*
 * XREFs of ?RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801DDB74
 * Callers:
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801DDA6C (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180235658 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::RegisterHotkeys(RTL_SRWLOCK *this)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // r15d
  int *v7; // rdi
  const unsigned __int16 **v8; // r14
  unsigned int v9; // edx
  char v10; // cl
  int v11; // eax
  int v12; // eax
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  _OWORD v16[28]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  if ( (unsigned int)CloudPCHelpers::GetCloudPCMode() == 1 )
    return 0LL;
  v13 = 0LL;
  wil::AcquireSRWLockExclusive(&v13, this + 122);
  if ( LODWORD(this[123].Ptr) )
  {
    v3 = -2147418113;
  }
  else
  {
    memset_0(v16, 0, sizeof(v16));
    v4 = 0;
    v5 = 0LL;
    do
    {
      v16[v5] = *(_OWORD *)((char *)&unk_18079C1F0 + v5 * 16);
      ++v4;
      ++v5;
    }
    while ( v4 < 0xA );
    v6 = 0;
    v7 = (int *)&v16[v4] + 2;
    v8 = (const unsigned __int16 **)&off_18075FD90;
    do
    {
      v14 = 0;
      v15 = 0;
      if ( SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR", *(v8 - 1), &v14) >= 0
        && SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR", *v8, &v15) >= 0 )
      {
        v9 = v14;
        if ( v14 )
        {
          v10 = v15;
          if ( v15 )
          {
            if ( (v15 & 8) == 0 )
            {
              *(v7 - 2) = 0;
              *(v7 - 1) = *((_DWORD *)v8 - 4);
              v7[1] = v9;
              v11 = *v7 | 0x4800;
              *v7 = v11;
              if ( (v10 & 1) != 0 )
              {
                v11 |= 2u;
                *v7 = v11;
              }
              if ( (v10 & 2) != 0 )
              {
                v11 |= 1u;
                *v7 = v11;
              }
              if ( (v10 & 4) != 0 )
                *v7 = v11 | 4;
              ++v4;
              v7 += 4;
            }
          }
        }
      }
      ++v6;
      v8 += 3;
    }
    while ( v6 < 0x12 );
    v12 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _OWORD *, unsigned __int64, RTL_SRWLOCK *))(*(_QWORD *)this[55].Ptr
                                                                                              + 24LL))(
            this[55].Ptr,
            v4,
            v16,
            (unsigned __int64)&this[21] & -(__int64)(this != 0LL),
            this + 123);
    v3 = v12;
    if ( v12 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124D,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v12);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
  return v3;
}
