/*
 * XREFs of ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18005E36C
 * Callers:
 *     ??1_Reallocation_guard@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA@XZ @ 0x1800A54B8 (--1_Reallocation_guard@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@Q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Destroy_range<std::allocator<NotificationData>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 16);
      if ( v4 )
      {
        if ( v4 != -1 )
          result = NtCloseCompositionInputSink(v4);
      }
      v3 += 96LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
