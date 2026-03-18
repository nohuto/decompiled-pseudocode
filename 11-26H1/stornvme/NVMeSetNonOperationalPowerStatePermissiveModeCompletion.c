/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveModeCompletion @ 0x14002AD20
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSetNonOperationalPowerStatePermissiveModeCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // rbx

  result = GetSrbExtension(a2);
  v4 = result;
  if ( (*(_BYTE *)(v3 + 21) & 8) != 0 )
    result = StorPortExtendedFunction(85LL, v3, 0LL, 0LL);
  *(_BYTE *)(v4 + 4225) |= 8u;
  return result;
}
