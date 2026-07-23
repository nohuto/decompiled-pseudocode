/*
 * XREFs of PpmParkFindSpecificTopologyMask @ 0x14025DB70
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x14025DE90 (KeGetTopologySiblingAffinityForProcessor.c)
 *     KeFindNextProcessorIndexEx @ 0x14025F64C (KeFindNextProcessorIndexEx.c)
 *     ?RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025F780 (-RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmParkSeedToIndex @ 0x1404F44AC (PpmParkSeedToIndex.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PpmParkFindSpecificTopologyMask(
        unsigned __int16 *a1,
        struct _KAFFINITY_EX *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        struct _KAFFINITY_EX *a8,
        struct _KAFFINITY_EX *a9,
        _BYTE *a10)
{
  unsigned int NextProcessorIndex; // r14d
  __int64 Prcb; // rax
  unsigned __int16 v15; // bx
  unsigned __int16 Size; // ax
  unsigned __int16 Count; // r12
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  struct _KAFFINITY_EX v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v23; // [rsp+140h] [rbp+40h] BYREF
  struct _KAFFINITY_EX v24; // [rsp+250h] [rbp+150h] BYREF

  memset_0(&v23.8, 0, sizeof(v23.8));
  memset_0(&v22.8, 0, sizeof(v22.8));
  memset_0(&v24.8, 0, sizeof(v24.8));
  *(_QWORD *)&v23.Count = 2097153LL;
  memset_0(&v23.8, 0, sizeof(v23.8));
  *(_QWORD *)&v22.Count = 2097153LL;
  memset_0(&v22.8, 0, sizeof(v22.8));
  *(_QWORD *)&v24.Count = 2097153LL;
  memset_0(&v24.8, 0, sizeof(v24.8));
  RtlAndAffinityEx(a3, &a2->Count, (__int64)&v22);
  NextProcessorIndex = a5;
  if ( !a7 )
    return;
  if ( a8 )
  {
    if ( a5 != -1 )
      KeAddProcessorAffinityEx(&a8->Count, a5);
    if ( (unsigned int)RtlAndAffinityEx(&a8->Count, &a2->Count, (__int64)&v23) )
      NextProcessorIndex = KeFindNextProcessorIndexEx(&v23, 0LL);
    else
      NextProcessorIndex = -1;
    RtlSubtractAffinityEx(a8, a2, (__int64)a8);
  }
  if ( NextProcessorIndex != -1 )
  {
    Prcb = KeGetPrcb(NextProcessorIndex);
    KeGetTopologySiblingAffinityForProcessor(Prcb, a6, &v24);
    if ( a7 == 1 )
    {
      v15 = 0;
      if ( RtlpSubtractAffinityEx(&v22, &v24, &v23, v23.Size) )
      {
        Size = v22.Size;
        Count = v22.Size;
        v22.Reserved = 0;
        if ( v23.Count <= v22.Size )
          Count = v23.Count;
        v22.Count = Count;
        if ( Count )
        {
          memmove(&v22.8, &v23.8, 8LL * Count);
          do
            ++v15;
          while ( v15 < Count );
          Size = v22.Size;
        }
        if ( v15 < Size )
        {
          do
          {
            v18 = v15++;
            v22.Bitmap[v18] = 0LL;
          }
          while ( v15 < v22.Size );
        }
      }
    }
    else
    {
      if ( a7 != 2 )
        return;
      if ( (unsigned int)RtlpAndAffinityExNoResult(&v22, &v24) )
        goto LABEL_36;
    }
    if ( a10 && *a10 || a9 && (unsigned int)RtlpAndAffinityExNoResult(a9, a2) )
    {
      RtlAndAffinityEx(a1, &a2->Count, (__int64)&v23);
      NextProcessorIndex = PpmParkSeedToIndex(&v23, a4);
      if ( a9 )
        RtlSubtractAffinityEx(a9, a2, (__int64)a9);
      if ( a10 )
        *a10 = 0;
    }
    v19 = KeFindNextProcessorIndexEx(&v22, NextProcessorIndex);
    v20 = KeGetPrcb(v19);
    KeGetTopologySiblingAffinityForProcessor(v20, a6, &v24);
LABEL_36:
    RtlpCopyAffinityEx(a2, a2->Size, &v24);
    return;
  }
  if ( a9 )
    RtlSubtractAffinityEx(a9, a2, (__int64)a9);
  if ( a10 )
    *a10 = 0;
}
