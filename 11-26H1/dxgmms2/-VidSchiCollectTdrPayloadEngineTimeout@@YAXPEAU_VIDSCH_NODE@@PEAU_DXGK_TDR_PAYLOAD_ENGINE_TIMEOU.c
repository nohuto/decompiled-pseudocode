/*
 * XREFs of ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140057308
 * Callers:
 *     VidSchiResetEngine @ 0x1400454F8 (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x140058740 (VidSchiResetHwEngine.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchiCollectTdrPayloadEngineTimeout(
        struct _VIDSCH_NODE *a1,
        struct _DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  int v10; // eax
  _QWORD **v11; // rbx
  _QWORD *v12; // r9
  _QWORD *v13; // rdx
  __int64 *i; // rax
  __int64 v15; // r8
  char v16; // r8
  int v17; // r8d
  __int64 v18; // r10
  char v19; // al
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[56]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((unsigned __int16 *)a1 + 2);
  v4 = *((_QWORD *)a1 + 3);
  v6 = *(_QWORD *)(v4 + 696);
  if ( (unsigned int)v2 < *(_DWORD *)(v4 + 768) )
    v6 += 8 * v2;
  *((_DWORD *)a2 + 1) = *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL);
  v7 = *((unsigned __int16 *)a1 + 2);
  v8 = *(_QWORD *)(v4 + 696);
  if ( (unsigned int)v7 < *(_DWORD *)(v4 + 768) )
    v8 += 8 * v7;
  *(_DWORD *)a2 = *(unsigned __int16 *)(*(_QWORD *)v8 + 8LL);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v23, (unsigned __int64 *)(v4 + 2016), 1, 0);
  if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
  {
    v9 = 0LL;
    *((_DWORD *)a2 + 6) = *((_DWORD *)a1 + 122);
    v10 = *((_DWORD *)a1 + 123);
    v11 = (_QWORD **)((char *)a1 + 1712);
    *((_DWORD *)a2 + 7) = v10;
    v12 = *v11;
    if ( *v11 == v11 )
      goto LABEL_34;
    while ( 1 )
    {
      v13 = v12 - 35;
      if ( *(v12 - 5) == *(v12 - 6) )
      {
        if ( *((_DWORD *)v13 + 78) )
        {
          for ( i = (__int64 *)v13[37]; i != v13 + 37; i = (__int64 *)*i )
          {
            if ( *((_DWORD *)i + 36) )
              goto LABEL_13;
          }
        }
        goto LABEL_26;
      }
LABEL_13:
      if ( !v9 )
        goto LABEL_30;
      v15 = v9[1];
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 48) + 2632LL) || (v17 = *(_DWORD *)(v15 + 56), (v17 & 8) != 0) )
        v16 = 1;
      else
        v16 = v17 & 1;
      v18 = v13[1];
      if ( *(_BYTE *)(*(_QWORD *)(v18 + 48) + 2632LL) || (v20 = *(_DWORD *)(v18 + 56), (v20 & 8) != 0) )
        v19 = 1;
      else
        v19 = v20 & 1;
      if ( v16 )
        break;
      if ( !v19 )
        goto LABEL_24;
LABEL_26:
      v12 = (_QWORD *)*v12;
      if ( v12 == v11 )
      {
        if ( v9 )
        {
          v21 = v9[3];
          goto LABEL_33;
        }
        goto LABEL_34;
      }
    }
    if ( v19 )
    {
LABEL_24:
      if ( v13[28] < v9[28] )
        v9 = v12 - 35;
      goto LABEL_26;
    }
LABEL_30:
    v9 = v12 - 35;
    goto LABEL_26;
  }
  *((_QWORD *)a2 + 1) = *((_QWORD *)a1 + 59);
  *((_QWORD *)a2 + 2) = *((_QWORD *)a1 + 60);
  v22 = *((_QWORD *)a1 + *((unsigned int *)a1 + 394) + 198);
  if ( v22 )
  {
    v21 = *(_QWORD *)(v22 + 56);
LABEL_33:
    *((_QWORD *)a2 + 4) = v21;
  }
LABEL_34:
  AcquireSpinLock::Release((AcquireSpinLock *)v23);
}
