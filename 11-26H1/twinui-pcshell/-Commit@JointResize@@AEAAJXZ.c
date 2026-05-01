/*
 * XREFs of ?Commit@JointResize@@AEAAJXZ @ 0x1805381DC
 * Callers:
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x180538EA0 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall JointResize::Commit(JointResize *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r14
  _DWORD *v7; // r8
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v15 = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18))(
         *((_QWORD *)this + 18),
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         &v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 612LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_31;
  }
  v16 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 26) + 128LL))(*((_QWORD *)this + 26), &v16);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 614LL;
    goto LABEL_5;
  }
  v5 = *((_QWORD *)this + 27);
  v6 = *((_QWORD *)this + 28);
  while ( v5 != v6 )
  {
    v7 = (_DWORD *)(v5 + 80);
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(v5 + 24);
    switch ( *(_DWORD *)(v5 + 8) )
    {
      case 0xA:
        v11 = v16;
        if ( *(_BYTE *)(v5 + 40) )
          v11 = DWORD2(v16);
        *v7 = v11;
        break;
      case 0xB:
        v10 = DWORD2(v16);
        if ( *(_BYTE *)(v5 + 40) )
          v10 = v16;
        *(_DWORD *)(v5 + 88) = v10;
        break;
      case 0xC:
        v9 = DWORD1(v16);
        if ( *(_BYTE *)(v5 + 40) )
          v9 = HIDWORD(v16);
        *(_DWORD *)(v5 + 84) = v9;
        break;
      case 0xF:
        v8 = HIDWORD(v16);
        if ( *(_BYTE *)(v5 + 40) )
          v8 = DWORD1(v16);
        *(_DWORD *)(v5 + 92) = v8;
        break;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v15 + 24LL))(
            v15,
            *(_QWORD *)(v5 + 16),
            v7,
            3LL);
    if ( v12 < 0 )
    {
      v13 = 638LL;
      goto LABEL_29;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 16) + 40LL))(
            *((_QWORD *)this + 16),
            *(_QWORD *)(v5 + 16),
            *((_QWORD *)this + 36));
    if ( v12 < 0 )
    {
      v13 = 642LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v12);
      v3 = v12;
      goto LABEL_31;
    }
    v5 += 96LL;
  }
  v3 = 0;
LABEL_31:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  return v3;
}
