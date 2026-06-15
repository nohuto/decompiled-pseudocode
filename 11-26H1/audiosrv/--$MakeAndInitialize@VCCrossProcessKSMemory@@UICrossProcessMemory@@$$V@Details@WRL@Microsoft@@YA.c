/*
 * XREFs of ??$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x1800ABA78
 * Callers:
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@0@Z @ 0x1801146E0 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCSectionBasedCrossProcessMemory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180048540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCSectionBasedCro.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ABB08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCSectionBasedCrossProcessMemory@@@WRL.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCSectionBasedCrossProcessMemory@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ABB70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCSectionB.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessKSMemory,ICrossProcessMemory,>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int Interface; // edi
  volatile int *v5; // rdx
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new[](0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CSectionBasedCrossProcessMemory>(v2);
    v7 = 0LL;
    *v3 = &CCrossProcessKSMemory::`vftable';
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CSectionBasedCrossProcessMemory>::QueryInterface(
                  v3,
                  &GUID_910f47db_d25f_4cf9_995e_f86c161b3eef,
                  a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CSectionBasedCrossProcessMemory>::Release(
      (__int64)v3,
      v5);
  }
  else
  {
    Interface = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v7);
  return Interface;
}
