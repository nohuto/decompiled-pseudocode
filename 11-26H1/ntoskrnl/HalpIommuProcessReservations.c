/*
 * XREFs of HalpIommuProcessReservations @ 0x14059084C
 * Callers:
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpIommuProcessReservationsInternal @ 0x1405908A8 (HalpIommuProcessReservationsInternal.c)
 */

__int64 __fastcall HalpIommuProcessReservations(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  __int64 result; // rax

  v1 = (ULONG_PTR *)HalpIommuList;
  result = 0LL;
  while ( v1 != &HalpIommuList )
  {
    if ( v1[43] )
    {
      result = HalpIommuProcessReservationsInternal(v1, a1);
      if ( (int)result < 0 )
        break;
    }
    v1 = (ULONG_PTR *)*v1;
  }
  return result;
}
