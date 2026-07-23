/*
 * XREFs of RaspScanConvert @ 0x140356F8C
 * Callers:
 *     RaspRasterize @ 0x1404A6E94 (RaspRasterize.c)
 * Callees:
 *     RaspTestIntersection @ 0x1403573DC (RaspTestIntersection.c)
 *     BgpFmRoundUp @ 0x1403576F0 (BgpFmRoundUp.c)
 *     RaspAllocateMemory @ 0x140357710 (RaspAllocateMemory.c)
 *     RaspCreateSegmentList @ 0x14035778C (RaspCreateSegmentList.c)
 *     RaspDestroySegmentList @ 0x140357ACC (RaspDestroySegmentList.c)
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 *     BgpGxInitializeRectangle @ 0x14071AF8C (BgpGxInitializeRectangle.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RaspScanConvert(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 **a6,
        unsigned int *a7,
        __int64 a8)
{
  __int64 v8; // r13
  int v9; // r8d
  __int64 *v10; // rdi
  char v13; // r14
  __int64 v14; // rdx
  int SegmentList; // ebx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  int v26; // r10d
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r9d
  int v30; // r8d
  int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // esi
  int v34; // esi
  unsigned int v35; // ebx
  __int64 Memory; // r8
  __int64 *v37; // rbx
  __int64 *v38; // r15
  __int64 v39; // r14
  unsigned int v40; // eax
  __int64 v41; // r13
  int v42; // r12d
  size_t v43; // rcx
  unsigned int v44; // esi
  __int64 v45; // r15
  _BYTE *v46; // r14
  int v47; // r9d
  unsigned int v48; // r8d
  _BYTE *v49; // rax
  int v50; // edx
  __int64 i; // rcx
  __int64 *v52; // rcx
  __int64 v54; // rax
  int v55; // edx
  int v56; // ecx
  bool v57; // cc
  int v58; // edx
  int v59; // r8d
  __int64 v60; // rax
  int v61; // r11d
  int v62; // ecx
  bool v63; // cc
  int v64; // edx
  unsigned int v65; // ecx
  __int64 *v66; // r8
  int v67; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v68; // [rsp+34h] [rbp-2Ch]
  __int64 *v69; // [rsp+38h] [rbp-28h] BYREF
  int v70; // [rsp+40h] [rbp-20h]
  __int64 v71; // [rsp+48h] [rbp-18h] BYREF
  int v72; // [rsp+54h] [rbp-Ch]
  unsigned int v73; // [rsp+58h] [rbp-8h]
  int v74; // [rsp+5Ch] [rbp-4h]
  unsigned int v75; // [rsp+A0h] [rbp+40h] BYREF
  int v76; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v77; // [rsp+B8h] [rbp+58h]

  v77 = a4;
  v76 = a3;
  v8 = a8;
  v9 = *(unsigned __int16 *)(a1 + 24);
  v10 = 0LL;
  v75 = 0;
  v67 = 0;
  v76 = 0;
  v13 = a5 & 1;
  v71 = 0LL;
  SegmentList = RaspCreateSegmentList(a1, a2, v9, (unsigned int)&v71, (__int64)&v75, a8);
  if ( SegmentList < 0 )
    goto LABEL_32;
  v17 = BgpFmRoundUp(*(unsigned int *)(a1 + 14), v14, v16, (unsigned int)*(unsigned __int16 *)(a1 + 24) - 2);
  v18 = *(unsigned int *)(a1 + 6);
  v19 = v17;
  v68 = v17;
  v23 = BgpFmRoundUp(v18, v20, v21, v22);
  v25 = v24 + 1;
  v26 = v19 - v23 + 1;
  if ( v19 == v23 )
  {
    v64 = *(_DWORD *)(17LL * v25 + a2 + 4);
    v65 = (v64 >> 6) | 0xFC000000;
    if ( v64 >= 0 )
      v65 = *(int *)(17LL * v25 + a2 + 4) >> 6;
    v19 = v65 + 1;
    if ( (v64 & 0x20) == 0 )
      v19 = v65;
    v68 = v19;
    v26 = v19;
  }
  v27 = 17LL * v25;
  v28 = 17LL * v24;
  v29 = *(_DWORD *)(v28 + a2 + 8);
  v30 = *(_DWORD *)(v28 + a2);
  v31 = *(_DWORD *)(v27 + a2 + 8) - v30 - v29 + *(_DWORD *)(v27 + a2);
  v32 = (v31 >> 6) | 0xFC000000;
  if ( v31 >= 0 )
    v32 = v31 >> 6;
  v74 = v30 + v29;
  v33 = v32 + 1;
  if ( (v31 & 0x20) == 0 )
    v33 = v32;
  v34 = 4 * v33;
  a5 = 4 * v26;
  HIDWORD(v69) = 4 * v26;
  LODWORD(v69) = v34;
  v70 = v34;
  if ( v13 )
  {
    v10 = qword_141049E70;
    SegmentList = BgpGxInitializeRectangle(&v69, 1LL, qword_141049E70, 3140LL);
    if ( SegmentList < 0 )
      goto LABEL_32;
  }
  else
  {
    v35 = ((unsigned int)(4 * v26 * v34) >> 3) + 72;
    Memory = RaspAllocateMemory(v35, v8);
    if ( Memory )
    {
      SegmentList = BgpGxInitializeRectangle(&v69, 1LL, Memory, v35);
      v10 = v66;
    }
    else
    {
      SegmentList = -1073741801;
    }
    if ( SegmentList < 0 )
      goto LABEL_66;
  }
  memset_0((void *)v10[3], 0, *((unsigned int *)v10 + 3));
  if ( !v71 )
  {
    *a6 = v10;
    *a7 = v19;
    return 0LL;
  }
  if ( v13 )
  {
    if ( v34 <= 104 )
    {
      v38 = qword_141049CD0;
      v69 = qword_141049CD0;
      v37 = qword_141049CD0;
LABEL_14:
      v77 = 0;
      v72 = 0;
      v39 = v34;
      if ( a5 <= 0 )
        goto LABEL_29;
      v40 = v19;
      v41 = v34;
      v42 = v72;
      v43 = 4LL * v34;
      v73 = v40 << 6;
      while ( 1 )
      {
        memset_0(v38, 0, v43);
        v44 = v73 + -16 * (v42 & 3) - ((16 * v42) & 0xFFFFFFC0);
        if ( v75 )
          break;
LABEL_21:
        v48 = v77;
        v49 = (_BYTE *)(v10[3] + ((unsigned __int64)v77 >> 3));
        v50 = 128 >> (v77 & 7);
        for ( i = 0LL; i < v39; ++i )
        {
          if ( *((_DWORD *)v37 + i) )
            *v49 |= v50;
          LOBYTE(v50) = (unsigned __int8)v50 >> 1;
          if ( !(_BYTE)v50 )
          {
            LOBYTE(v50) = 0x80;
            ++v49;
          }
        }
        v43 = 4 * v39;
        ++v42;
        v77 = v41 + v48;
        if ( v42 >= a5 )
        {
          v19 = v68;
          v8 = a8;
LABEL_29:
          SegmentList = 0;
          *a6 = v10;
          *a7 = v19;
          if ( v38 != qword_141049CD0 )
          {
            v52 = v38;
            goto LABEL_31;
          }
          goto LABEL_32;
        }
      }
      v45 = v75;
      v46 = (_BYTE *)(v71 + 24);
      while ( 1 )
      {
        RaspTestIntersection(v46 - 24, v44, &v67, &v76);
        v47 = v67;
        if ( v67 != 0x7FFFFFFF )
          break;
LABEL_19:
        v46 += 25;
        if ( !--v45 )
        {
          v38 = v69;
          v39 = v41;
          goto LABEL_21;
        }
      }
      v54 = *((_QWORD *)v46 - 1);
      v55 = *(_DWORD *)(v54 + 12);
      v56 = *(_DWORD *)(v54 + 4)
          - *(_DWORD *)(*((_QWORD *)v46 - 3) + 12LL)
          - *(_DWORD *)(*((_QWORD *)v46 - 3) + 4LL)
          + v55;
      v57 = v56 <= 0;
      if ( !v56 )
      {
        if ( *v46 == 1 )
          goto LABEL_62;
        v56 = v55
            + *(_DWORD *)(v54 + 4)
            - *(_DWORD *)(*((_QWORD *)v46 - 2) + 12LL)
            - *(_DWORD *)(*((_QWORD *)v46 - 2) + 4LL);
        v57 = v56 <= 0;
      }
      if ( !v57 )
      {
        v58 = 1;
LABEL_38:
        v59 = 0;
        v60 = 0LL;
        if ( (int)v41 <= 0 )
          goto LABEL_19;
        v61 = v74;
        while ( 1 )
        {
          v62 = v61 + 16 * v59;
          if ( *v46 == 1 || v76 == 0x7FFFFFFF )
            break;
          if ( v62 >= v47 )
          {
            v63 = v62 <= v76;
LABEL_43:
            if ( v63 )
              *((_DWORD *)v37 + v60) += v58;
          }
          ++v59;
          if ( ++v60 >= v41 )
            goto LABEL_19;
        }
        v63 = v62 <= v47;
        goto LABEL_43;
      }
      if ( v56 < 0 )
      {
        v58 = -1;
        goto LABEL_38;
      }
LABEL_62:
      v58 = 0;
      goto LABEL_38;
    }
  }
  else
  {
    v69 = (__int64 *)RaspAllocateMemory(4LL * v34, v8);
    v37 = v69;
    v38 = v69;
    if ( v69 )
      goto LABEL_14;
  }
  SegmentList = -1073741670;
LABEL_66:
  if ( v10 )
  {
    v52 = v10;
LABEL_31:
    RaspFreeMemory(v52, v8);
  }
LABEL_32:
  if ( v71 )
    RaspDestroySegmentList(v71, v75, v8);
  return (unsigned int)SegmentList;
}
