/*
 * XREFs of ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18006300C
 * Callers:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F97C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F9B8 (--$As@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@.c)
 *     ??$As@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F9EC (--$As@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEB.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::InternalResolve(
        Microsoft::WRL::WeakRef *this,
        const struct _GUID *a2,
        struct IInspectable **a3)
{
  __int64 v3; // rcx

  *a3 = 0LL;
  v3 = *(_QWORD *)this;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *))(*(_QWORD *)v3 + 24LL))(v3, a2);
  else
    return 0LL;
}
