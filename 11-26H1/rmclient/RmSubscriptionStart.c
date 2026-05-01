/*
 * XREFs of RmSubscriptionStart @ 0x180004270
 * Callers:
 *     HampConnectionAllocateState @ 0x180003B00 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x1800040B4 (HampConnectionStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmSubscriptionStart(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  unsigned int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  v4 = NtQueryWnfStateData(a1, 0LL, 0LL, &v6, 0LL, &v7);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741789 )
    return v4;
  result = RtlSubscribeWnfStateChangeNotification(a2, *a1, v6, RmpClientWnfSubscriptionWorker, a2, 0LL, 0, 0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
