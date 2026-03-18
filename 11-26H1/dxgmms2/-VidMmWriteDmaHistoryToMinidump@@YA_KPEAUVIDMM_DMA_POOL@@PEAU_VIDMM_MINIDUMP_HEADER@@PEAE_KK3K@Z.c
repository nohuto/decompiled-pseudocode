/*
 * XREFs of ?VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z @ 0x140126C64
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x14009FB4C (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchQueryDmaData @ 0x14009936C (VidSchQueryDmaData.c)
 *     CheckIfDmaInformationPresent @ 0x1400A3F38 (CheckIfDmaInformationPresent.c)
 *     SearchDmaBufferInAllPool @ 0x1400A4040 (SearchDmaBufferInAllPool.c)
 *     WriteDmaBufferToMinidump @ 0x1400A4368 (WriteDmaBufferToMinidump.c)
 */

unsigned __int64 __fastcall VidMmWriteDmaHistoryToMinidump(
        struct VIDMM_DMA_POOL *a1,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  struct _ERESOURCE *v12; // rcx
  int v13; // r12d
  int v14; // edi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r14
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int8 *v23; // rax
  int v25; // [rsp+28h] [rbp-D1h]
  int v26; // [rsp+30h] [rbp-C9h]
  int v27; // [rsp+88h] [rbp-71h]
  unsigned __int8 *v28; // [rsp+90h] [rbp-69h]
  __int64 v29[20]; // [rsp+98h] [rbp-61h] BYREF
  unsigned int v34; // [rsp+170h] [rbp+77h]

  v7 = a6;
  v28 = a3;
  v10 = a4;
  v11 = a4;
  memset(v29, 0, 0x58uLL);
  v12 = Resource;
  *((_DWORD *)a2 + 373) = 0;
  ExAcquireResourceExclusiveLite(v12, 1u);
  if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 744LL), a5, a6, (__int64)v29) >= 0
    && v29[1]
    && v29[0] )
  {
    if ( SearchDmaBufferInAllPool(*(_QWORD *)a1, v29[0]) && a7 && a7 >= LODWORD(v29[4]) && a7 < HIDWORD(v29[4]) )
    {
      v13 = 0;
      v14 = 1;
    }
    else
    {
      v13 = 0;
      v14 = 0;
    }
    v15 = a6;
    v16 = a6;
    if ( v10 >= 0x48 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 && v14 )
        {
LABEL_34:
          v10 = a4;
          break;
        }
        if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 744LL), a5, v7, (__int64)v29) < 0 )
        {
          if ( v13 )
          {
            v17 = 1;
LABEL_22:
            if ( v14 )
            {
              if ( v16 )
                v7 = --v16;
              else
                v17 = 1;
              goto LABEL_33;
            }
            v13 = 0;
LABEL_32:
            v7 = ++v15;
            goto LABEL_33;
          }
          v23 = v28;
          v14 = 1;
        }
        else
        {
          v34 = HIDWORD(v29[5]) - LODWORD(v29[5]);
          v27 = HIDWORD(v29[4]) - LODWORD(v29[4]);
          if ( !CheckIfDmaInformationPresent(
                  (__int64)a2,
                  (__int64)a3,
                  v18,
                  v29[0],
                  v29[4],
                  HIDWORD(v29[4]) - LODWORD(v29[4]),
                  v29[7],
                  SHIDWORD(v29[7]),
                  v29[6],
                  SHIDWORD(v29[6]),
                  HIDWORD(v29[5]) - LODWORD(v29[5])) )
          {
            v20 = SearchDmaBufferInAllPool(*(_QWORD *)a1, v19);
            if ( v20 )
            {
              v22 = WriteDmaBufferToMinidump(
                      (__int64)v20,
                      (__int64)v28,
                      v11,
                      v21,
                      v25,
                      v26,
                      v7,
                      v29[0],
                      v29[4],
                      v27,
                      v29[7],
                      HIDWORD(v29[7]),
                      v29[6],
                      SHIDWORD(v29[6]),
                      v34);
              v28 += v22;
              v11 -= v22;
              ++*((_DWORD *)a2 + 373);
            }
          }
          v23 = v28;
          if ( v13 )
            goto LABEL_22;
        }
        if ( v17 || !v16 )
        {
          v17 = 1;
          goto LABEL_32;
        }
        --v16;
        v28 = v23;
        v7 = v16;
        v13 = 1;
LABEL_33:
        if ( v11 < 0x48 )
          goto LABEL_34;
      }
    }
    ExReleaseResourceLite(Resource);
    return v10 - v11;
  }
  else
  {
    ExReleaseResourceLite(Resource);
    return 0LL;
  }
}
