/*
 * XREFs of ?Get@InfoMetadata@@SAPEAV1@XZ @ 0x18001B564
 * Callers:
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180019FAC (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 * Callees:
 *     ??0InfoMetadata@@QEAA@XZ @ 0x180054B4C (--0InfoMetadata@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     __std_init_once_link_alternate_names_and_abort @ 0x18009C908 (__std_init_once_link_alternate_names_and_abort.c)
 */

// Hidden C++ exception states: #wind=2
struct InfoMetadata *InfoMetadata::Get(void)
{
  const char *v0; // r9
  struct InfoMetadata *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  InfoMetadata *v6; // [rsp+48h] [rbp+10h]

  fPending = 0;
  if ( !__std_init_once_begin_initialize(&InfoMetadata::s_createdInfoMetadata, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v6 = (InfoMetadata *)operator new(0x18uLL);
    InfoMetadata::s_instanceInfoMetadata = InfoMetadata::InfoMetadata(v6);
    if ( !InitOnceComplete(&InfoMetadata::s_createdInfoMetadata, 0, 0LL) )
      _std_init_once_link_alternate_names_and_abort(v3, v2);
  }
  result = InfoMetadata::s_instanceInfoMetadata;
  if ( !InfoMetadata::s_instanceInfoMetadata )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\metadata\\infometadata.cpp",
      v0);
  return result;
}
