/*
 * XREFs of ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C60A0
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1802091E4 (--$move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array_iterator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r14
  __int64 v5; // rdi
  _QWORD *result; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]

  v1 = *a1;
  v3 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1 - 40) >> 3) + 1;
  if ( v4 > v3 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1800C61CFLL);
  }
  v5 = v1 + 8 * ((a1[1] - *a1) >> 3);
  result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v12, *a1, v3);
  if ( v4 != v8 )
  {
    v10 = v12;
    v11 = v13;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v10, v7);
    v12 = v10;
    v13 = v11;
    result = (_QWORD *)((__int64 (__fastcall *)(__int128 *, unsigned __int64, __int64, __int128 *))std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>)(
                         &v10,
                         v1 + 40 * v4,
                         v5,
                         &v12);
  }
  v9 = v5 - 40;
  do
  {
    if ( *(_BYTE *)(v9 + 8) && *(_QWORD *)v9 )
      result = (_QWORD *)(***(__int64 (__fastcall ****)(_QWORD, __int64))v9)(*(_QWORD *)v9, 1LL);
    *(_QWORD *)v9 = 0LL;
    *(_BYTE *)(v9 + 8) = 0;
    v9 += 40LL;
  }
  while ( v9 != v5 );
  a1[1] -= 40LL;
  return result;
}
