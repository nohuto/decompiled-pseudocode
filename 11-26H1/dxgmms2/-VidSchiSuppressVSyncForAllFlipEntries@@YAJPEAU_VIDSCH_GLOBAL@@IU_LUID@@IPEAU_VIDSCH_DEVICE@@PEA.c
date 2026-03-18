/*
 * XREFs of ?VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14005A124
 * Callers:
 *     ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x14005A254 (-VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     McTemplateK0qqxxxtq_EtwWriteTransfer @ 0x14004B480 (McTemplateK0qqxxxtq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiSuppressVSyncForAllFlipEntries(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct _LUID a3,
        unsigned int a4,
        struct _VIDSCH_DEVICE *a5,
        struct VIDSCH_FLIP_QUEUE *a6)
{
  unsigned int v6; // edi
  char LowPart; // bl
  char v12; // r15
  unsigned int v13; // esi
  __int64 v14; // r8
  unsigned int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // [rsp+30h] [rbp-48h]

  v6 = 0;
  LowPart = a3.LowPart;
  if ( !*((_BYTE *)a1 + 67) )
    return 0LL;
  v12 = 0;
  v13 = *((_DWORD *)a6 + 17);
  if ( v13 != *((_DWORD *)a6 + 14) )
  {
    do
    {
      v14 = 1400LL * v13;
      v15 = *(_DWORD *)((char *)a6 + v14 + 1172);
      if ( v15 )
      {
        if ( v15 > 0xC || (v16 = 4672, !_bittest(&v16, v15)) )
        {
          v17 = *(unsigned int *)((char *)a6 + v14 + 1272);
          if ( (*(_DWORD *)((_BYTE *)a6 + v14 + 1272) & 0x80020) == 0x20 )
          {
            LODWORD(v17) = v17 | 0x80000;
            v12 = 1;
            *(_DWORD *)((char *)a6 + v14 + 1272) = v17;
            if ( (byte_14008A204 & 0x20) != 0 )
            {
              if ( v15 == 5 || (v18 = v15 == 15, v19 = 2LL, v18) )
                v19 = 1LL;
              McTemplateK0qqxxxtq_EtwWriteTransfer(
                v19,
                v17,
                v14,
                a2,
                a4,
                LowPart,
                v20,
                *(_DWORD *)((char *)a6 + v14 + 1176),
                0,
                v19);
            }
          }
        }
      }
      v13 = ((_BYTE)v13 + 1) & 0x3F;
    }
    while ( v13 != *((_DWORD *)a6 + 14) );
    if ( v12 )
      return (unsigned int)VidSchiSetInterruptTargetPresentId(a1, a2, a4, 0xFFFFFFFFFFFFFFFFuLL, 0, 0);
  }
  return v6;
}
