/*
 * XREFs of ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x18001C510
 * Callers:
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x18001CC9C (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 * Callees:
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180017420 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ??1ContextualProcessorResponse@@QEAA@XZ @ 0x180018DF0 (--1ContextualProcessorResponse@@QEAA@XZ.c)
 *     ??4?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001B3C4 (--4-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x18001B628 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x18001B730 (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008B328 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision(ContextualProcessorBuffer *this)
{
  __int64 v2; // rbx
  __int64 i; // rdi
  __int64 v4; // rcx
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbp
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  int v11[2]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v12; // [rsp+28h] [rbp-100h]
  _BYTE v13[64]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+70h] [rbp-B8h]
  _BYTE v15[64]; // [rsp+78h] [rbp-B0h] BYREF
  _BYTE v16[112]; // [rsp+B8h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]
  __int64 v18; // [rsp+138h] [rbp+10h] BYREF

  v18 = 0LL;
  v2 = *((_QWORD *)this + 5);
  for ( i = *((_QWORD *)this + 6); v2 != i; v2 += 224LL )
  {
    if ( *(_BYTE *)(v2 + 216) )
    {
      v5 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v2;
      v6 = ***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v2;
      v7 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      if ( v6(v5, &GUID_7fa430a3_9305_4154_a5ee_11987d0ffb6f, &v18) >= 0 )
      {
        *(_QWORD *)v11 = 0LL;
        v12 = 0LL;
        std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)v13);
        v14 = 0LL;
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v15);
        std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v16);
        v8 = *(_QWORD *)(v2 + 208);
        v9 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 != v8 )
        {
          if ( v8 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(v2 + 208));
            v9 = *(_QWORD *)v11;
          }
          *(_QWORD *)v11 = v8;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        *(_DWORD *)(*((_QWORD *)this + 19) + 104LL) = *(_DWORD *)(v2 + 136);
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::operator=(
          *((_QWORD *)this + 19) + 112LL,
          v2 + 144);
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v18 + 24LL))(
                v18,
                *((_QWORD *)this + 19),
                v11);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x111,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
            (const char *)(unsigned int)v10,
            v11[0]);
        ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)v11);
      }
    }
  }
  if ( *((_QWORD *)this + 8) != *((_QWORD *)this + 9) )
    MicrosoftTelemetryAssertTriggeredArgs(this, 131076LL, 279LL);
  v4 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
