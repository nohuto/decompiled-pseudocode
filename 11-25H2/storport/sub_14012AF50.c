/*
 * XREFs of sub_14012AF50 @ 0x14012AF50
 * Callers:
 *     sub_1401285D0 @ 0x1401285D0 (sub_1401285D0.c)
 * Callees:
 *     sub_1400EF9BC @ 0x1400EF9BC (sub_1400EF9BC.c)
 */

void __fastcall sub_14012AF50(__int64 a1)
{
  struct _ERESOURCE *v2; // rbp
  __int64 *v3; // rsi
  __int64 *i; // rbx

  KeEnterCriticalRegion();
  v2 = (struct _ERESOURCE *)(a1 + 1176);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
  v3 = (__int64 *)(a1 + 1288);
  for ( i = *(__int64 **)(a1 + 1288); i != v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 216) == 2 && (int)sub_1400EF9BC(i - 14) < 0 )
      *((_DWORD *)i + 266) = 45;
  }
  ExReleaseResourceLite(v2);
  KeLeaveCriticalRegion();
}
