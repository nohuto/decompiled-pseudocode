/*
 * XREFs of RIMDeleteAllAsyncWorkNotificationItems @ 0x1401EFC94
 * Callers:
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1401E6DF8 (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMFreeAsyncWorkItem @ 0x14019A398 (RIMFreeAsyncWorkItem.c)
 */

void __fastcall RIMDeleteAllAsyncWorkNotificationItems(__int64 a1)
{
  const struct RawInputManagerObject *v1; // rdi
  const struct RawInputManagerObject *v2; // rbx
  const struct RawInputManagerObject **v3; // rcx

  v1 = (const struct RawInputManagerObject *)(a1 + 376);
  v2 = *(const struct RawInputManagerObject **)(a1 + 376);
  while ( v2 != v1 )
  {
    v3 = (const struct RawInputManagerObject **)v2;
    v2 = *(const struct RawInputManagerObject **)v2;
    RIMFreeAsyncWorkItem(v3);
  }
}
