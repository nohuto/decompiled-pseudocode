/*
 * XREFs of ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800CF99C
 * Callers:
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800CF1C4 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800CF8E4 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@PEAV10@00@Z @ 0x1800CE90C (--$_Move_unchecked@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@ULe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCRawInputProvider::RemoveDeviceImpl(MPCRawInputProvider *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  _QWORD *i; // rsi
  char v6; // al
  _DWORD *v7; // rbp
  _DWORD *j; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  std::_Ref_count_base *v13; // rcx
  _DWORD *k; // rsi
  _DWORD *v15; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  for ( i = (_QWORD *)*((_QWORD *)this + 3); ; i += 2 )
  {
    if ( i == *((_QWORD **)this + 4) )
    {
      v6 = 0;
      goto LABEL_6;
    }
    if ( *(_DWORD *)*i == a2 )
      break;
  }
  v6 = 1;
LABEL_6:
  v7 = (_DWORD *)*((_QWORD *)this + 24);
  j = (_DWORD *)*((_QWORD *)this + 23);
  if ( v6 )
  {
    while ( j != v7 && j[1] != a2 )
      j += 752;
    while ( 1 )
    {
      v9 = (__int64 *)*((_QWORD *)this + 2);
      v10 = *v9;
      if ( j == *((_DWORD **)this + 24) )
        break;
      v11 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v10 + 24))(v9, j);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x14D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v11,
          v16);
      std::_Copy_memmove<enum _Button *,enum _Button *>(j + 752, *((_QWORD *)this + 24), j);
      *((_QWORD *)this + 24) -= 3008LL;
      for ( j = (_DWORD *)*((_QWORD *)this + 23); j != *((_DWORD **)this + 24) && j[1] != a2; j += 752 )
        ;
    }
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v10 + 64))(v9, *i);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x155,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        (const char *)(unsigned int)v12,
        v16);
    std::_Move_unchecked<std::shared_ptr<LegacyDeviceInfo> *,std::shared_ptr<LegacyDeviceInfo> *>(
      i + 2,
      *((__int64 **)this + 4),
      i);
    v13 = *(std::_Ref_count_base **)(*((_QWORD *)this + 4) - 8LL);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    *((_QWORD *)this + 4) -= 16LL;
  }
  else
  {
    while ( j != v7 && j[1] != a2 )
      j += 752;
    if ( j != v7 )
    {
      for ( k = j + 752; k != v7; k += 752 )
      {
        if ( k[1] != a2 )
        {
          memcpy_0(j, k, 0xBC0uLL);
          j += 752;
        }
      }
    }
    v15 = (_DWORD *)*((_QWORD *)this + 24);
    if ( j != v15 )
      *((_QWORD *)this + 24) = std::_Copy_memmove<enum _Button *,enum _Button *>(v15, *((_QWORD *)this + 24), j);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
