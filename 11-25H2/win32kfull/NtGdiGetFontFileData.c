/*
 * XREFs of NtGdiGetFontFileData @ 0x1401C2B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x140017728 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z @ 0x1401C2DB0 (-MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z.c)
 *     ?vUnmapFontFileInKernel@@YAXPEAX@Z @ 0x1401C2E9C (-vUnmapFontFileInKernel@@YAXPEAX@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401C2EFC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 */

__int64 __fastcall NtGdiGetFontFileData(
        unsigned int a1,
        unsigned int a2,
        const void *a3,
        void *a4,
        unsigned __int64 a5)
{
  __int64 v6; // r14
  ULONG v8; // ebx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rdx
  struct PFT *v13; // rcx
  struct PFF *PFFFromId; // rdi
  ULONG_PTR v15; // rsi
  void *v17; // r14
  char *v18; // r8
  unsigned __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  void *v20[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-30h] BYREF
  int v22; // [rsp+58h] [rbp-20h]

  v6 = a2;
  v8 = 0;
  v19 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v19, 8uLL, a3, 8uLL, 8uLL);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v21);
  v11 = *(_QWORD *)(W32GetSessionState(v10, v9) + 96);
  SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)v20, v11 + 4872);
  PFFFromId = GetPFFFromId(*(struct PFT **)(v11 + 20416), a1, 0LL);
  if ( !PFFFromId )
  {
    v13 = *(struct PFT **)(v11 + 20408);
    if ( v13 )
      PFFFromId = GetPFFFromId(v13, a1, 0LL);
  }
  if ( PFFFromId )
  {
    v21[0] = PFFFromId;
    W32GetSessionState((_DWORD)v13, v12);
    ++*((_DWORD *)PFFFromId + 17);
    v22 = 0;
    SEMOBJ<17>::vUnlock((HSEMAPHORE *)v20);
    if ( (unsigned int)v6 < *((_DWORD *)PFFFromId + 9)
      && (_mm_lfence(), v15 = *(_QWORD *)(*((_QWORD *)PFFFromId + 26) + 8 * v6), v20[1] = (void *)v15, v19 + a5 >= v19)
      && v19 + a5 <= *(unsigned int *)(v15 + 24)
      && (unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)v15, 0LL, 0LL, 0) )
    {
      v20[0] = 0LL;
      if ( MapFontFileInKernel(*(void **)(v15 + 32), v20) )
      {
        v17 = v20[0];
        v18 = (char *)v20[0] + v19 + 16;
        if ( (*((_DWORD *)PFFFromId + 13) & 0x10) == 0 )
          v18 = (char *)v20[0] + v19;
        GreProbeAndWriteToUntrustedVa(a4, a5, v18, (unsigned int)(*(_DWORD *)(v15 + 24) - v19), 1uLL);
        vUnmapFontFileInKernel(v17);
        EngUnmapFontFileFD(v15);
      }
      else
      {
        EngUnmapFontFileFD(v15);
        v8 = RtlNtStatusToDosError(-1073741801);
      }
    }
    else
    {
      v8 = 87;
    }
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v21);
    return v8;
  }
  else
  {
    SEMOBJ<17>::vUnlock((HSEMAPHORE *)v20);
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v21);
    return 87LL;
  }
}
