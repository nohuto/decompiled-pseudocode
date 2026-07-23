/*
 * XREFs of RtlFindClearBits @ 0x180072F10
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x180072E40 (RtlFindClearBitsAndSet.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v6; // ebp
  unsigned int v7; // r9d
  unsigned int *Buffer; // r8
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // r11d
  ULONG v12; // edx
  char *v13; // rsi
  ULONG v14; // r14d
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  unsigned __int64 *v18; // r8
  int v19; // ecx
  unsigned __int64 *v20; // r11
  bool v21; // zf
  __int64 v22; // rax
  ULONG v23; // r9d
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  ULONG v27; // ecx
  ULONG v28; // r9d
  unsigned __int64 v29; // rax
  __int64 v31; // rax
  int v32; // r9d
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  char v41; // r9
  unsigned __int64 *v42; // r10
  unsigned int v43; // r9d
  __int64 v44; // rax
  unsigned __int64 *v45; // rax
  unsigned int *v46; // [rsp+40h] [rbp+8h]
  __int64 v47; // [rsp+58h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = 0;
  if ( HintIndex < BitMapHeader->SizeOfBitMap )
    v6 = HintIndex;
  v7 = SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    Buffer = BitMapHeader->Buffer;
    v9 = (unsigned __int8)Buffer & 4;
    v46 = Buffer;
    v47 = v9;
    v10 = v9 != 0 ? 0x20 : 0;
    while ( 1 )
    {
      v11 = v10 + v7;
      v12 = v10 + v6;
      v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
      if ( v7 - v6 + 1 < NumberToFind )
      {
        v27 = -1;
        goto LABEL_28;
      }
      v14 = v11 - NumberToFind + 1;
      v15 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
      v16 = (unsigned __int64)v12 >> 6;
      v17 = *(_QWORD *)&v13[8 * v16] | ((1LL << v12) - 1);
      v18 = (unsigned __int64 *)&v13[8 * v16];
      if ( NumberToFind > 0x7F )
      {
        v36 = v15 + 8;
        if ( (v14 & 0x3F) == 0 )
          v36 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
        if ( v17 )
        {
          if ( *++v18 )
            goto LABEL_75;
          v21 = !_BitScanReverse64((unsigned __int64 *)&v37, v17);
          if ( v21 )
            v38 = 64;
          else
            v38 = 63 - v37;
        }
        else
        {
          v38 = 0;
        }
        while ( 1 )
        {
          v27 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) - v38;
          if ( v27 > v14 )
            goto LABEL_36;
          v40 = NumberToFind - v38;
          v41 = NumberToFind - v38;
          v42 = &v18[v40 >> 6];
          while ( ++v18 != v42 )
          {
            if ( *v18 )
              goto LABEL_75;
          }
          v43 = v41 & 0x3F;
          if ( !v43 )
            goto LABEL_38;
          v21 = !_BitScanForward64((unsigned __int64 *)&v44, *v18);
          if ( v21 )
            LODWORD(v44) = 64;
          if ( (unsigned int)v44 >= v43 )
            goto LABEL_38;
          do
          {
LABEL_75:
            v45 = v18;
            if ( (unsigned __int64)v18 > v36 )
              goto LABEL_36;
            ++v18;
          }
          while ( *v18 );
          v21 = !_BitScanReverse64((unsigned __int64 *)&v39, *v45);
          if ( v21 )
            v38 = 64;
          else
            v38 = 63 - v39;
        }
      }
      if ( NumberToFind >= 0x40 )
        break;
      if ( NumberToFind <= 1 )
      {
        while ( v17 == -1 )
        {
          if ( (unsigned __int64)++v18 > v15 )
            goto LABEL_36;
          v17 = *v18;
        }
        _BitScanForward64(&v29, ~v17);
        v27 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) + v29;
        if ( v27 <= v14 )
        {
LABEL_38:
          if ( v27 != -1 )
          {
            v27 -= v10;
            return v27;
          }
          goto LABEL_37;
        }
LABEL_36:
        v27 = -1;
LABEL_37:
        Buffer = v46;
        goto LABEL_28;
      }
      v19 = 0;
      v20 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
      while ( 1 )
      {
        if ( v17 == -1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v18 > v15 )
              goto LABEL_27;
            v17 = *v18;
            if ( *v18 != -1LL )
            {
              v19 = 0;
              break;
            }
          }
        }
        v21 = !_BitScanForward64((unsigned __int64 *)&v22, v17);
        if ( v21 )
          LODWORD(v22) = 64;
        if ( v19 + (int)v22 >= NumberToFind )
          break;
        v23 = NumberToFind;
        v24 = ~v17;
        while ( 1 )
        {
          v24 &= v24 >> (v23 >> 1);
          if ( !v24 )
            break;
          v23 -= v23 >> 1;
          if ( v23 <= 1 )
          {
            _BitScanForward64((unsigned __int64 *)&v25, v24);
            goto LABEL_26;
          }
        }
        if ( v18 == v20 )
          goto LABEL_27;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v26, v17);
        v17 = v18[1];
        if ( v21 )
        {
          ++v18;
          v19 = 64;
        }
        else
        {
          v19 = 63 - v26;
          ++v18;
        }
      }
      LODWORD(v25) = -v19;
LABEL_26:
      v27 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) + v25;
      if ( v27 <= v14 )
        goto LABEL_38;
LABEL_27:
      Buffer = v46;
      v27 = -1;
LABEL_28:
      if ( !v6 )
        return v27;
      v9 = v47;
      v28 = NumberToFind + HintIndex;
      v6 = 0;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v28 = SizeOfBitMap;
      v7 = v28 - 1;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v17 < 0 )
        {
          if ( (unsigned __int64)++v18 > v15 )
            goto LABEL_36;
          v17 = *v18;
        }
        v21 = !_BitScanReverse64((unsigned __int64 *)&v31, v17);
        if ( v21 )
          v32 = 64;
        else
          v32 = 63 - v31;
        v27 = (((unsigned int)(((char *)v18 - v13) >> 3) + 1) << 6) - v32;
        if ( v27 > v14 )
          goto LABEL_27;
        v33 = NumberToFind - v32;
        if ( NumberToFind == v32 )
          goto LABEL_38;
        v34 = v18[1];
        ++v18;
        v17 = v34;
        if ( v33 >= 0x40 )
          break;
LABEL_50:
        v21 = !_BitScanForward64((unsigned __int64 *)&v35, v17);
        if ( v21 )
          LODWORD(v35) = 64;
        if ( (unsigned int)v35 >= v33 )
          goto LABEL_38;
      }
      if ( !v34 )
      {
        v33 -= 64;
        if ( !v33 )
          goto LABEL_38;
        v17 = v18[1];
        ++v18;
        goto LABEL_50;
      }
    }
  }
  return v6 & 0xFFFFFFF8;
}
