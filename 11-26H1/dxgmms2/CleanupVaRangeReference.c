/*
 * XREFs of CleanupVaRangeReference @ 0x14009D1F8
 * Callers:
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x140105F78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x140116DE4 (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1400389C0 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 */

__int64 __fastcall CleanupVaRangeReference(VIDMM_MAPPED_VA_RANGE *this)
{
  VIDMM_MAPPED_VA_RANGE *v1; // r8
  int v2; // ecx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx

  v1 = this;
  v2 = *((_DWORD *)this + 18);
  if ( (v2 & 0x8000) != 0 )
  {
    if ( GetVidMmAllocFromOwner(v2 & 0xF, *((_QWORD *)v1 + 8)) )
    {
      v3 = (_QWORD *)((char *)v1 + 32);
      v4 = *((_QWORD *)v1 + 4);
      if ( *(VIDMM_MAPPED_VA_RANGE **)(v4 + 8) != (VIDMM_MAPPED_VA_RANGE *)((char *)v1 + 32) )
        goto LABEL_10;
      v5 = (_QWORD *)*((_QWORD *)v1 + 5);
      if ( (_QWORD *)*v5 != v3 )
        goto LABEL_10;
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *v3 = 0LL;
      *((_QWORD *)v1 + 5) = 0LL;
    }
    v6 = (_QWORD *)((char *)v1 + 8);
    v7 = *((_QWORD *)v1 + 1);
    if ( *(VIDMM_MAPPED_VA_RANGE **)(v7 + 8) == (VIDMM_MAPPED_VA_RANGE *)((char *)v1 + 8) )
    {
      v8 = (_QWORD *)*((_QWORD *)v1 + 2);
      if ( (_QWORD *)*v8 == v6 )
      {
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        *v6 = 0LL;
        *((_QWORD *)v1 + 2) = 0LL;
        *((_DWORD *)v1 + 18) &= ~0x8000u;
        return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v1);
      }
    }
LABEL_10:
    __fastfail(3u);
  }
  return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v1);
}
