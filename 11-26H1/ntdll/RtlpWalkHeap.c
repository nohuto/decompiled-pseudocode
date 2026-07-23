/*
 * XREFs of RtlpWalkHeap @ 0x180093700
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x180092B10 (RtlpHpTagDestroyHeap.c)
 *     RtlWalkHeap @ 0x180092BC0 (RtlWalkHeap.c)
 *     RtlpWalkHeapInternal @ 0x180092C10 (RtlpWalkHeapInternal.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180092C70 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpWalkLFHBlock @ 0x1800940A0 (RtlpWalkLFHBlock.c)
 *     RtlDebugWalkHeap @ 0x180094934 (RtlDebugWalkHeap.c)
 *     RtlpSetHeapWalkEntryOverheadBytes @ 0x180095230 (RtlpSetHeapWalkEntryOverheadBytes.c)
 *     RtlpWalkLowFragHeapSegment @ 0x180106308 (RtlpWalkLowFragHeapSegment.c)
 *     RtlpLogHeapWalkEvent @ 0x1801209AC (RtlpLogHeapWalkEvent.c)
 */

__int64 __fastcall RtlpWalkHeap(unsigned __int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rcx
  unsigned int v7; // ebp
  __int16 v8; // r15
  __int16 v9; // dx
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  _QWORD *v13; // r14
  unsigned __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  char v18; // dl
  __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // r14
  char v22; // al
  __int64 v23; // rax
  char v24; // al
  unsigned __int64 v25; // rax
  char v26; // al
  int v27; // r8d
  int v28; // edx
  char v29; // cl
  unsigned __int64 v30; // rcx
  char v31; // cl
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // edx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  int v39; // eax
  __int64 v40; // rax
  _QWORD *v41; // r8
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  int v46; // eax
  int v47; // eax
  __int64 v48; // r14
  int v49; // eax
  __int64 v50; // rax
  __int16 *v51; // rcx
  _QWORD *v52; // rax
  __int16 v53; // ax
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // r14
  __int64 v58; // rax
  unsigned int v59; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801C45D8)();
  if ( (((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) != 0
    && !(unsigned __int8)RtlDebugWalkHeap(a1) )
  {
    v7 = -1073741811;
    goto LABEL_10;
  }
  v6 = *(_QWORD **)a2;
  v7 = 0;
  LOBYTE(v8) = 1;
  v59 = 0;
  if ( !v6 )
  {
    v45 = (_QWORD *)a1;
    goto LABEL_133;
  }
  v9 = *(_WORD *)(a2 + 18);
  if ( (v9 & 0x1002) != 0 )
  {
    if ( (v9 & 2) == 0 || *(_BYTE *)(a1 + 418) != 2 || v6 != *(_QWORD **)(a1 + 408) )
    {
      if ( a3 && (v9 & 2) != 0 )
      {
        v21 = v6[8];
        goto LABEL_37;
      }
      v41 = (_QWORD *)(a1 + 288);
      v21 = (unsigned __int64)v6 + *(_QWORD *)(a2 + 8);
      if ( (v9 & 0x1000) != 0 )
      {
        v42 = (_QWORD *)*v41;
        v43 = v6 - 6;
        while ( v42 != v41 )
        {
          v6 = v42 - 3;
          if ( v42[3] <= (unsigned __int64)v43 && (unsigned __int64)v43 <= v6[9] )
            goto LABEL_120;
          v42 = (_QWORD *)*v42;
        }
        v6 = 0LL;
      }
LABEL_120:
      if ( a3 && v21 < v6[9] )
        goto LABEL_37;
      v44 = (_QWORD *)v6[3];
      if ( v44 != v41 )
        goto LABEL_145;
      if ( *(_BYTE *)(a1 + 418) == 2 )
      {
        v45 = *(_QWORD **)(a1 + 408);
        goto LABEL_133;
      }
    }
    v45 = 0LL;
    goto LABEL_133;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(a1 + 418) == 2
        && *(_QWORD *)(a1 + 408)
        && (unsigned __int8)RtlpWalkLFHBlock(a1, a2)
        && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
      {
        goto LABEL_10;
      }
      v13 = *(_QWORD **)a2;
      if ( (*(_BYTE *)(a2 + 18) & 1) != 0 )
      {
        v14 = (unsigned __int64)(v13 - 2);
        _m_prefetchw((const void *)v14);
        if ( *(_BYTE *)(v14 + 15) == 5 )
          v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
        v18 = *(_BYTE *)(v14 + 15);
        if ( v18 == 4 )
        {
          v57 = *(_QWORD *)(v14 - 48);
          if ( v57 == a1 + 272 )
          {
LABEL_181:
            v7 = -2147483622;
            goto LABEL_10;
          }
          v21 = v57 + 48;
          goto LABEL_37;
        }
        v19 = *(unsigned __int8 *)(v14 + 14);
        if ( (_BYTE)v19 )
          v17 = (v14 & 0xFFFFFFFFFFFF0000uLL) - (v19 << 16) + 0x10000;
        else
          v17 = a1;
        if ( !v17 )
          goto LABEL_21;
        if ( v18 != 3 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v20 = *(_DWORD *)(v14 + 8);
            if ( (v20 & *(_DWORD *)(a1 + 124)) != 0 )
              LOWORD(v20) = *(_WORD *)(a1 + 136) ^ v20;
          }
          else
          {
            LOWORD(v20) = *(_WORD *)(v14 + 8);
          }
          v21 = v14 + 16LL * (unsigned __int16)v20;
          goto LABEL_37;
        }
      }
      else
      {
        v14 = (unsigned __int64)(v13 - 4);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v15 = *(_DWORD *)(v14 + 8);
          if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
            LOWORD(v15) = *(_WORD *)(a1 + 136) ^ v15;
        }
        else
        {
          LOWORD(v15) = *(_WORD *)(v14 + 8);
        }
        v16 = *(unsigned __int8 *)(v14 + 14);
        if ( (_BYTE)v16 )
          v17 = (v14 & 0xFFFFFFFFFFFF0000uLL) - (v16 << 16) + 0x10000;
        else
          v17 = a1;
        if ( !v17 )
        {
LABEL_21:
          v7 = -1073741503;
          goto LABEL_10;
        }
        if ( *(_BYTE *)(v14 + 15) != 3 )
        {
          v21 = 16LL * (unsigned __int16)v15 + v14;
          goto LABEL_37;
        }
      }
      if ( *(_QWORD *)(v14 + 56) + v14 + 64 < *(_QWORD *)(v17 + 72) )
      {
        *(_QWORD *)a2 = *(_QWORD *)(v14 + 48);
        v58 = *(_QWORD *)(v14 + 56);
        v21 = 0LL;
        *(_QWORD *)(a2 + 8) = v58;
        *(_DWORD *)(a2 + 16) = 0x10000000;
        *(_QWORD *)(a2 + 36) = 0LL;
        goto LABEL_37;
      }
      v44 = *(_QWORD **)(v17 + 24);
      if ( v44 == (_QWORD *)(a1 + 288) )
      {
LABEL_142:
        v48 = *(_QWORD *)(a1 + 272);
        if ( v48 == a1 + 272 )
          goto LABEL_181;
        v21 = v48 + 48;
        goto LABEL_37;
      }
LABEL_145:
      v45 = v44 - 3;
LABEL_133:
      v21 = 0LL;
      if ( !v45 )
        goto LABEL_142;
      if ( *(_BYTE *)(a1 + 418) == 2 && v45 == *(_QWORD **)(a1 + 408) )
      {
        RtlpWalkLowFragHeapSegment(a1, a2, &v59);
        v7 = v59;
        goto LABEL_10;
      }
      *(_QWORD *)a2 = v45;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v46 = *((_DWORD *)v45 + 2);
        if ( (v46 & *(_DWORD *)(a1 + 124)) != 0 )
          LOWORD(v46) = *(_WORD *)(a1 + 136) ^ v46;
      }
      else
      {
        LOWORD(v46) = *((_WORD *)v45 + 4);
      }
      *(_QWORD *)(a2 + 8) = 16LL * (unsigned __int16)v46;
      *(_DWORD *)(a2 + 16) = 0x20000;
      *(_DWORD *)(a2 + 24) = (*((_DWORD *)v45 + 14) - *((_DWORD *)v45 + 20)) << 12;
      v47 = *((_DWORD *)v45 + 20) << 12;
      *(_DWORD *)(a2 + 28) = v47;
      if ( (*((_BYTE *)v45 + 20) & 2) != 0 )
        *(_DWORD *)(a2 + 28) = v47 + 4096;
      *(_QWORD *)(a2 + 32) = v45[8] + 16 * (((*(_BYTE *)(v45[8] + 10LL) & 1) == 0) + 1LL);
      *(_QWORD *)(a2 + 40) = v45[9];
LABEL_37:
      if ( !v21 )
        goto LABEL_10;
      v22 = *(_BYTE *)(v21 + 15);
      if ( (v22 & 0x40) != 0 )
        v23 = v21 + 16LL * (*(_BYTE *)(v21 + 15) & 0x3F);
      else
        v23 = v22 == 4 ? v21 + 16LL * *(unsigned __int8 *)(v21 + 14) : v21;
      *(_WORD *)(a2 + 18) = 1;
      *(_QWORD *)a2 = v23 + 16;
      if ( *(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408) || !(unsigned __int8)RtlpWalkLFHBlock(a1, a2) )
        break;
      if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_10;
    }
    if ( ((*(_BYTE *)(v21 + 10) ^ (unsigned __int8)((*(_DWORD *)(a1 + 124) >> 20) & *(_BYTE *)(a1 + 138))) & 1) == 0 )
      break;
    v24 = *(_BYTE *)(v21 + 15);
    if ( (v24 & 0x40) != 0 )
    {
      v25 = v21 + 16LL * (*(_BYTE *)(v21 + 15) & 0x3F);
    }
    else if ( v24 == 4 )
    {
      v25 = v21 + 16LL * *(unsigned __int8 *)(v21 + 14);
    }
    else
    {
      v25 = v21;
    }
    *(_QWORD *)a2 = v25 + 16;
    v26 = *(_BYTE *)(v21 + 15);
    if ( v26 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v54 = *(_DWORD *)(v21 + 8);
        if ( (v54 & *(_DWORD *)(a1 + 124)) != 0 )
          LOWORD(v54) = *(_WORD *)(a1 + 136) ^ v54;
      }
      else
      {
        LOWORD(v54) = *(_WORD *)(v21 + 8);
      }
      v55 = *(_QWORD *)(v21 - 16) - (unsigned __int16)v54;
      *(_BYTE *)(a2 + 17) = 64;
      *(_QWORD *)(a2 + 8) = v55;
      *(_WORD *)(a2 + 18) = 16385;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v56 = *(_DWORD *)(v21 + 8);
        if ( (v56 & *(_DWORD *)(a1 + 124)) != 0 )
          LOWORD(v56) = *(_WORD *)(a1 + 136) ^ v56;
      }
      else
      {
        LOWORD(v56) = *(_WORD *)(v21 + 8);
      }
      RtlpSetHeapWalkEntryOverheadBytes(a2, (unsigned __int16)v56);
      goto LABEL_70;
    }
    if ( v26 == 3 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v21 + 48);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v21 + 56);
      *(_DWORD *)(a2 + 16) = 0x10000000;
      *(_QWORD *)(a2 + 36) = 0LL;
      goto LABEL_70;
    }
    if ( v26 != 1 )
    {
      v27 = *(_DWORD *)(a1 + 124);
      if ( v27 )
      {
        v28 = *(_DWORD *)(v21 + 8);
        v27 = *(_DWORD *)(a1 + 124);
        if ( (v28 & v27) != 0 )
          LOWORD(v28) = *(_WORD *)(a1 + 136) ^ v28;
      }
      else
      {
        LOWORD(v28) = *(_WORD *)(v21 + 8);
      }
      v29 = *(_BYTE *)(v21 + 15);
      if ( v29 == 5 )
      {
        v30 = *(unsigned __int16 *)(v21 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v29 & 0x40) != 0 )
      {
        v30 = *(unsigned __int16 *)(v21 + 16LL * (*(_BYTE *)(v21 + 15) & 0x3F) + 12);
      }
      else if ( (v29 & 0x3F) == 0x3F )
      {
        if ( v29 >= 0 )
        {
          if ( v27 )
          {
            LODWORD(v40) = *(_DWORD *)(v21 + 8);
            if ( ((unsigned int)v40 & *(_DWORD *)(a1 + 124)) != 0 )
            {
              v30 = *(_QWORD *)(v21 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v40));
              goto LABEL_58;
            }
          }
          else
          {
            LOWORD(v40) = *(_WORD *)(v21 + 8);
          }
        }
        else
        {
          if ( *(_WORD *)(v21 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v21 >> 4)) )
            v40 = 0LL;
          else
            v40 = *(_QWORD *)(v21
                            - ((unsigned __int64)(*(_DWORD *)(v21 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v21 >> 4)) >> 12));
          LOWORD(v40) = *(_WORD *)(v40 + 36);
        }
        v30 = *(_QWORD *)(v21 + 16LL * (unsigned __int16)v40);
      }
      else
      {
        v30 = *(_BYTE *)(v21 + 15) & 0x3F;
      }
LABEL_58:
      *(_QWORD *)(a2 + 8) = 16LL * (unsigned __int16)v28 - v30;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v21 + 14);
      *(_WORD *)(a2 + 18) = 1;
      v31 = *(_BYTE *)(v21 + 15);
      if ( v31 == 5 )
      {
        v32 = *(unsigned __int16 *)(v21 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        *(_BYTE *)(a2 + 16) = v32;
      }
      else if ( (v31 & 0x40) != 0 )
      {
        v32 = *(unsigned __int16 *)(v21 + 16LL * (*(_BYTE *)(v21 + 15) & 0x3F) + 12);
        *(_BYTE *)(a2 + 16) = v32;
      }
      else if ( (v31 & 0x3F) == 0x3F )
      {
        if ( v31 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            LODWORD(v33) = *(_DWORD *)(v21 + 8);
            if ( ((unsigned int)v33 & *(_DWORD *)(a1 + 124)) != 0 )
              LOWORD(v33) = *(_WORD *)(a1 + 136) ^ v33;
            v8 = *(_WORD *)(a2 + 18);
          }
          else
          {
            LOWORD(v33) = *(_WORD *)(v21 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v21 + 8) ^ a1 ^ (v21 >> 4)) )
            v33 = 0LL;
          else
            v33 = *(_QWORD *)(v21
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v21 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v21 >> 4)) >> 12));
          LOWORD(v33) = *(_WORD *)(v33 + 36);
          v8 = *(_WORD *)(a2 + 18);
        }
        v32 = *(_QWORD *)(v21 + 16LL * (unsigned __int16)v33);
        *(_BYTE *)(a2 + 16) = v32;
        if ( (v8 & 2) != 0 )
          goto LABEL_70;
      }
      else
      {
        v32 = *(_BYTE *)(v21 + 15) & 0x3F;
        *(_BYTE *)(a2 + 16) = v32;
      }
      *(_QWORD *)(a2 + 36) = v32;
LABEL_70:
      v34 = *(_DWORD *)(a1 + 124);
      if ( v34 )
      {
        v35 = *(_DWORD *)(v21 + 8);
        v34 = *(_DWORD *)(a1 + 124);
        if ( (v35 & v34) != 0 )
          v36 = HIWORD(v35) ^ *(unsigned __int16 *)(a1 + 138);
        else
          v36 = HIWORD(v35);
      }
      else
      {
        LOBYTE(v36) = *(_BYTE *)(v21 + 10);
      }
      if ( (v36 & 2) != 0 )
      {
        if ( *(_BYTE *)(v21 + 15) == 4 )
        {
          v51 = (__int16 *)(v21 - 30);
          v52 = (_QWORD *)(v21 - 24);
        }
        else
        {
          if ( v34 )
          {
            v49 = *(_DWORD *)(v21 + 8);
            if ( (v49 & *(_DWORD *)(a1 + 124)) != 0 )
              LOWORD(v49) = *(_WORD *)(a1 + 136) ^ v49;
          }
          else
          {
            LOWORD(v49) = *(_WORD *)(v21 + 8);
          }
          v50 = 16LL * (unsigned __int16)v49;
          v51 = (__int16 *)(v21 + v50 - 14);
          v52 = (_QWORD *)(v21 + v50 - 8);
        }
        *(_QWORD *)(a2 + 24) = *v52;
        v53 = 0;
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          v53 = *v51;
        *(_WORD *)(a2 + 32) = v53;
        *(_WORD *)(a2 + 18) |= 0x10u;
      }
      else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        *(_WORD *)(a2 + 32) = *(unsigned __int8 *)(v21 + 11);
      }
      else
      {
        *(_WORD *)(a2 + 32) = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v37 = *(_DWORD *)(v21 + 8);
        v38 = HIWORD(v37);
        if ( (v37 & *(_DWORD *)(a1 + 124)) != 0 )
          LOBYTE(v38) = *(_BYTE *)(a1 + 138) ^ BYTE2(v37);
      }
      else
      {
        LOBYTE(v38) = *(_BYTE *)(v21 + 10);
      }
      *(_WORD *)(a2 + 18) |= v38 & 0xE0;
      goto LABEL_10;
    }
    *(_WORD *)(a2 + 18) = 1;
  }
  *(_QWORD *)a2 = v21 + 32;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v39 = *(_DWORD *)(v21 + 8);
    if ( (v39 & *(_DWORD *)(a1 + 124)) != 0 )
      LOWORD(v39) = *(_WORD *)(a1 + 136) ^ v39;
  }
  else
  {
    LOWORD(v39) = *(_WORD *)(v21 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * (unsigned __int16)v39 - 32;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v21 + 14);
  *(_WORD *)(a2 + 18) = 0;
  *(_BYTE *)(a2 + 16) = 32;
  *(_QWORD *)(a2 + 36) = 32LL;
LABEL_10:
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v11 = 2147353472LL;
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v7 != -2147483622 )
    RtlpLogHeapWalkEvent(a1);
  return v7;
}
