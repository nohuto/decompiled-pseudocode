/*
 * XREFs of HvUnCOWReconciledPages @ 0x14045EE58
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x14045F150 (RtlMergeBitMaps.c)
 *     HvpViewMapUnCOWAndSealRange @ 0x1408BEE14 (HvpViewMapUnCOWAndSealRange.c)
 *     HvpViewMapGetStorageLength @ 0x140B0BC44 (HvpViewMapGetStorageLength.c)
 */

void __fastcall HvUnCOWReconciledPages(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // edx
  struct _KTHREAD *v7; // rcx
  unsigned int v8; // r8d
  _DWORD *v9; // r10
  unsigned int v10; // edi
  _DWORD *v11; // rdx
  int v12; // r9d
  _DWORD *v13; // rax
  unsigned __int64 v14; // r11
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned __int64 i; // rax
  unsigned int *v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rbp
  unsigned int StorageLength; // ebx
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // r9d
  unsigned int v26; // ecx
  __int64 v27; // r11
  unsigned __int64 v28; // r10
  _DWORD *v29; // rdx
  int v30; // r8d
  _DWORD *j; // rax
  unsigned int v32; // r8d
  __int64 v33; // rcx
  unsigned __int64 k; // rax
  unsigned int *v35; // rax
  unsigned int v36; // edi
  __int64 v37; // r8

  if ( (*(_DWORD *)(a1 + 160) & 0x20000) != 0 )
  {
    v2 = a1 + 1744;
    if ( *(struct _KTHREAD **)(a1 + 4200) == KeGetCurrentThread() )
      RtlMergeBitMaps(a1 + 1744, a1 + 1688);
    v3 = *(_DWORD *)v2;
    v4 = 0LL;
    if ( *(_DWORD *)v2 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v2 + 8);
        v6 = *(_DWORD *)(v5 + 4 * v4);
        if ( v3 < 0x20 )
          break;
        *(_DWORD *)(v5 + 4 * v4) = ~v6;
        v4 = (unsigned int)(v4 + 1);
        v3 -= 32;
        if ( !v3 )
          goto LABEL_9;
      }
      *(_DWORD *)(v5 + 4LL * (unsigned int)v4) = v6 ^ ((1 << v3) - 1);
    }
LABEL_9:
    RtlMergeBitMaps(v2, a1 + 88);
    RtlMergeBitMaps(v2, a1 + 112);
    v7 = *(struct _KTHREAD **)(a1 + 4200);
    if ( v7 && v7 != KeGetCurrentThread() )
      RtlMergeBitMaps(v2, a1 + 1688);
    v8 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
    {
      v9 = *(_DWORD **)(v2 + 8);
      v10 = 0;
      v11 = v9;
      v12 = *v9;
      v13 = v9 + 1;
      v14 = (unsigned __int64)&v9[(unsigned __int64)(v8 - 1) >> 5];
      while ( 1 )
      {
        v15 = ~v12;
        if ( v15 )
          break;
        if ( (unsigned __int64)v13 > v14 )
          goto LABEL_48;
        ++v11;
        ++v13;
        v12 = *v11;
      }
      _BitScanForward64((unsigned __int64 *)&v16, v15);
      v17 = v16 + 32 * (v11 - v9);
      if ( v17 > v8 )
      {
LABEL_48:
        v17 = *(_DWORD *)v2;
      }
      else
      {
        for ( i = ~(v15 | ((1 << v16) - 1)); ; i = *v19 )
        {
          if ( (_DWORD)i )
          {
            _BitScanForward64(&i, i);
            goto LABEL_21;
          }
          v19 = v11 + 1;
          if ( (unsigned __int64)(v11 + 1) > v14 )
            break;
          ++v11;
        }
        LODWORD(i) = 32;
LABEL_21:
        v20 = 32 * (v11 - v9) + i;
        if ( v20 > v8 )
          v20 = *(_DWORD *)v2;
        v10 = v20 - v17;
      }
    }
    else
    {
      v17 = 0;
      v10 = 0;
    }
    v21 = a1 + 224;
    StorageLength = HvpViewMapGetStorageLength(a1 + 224);
    while ( 1 )
    {
      if ( !v10 )
        return;
      v23 = ((v17 << 9) + (v10 << 9)) & 0xFFFFF000;
      v24 = ((v17 << 9) + 4095) & 0xFFFFF000;
      if ( (_DWORD)v24 != v23 )
      {
        if ( (unsigned int)v24 < StorageLength )
        {
          if ( v23 > StorageLength )
LABEL_54:
            v37 = StorageLength - (unsigned int)v24;
          else
            v37 = v23 - (unsigned int)v24;
          HvpViewMapUnCOWAndSealRange(v21, v24, v37);
          goto LABEL_28;
        }
        if ( v23 <= StorageLength )
          goto LABEL_54;
      }
LABEL_28:
      v25 = *(_DWORD *)v2;
      v26 = v17 + v10;
      if ( *(_DWORD *)v2 <= v17 + v10 )
        return;
      v27 = *(_QWORD *)(v2 + 8);
      v10 = 0;
      v28 = v27 + 4 * ((unsigned __int64)(v25 - 1) >> 5);
      v29 = (_DWORD *)(v27 + 4 * ((unsigned __int64)v26 >> 5));
      v30 = *v29 | ((1 << v26) - 1);
      for ( j = v29 + 1; ; ++j )
      {
        v32 = ~v30;
        if ( v32 )
          break;
        if ( (unsigned __int64)j > v28 )
          goto LABEL_49;
        v30 = *++v29;
      }
      _BitScanForward64((unsigned __int64 *)&v33, v32);
      v17 = v33 + 32 * (((__int64)v29 - v27) >> 2);
      if ( v17 > v25 )
      {
LABEL_49:
        v17 = *(_DWORD *)v2;
        continue;
      }
      for ( k = ~(v32 | ((1 << v33) - 1)); ; k = *v35 )
      {
        if ( (_DWORD)k )
        {
          _BitScanForward64(&k, k);
          goto LABEL_39;
        }
        v35 = v29 + 1;
        if ( (unsigned __int64)(v29 + 1) > v28 )
          break;
        ++v29;
      }
      LODWORD(k) = 32;
LABEL_39:
      v36 = 32 * (((__int64)v29 - v27) >> 2) + k;
      if ( v36 > v25 )
        v36 = *(_DWORD *)v2;
      v10 = v36 - v17;
    }
  }
}
