/*
 * XREFs of EditionLLMouseButtonHook @ 0x1401B3BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14003874C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14005F618 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x140060B3C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     PhkFirstValid @ 0x1400C5E60 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1401B3F68 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v7; // rsi
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  BOOL v15; // edi
  __int64 Valid; // r15
  unsigned int v18; // ecx
  __int64 v19; // xmm0_8
  int v20; // r12d
  int v21; // r13d
  __int64 v22; // xmm0_8
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h]
  __int64 v32; // [rsp+48h] [rbp-50h]
  __int64 v33; // [rsp+50h] [rbp-48h]

  if ( *(_DWORD *)(a1 + 92) == 2 )
    v7 = *(_QWORD *)(a1 + 80);
  else
    v7 = 0LL;
  v8 = PtiCurrent(a1, a2);
  if ( (unsigned __int8)IsInputThread(v10, v9, v11) )
    v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18648);
  else
    v14 = (__int64)v8;
  v15 = *(_DWORD *)(a2 + 12) & 1;
  Valid = PhkFirstValid(v14, 14LL);
  if ( !Valid )
    return 0LL;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v30, "LowLevelMouseButtonHook", 0LL);
  v18 = 1;
  v19 = *((_QWORD *)v8 + 193);
  v20 = *((_DWORD *)v8 + 388);
  v21 = *((_DWORD *)v8 + 391);
  v33 = *((_QWORD *)v8 + 196);
  v31 = v19;
  v22 = *(_QWORD *)((char *)v8 + 1556);
  *((_QWORD *)v8 + 196) = a2;
  v32 = v22;
  if ( v7 )
  {
    v23 = *(_QWORD *)(W32GetUserGdiSessionState(1LL) + 40);
    v24 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL);
    if ( *(_QWORD *)v24 == v23 )
    {
      *((_DWORD *)v8 + 390) = 0;
      *((_DWORD *)v8 + 389) = 0x2000;
    }
    else
    {
      *(_QWORD *)((char *)v8 + 1556) = *(_QWORD *)(v24 + 864);
      *((_DWORD *)v8 + 391) = *(_DWORD *)(v24 + 872);
    }
    v18 = 3;
  }
  else
  {
    *((_DWORD *)v8 + 389) = -1;
    *((_DWORD *)v8 + 390) = -1;
  }
  if ( !v15 || *(_DWORD *)(a4 + 12) )
  {
    *((_DWORD *)v8 + 386) = -1;
    *((_DWORD *)v8 + 387) = -1;
  }
  else
  {
    v28 = *((_QWORD *)v8 + 58);
    *((_QWORD *)v8 + 193) = *(_QWORD *)(v28 + 864);
    *((_DWORD *)v8 + 388) = *(_DWORD *)(v28 + 872);
  }
  v25 = xxxCallHook2(Valid, 0LL, a3, a2, v18);
  *((_QWORD *)v8 + 196) = v33;
  *((_QWORD *)v8 + 193) = v31;
  *(_QWORD *)((char *)v8 + 1556) = v32;
  *((_DWORD *)v8 + 391) = v21;
  *((_DWORD *)v8 + 388) = v20;
  if ( !v25 )
  {
    if ( !a5 || IsGpqForegroundAccessibleOnInputThread(v15, (const struct tagUIPI_INFO_INT *)a4) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)&v30,
        v26);
      return 0LL;
    }
    MSGLUA_GPQFOREGROUND(v27, v26);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v30,
    v26);
  return 1LL;
}
