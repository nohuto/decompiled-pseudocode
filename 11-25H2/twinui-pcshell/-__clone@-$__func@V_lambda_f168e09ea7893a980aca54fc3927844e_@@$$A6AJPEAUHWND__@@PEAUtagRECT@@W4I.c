/*
 * XREFs of ?__clone@?$__func@V_lambda_f168e09ea7893a980aca54fc3927844e_@@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@23@@Z @ 0x1803B21C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_f168e09ea7893a980aca54fc3927844e_,long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::__clone(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *(_QWORD *)a2 = &wistd::__function::__func<_lambda_f168e09ea7893a980aca54fc3927844e_,long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::`vftable';
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 16) = result;
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
