/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1805F8918
 * Callers:
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805F6C84 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C5830 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(wil *this, const struct _WNF_STATE_NAME *a2, bool *a3, void *a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+58h] [rbp+20h] BYREF
  int v11; // [rsp+5Ch] [rbp+24h]

  v11 = HIDWORD(a4);
  v5 = a5;
  LOBYTE(a2->Data[0]) = 0;
  *v5 = 0LL;
  v10 = 0;
  v7 = NtQueryWnfStateData(&WNF_SHEL_CHAT_ICON_BADGE, 0LL, 0LL, &v10);
  if ( v7 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x2EF,
             (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
             (const char *)(unsigned int)v7);
  LOBYTE(a2->Data[0]) = v10 != 0;
  *v5 = 256LL;
  return 0LL;
}
