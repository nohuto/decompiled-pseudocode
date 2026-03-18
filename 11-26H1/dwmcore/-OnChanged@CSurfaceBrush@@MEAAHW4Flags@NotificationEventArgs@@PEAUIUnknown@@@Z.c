/*
 * XREFs of ?OnChanged@CSurfaceBrush@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180187920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CSurfaceBrush::OnChanged(__int64 a1, int a2)
{
  __int64 v2; // rdx

  return !a2
      || (v2 = *(_QWORD *)(a1 + 184)) == 0
      || *(_QWORD *)(a1 + 88) != v2
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 48LL))(*(_QWORD *)(a1 + 192)) != 0;
}
