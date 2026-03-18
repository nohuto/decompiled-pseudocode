/*
 * XREFs of ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x140040AC4
 * Callers:
 *     VidSchCancelPresentAtFlips @ 0x140040840 (VidSchCancelPresentAtFlips.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_K_NPEAI@Z @ 0x140040D94 (-VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAU.c)
 *     McTemplateK0qqxxxtq_EtwWriteTransfer @ 0x14004B480 (McTemplateK0qqxxxtq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiReprogramVSyncSuppressionForPresent(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // bp
  int v6; // r14d
  __int64 n; // r13
  int v8; // ebx
  unsigned int v10; // edi
  _QWORD *i; // r8
  _QWORD *m; // rcx
  __int64 *k; // rdx
  __int64 v14; // rsi
  struct _VIDSCH_GLOBAL *v15; // r9
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  _QWORD *j; // rcx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // r8
  struct VIDSCH_FLIP_QUEUE *v24; // rdx
  int v25; // eax
  __int64 **v26; // r8
  __int64 *ii; // rdx
  int v28; // [rsp+30h] [rbp-88h]
  struct _VIDSCH_GLOBAL *v29; // [rsp+50h] [rbp-68h]
  _QWORD v30[4]; // [rsp+58h] [rbp-60h] BYREF
  __int16 v31; // [rsp+78h] [rbp-40h]
  char v32; // [rsp+C0h] [rbp+8h]
  unsigned int v33; // [rsp+CCh] [rbp+14h]
  unsigned int v34; // [rsp+D8h] [rbp+20h] BYREF

  v33 = HIDWORD(a2);
  v4 = 0;
  v29 = (struct _VIDSCH_GLOBAL *)a1[5];
  v34 = 0;
  v30[0] = (char *)v29 + 2016;
  v6 = 0;
  v31 = 0;
  LODWORD(n) = 0;
  v32 = 0;
  v8 = a4 & 1;
  v10 = a2;
  AcquireSpinLock::Acquire((Acquire *)v30);
  for ( i = (_QWORD *)a1[12]; i != a1 + 12; i = (_QWORD *)*i )
  {
    for ( j = (_QWORD *)i[4]; j != i + 4; j = (_QWORD *)*j )
    {
      for ( k = (__int64 *)j[19]; k != j + 19; k = (__int64 *)*k )
      {
        if ( *((_DWORD *)k + 4) == 7 && *((_DWORD *)k + 90) == a3 )
        {
LABEL_27:
          v4 = 3;
          *((_DWORD *)k + 63) = *((_DWORD *)k + 63) & 0xFFFFFEFF | ((v8 ^ 1) << 8);
          goto LABEL_17;
        }
      }
    }
  }
  for ( m = (_QWORD *)a1[10]; m != a1 + 10; m = (_QWORD *)*m )
  {
    for ( k = (__int64 *)m[81]; k != m + 81; k = (__int64 *)*k )
    {
      if ( *((_DWORD *)k + 4) == 7 && *((_DWORD *)k + 90) == a3 )
        goto LABEL_27;
    }
    for ( k = (__int64 *)m[83]; k != m + 83; k = (__int64 *)*k )
    {
      if ( *((_DWORD *)k + 4) == 7 && *((_DWORD *)k + 90) == a3 )
        goto LABEL_27;
    }
  }
  v14 = 0LL;
  v15 = v29;
  while ( v6 <= *((_DWORD *)v15 + 940) )
  {
    v20 = *((_QWORD *)v15 + 447);
    if ( *(_QWORD *)(v20 + v14) == __PAIR64__(v33, v10) )
    {
      v21 = *(_DWORD *)(v20 + v14 + 112);
      if ( v21 == 1 || v21 == 2 )
      {
        v22 = *(_DWORD *)(v20 + v14 + 16);
        for ( n = 0LL; v22; v22 >>= 1 )
        {
          if ( (v22 & 1) != 0 )
            break;
          n = (unsigned int)(n + 1);
        }
        v23 = *(unsigned int *)(v20 + v14 + 20);
        v32 = *(_DWORD *)(v20 + v14 + 20);
        v24 = *(struct VIDSCH_FLIP_QUEUE **)(*((_QWORD *)v15 + n + 431) + 8 * v23 + 40);
        if ( v24 )
        {
          v25 = *(_DWORD *)(v20 + v14 + 112);
          if ( v25 == 2 )
          {
            VidSchiReprogramVSyncSuppressionForFlipEntry(v15, n, v23, v15, v24, a3, v8, &v34);
            v4 = v34;
            if ( v34 )
              break;
            v15 = v29;
          }
          else if ( v25 == 1 )
          {
            v26 = (__int64 **)(v20 + v14 + 120);
            for ( ii = *v26; ii != (__int64 *)v26; ii = (__int64 *)*ii )
            {
              if ( *((_DWORD *)ii + 40) == a3 )
              {
                v4 = 4;
                *((_DWORD *)ii + 13) = *((_DWORD *)ii + 13) & 0xFFFFFEFF | ((v8 ^ 1) << 8);
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
    ++v6;
    v14 += 160LL;
  }
LABEL_16:
  LOBYTE(v6) = v32;
LABEL_17:
  AcquireSpinLock::Release((AcquireSpinLock *)v30);
  if ( (byte_14008A204 & 0x20) != 0 )
    McTemplateK0qqxxxtq_EtwWriteTransfer(v17, v16, v18, n, v6, v10, v28, a3, v8, v4);
  AcquireSpinLock::Release((AcquireSpinLock *)v30);
}
