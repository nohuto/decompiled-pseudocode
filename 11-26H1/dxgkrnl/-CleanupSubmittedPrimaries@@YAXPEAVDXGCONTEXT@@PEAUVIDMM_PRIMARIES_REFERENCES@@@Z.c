/*
 * XREFs of ?CleanupSubmittedPrimaries@@YAXPEAVDXGCONTEXT@@PEAUVIDMM_PRIMARIES_REFERENCES@@@Z @ 0x14029ACB4
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140297258 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI@Z @ 0x14007C7B8 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI.c)
 */

void __fastcall CleanupSubmittedPrimaries(struct DXGCONTEXT *a1, struct VIDMM_PRIMARIES_REFERENCES *a2)
{
  _DWORD *v4; // rdx
  __int64 v5; // rbx
  struct VIDMM_ALLOC *v6; // r9
  bool v7; // [rsp+20h] [rbp-18h]

  if ( a2 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 16LL)) )
    {
      v5 = 0LL;
      if ( *v4 )
      {
        do
        {
          if ( (unsigned int)v5 >= 0x10 )
            break;
          v6 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + v5 + 1);
          if ( v6 )
          {
            VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 760LL),
              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 768LL),
              0,
              v6,
              v7,
              (unsigned int *)a2 + 34);
            *((_QWORD *)a2 + v5 + 1) = 0LL;
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)a2 );
      }
    }
  }
}
