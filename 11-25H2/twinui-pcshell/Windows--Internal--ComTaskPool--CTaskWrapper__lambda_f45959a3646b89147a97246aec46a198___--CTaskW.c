/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f45959a3646b89147a97246aec46a198___::CTaskWrapper__lambda_f45959a3646b89147a97246aec46a198_____lambda_f45959a3646b89147a97246aec46a198___ @ 0x1804DFFF4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f45959a3646b89147a97246aec46a198___ @ 0x1804E0690 (Windows--Internal--ComTaskPool--QueueTask__lambda_f45959a3646b89147a97246aec46a198___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f45959a3646b89147a97246aec46a198___::CTaskWrapper__lambda_f45959a3646b89147a97246aec46a198_____lambda_f45959a3646b89147a97246aec46a198___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  v4 = *a2;
  *a2 = 0LL;
  a1[2] = v4;
  v5 = a2[1];
  v6 = a2 + 2;
  a1[3] = v5;
  a1[4] = 0LL;
  if ( a1 + 4 != v6 )
  {
    a1[4] = *v6;
    *v6 = 0LL;
  }
  *a1 = &off_180726678;
  return a1;
}
