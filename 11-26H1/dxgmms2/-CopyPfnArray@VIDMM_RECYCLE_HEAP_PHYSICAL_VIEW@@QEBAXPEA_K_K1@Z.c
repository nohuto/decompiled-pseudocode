/*
 * XREFs of ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEBAXPEA_K_K1@Z @ 0x1400F7164
 * Callers:
 *     ?GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEBA_KXZ @ 0x1400F6ADC (-GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEBA_KXZ.c)
 *     ?UpdatePfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@AEAAXPEAVVIDMM_MDL_RANGE@@_K1@Z @ 0x1400F7114 (-UpdatePfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@AEAAXPEAVVIDMM_MDL_RANGE@@_K1@Z.c)
 * Callees:
 *     memmove @ 0x14005B8C0 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD **v4; // rcx
  char v8; // r8
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  char v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax

  v4 = (_QWORD **)((char *)this + 8);
  v8 = 0;
  v9 = 0LL;
  v10 = *v4;
  if ( *v4 != v4 )
    goto LABEL_3;
  do
  {
    g_DxgMmsBugcheckExportIndex = 1;
    v10 = (_QWORD *)WdLogSingleEntry5(0LL, 270LL, 52LL, 17LL, v9, 0LL);
    WdLogGlobalForLineNumber = 213;
    do
    {
LABEL_3:
      if ( v8 )
        break;
      v11 = v10 - 3;
      v10 = (_QWORD *)*v10;
      if ( v11[2] > a3 )
      {
        v8 = 1;
        v9 = v11;
      }
    }
    while ( v10 != v4 );
  }
  while ( !v9 || v9[1] > a3 );
  v12 = 0;
  v13 = a3;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = v9[1];
    v16 = v9[2];
    v17 = (v13 - v15) >> 12;
    if ( a4 <= v16 )
    {
      v16 = a4;
      v12 = 1;
    }
    v18 = ((v16 - v15) >> 12) - v17;
    memmove(&a2[v14], (const void *)(*v9 + 48LL + 8 * v17), 8 * v18);
    v19 = v9[3];
    v14 += v18;
    v13 = v9[2];
    v20 = v9[5] + 8LL;
    v9 = (_QWORD *)(v19 - 24);
    if ( v19 == v20 )
      v9 = 0LL;
    if ( v12 )
      break;
    if ( v9[1] != v13 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 18LL, v9, 0LL);
      WdLogGlobalForLineNumber = 213;
      goto LABEL_19;
    }
  }
  if ( v14 != (a4 - a3) >> 12 )
  {
LABEL_19:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 19LL, v14, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400F7328LL);
  }
}
