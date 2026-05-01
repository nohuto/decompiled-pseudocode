/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86_____lambda_9051cf98f0ba0655adca5ac41533fb86___ @ 0x180307240
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___ @ 0x1802A4D68 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86_____lambda_9051cf98f0ba0655adca5ac41533fb86___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = &off_1807064B8;
  return a1;
}
