/*
 * XREFs of RtlFindSetBits @ 0x1403F1120
 * Callers:
 *     HvpFindFreeCell @ 0x1408E1930 (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1408E2F60 (HvpRemoveFreeCellHint.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     MiHandleDriverNonPagedSections @ 0x140ACAFE8 (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v4; // ebp
  unsigned int v7; // r9d
  unsigned int *Buffer; // r8
  __int64 v9; // r14
  int v10; // ebx
  unsigned int v11; // r10d
  ULONG v12; // edx
  char *v13; // r15
  ULONG v14; // esi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  char *v18; // rax
  signed __int64 v19; // r8
  unsigned __int64 v20; // rcx
  ULONG v21; // r10d
  ULONG v23; // r9d
  int v24; // edx
  char *v25; // rsi
  bool v26; // zf
  __int64 v27; // rcx
  ULONG v28; // r10d
  unsigned __int64 v29; // rdi
  __int64 v30; // r10
  unsigned __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // edx
  char v35; // r8
  char *v36; // rdx
  unsigned int v37; // edi
  __int64 v38; // rcx
  signed __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  unsigned int v42; // r8d
  __int64 v43; // rdx
  char *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  int v50; // edx
  unsigned int *v51; // [rsp+40h] [rbp+8h]
  ULONG v52; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = 0;
  if ( HintIndex < BitMapHeader->SizeOfBitMap )
    v4 = HintIndex;
  v7 = SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    Buffer = BitMapHeader->Buffer;
    v9 = (unsigned __int8)Buffer & 4;
    v51 = Buffer;
    v10 = v9 != 0 ? 0x20 : 0;
    while ( 1 )
    {
      v11 = v10 + v7;
      v12 = v10 + v4;
      v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
      if ( v7 - v4 + 1 >= NumberToFind )
        break;
      v21 = -1;
LABEL_19:
      if ( !v4 )
        return v21;
      v23 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v23 = SizeOfBitMap;
      v7 = v23 - 1;
      v4 = 0;
    }
    v14 = v11 - NumberToFind + 1;
    v52 = v14;
    v15 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
    v16 = (unsigned __int64)v12 >> 6;
    v17 = *(_QWORD *)&v13[8 * v16];
    v18 = &v13[8 * v16];
    v19 = ~v17 | ((1LL << v12) - 1);
    if ( NumberToFind > 0x7F )
    {
      v31 = v15 + 8;
      if ( (v14 & 0x3F) == 0 )
        v31 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
      if ( v19 )
      {
        v32 = *((_QWORD *)v18 + 1);
        v18 += 8;
        if ( v32 != -1 )
          goto LABEL_66;
        v26 = !_BitScanReverse64((unsigned __int64 *)&v33, v19);
        if ( v26 )
          v34 = 64;
        else
          v34 = 63 - v33;
      }
      else
      {
        v34 = 0;
      }
      while ( 1 )
      {
        v21 = ((unsigned int)((v18 - v13) >> 3) << 6) - v34;
        if ( v21 > v14 )
          break;
        v35 = NumberToFind - v34;
        v36 = &v18[8 * ((unsigned __int64)(NumberToFind - v34) >> 6)];
        while ( 1 )
        {
          v18 += 8;
          if ( v18 == v36 )
            break;
          if ( *(_QWORD *)v18 != -1LL )
            goto LABEL_66;
        }
        v42 = v35 & 0x3F;
        if ( !v42 )
          goto LABEL_13;
        v26 = !_BitScanForward64((unsigned __int64 *)&v43, ~*(_QWORD *)v18);
        if ( v26 )
          LODWORD(v43) = 64;
        if ( (unsigned int)v43 >= v42 )
          goto LABEL_13;
        do
        {
LABEL_66:
          v44 = v18;
          if ( (unsigned __int64)v18 > v31 )
            goto LABEL_17;
          v45 = *((_QWORD *)v18 + 1);
          v18 += 8;
        }
        while ( v45 != -1 );
        v26 = !_BitScanReverse64((unsigned __int64 *)&v46, ~*(_QWORD *)v44);
        if ( v26 )
          v34 = 64;
        else
          v34 = 63 - v46;
      }
LABEL_17:
      v21 = -1;
      goto LABEL_18;
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v24 = 0;
        v25 = &v13[8 * ((unsigned __int64)v11 >> 6)];
        while ( 1 )
        {
          if ( v19 == -1 )
          {
            while ( 1 )
            {
              v18 += 8;
              if ( (unsigned __int64)v18 > v15 )
                goto LABEL_17;
              v19 = ~*(_QWORD *)v18;
              if ( *(_QWORD *)v18 )
              {
                v24 = 0;
                break;
              }
            }
          }
          v26 = !_BitScanForward64((unsigned __int64 *)&v27, v19);
          if ( v26 )
            LODWORD(v27) = 64;
          if ( v24 + (int)v27 >= NumberToFind )
            break;
          v28 = NumberToFind;
          v29 = ~v19;
          while ( 1 )
          {
            v29 &= v29 >> (v28 >> 1);
            if ( !v29 )
              break;
            v28 -= v28 >> 1;
            if ( v28 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v30, v29);
              goto LABEL_32;
            }
          }
          if ( v18 == v25 )
            goto LABEL_17;
          v26 = !_BitScanReverse64((unsigned __int64 *)&v47, v19);
          if ( v26 )
          {
            v48 = *((_QWORD *)v18 + 1);
            v18 += 8;
            v24 = 64;
            v19 = ~v48;
          }
          else
          {
            v24 = 63 - v47;
            v19 = ~*((_QWORD *)v18 + 1);
            v18 += 8;
          }
        }
        LODWORD(v30) = -v24;
LABEL_32:
        v21 = ((unsigned int)((v18 - v13) >> 3) << 6) + v30;
        if ( v21 > v52 )
          goto LABEL_17;
LABEL_13:
        if ( v21 != -1 )
        {
          v21 -= v10;
          return v21;
        }
        goto LABEL_18;
      }
      while ( v19 == -1 )
      {
        v18 += 8;
        if ( (unsigned __int64)v18 > v15 )
          goto LABEL_17;
        v19 = ~*(_QWORD *)v18;
      }
      _BitScanForward64(&v20, ~v19);
      v21 = ((unsigned int)((v18 - v13) >> 3) << 6) + v20;
      if ( v21 <= v14 )
        goto LABEL_13;
      v21 = -1;
LABEL_18:
      Buffer = v51;
      goto LABEL_19;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v19 < 0 )
        {
          v18 += 8;
          if ( (unsigned __int64)v18 > v15 )
            goto LABEL_17;
          v19 = ~*(_QWORD *)v18;
        }
        v26 = !_BitScanReverse64((unsigned __int64 *)&v49, v19);
        if ( v26 )
          v50 = 64;
        else
          v50 = 63 - v49;
        v21 = (((unsigned int)((v18 - v13) >> 3) + 1) << 6) - v50;
        if ( v21 > v14 )
          goto LABEL_17;
        v37 = NumberToFind - v50;
        if ( NumberToFind == v50 )
          goto LABEL_13;
        v38 = *((_QWORD *)v18 + 1);
        v18 += 8;
        v39 = ~v38;
        v19 = v39;
        if ( v37 >= 0x40 )
          break;
LABEL_58:
        v26 = !_BitScanForward64((unsigned __int64 *)&v41, v19);
        if ( v26 )
          LODWORD(v41) = 64;
        if ( (unsigned int)v41 >= v37 )
          goto LABEL_13;
      }
      if ( !v39 )
      {
        v37 -= 64;
        if ( !v37 )
          goto LABEL_13;
        v40 = *((_QWORD *)v18 + 1);
        v18 += 8;
        v19 = ~v40;
        goto LABEL_58;
      }
    }
  }
  return v4 & 0xFFFFFFF8;
}
