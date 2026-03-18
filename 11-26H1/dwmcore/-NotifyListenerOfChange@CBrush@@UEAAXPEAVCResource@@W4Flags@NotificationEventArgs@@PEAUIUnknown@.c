/*
 * XREFs of ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180184720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // edi

  v5 = a3;
  if ( a3 == 14 && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, 16LL) )
    v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, 156LL) && !v5 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, 5LL, 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 80LL))(a2, v5, a4);
}
