/*
 * XREFs of MmManagePartitionMemoryInformation @ 0x140ABB3FC
 * Callers:
 *     DifUpdatePluginState @ 0x14064FB84 (DifUpdatePluginState.c)
 *     DifGetAvailableSystemPages @ 0x14065030C (DifGetAvailableSystemPages.c)
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 *     SmCreatePartition @ 0x140AAEDD0 (SmCreatePartition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     MiQueryMemoryListInformation @ 0x14034A834 (MiQueryMemoryListInformation.c)
 *     MiGetChannelInformation @ 0x14049DA84 (MiGetChannelInformation.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiGetNodeHugeRangeCounts @ 0x140510168 (MiGetNodeHugeRangeCounts.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall MmManagePartitionMemoryInformation(ULONG **a1, void *a2, unsigned int a3, char a4)
{
  size_t v5; // r14
  ULONG *v7; // r13
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // ebx
  unsigned __int64 v11; // r14
  ULONG *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // r15
  unsigned int i; // ebx
  char *v23; // rax
  __int64 v24; // r9
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __m128i v29; // xmm1
  const __m128i *v30; // rax
  __int64 v31; // rcx
  __m128i v32; // xmm0
  int v34; // [rsp+20h] [rbp-278h]
  _DWORD Size[3]; // [rsp+24h] [rbp-274h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-268h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-260h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-258h] BYREF
  void *v39; // [rsp+48h] [rbp-250h]
  int v40; // [rsp+50h] [rbp-248h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-244h]
  int v42; // [rsp+58h] [rbp-240h]
  int v43; // [rsp+5Ch] [rbp-23Ch]
  __int64 v44; // [rsp+60h] [rbp-238h]
  unsigned __int64 v45; // [rsp+68h] [rbp-230h]
  unsigned __int64 v46; // [rsp+70h] [rbp-228h]
  unsigned __int64 v47; // [rsp+78h] [rbp-220h]
  unsigned __int64 v48; // [rsp+80h] [rbp-218h]
  __int64 v49; // [rsp+88h] [rbp-210h]
  __int64 v50; // [rsp+90h] [rbp-208h]
  __int64 v51; // [rsp+98h] [rbp-200h]
  unsigned __int64 v52; // [rsp+A0h] [rbp-1F8h]
  _BYTE v53[64]; // [rsp+A8h] [rbp-1F0h] BYREF
  _BYTE v54[64]; // [rsp+E8h] [rbp-1B0h] BYREF
  unsigned __int64 v55; // [rsp+128h] [rbp-170h]
  __int64 v56; // [rsp+130h] [rbp-168h]
  int v57; // [rsp+138h] [rbp-160h]
  __int64 v58; // [rsp+140h] [rbp-158h]
  unsigned __int64 v59[5]; // [rsp+150h] [rbp-148h] BYREF
  char Src[64]; // [rsp+178h] [rbp-120h] BYREF
  char v61[72]; // [rsp+1B8h] [rbp-E0h] BYREF
  char v62[24]; // [rsp+200h] [rbp-98h] BYREF
  char v63; // [rsp+218h] [rbp-80h] BYREF

  v5 = a3;
  Size[0] = a3;
  v39 = a2;
  v7 = *a1;
  v38 = 0LL;
  memset_0(v59, 0, 0xB0uLL);
  memset_0(&v40, 0, 0xF8uLL);
  if ( (((_DWORD)v5 - 240) & 0xFFFFFFF7) != 0 )
    return 3221225476LL;
  if ( a4 )
  {
    ProbeForWrite(a2, (unsigned int)v5, 8u);
    RtlCopyFromUser(&v40, a2, v5);
  }
  else
  {
    RtlCopyVolatileMemory(&v40, a2, v5);
  }
  if ( (v40 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v8 = (unsigned __int16)KeNumberNodes;
  if ( v41 != -1 && v41 >= (unsigned __int16)KeNumberNodes )
    return 3221225485LL;
  if ( v42 != -1 )
    return 3221225485LL;
  v9 = 0;
  v10 = 0;
  v34 = 0;
  v56 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( v7 == &MiSystemPartition && (v40 & 1) == 0 )
      {
        if ( v41 == -1 )
        {
          v12 = &MiState + 2 * v9 + 10318;
          if ( v9 < v8 )
          {
            v13 = v8 - v9;
            do
            {
              v11 += *(_QWORD *)v12;
              v12 += 2;
              --v13;
            }
            while ( v13 );
          }
        }
        else
        {
          v11 = *((_QWORD *)&MiState + v41 + 5159);
        }
      }
      if ( v41 != -1 )
      {
        v43 = 0;
        v9 = v41;
        v8 = v41 + 1;
        v10 = 1;
        v34 = 1;
        goto LABEL_27;
      }
      v43 = (unsigned __int16)KeNumberNodes;
      if ( (v40 & 1) != 0 )
        break;
      v44 = *((_QWORD *)v7 + 2816);
      v14 = *((_QWORD *)v7 + 2896);
      if ( v14 >= v11 )
      {
        v45 = v14 - v11;
        v15 = *((_QWORD *)v7 + 2931);
        if ( v15 >= v11 )
        {
          v46 = v15 - v11;
          v16 = *((_QWORD *)v7 + 2152);
          if ( v16 >= v11 )
          {
            v47 = v16 - v11;
            MiQueryMemoryListInformation(v7, v59);
            memmove(v53, Src, 0x40uLL);
            memmove(v54, v61, 0x40uLL);
            v17 = *((_QWORD *)v7 + 2153);
            if ( v17 >= v11 )
            {
              v55 = v17 - v11;
              v18 = v17 - v11;
              if ( v46 > v18 )
                v18 = v46;
              v55 = v18;
              v19 = v47;
              if ( v47 < v45 )
                v19 = v45;
              v47 = v19;
              if ( v45 > v46 )
                v45 = v46;
LABEL_27:
              if ( !v10 )
                goto LABEL_28;
              goto LABEL_60;
            }
          }
        }
      }
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiOneMillisecond);
    }
    v34 = 1;
LABEL_60:
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v55 = 0LL;
    memset_0(v53, 0, sizeof(v53));
    memset_0(v54, 0, sizeof(v54));
    v58 = 0LL;
LABEL_28:
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v20 = 0LL;
    v48 = 0LL;
    v21 = *((_QWORD *)v7 + 2) + 56320LL * v9;
    for ( i = v9; i < v8; v21 += 56320LL )
    {
      if ( (v40 & 1) != 0 )
      {
        *(_QWORD *)&Size[1] = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        MiGetNodeHugeRangeCounts(v21, &v37, (unsigned __int64 *)&Size[1], &v36);
        v50 += *(_QWORD *)&Size[1] << 18;
        v51 += v36 << 18;
        v28 = v37 << 18;
        v52 = 0LL;
      }
      else
      {
        MiGetChannelInformation((__int64)v7, i, (__int64)v62, &v38);
        if ( (unsigned __int8)(v38 / 0x28) )
        {
          v23 = &v63;
          v24 = (unsigned __int8)(v38 / 0x28);
          v25 = v52;
          v26 = v51;
          v27 = v50;
          do
          {
            v27 += *((_QWORD *)v23 - 1);
            v50 = v27;
            v26 += *(_QWORD *)v23;
            v51 = v26;
            v25 += *((_QWORD *)v23 + 1);
            v52 = v25;
            v23 += 40;
            --v24;
          }
          while ( v24 );
        }
        v28 = *(_QWORD *)(v21 + 13888);
      }
      v20 = v28 + v48;
      v48 += v28;
      ++i;
    }
    if ( v7 == &MiSystemPartition )
    {
      if ( v20 < v11 )
        goto LABEL_49;
      v20 -= v11;
      v48 = v20;
    }
    if ( v41 == -1 )
    {
      if ( (v40 & 1) != 0 )
      {
        v58 = *((_QWORD *)v7 + 2132) << 18;
        v20 = v48;
      }
      else
      {
        v52 = 0LL;
        v29 = 0LL;
        v30 = (const __m128i *)v53;
        v31 = 4LL;
        do
        {
          v32 = _mm_add_epi64(_mm_loadu_si128(v30), v29);
          v29 = v32;
          ++v30;
          --v31;
        }
        while ( v31 );
        v52 = _mm_add_epi64(v32, _mm_srli_si128(v32, 8)).m128i_u64[0];
        v58 = *((_QWORD *)v7 + 930);
        v20 = v48;
      }
    }
    v49 = v50 + v52 + v51;
    if ( v58 + v49 <= v20 )
      break;
LABEL_49:
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiOneMillisecond);
    v10 = v34;
  }
  v57 = *(unsigned __int16 *)v7;
  if ( a4 )
    RtlCopyToUser(v39, &v40, Size[0]);
  else
    RtlCopyVolatileMemory(v39, &v40, Size[0]);
  return 0LL;
}
