/*
 * XREFs of ??1?$out_param_ptr_t@PEAPEAUGMRelatedProcess@KnownGameList@@V?$unique_ptr@$$BY0A@UGMRelatedProcess@KnownGameList@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802CFBAC
 * Callers:
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x180110050 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 *     _BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess_::_1_::dtor$1 @ 0x1806AD8D6 (_BroadcastDVRComponent--ApplyGameRelatedForGameModeProcess_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_ptr_t<KnownGameList::GMRelatedProcess * *,wistd::unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_ptr_t<KnownGameList::GMRelatedProcess * *,wistd::unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
