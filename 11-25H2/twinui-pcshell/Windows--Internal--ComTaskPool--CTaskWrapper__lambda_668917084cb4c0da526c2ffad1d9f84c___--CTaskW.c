/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c_____lambda_668917084cb4c0da526c2ffad1d9f84c___ @ 0x180397B5C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_668917084cb4c0da526c2ffad1d9f84c___ @ 0x180397FA4 (Windows--Internal--ComTaskPool--QueueTask__lambda_668917084cb4c0da526c2ffad1d9f84c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c_____lambda_668917084cb4c0da526c2ffad1d9f84c___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)a2;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 32) = 7LL;
  *(_QWORD *)a1 = &off_18070DF70;
  return a1;
}
