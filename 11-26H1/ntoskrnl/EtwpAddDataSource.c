/*
 * XREFs of EtwpAddDataSource @ 0x140938D24
 * Callers:
 *     EtwpQueueNotification @ 0x140938AC0 (EtwpQueueNotification.c)
 *     EtwpAddNotificationEvent @ 0x1409398E0 (EtwpAddNotificationEvent.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddDataSource(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD *)(a1 + 800);
  if ( !result )
  {
    result = ExAllocatePool2(0x40uLL);
    v3 = (_QWORD *)result;
    if ( result )
    {
      v4 = (_QWORD *)(result + 24);
      v4[1] = v4;
      *v4 = v4;
      v3[2] = 0LL;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 800), (signed __int64)v3, 0LL);
      if ( v5 )
      {
        ExFreePoolWithTag(v3, 0);
        return v5;
      }
      return (__int64)v3;
    }
  }
  return result;
}
