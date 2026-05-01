/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5b0bef6b766aaa2d78b530340aaca2e3___::CTaskWrapper__lambda_5b0bef6b766aaa2d78b530340aaca2e3_____lambda_5b0bef6b766aaa2d78b530340aaca2e3___ @ 0x1802E21A4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5b0bef6b766aaa2d78b530340aaca2e3___ @ 0x1802E3278 (Windows--Internal--ComTaskPool--QueueTask__lambda_5b0bef6b766aaa2d78b530340aaca2e3___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5b0bef6b766aaa2d78b530340aaca2e3___::CTaskWrapper__lambda_5b0bef6b766aaa2d78b530340aaca2e3_____lambda_5b0bef6b766aaa2d78b530340aaca2e3___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = &off_180705430;
  return a1;
}
