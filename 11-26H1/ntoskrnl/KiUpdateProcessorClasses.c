/*
 * XREFs of KiUpdateProcessorClasses @ 0x1404536B0
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x140452524 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 KiUpdateProcessorClasses()
{
  __int64 v0; // r14
  unsigned int v1; // esi
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned int v4; // ebp
  unsigned __int16 v5; // r9
  unsigned __int64 v6; // r11
  int v7; // r10d
  unsigned __int8 v8; // r12
  unsigned __int8 v9; // r13
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 i; // [rsp+28h] [rbp-D0h]
  __int64 v22; // [rsp+30h] [rbp-C8h]
  __int64 v23; // [rsp+38h] [rbp-C0h]
  _BYTE Src[64]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v25[64]; // [rsp+80h] [rbp-78h] BYREF

  v0 = KiHeteroConfig;
  v1 = 0;
  v23 = KiHeteroConfig;
  result = *(_QWORD *)KiHeteroConfig;
  for ( i = *(_QWORD *)KiHeteroConfig; v1 < (unsigned __int16)KiSubNodeCount; ++v1 )
  {
    v3 = *(_QWORD *)(KiSubNodes + 8LL * v1);
    if ( v3 )
    {
      v4 = 0;
      v22 = KeNodeBlock[*(unsigned __int16 *)(v3 + 138)];
      if ( *(_DWORD *)(v0 + 24) )
      {
        do
        {
          memset_0(Src, 0, sizeof(Src));
          memset_0(v25, 0, sizeof(v25));
          v5 = *(_WORD *)(v3 + 136);
          v6 = *(_QWORD *)(v3 + 128);
          v7 = v5;
          v8 = 0;
          v9 = 0;
LABEL_7:
          v10 = v7 + 1;
          while ( 1 )
          {
            if ( v6 )
            {
              _BitScanForward64(&v11, v6);
              v6 &= ~(1LL << v11);
              v12 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v5].Flink
                    + (unsigned __int8)v11);
              v13 = KiProcessorBlock[v12];
              v14 = v4 + *(_DWORD *)(i + 4) * (_DWORD)v12;
              v15 = (unsigned int)v14;
              Src[*(unsigned __int8 *)(v13 + 209)] = *(_BYTE *)(i + 4 * v14 + 48);
              v16 = v8;
              if ( *(_BYTE *)(i + 4 * v14 + 48) > v8 )
                v16 = *(_BYTE *)(i + 4 * v14 + 48);
              v8 = v16;
              v25[*(unsigned __int8 *)(v13 + 209)] = *(_BYTE *)(i + 4 * v14 + 49);
              v17 = v9;
              if ( *(_BYTE *)(i + 4 * v14 + 49) > v9 )
                v17 = *(_BYTE *)(i + 4 * v14 + 49);
              v9 = v17;
              *(_BYTE *)(v13 + 35354) = *(_BYTE *)(i + 4 * v14 + 48);
              *(_BYTE *)(v13 + 35353) = *(_BYTE *)(i + 4 * v14 + 49);
              v18 = 32LL * *(unsigned __int8 *)(v13 + 208);
              if ( *(_BYTE *)(i + 4 * v15 + 49) )
                *(_QWORD *)&algn_140FC2998[v18] &= ~*(_QWORD *)(v13 + 200);
              else
                *(_QWORD *)&algn_140FC2998[v18] |= *(_QWORD *)(v13 + 200);
              goto LABEL_7;
            }
            v7 = ++v5;
            if ( v5 >= v10 )
              break;
            v6 = *(_QWORD *)(8LL * v5 + 8);
          }
          v19 = (unsigned __int64)v4 << 6;
          RtlCopyVolatileMemory((void *)(v19 + *(_QWORD *)(v3 + 208)), Src, 0x40uLL);
          RtlCopyVolatileMemory((void *)(v19 + *(_QWORD *)(v3 + 200)), v25, 0x40uLL);
          v0 = v23;
          *(_BYTE *)(*(unsigned __int16 *)(v3 + 142)
                   + (unsigned __int64)(*(_DWORD *)(v22 + 40) * (v4 + 8))
                   + *(_QWORD *)(v22 + 80)) = v8;
          v20 = *(_DWORD *)(v22 + 40) * v4++;
          *(_BYTE *)(*(unsigned __int16 *)(v3 + 142) + v20 + *(_QWORD *)(v22 + 80)) = v9;
        }
        while ( v4 < *(_DWORD *)(v23 + 24) );
      }
    }
    result = (unsigned __int16)KiSubNodeCount;
  }
  return result;
}
