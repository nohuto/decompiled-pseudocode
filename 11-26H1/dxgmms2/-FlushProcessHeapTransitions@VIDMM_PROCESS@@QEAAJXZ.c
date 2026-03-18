/*
 * XREFs of ?FlushProcessHeapTransitions@VIDMM_PROCESS@@QEAAJXZ @ 0x1400A92B4
 * Callers:
 *     ?FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ @ 0x140127904 (-FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1401280F0 (-VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKM.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_PROCESS::FlushProcessHeapTransitions(VIDMM_PROCESS *this)
{
  int v1; // ebx
  __int64 i; // rdi
  __int64 v4; // rcx
  int v5; // eax

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 88LL))(v4);
      if ( v5 < 0 && v1 >= 0 )
        v1 = v5;
    }
  }
  return (unsigned int)v1;
}
