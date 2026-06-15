/*
 * XREFs of ?GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z @ 0x18015FA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@XUmapview_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1801148DC (-reset@-$unique_ptr@XUmapview_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180162244 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall CCrossProcessKSMemory::GetMemory(CCrossProcessKSMemory *this, unsigned int *a2, void **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  void *v8; // rcx
  void **v9; // r14
  unsigned int *v10; // rax
  const char *v11; // r9
  __int64 v12; // rdx
  SIZE_T dwNumberOfBytesToMap; // rbp
  const void *v15; // rax
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
  {
    if ( !a2 )
    {
      v6 = -2147024809;
      v7 = 32LL;
      goto LABEL_18;
    }
    *a3 = 0LL;
    *a2 = 0;
    v8 = (void *)*((_QWORD *)this + 2);
    if ( !v8 || v8 == (void *)-1LL )
    {
      v6 = -2147467261;
      v7 = 39LL;
      goto LABEL_18;
    }
    v9 = (void **)((char *)this + 24);
    if ( !*((_QWORD *)this + 3) )
    {
      v10 = (unsigned int *)MapViewOfFile(v8, 0xF001Fu, 0, 0, 0x58uLL);
      if ( !v10 )
      {
        v12 = 53LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v12,
                 (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpksmemory.cpp",
                 v11);
      }
      dwNumberOfBytesToMap = *v10;
      UnmapViewOfFile(v10);
      v15 = MapViewOfFile(*((HANDLE *)this + 2), 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
      wistd::unique_ptr<void,wil::mapview_deleter>::reset((const void **)this + 3, v15);
      if ( !*v9 )
      {
        v12 = 65LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v12,
                 (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpksmemory.cpp",
                 v11);
      }
      v16 = AERTLockMemory(*v9, dwNumberOfBytesToMap);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          69LL,
          (__int64)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpksmemory.cpp",
          (const char *)(unsigned int)v16);
      *((_DWORD *)this + 8) = dwNumberOfBytesToMap;
    }
    *a2 = *((_DWORD *)this + 8);
    *a3 = *v9;
    return 0LL;
  }
  v6 = -2147024809;
  v7 = 31LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpksmemory.cpp",
    (const char *)v6);
  return v6;
}
