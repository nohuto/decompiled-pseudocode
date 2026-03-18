/*
 * XREFs of ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x180197770
 * Callers:
 *     <none>
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002DC58 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAsyncFlushResponse::OnPresentComplete(CAsyncFlushResponse *this)
{
  unsigned int v1; // ebx
  unsigned int v2; // eax
  CChannelContext *v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+34h] [rbp-24h]
  __int64 v9; // [rsp+44h] [rbp-14h]

  v1 = 0;
  if ( !*((_BYTE *)this + 33) )
  {
    *((_BYTE *)this + 33) = 1;
    v9 = 0LL;
    v2 = *((_DWORD *)this + 12);
    v3 = (CChannelContext *)*((_QWORD *)this + 5);
    v8 = 0LL;
    v7 = 13;
    *(_QWORD *)((char *)&v8 + 4) = v2;
    v4 = CChannelContext::PostMessageToChannel(v3, (const struct MIL_MESSAGE *)&v7);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x74u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x58u, 0LL);
    }
    return v5;
  }
  return v1;
}
