/*
 * XREFs of ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x18025F65C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     McTemplateU0xxq_EventWriteTransfer @ 0x1800A7614 (McTemplateU0xxq_EventWriteTransfer.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180154BB4 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x180154CD0 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1801AB4B0 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1801B2114 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ??0?$atomic@U_LUID@@@std@@QEAA@U_LUID@@@Z @ 0x18025F638 (--0-$atomic@U_LUID@@@std@@QEAA@U_LUID@@@Z.c)
 */

CInteraction *__fastcall CInteraction::CInteraction(CInteraction *this, struct CComposition *a2)
{
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  HANDLE_TABLE *v5; // rcx
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CInteraction::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CInteraction::`vftable'{for `IInteractionResource'};
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 51) = 4;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, (struct _D3DMATRIX *)((char *)this + 296));
  CInteractionProcessor::CInteractionProcessor((CInteraction *)((char *)this + 360));
  std::atomic<_LUID>::atomic<_LUID>((_QWORD *)this + 216, *(_QWORD *)&c_defaultDesktopLuid);
  *((_QWORD *)this + 217) = 0LL;
  v3 = (unsigned int *)((char *)this + 1720);
  *((_DWORD *)this + 430) = 0;
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  if ( (int)HANDLE_TABLE::GetNewEntry(v5, v4, (unsigned int *)this + 430) >= 0 )
    *((_QWORD *)CInteraction::GetEntry(*v3) + 1) = this;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 214) = PerformanceCount;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v8 = *v3;
    McTemplateU0xxq_EventWriteTransfer(v6, &INTERACTION_CREATED, this, this, v8);
  }
  return this;
}
