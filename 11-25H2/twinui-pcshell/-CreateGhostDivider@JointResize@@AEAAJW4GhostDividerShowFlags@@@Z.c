/*
 * XREFs of ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x1801C3944
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x18004AB7C (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?ObservedKeyUp@JointResize@@UEAAJI@Z @ 0x1805161D0 (-ObservedKeyUp@JointResize@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@PEAUIImmersiveMonitorManager@@PEAUHWND__@@W4GhostDividerPlacement@@W4GhostDividerSize@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A36E8 (-GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@PEAUIImmersiv.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall JointResize::CreateGhostDivider(__int64 a1, unsigned int a2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ebp
  __int64 v8; // rcx
  int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  __int64 v13; // rsi
  __int64 v14; // r14
  bool v15; // zf
  _QWORD *v16; // rsi
  int Instance; // ebx
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-68h]
  struct tagRECT rcDst; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 320) - 10;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 3 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1E9,
            (unsigned int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)0x80070057LL,
            v19);
        v7 = 3;
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)(a1 + 208);
  v9 = 0;
  rcDst = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v8 + 128LL))(v8, &rcDst);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EE,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
  v13 = *(_QWORD *)(a1 + 216);
  v14 = *(_QWORD *)(a1 + 224);
  while ( v13 != v14 )
  {
    if ( !*(_BYTE *)(v13 + 40) )
    {
      v9 = 0;
      goto LABEL_26;
    }
    v9 = 1;
    UnionRect(&rcDst, &rcDst, (const RECT *)(v13 + 24));
    v13 += 96LL;
  }
  if ( v9 == 1 )
  {
    if ( *(_DWORD *)(a1 + 320) == 10 || *(_DWORD *)(a1 + 320) == 11 )
    {
      v9 = 0;
      v15 = rcDst.bottom - rcDst.top == *(_DWORD *)(a1 + 308) - *(_DWORD *)(a1 + 300);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 320) != 12 && *(_DWORD *)(a1 + 320) != 15 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x20D,
          (unsigned int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)0x8000FFFFLL,
          v19);
      v9 = 0;
      v15 = rcDst.right - rcDst.left == *(_DWORD *)(a1 + 304) - *(_DWORD *)(a1 + 296);
    }
    LOBYTE(v9) = !v15;
  }
LABEL_26:
  v16 = (_QWORD *)(a1 + 192);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 192));
  Instance = GhostDivider_CreateInstance(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 208), 0LL, 0LL, v7, v9);
  if ( Instance < 0 )
  {
    v18 = 529LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v16 + 24LL))(*v16, a2);
  if ( Instance < 0 )
  {
    v18 = 530LL;
    goto LABEL_28;
  }
  return 0LL;
}
