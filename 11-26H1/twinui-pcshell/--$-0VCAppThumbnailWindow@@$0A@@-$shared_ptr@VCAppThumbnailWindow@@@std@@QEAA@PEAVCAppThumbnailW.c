/*
 * XREFs of ??$?0VCAppThumbnailWindow@@$0A@@?$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailWindow@@@Z @ 0x180498B80
 * Callers:
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049AF88 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??1?$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ @ 0x180499BAC (--1-$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::shared_ptr<CAppThumbnailWindow>::shared_ptr<CAppThumbnailWindow>(_QWORD *a1, _QWORD *a2)
{
  void *v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v11 = a2;
  v4 = operator new(0x18uLL);
  v11 = v4;
  *(_OWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count<CAppThumbnailWindow>::`vftable';
  *((_QWORD *)v4 + 2) = a2;
  *a1 = a2;
  a1[1] = v4;
  if ( a2 )
  {
    v5 = a2[1];
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      _InterlockedAdd((volatile signed __int32 *)v4 + 2, 1u);
      v6 = (volatile signed __int32 *)a1[1];
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 )
      {
        v7 = a2;
        v8 = a1[1];
        _InterlockedAdd(v6 + 3, 1u);
      }
      *a2 = v7;
      v9 = (std::_Ref_count_base *)a2[1];
      a2[1] = v8;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      if ( v6 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
    }
  }
  v11 = 0LL;
  std::_Temporary_owner<CAppThumbnailWindow>::~_Temporary_owner<CAppThumbnailWindow>(&v11);
  return a1;
}
