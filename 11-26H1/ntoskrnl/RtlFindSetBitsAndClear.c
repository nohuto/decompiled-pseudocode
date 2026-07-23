/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1404EBB90
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 */

ULONG __stdcall RtlFindSetBitsAndClear(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v6; // ebx
  unsigned int v7; // r9d
  ULONG v8; // ebx
  unsigned int *Buffer; // rdi
  __int64 v10; // rcx
  ULONG v11; // eax
  int v12; // r15d
  ULONG v13; // edx
  unsigned int v14; // r10d
  char *v15; // r14
  ULONG v16; // ebp
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  char *v19; // rdx
  signed __int64 v20; // r8
  unsigned __int64 v21; // r9
  int v22; // ecx
  bool v23; // zf
  __int64 v24; // rax
  char *v25; // rcx
  __int64 v26; // r8
  char v27; // r8
  char *v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rcx
  int v31; // ebx
  char *v32; // rdi
  __int64 v33; // rax
  ULONG v34; // r10d
  unsigned __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // rax
  ULONG v41; // r9d
  __int64 v42; // rax
  bool v43; // cc
  unsigned __int64 v44; // rax
  unsigned int *v46; // [rsp+20h] [rbp-58h]
  ULONG v47; // [rsp+88h] [rbp+10h]
  ULONG v48; // [rsp+90h] [rbp+18h]
  __int64 v49; // [rsp+98h] [rbp+20h]

  v48 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v8 = v6 & 0xFFFFFFF8;
    goto LABEL_78;
  }
  Buffer = BitMapHeader->Buffer;
  v46 = Buffer;
  v10 = (unsigned __int8)Buffer & 4;
  v49 = v10;
  v11 = v6;
  v12 = v10 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v47 = v11;
    v13 = v12 + v11;
    v14 = v12 + v7;
    v15 = (char *)Buffer - (v10 != 0 ? 4 : 0);
    if ( v7 - v11 + 1 < NumberToFind )
    {
      v8 = -1;
      goto LABEL_60;
    }
    v16 = v14 - NumberToFind + 1;
    v17 = (1LL << v13) - 1;
    v18 = (unsigned __int64)&v15[8 * ((unsigned __int64)v16 >> 6)];
    v19 = &v15[8 * ((unsigned __int64)v13 >> 6)];
    v20 = ~*(_QWORD *)v19 | v17;
    if ( NumberToFind <= 0x7F )
    {
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v31 = 0;
          v32 = &v15[8 * ((unsigned __int64)v14 >> 6)];
          while ( v20 != -1 )
          {
LABEL_36:
            v23 = !_BitScanForward64((unsigned __int64 *)&v33, v20);
            if ( v23 )
              LODWORD(v33) = 64;
            if ( v31 + (int)v33 >= NumberToFind )
            {
              LODWORD(v36) = -v31;
LABEL_70:
              v8 = ((unsigned int)((v19 - v15) >> 3) << 6) + v36;
              v43 = v8 <= v16;
              goto LABEL_71;
            }
            v34 = NumberToFind;
            v35 = ~v20;
            while ( 1 )
            {
              v35 &= v35 >> (v34 >> 1);
              if ( !v35 )
                break;
              v34 -= v34 >> 1;
              if ( v34 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v36, v35);
                goto LABEL_70;
              }
            }
            if ( v19 == v32 )
              goto LABEL_72;
            v23 = !_BitScanReverse64((unsigned __int64 *)&v42, v20);
            if ( v23 )
              v31 = 64;
            else
              v31 = 63 - v42;
            v19 += 8;
            v20 = ~*(_QWORD *)v19;
          }
          while ( 1 )
          {
            v19 += 8;
            if ( (unsigned __int64)v19 > v18 )
              goto LABEL_72;
            v20 = ~*(_QWORD *)v19;
            if ( *(_QWORD *)v19 )
            {
              v31 = 0;
              goto LABEL_36;
            }
          }
        }
        while ( v20 == -1 )
        {
          v19 += 8;
          if ( (unsigned __int64)v19 > v18 )
            goto LABEL_72;
          v20 = ~*(_QWORD *)v19;
        }
        _BitScanForward64(&v44, ~v20);
        v8 = ((unsigned int)((v19 - v15) >> 3) << 6) + v44;
        v43 = v8 <= v16;
LABEL_71:
        if ( !v43 )
          goto LABEL_72;
        goto LABEL_58;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v20 < 0 )
          {
            v19 += 8;
            if ( (unsigned __int64)v19 > v18 )
              goto LABEL_72;
            v20 = ~*(_QWORD *)v19;
          }
          v23 = !_BitScanReverse64((unsigned __int64 *)&v37, v20);
          if ( v23 )
            v38 = 64;
          else
            v38 = 63 - v37;
          v8 = (((unsigned int)((v19 - v15) >> 3) + 1) << 6) - v38;
          if ( v8 > v16 )
            goto LABEL_72;
          v39 = NumberToFind - v38;
          if ( NumberToFind == v38 )
            goto LABEL_58;
          v19 += 8;
          v20 = ~*(_QWORD *)v19;
          if ( v39 >= 0x40 )
            break;
LABEL_55:
          v23 = !_BitScanForward64((unsigned __int64 *)&v40, v20);
          if ( v23 )
            LODWORD(v40) = 64;
          if ( (unsigned int)v40 >= v39 )
            goto LABEL_58;
        }
        if ( *(_QWORD *)v19 == -1LL )
        {
          v39 -= 64;
          if ( !v39 )
            goto LABEL_58;
          v19 += 8;
          v20 = ~*(_QWORD *)v19;
          goto LABEL_55;
        }
      }
    }
    v21 = v18 + 8;
    if ( (v16 & 0x3F) == 0 )
      v21 = (unsigned __int64)&v15[8 * ((unsigned __int64)(v14 - NumberToFind + 1) >> 6)];
    if ( v20 )
    {
      v19 += 8;
      if ( *(_QWORD *)v19 != -1LL )
        goto LABEL_15;
      v23 = !_BitScanReverse64((unsigned __int64 *)&v24, v20);
      if ( v23 )
LABEL_13:
        v22 = 64;
      else
        v22 = 63 - v24;
    }
    else
    {
      v22 = 0;
    }
LABEL_19:
    v8 = ((unsigned int)((v19 - v15) >> 3) << 6) - v22;
    if ( v8 > v16 )
      goto LABEL_72;
    v27 = NumberToFind - v22;
    v28 = &v19[8 * ((unsigned __int64)(NumberToFind - v22) >> 6)];
    while ( 1 )
    {
      v19 += 8;
      if ( v19 == v28 )
        break;
      if ( *(_QWORD *)v19 != -1LL )
        goto LABEL_15;
    }
    v29 = v27 & 0x3F;
    if ( v29 )
    {
      v23 = !_BitScanForward64((unsigned __int64 *)&v30, ~*(_QWORD *)v19);
      if ( v23 )
        LODWORD(v30) = 64;
      if ( (unsigned int)v30 < v29 )
      {
LABEL_15:
        while ( 1 )
        {
          v25 = v19;
          if ( (unsigned __int64)v19 > v21 )
            break;
          v19 += 8;
          if ( *(_QWORD *)v19 == -1LL )
          {
            v23 = !_BitScanReverse64((unsigned __int64 *)&v26, ~*(_QWORD *)v25);
            if ( v23 )
              goto LABEL_13;
            v22 = 63 - v26;
            goto LABEL_19;
          }
        }
LABEL_72:
        v8 = -1;
        goto LABEL_59;
      }
    }
LABEL_58:
    if ( v8 != -1 )
      break;
LABEL_59:
    HintIndex = v48;
LABEL_60:
    if ( !v47 )
      goto LABEL_78;
    v10 = v49;
    v41 = NumberToFind + HintIndex;
    Buffer = v46;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v41 = SizeOfBitMap;
    v7 = v41 - 1;
    v11 = 0;
  }
  v8 -= v12;
LABEL_78:
  if ( v8 != -1 )
    RtlClearBits(BitMapHeader, v8, NumberToFind);
  return v8;
}
