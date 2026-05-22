/*
 * XREFs of ?FlushInteresting@TwoFingerGestureRecognizer@@UEAAXW4GestureType@@@Z @ 0x1801BA6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TwoFingerGestureRecognizer::FlushInteresting(__int64 a1, unsigned int a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 24LL))(a1 + 16);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 88) + 24LL))(a1 + 88, a2);
}
