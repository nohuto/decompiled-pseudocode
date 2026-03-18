/*
 * XREFs of ?Create@?$CWeakReference@VCResource@@@@SAXPEAVCResource@@PEAPEAV1@@Z @ 0x180191C28
 * Callers:
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAXPEAVCResource@@@Z @ 0x180191BA4 (-RegisterIndirectTarget@CBaseExpression@@QEAAXPEAVCResource@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x180243450 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18024397C (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWeakReference<CResource>::Create(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  char *v6; // rax
  _QWORD *v7; // rbx
  void (__fastcall *v8)(_QWORD *); // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 16) )
  {
    v6 = (char *)MIDL_user_allocate(0x60uLL);
    v7 = v6;
    if ( !v6 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    *((_DWORD *)v6 + 2) = 0;
    *(_QWORD *)v6 = &CMILCOMWeakRef::`vftable';
    InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
    v7[7] = a1;
    *v7 = &CResourceWeakRef::`vftable';
    v8 = (void (__fastcall *)(_QWORD *))*(&CResourceWeakRef::`vftable' + 1);
    v7[8] = a1;
    v7[9] = 0LL;
    v7[10] = 0LL;
    v7[11] = 0LL;
    v8(v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), (signed __int64)v7, 0LL) )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  v4 = *(_QWORD *)(a1 + 16);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = v4;
  return result;
}
