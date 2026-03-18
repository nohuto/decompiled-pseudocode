/*
 * XREFs of ?VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_K_NPEAI@Z @ 0x140040D94
 * Callers:
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x140040AC4 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 */

void __fastcall VidSchiReprogramVSyncSuppressionForFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        struct _VIDSCH_DEVICE *a4,
        struct VIDSCH_FLIP_QUEUE *a5,
        unsigned __int64 a6,
        bool a7,
        unsigned int *a8)
{
  bool v8; // zf
  __int64 v10; // r14
  unsigned int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // r8d
  int v15; // r11d
  int v16; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // r9

  v8 = *((_BYTE *)a1 + 67) == 0;
  v10 = a2;
  *a8 = 0;
  if ( !v8 )
  {
    v11 = *((_DWORD *)a5 + 17);
    v12 = *((_QWORD *)a1 + v10 + 431) + 304LL * a3;
    while ( v11 != *((_DWORD *)a5 + 14) )
    {
      v13 = 1400LL * v11;
      v14 = *(_DWORD *)((char *)a5 + v13 + 1172);
      if ( v14 )
      {
        if ( v14 > 0xC || (v16 = 4672, !_bittest(&v16, v14)) )
        {
          v15 = *(_DWORD *)((char *)a5 + v13 + 1272);
          if ( (v15 & 0x20) != 0 && *(_DWORD *)((char *)a5 + v13 + 1176) == a6 )
          {
            if ( ((v15 & 0x80000) == 0) != a7 )
            {
              *(_DWORD *)((char *)a5 + v13 + 1272) = v15 & 0xFFF7FFFF | (!a7 << 19);
              if ( a7 )
              {
                if ( v14 == 5 || v14 == 15 )
                {
                  v17 = *(_QWORD *)((char *)a5 + v13 + 1312);
                  *a8 = 1;
                  if ( ((*(_DWORD *)v17 | (*(_DWORD *)v17 >> 10)) & 0x3FF) != 0 )
                  {
                    v18 = *(_QWORD *)(v17 + 32);
                    if ( v18 )
                    {
                      if ( v18 < *(_QWORD *)(v12 + 424) )
                        VidSchiSetInterruptTargetPresentId(a1, v10, a3, v18, 0, 0);
                    }
                  }
                }
                else
                {
                  *a8 = 2;
                }
              }
            }
            return;
          }
        }
      }
      v11 = ((_BYTE)v11 + 1) & 0x3F;
    }
  }
}
