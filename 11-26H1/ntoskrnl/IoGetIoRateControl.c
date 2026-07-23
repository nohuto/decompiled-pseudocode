/*
 * XREFs of IoGetIoRateControl @ 0x140207650
 * Callers:
 *     <none>
 * Callees:
 *     IoDiskIoAttributionQuery @ 0x140207594 (IoDiskIoAttributionQuery.c)
 *     IopFindDiskIoAttribution @ 0x140207950 (IopFindDiskIoAttribution.c)
 *     PspIoRateEntryIoControlReference @ 0x140207C94 (PspIoRateEntryIoControlReference.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140618CCC (PspJobIoRateVolumeEntryReference.c)
 */

__int64 __fastcall IoGetIoRateControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6,
        unsigned __int64 *a7,
        _DWORD *a8)
{
  unsigned int v8; // r13d
  struct _EX_RUNDOWN_REF *DiskIoAttribution; // rax
  struct _EX_RUNDOWN_REF *v12; // rbx
  unsigned __int64 Count; // rdi
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 *v19; // r15
  signed __int64 v20; // r14
  __int64 v21; // r12
  unsigned __int64 v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int128 v30; // [rsp+20h] [rbp-50h] BYREF
  __int128 v31; // [rsp+30h] [rbp-40h] BYREF
  __int128 v32; // [rsp+40h] [rbp-30h]
  __int128 v33; // [rsp+50h] [rbp-20h] BYREF
  __int128 v34; // [rsp+60h] [rbp-10h]

  v8 = 0;
  v30 = 0LL;
  *a7 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  DiskIoAttribution = (struct _EX_RUNDOWN_REF *)IopFindDiskIoAttribution(a1, a2);
  v12 = DiskIoAttribution;
  if ( !DiskIoAttribution )
    return v8;
  if ( !ExAcquireRundownProtection_0(DiskIoAttribution + 21) )
  {
LABEL_19:
    IoDiskIoAttributionDereference(v12);
    return v8;
  }
  Count = v12[20].Count;
  v14 = Count + 1632;
  v15 = PspIoRateEntryIoControlReference(Count + 1632);
  *a4 = v15;
  if ( v15 )
    *(_QWORD *)&v30 = *(_QWORD *)(Count + 1584);
  else
    v14 = 0LL;
  v16 = Count + 1696;
  *a5 = v14;
  a4[1] = 0LL;
  a5[1] = 0LL;
  if ( (*(_BYTE *)(Count + 1704) & 1) != 0 )
  {
    if ( !*(_QWORD *)v16 )
      goto LABEL_8;
    v17 = *(_QWORD *)v16 ^ v16;
  }
  else
  {
    v17 = *(_QWORD *)v16;
  }
  if ( v17 )
  {
    if ( a2 )
    {
      v29 = PspJobIoRateVolumeEntryReference(Count, a2);
      if ( v29 )
      {
        a4[1] = *(_QWORD *)(v29 + 40);
        *((_QWORD *)&v30 + 1) = *(_QWORD *)(v29 + 48);
        a5[1] = v29;
      }
    }
  }
LABEL_8:
  v18 = a6 + 16;
  v19 = (__int64 *)&v30;
  v20 = (char *)a4 - (char *)&v30;
  v21 = 2LL;
  do
  {
    if ( *(__int64 *)((char *)v19 + v20) )
    {
      IoDiskIoAttributionQuery(*v19, &v33, &v31);
      v27 = *((_QWORD *)&v32 + 1);
      v28 = v34;
      *(_OWORD *)(v18 - 16) = v33;
      *(_OWORD *)v18 = v28;
      *(_QWORD *)(v18 + 8) += v27;
      *(_QWORD *)v18 += v32;
      *(_QWORD *)(v18 - 16) += v31;
      *(_QWORD *)(v18 - 8) += *((_QWORD *)&v31 + 1);
      ++v8;
    }
    ++v19;
    v18 += 32LL;
    --v21;
  }
  while ( v21 );
  v22 = v12[22].Count;
  v23 = v12;
  while ( v22 )
  {
    v23 = (struct _EX_RUNDOWN_REF *)v22;
    v22 = *(_QWORD *)(v22 + 176);
  }
  *a7 = v23[3].Count;
  if ( a8 )
  {
    *a8 = 0;
    v24 = *(_QWORD *)(a3 + 544);
    if ( *(_QWORD *)(v24 + 672) )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(v24 + 672) + 1800LL);
      if ( v25 )
      {
        if ( v25 == Count || *(_QWORD *)(v25 + 1584) == Count )
          *a8 |= 1u;
      }
    }
  }
  if ( v12 )
  {
    ExReleaseRundownProtection_0(v12 + 21);
    goto LABEL_19;
  }
  return v8;
}
