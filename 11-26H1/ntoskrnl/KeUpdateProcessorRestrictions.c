/*
 * XREFs of KeUpdateProcessorRestrictions @ 0x1405EBF80
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x14025CAB4 (PpmParkEvaluateRestriction.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KiInstallSubNodeHeteroSets @ 0x140453E78 (KiInstallSubNodeHeteroSets.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14046A570 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall KeUpdateProcessorRestrictions(
        unsigned int a1,
        struct _KAFFINITY_EX *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rsi
  char v6; // bl
  __int64 v7; // r14
  __int64 v8; // rdi
  struct _KAFFINITY_EX **v9; // r14
  __int64 v10; // r15
  int *v11; // rsi
  struct _KAFFINITY_EX **v12; // r12
  __int64 v13; // r13
  unsigned __int16 *p_Count; // rdi
  struct _KAFFINITY_EX *v15; // r8
  unsigned int v16; // r13d
  int v17; // r15d
  unsigned int v18; // esi
  unsigned int *v19; // rdi
  unsigned int v20; // r12d
  struct _KAFFINITY_EX *v21; // rdi
  unsigned __int16 Count; // r9
  struct _KAFFINITY_EX *v23; // r8
  unsigned __int16 i; // dx
  char v25; // cl
  bool v26; // zf
  __int64 v27; // rsi
  char v29; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+38h] [rbp-C8h]
  int *v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  struct _KAFFINITY_EX **v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  struct _KAFFINITY_EX **v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  struct _KAFFINITY_EX v44; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAFFINITY_EX v45; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _KAFFINITY_EX v46; // [rsp+2C0h] [rbp+1C0h] BYREF

  v5 = a1;
  v36[0] = a4;
  memset_0(&v44.8, 0, sizeof(v44.8));
  v6 = 0;
  v35 = 0LL;
  memset_0(&v45.8, 0, sizeof(v45.8));
  memset_0(&v46.8, 0, sizeof(v46.8));
  v7 = KiHeteroConfig;
  v8 = (unsigned int)KiHgsPlusConfiguration;
  v43 = KiHeteroConfig;
  if ( (unsigned int)KiHgsPlusConfiguration > *(_DWORD *)(KiHeteroConfig + 28) )
    return v6;
  *(_QWORD *)&v44.Count = 2097153LL;
  memset_0(&v44.8, 0, sizeof(v44.8));
  *(_QWORD *)&v45.Count = 2097153LL;
  memset_0(&v45.8, 0, sizeof(v45.8));
  *(_QWORD *)&v46.Count = 2097153LL;
  memset_0(&v46.8, 0, sizeof(v46.8));
  v29 = 0;
  v42 = KeNodeBlock[v5];
  if ( !(_DWORD)v8 )
    return v6;
  v9 = (struct _KAFFINITY_EX **)(v7 + 48);
  v41 = v8;
  v40 = v9;
  do
  {
    v10 = 6LL;
    v39 = 7LL;
    v34 = 6LL;
    v11 = KiDynamicHeteroCpuPolicy;
    v12 = v9 + 46;
    do
    {
      v37 = 0LL;
      v13 = v10;
      v38 = v12;
      v33 = v11;
      v32 = v10;
      do
      {
        memset_0(&v46.8, 0, 8LL * v46.Count);
        v46.Count = 1;
        memset_0(&v44.8, 0, 8LL * v44.Count);
        v44.Count = 1;
        if ( KeHeteroSystem )
        {
          if ( PpmHeteroMultiCoreClassesEnabled )
          {
            v15 = v9[v13 - 2];
          }
          else
          {
            switch ( *v11 )
            {
              case 1:
                v15 = *(v9 - 2);
                break;
              case 2:
                v15 = v9[3];
                break;
              case 3:
                v15 = *v9;
                break;
              case 4:
                v15 = v9[2];
                break;
              default:
LABEL_19:
                p_Count = &a2->Count;
                goto LABEL_20;
            }
          }
          RtlpCopyAffinityEx(&v44, v44.Size, v15);
          goto LABEL_19;
        }
        p_Count = &a2->Count;
        RtlpCopyAffinityEx(&v44, v44.Size, a2);
LABEL_20:
        RtlAndAffinityEx(&v44.Count, p_Count, (__int64)&v44);
        if ( *(_WORD *)(a5 + v10 - 6) )
        {
          v16 = *(unsigned __int16 *)(a5 + v10 - 6);
          if ( v16 < (unsigned int)RtlCountSetBitsAffinityEx(&v44.Count) )
          {
            v17 = 0;
            v18 = 0;
            if ( a3 )
            {
              v19 = (unsigned int *)v36[0];
              do
              {
                v20 = *v19;
                if ( (unsigned int)KeCheckProcessorAffinityEx(&v44.Count, *v19) )
                {
                  KeAddProcessorAffinityEx(&v46.Count, v20);
                  if ( ++v17 == v16 )
                    break;
                }
                ++v18;
                ++v19;
              }
              while ( v18 < a3 );
              v9 = v40;
              v12 = v38;
            }
            v10 = v34;
            v11 = v33;
          }
          else
          {
            RtlpCopyAffinityEx(&v46, v46.Size, &v44);
          }
          v13 = v32;
        }
        v21 = *v12;
        RtlSubtractAffinityEx(*v12, a2, (__int64)&v45);
        RtlOrAffinityEx(&v45, &v46, (__int64)&v45);
        Count = v21->Count;
        if ( v21->Count >= v45.Count )
        {
          Count = v45.Count;
          v23 = v21;
        }
        else
        {
          v23 = &v45;
        }
        for ( i = 0; i < Count; ++i )
        {
          if ( v21->Bitmap[i] != v45.Bitmap[i] )
          {
LABEL_41:
            RtlpCopyAffinityEx(v21, v21->Size, &v45);
            v25 = 1;
            v29 = 1;
            goto LABEL_43;
          }
        }
        while ( i < v23->Count )
        {
          if ( v23->Bitmap[i] )
            goto LABEL_41;
          ++i;
        }
        v25 = v29;
LABEL_43:
        v33 = ++v11;
        ++v12;
        ++v37;
        ++v13;
        v38 = v12;
        v32 = v13;
      }
      while ( v37 < 2 );
      v10 += 2LL;
      v26 = v39-- == 1;
      v34 = v10;
    }
    while ( !v26 );
    v9 += 62;
    v26 = v41-- == 1;
    v40 = v9;
  }
  while ( !v26 );
  if ( v25 )
  {
    v36[0] = v42;
    v36[1] = 0LL;
    if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)v36, &v35) )
    {
      v27 = v43;
      do
        KiInstallSubNodeHeteroSets(v35, KeHeteroSystem, v27 + 32, *(_DWORD *)(v27 + 28));
      while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)v36, &v35) );
    }
    return 1;
  }
  return v6;
}
