/*
 * XREFs of MiPfAllocateMdls @ 0x140A5B9E0
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x14036EDA0 (MiEndingOffsetWithLock.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 *     MmCreateMdl @ 0x140398B10 (MmCreateMdl.c)
 *     MiGetInPageSupportBlock @ 0x140398D70 (MiGetInPageSupportBlock.c)
 *     MiSetInPagePriority @ 0x140489F18 (MiSetInPagePriority.c)
 */

__int64 __fastcall MiPfAllocateMdls(__int64 a1, unsigned int a2, __int64 a3, volatile signed __int64 *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  volatile signed __int64 *v6; // rdi
  __int64 v7; // r10
  unsigned __int64 *v8; // r12
  unsigned __int64 *v9; // rsi
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // r13
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rbp
  PSLIST_ENTRY v22; // rax
  PSLIST_ENTRY v23; // rdi
  SIZE_T v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // ebp
  PMDL v30; // rcx
  PSLIST_ENTRY *v31; // rcx
  unsigned __int64 v33; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 v35; // rcx
  int v36; // eax
  ULONG v37; // eax
  unsigned int v38; // [rsp+20h] [rbp-98h]
  PMDL Mdl; // [rsp+28h] [rbp-90h]
  unsigned __int64 *v40; // [rsp+30h] [rbp-88h]
  unsigned int v41; // [rsp+38h] [rbp-80h]
  unsigned int v42; // [rsp+3Ch] [rbp-7Ch]
  __int64 *v43; // [rsp+40h] [rbp-78h]
  unsigned __int64 *v44; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  PSLIST_ENTRY v46; // [rsp+58h] [rbp-60h]
  unsigned __int64 v47; // [rsp+60h] [rbp-58h]
  unsigned __int64 v48; // [rsp+68h] [rbp-50h]

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = a4;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0LL;
  v9 = *(unsigned __int64 **)(a1 + 200);
  v10 = 0LL;
  v11 = *(unsigned int *)(a1 + 196);
  v41 = *(_DWORD *)(a1 + 184);
  v12 = v5 + 128;
  v13 = *(_DWORD *)(a1 + 188);
  v14 = a1 + 240;
  v42 = v13;
  v45 = v5;
  v15 = v9 + 1;
  v40 = 0LL;
  if ( v7 )
    v12 = v7;
  v16 = v14 + 8 * v11;
  v38 = 0;
  v48 = v16;
  v17 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  while ( (unsigned __int64)v9 < v16 )
  {
    v18 = *v9;
    if ( (*v9 & 2) != 0 )
    {
      if ( v8 )
      {
        if ( v18 >= 4 )
          goto LABEL_15;
        goto LABEL_16;
      }
      if ( v18 < 4 )
        goto LABEL_10;
    }
    if ( (v18 & 1) != 0 )
    {
      if ( v18 >= 4 )
      {
        v33 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v8 )
        {
          if ( (__int64)(v33 - v17) >> 3 > dword_140E360D4 )
          {
LABEL_15:
            --v9;
            --v15;
            goto LABEL_16;
          }
        }
        else
        {
          v10 = v9;
          v44 = v9;
        }
        v8 = v9;
        v40 = v9;
        v17 = v33;
      }
      if ( !v8 )
        goto LABEL_10;
    }
    else
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v8 )
      {
        if ( (__int64)(v19 - v17) >> 3 > dword_140E360D4 )
          goto LABEL_15;
      }
      else
      {
        v10 = v9;
        v44 = v9;
      }
      v40 = v9;
      v8 = v9;
      v17 = v19;
      if ( v15 != (_QWORD *)v16 )
        goto LABEL_10;
    }
LABEL_16:
    v47 = *v8 & 0xFFFFFFFFFFFFFFFCuLL;
    v20 = *v10 & 0xFFFFFFFFFFFFFFFCuLL;
    v21 = ((__int64)(v47 - v20) >> 3) + 1;
    v22 = MiGetInPageSupportBlock(0, v6);
    v46 = v22;
    v23 = v22;
    if ( !v22 )
      return (unsigned int)-1073741670;
    v22[16].Next = 0LL;
    MiSetInPagePriority((__int64)v22, v42, v41);
    v24 = v21 << 12;
    if ( v21 <= 0x10 )
    {
      *((_WORD *)&v23[17].Next + 5) = 0;
      Mdl = (PMDL)&v23[17];
      v23[17].Next = 0LL;
      *((_WORD *)&v23[17].Next + 4) = 8 * (((__int64)(v47 - v20) >> 3) + 7);
      v23[19].Next = 0LL;
      *((_QWORD *)&v23[19].Next + 1) = (unsigned int)v24;
      goto LABEL_19;
    }
    Mdl = MmCreateMdl(0LL, 0LL, v24);
    if ( !Mdl )
    {
      MiFreeInPageSupportBlock(v23);
      return (unsigned int)-1073741670;
    }
LABEL_19:
    while ( 1 )
    {
      v25 = *(_QWORD *)(v12 + 8);
      if ( v20 >= v25 && v20 < v25 + 8LL * *(unsigned int *)(v12 + 44) )
        break;
      if ( (*(_DWORD *)(v12 + 32) & 0x20000) != 0
        && (*(_DWORD *)(v45 + 56) & 8) != 0
        && (*(_DWORD *)(v45 + 56) & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v12 + 24) )
        {
          SharedProtos = MiGetSharedProtos(v45, a2, v12);
          if ( SharedProtos )
          {
            v35 = *(_QWORD *)(SharedProtos + 72);
            if ( v20 >= v35 && v20 < v35 + 8LL * *(unsigned int *)(v12 + 44) )
              break;
          }
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !v43 )
        {
          v43 = *(__int64 **)(a1 + 24);
          v12 = v43[3];
          goto LABEL_59;
        }
        if ( v38 >= *((_DWORD *)v43 + 4) )
        {
          v43 = (__int64 *)*v43;
          v12 = v43[3];
LABEL_59:
          v38 = 1;
        }
        else
        {
          v12 = v43[v38++ + 3];
        }
      }
      else
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    v26 = MiStartingOffset((__int64 *)v12, v20, a2);
    v29 = v26;
    v46[6].Next = (_SLIST_ENTRY *)v26;
    if ( (*(_BYTE *)v40 & 1) != 0 && (*(_DWORD *)(v45 + 56) & 0x20) != 0 )
    {
      v36 = MiEndingOffsetWithLock((_DWORD *)v12, v27, v28);
      v30 = Mdl;
      v37 = v36 - v29;
      if ( v37 <= Mdl->ByteCount )
        Mdl->ByteCount = (v37 + 511) & 0xFFFFFE00;
    }
    else
    {
      v30 = Mdl;
    }
    v10 = v44;
    *((_QWORD *)&v46[15].Next + 1) = v44;
    *((_QWORD *)&v46[14].Next + 1) = a3;
    *((_QWORD *)&v46[12].Next + 1) = v40;
    v46[12].Next = (_SLIST_ENTRY *)v12;
    *((_DWORD *)&v46[11].Next + 2) = v30->ByteCount;
    if ( a3 )
      *((_DWORD *)&v46[11].Next + 3) |= 0x20000u;
    v46[13].Next = (_SLIST_ENTRY *)v30;
    v31 = *(PSLIST_ENTRY **)(a1 + 232);
    if ( *v31 != (PSLIST_ENTRY)(a1 + 224) )
      __fastfail(3u);
    v16 = v48;
    v8 = 0LL;
    *((_QWORD *)&v46->Next + 1) = v31;
    v46->Next = (_SLIST_ENTRY *)(a1 + 224);
    *v31 = v46;
    v17 = v47;
    *(_QWORD *)(a1 + 232) = v46;
    ++*(_DWORD *)(a1 + 212);
    v6 = a4;
    v40 = 0LL;
LABEL_10:
    ++v9;
    ++v15;
  }
  return v4;
}
