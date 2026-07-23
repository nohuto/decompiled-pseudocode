/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x1407F7010
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlInterlockedAnd32ToUser @ 0x140781E5C (RtlInterlockedAnd32ToUser.c)
 *     RtlInterlockedOr32ToUser @ 0x140781F58 (RtlInterlockedOr32ToUser.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2)
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
