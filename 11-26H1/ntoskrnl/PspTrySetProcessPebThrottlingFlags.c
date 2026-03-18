/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x1407F14B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlInterlockedAnd32ToUser @ 0x14077F35C (RtlInterlockedAnd32ToUser.c)
 *     RtlInterlockedOr32ToUser @ 0x14077F458 (RtlInterlockedOr32ToUser.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2)
{
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v5; // rbx
  __int64 *ReadyTime; // rax
  struct _LIST_ENTRY *v7; // rcx
  _OWORD v9[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  KiStackAttachProcess(a1, 0, (__int64)v9);
  Blink = a1[1].ProcessListEntry.Blink;
  if ( Blink )
  {
    v5 = 0LL;
    ReadyTime = (__int64 *)a1[1].ReadyTime;
    if ( ReadyTime )
      v5 = *ReadyTime;
    v7 = Blink + 5;
    if ( a2 )
    {
      RtlInterlockedOr32ToUser(v7, 0x60u);
      if ( v5 )
        RtlInterlockedOr32ToUser((volatile void *)(v5 + 40), 0x60u);
    }
    else
    {
      RtlInterlockedAnd32ToUser(v7, 0xFFFFFFBF);
      if ( v5 )
        RtlInterlockedAnd32ToUser((volatile void *)(v5 + 40), 0xFFFFFFBF);
    }
  }
  return KiUnstackDetachProcess((__int64)v9, 0);
}
