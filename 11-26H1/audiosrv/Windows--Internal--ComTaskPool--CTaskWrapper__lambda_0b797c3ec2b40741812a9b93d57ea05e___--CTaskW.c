/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e_____lambda_0b797c3ec2b40741812a9b93d57ea05e___ @ 0x1800A9DAC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0b797c3ec2b40741812a9b93d57ea05e___ @ 0x1800652C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_0b797c3ec2b40741812a9b93d57ea05e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007CB5C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e_____lambda_0b797c3ec2b40741812a9b93d57ea05e___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)(a1 + 32) = a2[2];
  *(_QWORD *)(a1 + 40) = a2[3];
  *(_BYTE *)(a1 + 48) = *((_BYTE *)a2 + 32);
  *(_QWORD *)a1 = &off_180173600;
  return a1;
}
