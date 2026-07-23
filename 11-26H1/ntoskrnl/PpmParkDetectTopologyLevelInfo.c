/*
 * XREFs of PpmParkDetectTopologyLevelInfo @ 0x14061280C
 * Callers:
 *     PpmParkDetectComplexAndModulePresence @ 0x140612628 (PpmParkDetectComplexAndModulePresence.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x14025DE90 (KeGetTopologySiblingAffinityForProcessor.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x140421C30 (KeFindFirstSetLeftAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmParkDetectTopologyLevelInfo(__int64 a1, int a2, unsigned int *a3, __int64 *a4)
{
  int v5; // r12d
  unsigned int v8; // esi
  unsigned int v9; // r15d
  struct _KAFFINITY_EX *v10; // r14
  unsigned __int16 i; // cx
  unsigned int FirstSetLeftAffinity; // ebx
  __int64 Prcb; // rax
  unsigned __int16 j; // cx
  __int64 result; // rax
  __int64 v16; // rdi
  unsigned __int16 k; // cx
  unsigned int v18; // ebx
  __int64 v19; // rax
  unsigned __int16 m; // cx
  __int64 v21; // r14
  _QWORD *v22; // r12
  _QWORD *v23; // r13
  unsigned int v24; // ebx
  __int64 v25; // rax
  unsigned __int16 *v26; // rcx
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-E0h] BYREF
  int v29; // [rsp+24h] [rbp-DCh]
  __int128 v30; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h]
  __int64 *v32; // [rsp+40h] [rbp-C0h]
  unsigned int *v33; // [rsp+48h] [rbp-B8h]
  struct _KAFFINITY_EX v34; // [rsp+50h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v35; // [rsp+160h] [rbp+60h] BYREF

  v33 = a3;
  v5 = a2;
  v29 = a2;
  v32 = a4;
  memset_0(&v34.8, 0, sizeof(v34.8));
  v31 = 0LL;
  v8 = 0;
  v30 = 0LL;
  v9 = 0;
  memset_0(&v35.8, 0, sizeof(v35.8));
  *a3 = 0;
  v28 = 0;
  *a4 = 0LL;
  *(_QWORD *)&v34.Count = 2097153LL;
  memset_0(&v34.8, 0, sizeof(v34.8));
  *(_QWORD *)&v35.Count = 2097153LL;
  memset_0(&v35.8, 0, sizeof(v35.8));
  v10 = (struct _KAFFINITY_EX *)(a1 + 16);
  RtlpCopyAffinityEx(&v35, v35.Size, (struct _KAFFINITY_EX *)(a1 + 16));
LABEL_2:
  for ( i = 0; i < v35.Count; ++i )
  {
    if ( v35.Bitmap[i] )
    {
      FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)&v35);
      memset_0(&v34.8, 0, 8LL * v34.Count);
      v34.Count = 1;
      Prcb = KeGetPrcb(FirstSetLeftAffinity);
      KeGetTopologySiblingAffinityForProcessor(Prcb, v5, &v34.Count);
      RtlAndAffinityEx(&v34.Count, &v35.Count, (__int64)&v34);
      for ( j = 0; j < v34.Count; ++j )
      {
        if ( v34.Bitmap[j] )
        {
          RtlSubtractAffinityEx(&v35, &v34, (__int64)&v35);
          ++v8;
          goto LABEL_2;
        }
      }
      KeRemoveProcessorAffinityEx(&v35.Count, FirstSetLeftAffinity);
      goto LABEL_2;
    }
  }
  result = ExAllocatePool2(0x40uLL);
  v16 = result;
  if ( result )
  {
    memset_0(&v35.8, 0, 8LL * v35.Count);
    v35.Count = 1;
    RtlpCopyAffinityEx(&v35, v35.Size, v10);
    memset_0(&v34.8, 0, 8LL * v34.Count);
    v34.Count = 1;
LABEL_14:
    for ( k = 0; k < v35.Count; ++k )
    {
      if ( v35.Bitmap[k] )
      {
        if ( v9 >= v8 )
          break;
        v18 = KeFindFirstSetLeftAffinityEx((__int16 *)&v35);
        memset_0(&v34.8, 0, 8LL * v34.Count);
        v34.Count = 1;
        v19 = KeGetPrcb(v18);
        KeGetTopologySiblingAffinityForProcessor(v19, v5, &v34.Count);
        RtlAndAffinityEx(&v34.Count, &v35.Count, (__int64)&v34);
        for ( m = 0; ; ++m )
        {
          if ( m >= v34.Count )
          {
            KeRemoveProcessorAffinityEx(&v35.Count, v18);
            goto LABEL_14;
          }
          if ( v34.Bitmap[m] )
            break;
        }
        RtlSubtractAffinityEx(&v35, &v34, (__int64)&v35);
        v21 = 808LL * v9;
        *(_DWORD *)(v21 + v16) = v5;
        *(_DWORD *)(v21 + v16 + 4) = (unsigned __int8)v9;
        *(_DWORD *)(v21 + v16 + 272) = (unsigned __int16)RtlCountSetBitsAffinityEx(&v34.Count);
        *(_WORD *)(v21 + v16 + 8) = 1;
        *(_WORD *)(v21 + v16 + 10) = 32;
        *(_DWORD *)(v21 + v16 + 12) = 0;
        memset_0((void *)(v16 + v21 + 16), 0, 0x100uLL);
        RtlpCopyAffinityEx((struct _KAFFINITY_EX *)(v21 + v16 + 8), *(_WORD *)(v21 + v16 + 10), &v34);
        v22 = (_QWORD *)(v16 + v21 + 280);
        *v22 = 2097153LL;
        memset_0(v22 + 1, 0, 0x100uLL);
        v23 = (_QWORD *)(v16 + v21 + 544);
        *v23 = 2097153LL;
        memset_0(v23 + 1, 0, 0x100uLL);
        *((_QWORD *)&v30 + 1) = v34.Bitmap[0];
        *(_QWORD *)&v30 = &v34;
        LOWORD(v31) = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v28, (unsigned __int16 **)&v30) )
        {
          v24 = v28;
          v25 = KeGetPrcb(v28);
          v26 = (unsigned __int16 *)(v16 + v21 + 544);
          if ( *(_BYTE *)(v25 + 35352) )
            v26 = (unsigned __int16 *)(v16 + v21 + 280);
          KeAddProcessorAffinityEx(v26, v24);
        }
        RtlCountSetBitsAffinityEx((unsigned __int16 *)(v16 + v21 + 544));
        if ( (unsigned int)RtlCountSetBitsAffinityEx((unsigned __int16 *)(v16 + v21 + 280)) )
        {
          *(_DWORD *)(v21 + v16 + 276) = (v27 != 0) + 1;
        }
        else if ( v27 )
        {
          *(_DWORD *)(v21 + v16 + 276) = 0;
        }
        v5 = v29;
        ++v9;
        goto LABEL_14;
      }
    }
    *v32 = v16;
    result = (__int64)v33;
    *v33 = v8;
  }
  return result;
}
