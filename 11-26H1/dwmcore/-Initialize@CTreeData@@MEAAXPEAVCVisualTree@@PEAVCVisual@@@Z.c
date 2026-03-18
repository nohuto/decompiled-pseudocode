/*
 * XREFs of ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18008C850
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??$destruct_range@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18008CC18 (--$destruct_range@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTreeData::Initialize(CTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rsi
  _QWORD *v7; // rbp
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r9
  void *v11; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)this + 31) = a3;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_WORD *)this + 6) = 257;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 34) = 16843008;
  v4 = (_QWORD *)*((_QWORD *)this + 22);
  v5 = (__int64)(*((_QWORD *)this + 23) - (_QWORD)v4) >> 3;
  if ( v5 )
  {
    v6 = 8 * v5;
    v7 = &v4[v5];
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v12, *((_QWORD *)this + 22), v5);
    while ( v4 != v7 )
    {
      if ( *v4 )
        (**(void (__fastcall ***)(_QWORD, __int64))*v4)(*v4, 1LL);
      ++v4;
    }
    *((_QWORD *)this + 23) -= v6;
  }
  v8 = (__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) >> 3;
  if ( v8 )
  {
    v9 = 8 * v8;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v12, *((_QWORD *)this + 18), v8);
    detail::destruct_range<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>>(v10, v9 + v10);
    *((_QWORD *)this + 19) -= v9;
  }
  v11 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v11 )
    operator delete(v11, 0x10uLL);
  (*(void (__fastcall **)(CTreeData *, struct CVisualTree *))(*(_QWORD *)this + 32LL))(this, a2);
}
