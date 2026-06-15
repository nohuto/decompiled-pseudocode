/*
 * XREFs of ?GetMemory@?$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015F130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1800CEC00 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?reset@?$unique_ptr@XUmapview_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1801148DC (-reset@-$unique_ptr@XUmapview_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180162244 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSectionBasedCPClientMemory<ControlData_V1>::GetMemory(__int64 a1, _DWORD *a2, void **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  void *v8; // rcx
  void **v9; // r15
  LPVOID v10; // rax
  const char *v11; // r9
  const void *v12; // rbx
  __int64 v13; // rdx
  unsigned int v15; // eax
  SIZE_T dwNumberOfBytesToMap; // rbp
  const void *v17; // rax
  unsigned int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
  {
    if ( !a2 )
    {
      v6 = -2147024809;
      v7 = 43LL;
      goto LABEL_18;
    }
    *a3 = 0LL;
    *a2 = 0;
    v8 = *(void **)(a1 + 16);
    if ( !v8 || v8 == (void *)-1LL )
    {
      v6 = -2147467261;
      v7 = 50LL;
      goto LABEL_18;
    }
    v9 = (void **)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) )
    {
      v10 = MapViewOfFile(v8, 0xF001Fu, 0, 0, 0x1A8uLL);
      v12 = v10;
      if ( !v10 )
      {
        v13 = 58LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v13,
                 (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
                 v11);
      }
      v15 = (*(__int64 (__fastcall **)(__int64, LPVOID))(*(_QWORD *)a1 + 72LL))(a1, v10);
      dwNumberOfBytesToMap = v15;
      if ( !v15 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
          (const char *)0x887C0045LL);
        UnmapViewOfFile(v12);
        return 2289827909LL;
      }
      UnmapViewOfFile(v12);
      v17 = MapViewOfFile(*(HANDLE *)(a1 + 16), 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
      wistd::unique_ptr<void,wil::mapview_deleter>::reset((const void **)(a1 + 24), v17);
      if ( !*v9 )
      {
        v13 = 66LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v13,
                 (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
                 v11);
      }
      v18 = AERTLockMemory(*v9, dwNumberOfBytesToMap);
      wil::details::in1diag3::Log_IfFailedWithExpected(
        retaddr,
        (void *)0x47,
        (__int64)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
        (const char *)v18,
        1u,
        0x80070522);
      *(_DWORD *)(a1 + 32) = dwNumberOfBytesToMap;
    }
    *a2 = *(_DWORD *)(a1 + 32);
    *a3 = *v9;
    return 0LL;
  }
  v6 = -2147024809;
  v7 = 42LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
    (const char *)v6);
  return v6;
}
