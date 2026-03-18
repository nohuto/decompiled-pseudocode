/*
 * XREFs of ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400FDE44
 * Callers:
 *     NtGdiEnumFonts @ 0x1400FDB40 (NtGdiEnumFonts.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z @ 0x1400FDD9C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400FEF94 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14010FA80 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1401D5F14 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 */

_BOOL8 __fastcall GrepEnumFonts(
        struct XDCOBJ *a1,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  void *v7; // r14
  unsigned int *v9; // rsi
  unsigned int v10; // r13d
  __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // ecx
  __int64 v15; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v17; // edx
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // eax
  __int64 SessionState; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  struct PFF *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned int v31; // edx
  bool v32; // bl
  _QWORD v34[2]; // [rsp+60h] [rbp-51h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp-31h] BYREF
  _DWORD v37[5]; // [rsp+90h] [rbp-21h] BYREF
  int v38; // [rsp+A4h] [rbp-Dh]
  int v39; // [rsp+A8h] [rbp-9h]
  unsigned int v40; // [rsp+ACh] [rbp-5h]
  int v41; // [rsp+B0h] [rbp-1h]
  unsigned int v42; // [rsp+B4h] [rbp+3h]
  HSEMAPHORE v43; // [rsp+100h] [rbp+4Fh] BYREF
  unsigned int v44; // [rsp+110h] [rbp+5Fh] BYREF

  v44 = a3;
  v7 = a7;
  v9 = a6;
  v10 = a2;
  if ( !a7 )
    *a6 = 0;
  a7 = *(_DWORD **)(*(_QWORD *)a1 + 48LL);
  v12 = (unsigned int)a7[10];
  if ( (v12 & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
  v13 = *(_QWORD *)(W32GetSessionState(v12, a2, a3) + 96);
  v43 = *(HSEMAPHORE *)(v13 + 20320);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v42 = a5;
  v41 = 0;
  v37[3] = 0;
  v14 = a7[531];
  if ( v14 )
  {
    v39 = 0;
    v38 = 1;
    if ( v14 == 4 )
      goto LABEL_10;
  }
  else
  {
    v39 = 1;
  }
  v38 = 0;
LABEL_10:
  v15 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 236LL);
  if ( (v15 & 1) != 0 || (v15 = (unsigned int)a7[10], v37[0] = 0, (v15 & 1) == 0) )
    v37[0] = 1;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15);
  if ( (a7[10] & 1) == 0 || (v17 = CurrentThreadDpiAwarenessContext & 0xF, v17 == 1) || v17 == 2 )
    v18 = a7[540];
  else
    v18 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  v37[1] = v18;
  v19 = W32GetCurrentThreadDpiAwarenessContext(a7);
  v21 = (unsigned int)a7[10];
  if ( (v21 & 1) == 0 || (v21 = v19 & 0xF, (_DWORD)v21 == 1) || (_DWORD)v21 == 2 )
    v22 = a7[541];
  else
    v22 = (v19 >> 8) & 0x1FF;
  v37[2] = v22;
  v37[4] = *(_BYTE *)(v13 + 20348) & 1;
  v40 = v44 & 0x200;
  SessionState = W32GetSessionState(a7, v21, v20);
  v24 = *(_QWORD *)a1;
  v44 = 0;
  v25 = *(_QWORD *)(v24 + 48);
  v34[0] = *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 20400LL);
  v26 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v34, v25, &v44);
  if ( !v26
    || (v34[0] = v26,
        v36[0] = *(_QWORD *)(v13 + 20392),
        v35[0] = *(_QWORD *)(v13 + 20384),
        !(v32 = EnumDeviceAndEngine(
                  a4,
                  v27,
                  v10,
                  (struct _EFFILTER_INFO *)v37,
                  (struct PUBLIC_PFTOBJ *)v36,
                  (struct PUBLIC_PFTOBJ *)v35,
                  (struct PFFOBJ *)v34,
                  (struct PDEVOBJ *)&a7,
                  a1,
                  v9,
                  v7))) )
  {
    v30 = *(_QWORD *)(W32GetSessionState(v28, v27, v29) + 96);
    v35[0] = *(_QWORD *)(v30 + 20392);
    v36[0] = *(_QWORD *)(v30 + 20384);
    v32 = EnumEngineOnly(
            a4,
            v31,
            v10,
            (struct _EFFILTER_INFO *)v37,
            (struct PUBLIC_PFTOBJ *)v35,
            (struct PUBLIC_PFTOBJ *)v36,
            a1,
            v9,
            v7);
  }
  SEMOBJ<17>::vUnlock(&v43);
  return v32;
}
