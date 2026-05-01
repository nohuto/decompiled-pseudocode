/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4_____lambda_e387f2ee55bde35d068d310edc732ad4___ @ 0x1803072A8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e387f2ee55bde35d068d310edc732ad4___ @ 0x180307CC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e387f2ee55bde35d068d310edc732ad4___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4_____lambda_e387f2ee55bde35d068d310edc732ad4___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  v4 = a2[2];
  v5 = a2 + 3;
  a1[4] = v4;
  a1[5] = 0LL;
  if ( a1 + 5 != v5 )
  {
    a1[5] = *v5;
    *v5 = 0LL;
  }
  *a1 = &off_180706490;
  return a1;
}
