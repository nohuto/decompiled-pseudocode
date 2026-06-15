/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJ_N@Z @ 0x180119D90
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180050F80 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18007F2F8 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     WPP_SF_Pg @ 0x18011A12C (WPP_SF_Pg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeHardware::UpdateMasterVolumeLevel(CVolumeHardware *this)
{
  unsigned __int64 v2; // rdi
  float *v3; // rbx
  unsigned int v4; // edi
  float *v5; // rcx
  float *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  float v9; // xmm0_4
  void *Block; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  Block = 0LL;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 29));
  v3 = (float *)Block;
  if ( Block )
  {
    if ( *((_QWORD *)this + 11) )
    {
      do
      {
        v6 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v2);
        v9 = fmaxf(fminf(v6[1], v6[3]), v6[2]);
        v3[v2] = v9;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Pg(*((_QWORD *)WPP_GLOBAL_Control + 2), v7, v8, v2, v9);
        }
        ++v2;
      }
      while ( v2 < *((_QWORD *)this + 11) );
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, char *))(**((_QWORD **)this + 32) + 64LL))(
           *((_QWORD *)this + 32),
           v3,
           *((unsigned int *)this + 29),
           (char *)this + 264);
    v5 = v3;
  }
  else
  {
    v4 = -2147024882;
    v5 = 0LL;
  }
  free(v5);
  return v4;
}
