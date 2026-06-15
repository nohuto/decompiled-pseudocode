/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180012A00
 * Callers:
 *     ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x180011100 (--$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudio.c)
 *     ??$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionInfo@@PEA_N@Z@std@@@Z @ 0x180023080 (--$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudioSessionIn.c)
 * Callees:
 *     ?_Xlength@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@CAXXZ @ 0x18002EBBC (-_Xlength@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@std@@CAXXZ.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall std::vector<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy> const &>(
        unsigned __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  SIZE_T v12; // r15
  unsigned __int64 v13; // rsi
  HANDLE v14; // rax
  LPVOID v15; // rax
  HANDLE ProcessHeap; // rax
  __int64 *v17; // rbp
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  __int64 *v20; // r8
  __int64 *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *i; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rbx
  _QWORD *j; // rdi
  _QWORD *v29; // rcx
  const struct std::nothrow_t *v30; // rdx

  v4 = a2;
  v6 = (__int64)((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CApplication *>::_Xlength();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    goto LABEL_35;
  v10 = (v9 >> 1) + v9;
  v11 = v8;
  if ( v10 >= v8 )
    v11 = v10;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_35;
  v12 = 8 * v11;
  if ( !(8 * v11) )
  {
    v13 = 0LL;
    goto LABEL_13;
  }
  if ( v12 < 0x1000 )
  {
    ProcessHeap = GetProcessHeap();
    v13 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v12);
    goto LABEL_13;
  }
  if ( v12 + 39 < v12 )
LABEL_35:
    std::_Throw_bad_array_new_length();
  v14 = GetProcessHeap();
  v15 = HeapAlloc(v14, 0, v12 + 39);
  if ( !v15 )
    goto LABEL_33;
  v13 = ((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v13 - 8) = v15;
LABEL_13:
  v17 = (__int64 *)(v13 + 8 * v6);
  v18 = v17 + 1;
  v19 = *a3;
  *v17 = *a3;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = (__int64 *)a1[1];
  v21 = (__int64 *)*a1;
  v22 = (_QWORD *)v13;
  if ( v4 == v20 )
  {
    for ( ; v21 != v20; ++v21 )
    {
      v23 = *v21;
      *v21 = 0LL;
      *v22++ = v23;
    }
  }
  else
  {
    for ( ; v21 != v4; ++v21 )
    {
      v24 = *v21;
      *v21 = 0LL;
      *v22++ = v24;
    }
    for ( i = (__int64 *)a1[1]; v4 != i; ++v4 )
    {
      v26 = *v4;
      *v4 = 0LL;
      *v18++ = v26;
    }
  }
  v27 = (_QWORD *)*a1;
  if ( *a1 )
  {
    for ( j = (_QWORD *)a1[1]; v27 != j; ++v27 )
    {
      if ( *v27 )
        (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v27 + 16LL))(*v27, v22);
    }
    v29 = (_QWORD *)*a1;
    v30 = (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v30 < 0x1000 )
      goto LABEL_31;
    v30 = (const struct std::nothrow_t *)((char *)v30 + 39);
    if ( (unsigned __int64)v29 - *(v29 - 1) - 8 <= 0x1F )
    {
      v29 = (_QWORD *)*(v29 - 1);
LABEL_31:
      operator delete(v29, v30);
      goto LABEL_32;
    }
LABEL_33:
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  }
LABEL_32:
  *a1 = v13;
  a1[1] = v13 + 8 * v8;
  a1[2] = v12 + v13;
  return v17;
}
