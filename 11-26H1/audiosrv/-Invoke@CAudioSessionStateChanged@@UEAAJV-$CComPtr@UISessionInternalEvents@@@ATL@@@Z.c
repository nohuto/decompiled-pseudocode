/*
 * XREFs of ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18005EAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStateChanged::Invoke(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*a2 + 56LL))(
         *a2,
         (*(_QWORD *)(a1 + 8) + 8LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 8) >> 64),
         *(unsigned int *)(a1 + 16),
         *(unsigned int *)(a1 + 20));
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v3;
}
