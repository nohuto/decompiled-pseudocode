/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec_____lambda_cad582326f08631f2948fcf147cbafec___ @ 0x18039E250
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_cad582326f08631f2948fcf147cbafec___ @ 0x18039EFE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_cad582326f08631f2948fcf147cbafec___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec_____lambda_cad582326f08631f2948fcf147cbafec___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = (_QWORD *)(a2 + 16);
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)a1 = &off_18070E838;
  return a1;
}
