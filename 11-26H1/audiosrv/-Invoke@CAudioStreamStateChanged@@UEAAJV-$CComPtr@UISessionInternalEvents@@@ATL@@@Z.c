/*
 * XREFs of ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180055EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStreamStateChanged::Invoke(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned int v10; // edi

  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v5 + 8;
  if ( !v5 )
    v7 = 0LL;
  v8 = v6 + 8;
  if ( !v6 )
    v8 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 80LL))(
             v4,
             v8,
             *(unsigned int *)(a1 + 16),
             *(unsigned int *)(a1 + 20),
             v7);
  v10 = result;
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v10;
  }
  return result;
}
