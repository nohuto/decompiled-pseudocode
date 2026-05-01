/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITaggableTarget@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1804E46F8
 * Callers:
 *     ??0CAppTransitionTargetBase@@QEAA@XZ @ 0x1804E471C (--0CAppTransitionTargetBase@@QEAA@XZ.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UITaggableTarget@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1804E46A8 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UITaggableTarget@@VCWRLObjectW.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>(
        _QWORD *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,ITaggableTarget,CWRLObjectWithSite>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,ITaggableTarget,CWRLObjectWithSite>(a1);
  result = v1;
  *(_DWORD *)(v1 + 36) = 1;
  return result;
}
