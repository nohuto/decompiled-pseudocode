/*
 * XREFs of ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x14005A254
 * Callers:
 *     VidSchSubmitCommandToHwQueue @ 0x14000AED0 (VidSchSubmitCommandToHwQueue.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x140041204 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     McTemplateK0qqxxxtq_EtwWriteTransfer @ 0x14004B480 (McTemplateK0qqxxxtq_EtwWriteTransfer.c)
 *     ?VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14005A124 (-VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEA.c)
 */

__int64 __fastcall VidSchiSuppressVSyncsForAllPresents(struct _VIDSCH_DEVICE *a1, struct _LUID a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 **i; // r14
  __int64 *j; // rsi
  __int64 *k; // rdi
  int v10; // eax
  __int64 **m; // rsi
  __int64 *n; // rdi
  int v13; // eax
  __int64 *ii; // rdi
  int v15; // eax
  int v16; // ebp
  __int64 v17; // r10
  __int64 v18; // r14
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r12d
  __int64 v24; // r15
  struct VIDSCH_FLIP_QUEUE *v25; // r8
  int v26; // eax
  int v27; // edi
  __int64 v28; // rsi
  __int64 *v29; // rdi
  int v30; // eax
  struct _VIDSCH_DEVICE *v32; // [rsp+20h] [rbp-A8h]
  int v33; // [rsp+30h] [rbp-98h]
  _BYTE v34[4]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-74h]
  unsigned int v36; // [rsp+58h] [rbp-70h]
  __int64 v37; // [rsp+60h] [rbp-68h]
  _BYTE v38[96]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+8h]
  LONG HighPart; // [rsp+DCh] [rbp+14h]

  HighPart = a2.HighPart;
  v39 = *((_QWORD *)a1 + 5);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v38, (unsigned __int64 *)(v39 + 2016), 1, 0);
  for ( i = (__int64 **)*((_QWORD *)a1 + 12); i != (__int64 **)((char *)a1 + 96); i = (__int64 **)*i )
  {
    for ( j = i[4]; j != (__int64 *)(i + 4); j = (__int64 *)*j )
    {
      for ( k = (__int64 *)j[19]; k != j + 19; k = (__int64 *)*k )
      {
        if ( *((_DWORD *)k + 4) == 7 )
        {
          v10 = *((_DWORD *)k + 63);
          if ( (v10 & 0x100) == 0 )
          {
            *((_DWORD *)k + 63) = v10 | 0x100;
            if ( (byte_14008A204 & 0x20) != 0 )
              McTemplateK0qqxxxtq_EtwWriteTransfer(v5, v4, v6, 0, 0, a2.LowPart, v33, *((_DWORD *)k + 90), 0, 3);
          }
        }
      }
    }
  }
  for ( m = (__int64 **)*((_QWORD *)a1 + 10); m != (__int64 **)((char *)a1 + 80); m = (__int64 **)*m )
  {
    for ( n = m[81]; n != (__int64 *)(m + 81); n = (__int64 *)*n )
    {
      if ( *((_DWORD *)n + 4) == 7 )
      {
        v13 = *((_DWORD *)n + 63);
        if ( (v13 & 0x100) == 0 )
        {
          *((_DWORD *)n + 63) = v13 | 0x100;
          if ( (byte_14008A204 & 0x20) != 0 )
            McTemplateK0qqxxxtq_EtwWriteTransfer(v5, v4, v6, 0, 0, a2.LowPart, v33, *((_DWORD *)n + 90), 0, 3);
        }
      }
    }
    for ( ii = m[83]; ii != (__int64 *)(m + 83); ii = (__int64 *)*ii )
    {
      if ( *((_DWORD *)ii + 4) == 7 )
      {
        v15 = *((_DWORD *)ii + 63);
        if ( (v15 & 0x100) == 0 )
        {
          *((_DWORD *)ii + 63) = v15 | 0x100;
          if ( (byte_14008A204 & 0x20) != 0 )
            McTemplateK0qqxxxtq_EtwWriteTransfer(v5, v4, v6, 0, 0, a2.LowPart, v33, *((_DWORD *)ii + 90), 0, 3);
        }
      }
    }
  }
  v16 = 0;
  v17 = v39;
  v18 = 0LL;
  while ( v16 <= *(_DWORD *)(v17 + 3760) )
  {
    v19 = v18 + *(_QWORD *)(v17 + 3576);
    if ( *(_QWORD *)v19 == __PAIR64__(HighPart, a2.LowPart) )
    {
      v20 = *(_DWORD *)(v19 + 112);
      if ( v20 == 2 || v20 == 1 )
      {
        VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
          (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v34,
          (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v19);
        v22 = v36;
        v23 = v35;
        v24 = *(unsigned int *)(v37 + 4LL * v36);
        v25 = *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v17 + 8LL * v35 + 3448) + 8 * v24 + 40);
        if ( v25 )
        {
          v26 = *(_DWORD *)(v21 + 112);
          if ( v26 == 2 )
          {
            v27 = VidSchiSuppressVSyncForAllFlipEntries((struct _VIDSCH_GLOBAL *)v17, v35, a2, v24, v32, v25);
            if ( v27 < 0 )
              goto LABEL_48;
            goto LABEL_45;
          }
          if ( v26 == 1 )
          {
            v28 = v21 + 120;
            v29 = *(__int64 **)(v21 + 120);
            if ( v29 != (__int64 *)(v21 + 120) )
            {
              do
              {
                v30 = *((_DWORD *)v29 + 13);
                if ( (v30 & 0x100) == 0 )
                {
                  *((_DWORD *)v29 + 13) = v30 | 0x100;
                  if ( (byte_14008A204 & 0x20) != 0 )
                    McTemplateK0qqxxxtq_EtwWriteTransfer(
                      v22,
                      v21,
                      (__int64)v25,
                      v23,
                      v24,
                      a2.LowPart,
                      v33,
                      *((_DWORD *)v29 + 40),
                      0,
                      4);
                }
                v29 = (__int64 *)*v29;
              }
              while ( v29 != (__int64 *)v28 );
LABEL_45:
              v17 = v39;
            }
          }
        }
      }
    }
    ++v16;
    v18 += 160LL;
  }
  v27 = 0;
LABEL_48:
  AcquireSpinLock::Release((AcquireSpinLock *)v38);
  return (unsigned int)v27;
}
