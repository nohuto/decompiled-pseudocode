/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e7077867749c18ac48aae4f1857ffe65___::CTaskWrapper__lambda_e7077867749c18ac48aae4f1857ffe65_____lambda_e7077867749c18ac48aae4f1857ffe65___ @ 0x1803A6B7C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e7077867749c18ac48aae4f1857ffe65___ @ 0x1803A7A1C (Windows--Internal--ComTaskPool--QueueTask__lambda_e7077867749c18ac48aae4f1857ffe65___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e7077867749c18ac48aae4f1857ffe65___::CTaskWrapper__lambda_e7077867749c18ac48aae4f1857ffe65_____lambda_e7077867749c18ac48aae4f1857ffe65___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 24));
  v4 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)a1 = &off_180737AE8;
  return a1;
}
