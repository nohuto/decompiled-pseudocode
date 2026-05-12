/*
 * XREFs of sub_14012AFF8 @ 0x14012AFF8
 * Callers:
 *     sub_140128F6C @ 0x140128F6C (sub_140128F6C.c)
 * Callees:
 *     sub_1400F045C @ 0x1400F045C (sub_1400F045C.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 */

void __fastcall sub_14012AFF8(__int64 a1)
{
  struct _ERESOURCE *v2; // rbp
  __int64 *v3; // rdi
  __int64 *i; // rbx

  KeEnterCriticalRegion();
  v2 = (struct _ERESOURCE *)(a1 + 1176);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
  v3 = (__int64 *)(a1 + 1288);
  for ( i = *(__int64 **)(a1 + 1288); i != v3; i = (__int64 *)*i )
  {
    if ( (int)sub_1400F045C(i - 14) < 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)*((int *)i + 216), 5, 1);
      sub_1400F24C8((__int64)(i - 14), 0x80000009, 4LL, 1);
      *((_DWORD *)i + 266) = 46;
    }
  }
  ExReleaseResourceLite(v2);
  KeLeaveCriticalRegion();
}
