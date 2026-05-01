/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f___::CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f_____lambda_764a1297a52a98304490b9424ce1b78f___ @ 0x18045756C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_764a1297a52a98304490b9424ce1b78f___ @ 0x1804592A4 (Windows--Internal--ComTaskPool--QueueTask__lambda_764a1297a52a98304490b9424ce1b78f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f___::CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f_____lambda_764a1297a52a98304490b9424ce1b78f___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = &off_18071B5B0;
  return a1;
}
