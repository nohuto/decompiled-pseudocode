/*
 * XREFs of MiWriteAwePtes @ 0x140471690
 * Callers:
 *     MiDeleteVadAwePtes @ 0x14047137C (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14087FCE0 (NtMapUserPhysicalPagesScatter.c)
 *     NtMapUserPhysicalPages @ 0x140B3C1D0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiWriteAwePtesPrepare @ 0x140471C9C (MiWriteAwePtesPrepare.c)
 *     MiDecrementAweMapCount @ 0x1404799BC (MiDecrementAweMapCount.c)
 *     MiGetAweNode @ 0x1405289D4 (MiGetAweNode.c)
 *     MiFinishPteChangesInPageTable @ 0x14052A40C (MiFinishPteChangesInPageTable.c)
 *     MiWriteAweClusterPte @ 0x140530318 (MiWriteAweClusterPte.c)
 *     MiInsertAweFlushList @ 0x140535804 (MiInsertAweFlushList.c)
 *     MiGetAweFlushList @ 0x1407067D8 (MiGetAweFlushList.c)
 *     MiWriteAwePtesNewPageTable @ 0x140707B34 (MiWriteAwePtesNewPageTable.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140707CBC (MiZeroAndFlushAweLazyPtes.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiWriteAwePtes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7)
{
  unsigned __int64 i; // r15
  __int64 v11; // r12
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r9
  int v16; // ecx
  __int64 AweNode; // rax
  __int64 v18; // r11
  int v19; // ecx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  int v22; // r12d
  unsigned int v23; // r13d
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  __int64 AweFlushList; // rax
  char v32; // al
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  __int64 v35; // r14
  signed __int32 v37[8]; // [rsp+0h] [rbp-100h] BYREF
  int v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+70h] [rbp-90h]
  unsigned int v47; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v48; // [rsp+78h] [rbp-88h]
  unsigned __int64 v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+148h] [rbp+48h]
  int v57; // [rsp+14Ch] [rbp+4Ch]
  __int64 v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  int v60; // [rsp+164h] [rbp+64h]
  unsigned int v61; // [rsp+168h] [rbp+68h]
  int v62; // [rsp+16Ch] [rbp+6Ch]
  __int64 v63; // [rsp+170h] [rbp+70h]
  unsigned __int64 v64; // [rsp+178h] [rbp+78h]
  int v65; // [rsp+180h] [rbp+80h]
  unsigned __int64 ValidPte; // [rsp+188h] [rbp+88h]
  int v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+198h] [rbp+98h]
  __int64 v69; // [rsp+1A0h] [rbp+A0h]

  i = a5;
  v41 = a3;
  v39 = a7;
  v43 = a4;
  v11 = a4;
  memset_0(&v44, 0, 0x150uLL);
  v56 = a6;
  v52 = a1;
  v68 = a2;
  v69 = a5;
  MiWriteAwePtesPrepare(&v44);
  v12 = v68;
  v13 = 0LL;
  v42 = v68;
  v40 = 0LL;
  if ( a3 )
  {
    v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    do
    {
      if ( v11 )
      {
        v15 = *(_QWORD *)(v11 + 8 * v13);
        v16 = v57;
        for ( i = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL; v16; --v16 )
          i = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v15 < (*(unsigned int *)(v51 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v51 + 32) << 32)) << 12
          || v15 > (((*(unsigned int *)(v51 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v51 + 33) << 32)) << 12) | 0xFFF) )
        {
          AweNode = MiGetAweNode(*(_QWORD *)(v11 + 8 * v13));
          *(_BYTE *)(AweNode + 72) = 0;
          v52 = AweNode;
          v51 = *(_QWORD *)(AweNode + 40);
          if ( (v62 & 1) != 0 )
            v19 = 4;
          else
            v19 = (*(_DWORD *)(v51 + 48) >> 5) & 0x1F;
          ValidPte = MiMakeValidPte(v18 - 0x98000000000LL, 0LL, v19 | v61);
          v67 = (*(_DWORD *)(v51 + 48) >> 10) & 0x7F;
        }
        if ( v12 && *(_QWORD *)(v12 + 8 * v13) )
          v14 = ValidPte;
        else
          v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      else if ( v12 )
      {
        v14 = ValidPte;
      }
      if ( (v14 & 1) != 0 )
      {
        v20 = *(_QWORD *)(v12 + 8 * v13);
        if ( v20 >= 0 )
          v14 = (v20 << 12) ^ ((v20 << 12) ^ v14) & 0xFFF0000000000FFFuLL;
        else
          v14 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, v20 & 0x7FFFFFFFFFFFFFFFLL, v61 | v65 & 0xFFFFFFF9 | 1);
      }
      if ( v51 )
      {
        if ( v44 != ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          MiWriteAwePtesNewPageTable(&v44, i);
      }
      else
      {
        v44 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v21 = v48;
      v22 = 0;
      v23 = 0;
      v47 &= ~0x10u;
      if ( !v48 )
        v21 = i;
      v48 = v21;
      v49 = i + 8 * (v58 - 1);
      v24 = *(_QWORD *)i;
      if ( (v14 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          if ( v14 == v24 )
            goto LABEL_66;
          v23 = 64;
          v25 = v55;
          v22 = (v57 != 0) + 1;
          v47 |= 0x10u;
LABEL_60:
          *(_BYTE *)((((i >> 3) & 0x1FF) >> 3) + v25) |= 1 << ((i >> 3) & 7);
          goto LABEL_66;
        }
        v22 = 5;
        if ( (v24 & 0x800) != 0 )
          goto LABEL_66;
        v45 += v58;
        if ( v24 )
        {
          v26 = v24;
          if ( qword_140E2D8C0 )
          {
            if ( (v24 & 0x10) != 0 )
              v26 = v24 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v26 = qword_140E2D8C8 & v24;
          }
          v27 = v26 >> 31;
          if ( (_DWORD)v27 )
          {
            if ( (_DWORD)v27 == v60 )
            {
              v47 = v47 & 0xFFFFFFEF | (2 * (v47 & 8));
              v23 = (v47 >> 4) & 1;
LABEL_50:
              v13 = v40;
              v60 = v27;
              goto LABEL_66;
            }
            while ( 1 )
            {
              _InterlockedOr(v37, 0);
              if ( (unsigned int)(KiTbFlushTimeStamp - v27) > 2
                || (v27 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v27) >= 2 )
              {
LABEL_49:
                v47 |= 8u;
                v23 = 1;
                goto LABEL_50;
              }
              if ( (KiTbFlushTimeStamp & 1) == 0 )
                break;
              v38 = 0;
              _InterlockedOr(v37, 0);
              while ( _bittest(&KiTbFlushTimeStamp, 0) )
                KeYieldProcessorEx(&v38);
              if ( (v27 & 1) == 0 )
                goto LABEL_49;
            }
            MiZeroAndFlushAweLazyPtes(&v44, i);
            LODWORD(v27) = 0;
          }
          v47 &= ~8u;
          goto LABEL_50;
        }
        v46 += v58;
      }
      else
      {
        if ( !v24 )
          goto LABEL_66;
        if ( (v24 & 1) != 0 )
        {
          v45 -= v58;
          v46 -= v58;
          v22 = (v57 != 0) + 3;
          if ( !v51 )
            goto LABEL_66;
          if ( (v47 & 2) != 0 )
          {
            v23 = 1;
            v47 |= 0x10u;
            goto LABEL_66;
          }
          v25 = v54;
          goto LABEL_60;
        }
        if ( (v24 & 0x800) != 0 )
        {
          v28 = v58;
          v45 -= v58;
        }
        else
        {
          if ( v51 )
            goto LABEL_66;
          v28 = v58;
        }
        v46 -= v28;
        v22 = 6;
      }
LABEL_66:
      MiWriteAweClusterPte(v50, i, v14, v22, v58);
      v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v29 = -1LL;
      if ( !v24 )
        goto LABEL_76;
      if ( (v24 & 1) != 0 )
      {
        v30 = v24;
LABEL_74:
        v29 = (v30 >> 12) & 0xFFFFFFFFFFLL;
        goto LABEL_76;
      }
      if ( (v24 & 0x800) != 0 )
      {
        v30 = v24;
        if ( qword_140E2D8C0 )
        {
          if ( (v24 & 0x10) != 0 )
            v30 = v24 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v30 = qword_140E2D8C8 & v24;
        }
        goto LABEL_74;
      }
      v24 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
LABEL_76:
      if ( (v47 & 0x10) != 0 )
      {
        AweFlushList = v53;
        if ( !v53 )
        {
          AweFlushList = MiGetAweFlushList(&v44, v23);
          v53 = AweFlushList;
        }
        MiInsertAweFlushList(&v44, AweFlushList, i, v23);
        v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      if ( !v24 )
        goto LABEL_90;
      v32 = v62;
      v33 = v39;
      if ( (v62 & 8) != 0 )
      {
        _InterlockedOr(v37, 0);
        v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        *(_DWORD *)(v33 + 16) = KiTbFlushTimeStamp;
        v32 = v62;
      }
      if ( (v32 & 4) != 0 )
      {
        MiDecrementAweMapCount(v59, v29, 2LL, v33);
LABEL_89:
        v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        goto LABEL_90;
      }
      v34 = 0LL;
      if ( v64 )
      {
        v35 = v39;
        do
        {
          MiDecrementAweMapCount(v59, v29, 2LL, v35);
          v29 += v63;
          v34 += v63;
        }
        while ( v34 < v64 );
        v13 = v40;
        goto LABEL_89;
      }
LABEL_90:
      ++v13;
      v12 = v42;
      v11 = v43;
      v40 = v13;
      i += 8 * v58;
    }
    while ( v13 < v41 );
  }
  return MiFinishPteChangesInPageTable(&v44);
}
