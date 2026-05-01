/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2763e4e2b0d5ad85b4f3d04351304527___::CTaskWrapper__lambda_2763e4e2b0d5ad85b4f3d04351304527_____lambda_2763e4e2b0d5ad85b4f3d04351304527___ @ 0x18031E99C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2763e4e2b0d5ad85b4f3d04351304527___ @ 0x18031EF28 (Windows--Internal--ComTaskPool--QueueTask__lambda_2763e4e2b0d5ad85b4f3d04351304527___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2763e4e2b0d5ad85b4f3d04351304527___::CTaskWrapper__lambda_2763e4e2b0d5ad85b4f3d04351304527_____lambda_2763e4e2b0d5ad85b4f3d04351304527___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  a1[4] = a2[2];
  *a1 = &off_180730BC0;
  return a1;
}
