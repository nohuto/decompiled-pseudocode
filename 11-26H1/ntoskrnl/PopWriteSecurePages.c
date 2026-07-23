/*
 * XREFs of PopWriteSecurePages @ 0x14060A050
 * Callers:
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1405C1A10 (HvlIterateSecurePagesForHibernation.c)
 *     PopWriteHiberPages @ 0x140C02C1C (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteSecurePages(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // edx
  int v3; // eax
  int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(BugCheckParameter3 + 32);
  v3 = *(_DWORD *)(BugCheckParameter3 + 168);
  v4 = *(_DWORD *)(BugCheckParameter3 + 280) + 2;
  v5 = *(_QWORD *)(BugCheckParameter3 + 160);
  ++*(_DWORD *)(BugCheckParameter3 + 284);
  v6 = (((v1 >> 3) + 4095) >> 12) + v4;
  v10 = v3 << 12;
  v9[1] = 0LL;
  v9[0] = BugCheckParameter3;
  v7 = HvlIterateSecurePagesForHibernation(BugCheckParameter3, (__int64)v9, v5, (__int64)&v10);
  if ( v7 < 0 )
    KeBugCheckEx(0xA0u, 0x10DuLL, 0xAuLL, BugCheckParameter3, v7);
  return PopWriteHiberPages(BugCheckParameter3, v5, 1LL, v6);
}
