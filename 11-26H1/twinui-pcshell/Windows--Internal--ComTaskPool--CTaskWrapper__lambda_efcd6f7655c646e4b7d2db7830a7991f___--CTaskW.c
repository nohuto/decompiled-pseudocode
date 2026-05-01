/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f_____lambda_efcd6f7655c646e4b7d2db7830a7991f___ @ 0x1802DB614
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___ @ 0x1802ADAFC (Windows--Internal--ComTaskPool--QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f_____lambda_efcd6f7655c646e4b7d2db7830a7991f___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a1 + 2, a2);
  v5 = (_QWORD *)(v4 + 8);
  v6 = a2 + 1;
  *v5 = 0LL;
  if ( v5 != v6 )
  {
    *v5 = *v6;
    *v6 = 0LL;
  }
  *a1 = &off_18072E010;
  return a1;
}
