/*
 * XREFs of RtlFindSetBits @ 0x18010A7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r14d
  ULONG v6; // r9d
  unsigned int v7; // r10d
  unsigned int *Buffer; // r8
  ULONG v9; // eax
  int v10; // r15d
  ULONG v11; // edx
  unsigned int v12; // r11d
  char *v13; // rsi
  __int64 v14; // r8
  ULONG v15; // ebp
  unsigned __int64 v16; // rdi
  char *v17; // rdx
  signed __int64 v18; // r8
  int v19; // r9d
  char *v20; // r11
  bool v21; // zf
  __int64 v22; // rax
  ULONG v23; // r10d
  unsigned __int64 v24; // r9
  ULONG v25; // r9d
  bool v26; // cc
  ULONG v27; // r10d
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v31; // rax
  int v32; // r8d
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // r10
  __int64 v36; // rax
  int v37; // ecx
  char *v38; // rcx
  __int64 v39; // r8
  char v40; // r8
  char *v41; // rcx
  unsigned int v42; // r8d
  __int64 v43; // rcx
  unsigned int *v44; // [rsp+40h] [rbp+8h]
  ULONG v45; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  v44 = Buffer;
  v9 = v6;
  v10 = ((unsigned __int8)Buffer & 4) != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v45 = v9;
    v11 = v10 + v9;
    v12 = v10 + v7;
    v13 = (char *)Buffer - (((unsigned __int8)v44 & 4) != 0LL ? 4 : 0);
    if ( v7 - v9 + 1 >= NumberToFind )
    {
      v14 = (1LL << v11) - 1;
      v15 = v12 - NumberToFind + 1;
      v16 = (unsigned __int64)&v13[8 * ((unsigned __int64)v15 >> 6)];
      v17 = &v13[8 * ((unsigned __int64)v11 >> 6)];
      v18 = ~*(_QWORD *)v17 | v14;
      if ( NumberToFind > 0x7F )
      {
        v35 = v16 + 8;
        if ( (v15 & 0x3F) == 0 )
          v35 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v12 - NumberToFind + 1) >> 6)];
        if ( !v18 )
        {
          v37 = 0;
          goto LABEL_66;
        }
        v17 += 8;
        if ( *(_QWORD *)v17 != -1LL )
          goto LABEL_61;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v36, v18);
        if ( !v21 )
        {
          v37 = 63 - v36;
          goto LABEL_66;
        }
LABEL_78:
        v37 = 64;
LABEL_66:
        while ( 1 )
        {
          v25 = ((unsigned int)((v17 - v13) >> 3) << 6) - v37;
          if ( v25 > v15 )
            goto LABEL_21;
          v40 = NumberToFind - v37;
          v41 = &v17[8 * ((unsigned __int64)(NumberToFind - v37) >> 6)];
          while ( 1 )
          {
            v17 += 8;
            if ( v17 == v41 )
              break;
            if ( *(_QWORD *)v17 != -1LL )
              goto LABEL_61;
          }
          v42 = v40 & 0x3F;
          if ( !v42 )
            goto LABEL_37;
          v21 = !_BitScanForward64((unsigned __int64 *)&v43, ~*(_QWORD *)v17);
          if ( v21 )
            LODWORD(v43) = 64;
          if ( (unsigned int)v43 >= v42 )
            goto LABEL_37;
          do
          {
LABEL_61:
            v38 = v17;
            if ( (unsigned __int64)v17 > v35 )
              goto LABEL_21;
            v17 += 8;
          }
          while ( *(_QWORD *)v17 != -1LL );
          v21 = !_BitScanReverse64((unsigned __int64 *)&v39, ~*(_QWORD *)v38);
          if ( v21 )
            goto LABEL_78;
          v37 = 63 - v39;
        }
      }
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind <= 1 )
        {
          while ( v18 == -1 )
          {
            v17 += 8;
            if ( (unsigned __int64)v17 > v16 )
              goto LABEL_21;
            v18 = ~*(_QWORD *)v17;
          }
          _BitScanForward64(&v29, ~v18);
          v25 = ((unsigned int)((v17 - v13) >> 3) << 6) + v29;
          v26 = v25 <= v15;
LABEL_20:
          if ( v26 )
          {
LABEL_37:
            if ( v25 != -1 )
            {
              v25 -= v10;
              return v25;
            }
            goto LABEL_22;
          }
        }
        else
        {
          v19 = 0;
          v20 = &v13[8 * ((unsigned __int64)v12 >> 6)];
          while ( v18 != -1 )
          {
LABEL_12:
            v21 = !_BitScanForward64((unsigned __int64 *)&v22, v18);
            if ( v21 )
              LODWORD(v22) = 64;
            if ( v19 + (int)v22 >= NumberToFind )
            {
              LODWORD(v24) = -v19;
LABEL_19:
              v25 = ((unsigned int)((v17 - v13) >> 3) << 6) + v24;
              v26 = v25 <= v15;
              goto LABEL_20;
            }
            v23 = NumberToFind;
            v24 = ~v18;
            while ( 1 )
            {
              v24 &= v24 >> (v23 >> 1);
              if ( !v24 )
                break;
              v23 -= v23 >> 1;
              if ( v23 <= 1 )
              {
                _BitScanForward64(&v24, v24);
                goto LABEL_19;
              }
            }
            if ( v17 == v20 )
              goto LABEL_21;
            v21 = !_BitScanReverse64((unsigned __int64 *)&v28, v18);
            if ( v21 )
              v19 = 64;
            else
              v19 = 63 - v28;
            v17 += 8;
            v18 = ~*(_QWORD *)v17;
          }
          while ( 1 )
          {
            v17 += 8;
            if ( (unsigned __int64)v17 > v16 )
              break;
            v18 = ~*(_QWORD *)v17;
            if ( *(_QWORD *)v17 )
            {
              v19 = 0;
              goto LABEL_12;
            }
          }
        }
LABEL_21:
        v25 = -1;
LABEL_22:
        Buffer = v44;
        goto LABEL_23;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            v17 += 8;
            if ( (unsigned __int64)v17 > v16 )
              goto LABEL_21;
            v18 = ~*(_QWORD *)v17;
          }
          v21 = !_BitScanReverse64((unsigned __int64 *)&v31, v18);
          if ( v21 )
            v32 = 64;
          else
            v32 = 63 - v31;
          v25 = (((unsigned int)((v17 - v13) >> 3) + 1) << 6) - v32;
          if ( v25 > v15 )
            goto LABEL_21;
          v33 = NumberToFind - v32;
          if ( NumberToFind == v32 )
            goto LABEL_37;
          v17 += 8;
          v18 = ~*(_QWORD *)v17;
          if ( v33 >= 0x40 )
            break;
LABEL_46:
          v21 = !_BitScanForward64((unsigned __int64 *)&v34, v18);
          if ( v21 )
            LODWORD(v34) = 64;
          if ( (unsigned int)v34 >= v33 )
            goto LABEL_37;
        }
        if ( *(_QWORD *)v17 == -1LL )
        {
          v33 -= 64;
          if ( !v33 )
            goto LABEL_37;
          v17 += 8;
          v18 = ~*(_QWORD *)v17;
          goto LABEL_46;
        }
      }
    }
    v25 = -1;
LABEL_23:
    if ( !v45 )
      return v25;
    v27 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v27 = SizeOfBitMap;
    v7 = v27 - 1;
    v9 = 0;
  }
}
