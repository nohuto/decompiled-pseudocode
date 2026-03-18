/*
 * XREFs of EditionLLMouseWheelHook @ 0x1401B3E50
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

__int64 __fastcall EditionLLMouseWheelHook(__int64 a1, __int64 a2, const struct tagUIPI_INFO_INT *a3, int a4)
{
  bool v5; // bp
  __int64 v6; // r13
  struct tagTHREADINFO *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 Valid; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_BYTE *)(a1 + 12) & 1;
  v6 = (unsigned int)a2;
  v9 = PtiCurrent(a1, a2);
  if ( (unsigned __int8)IsInputThread(v11, v10, v12) )
    v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18648);
  else
    v15 = (__int64)v9;
  Valid = PhkFirstValid(v15, 14LL);
  if ( !Valid )
    return 0LL;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v22, "LowLevelMouseWheelHook", 0LL);
  v18 = *((_QWORD *)v9 + 196);
  *((_QWORD *)v9 + 196) = a1;
  v19 = xxxCallHook2(Valid, 0LL, v6, a1, 1u);
  *((_QWORD *)v9 + 196) = v18;
  if ( !v19 )
  {
    if ( !a4 || IsGpqForegroundAccessibleOnInputThread(v5, a3) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)v22,
        v20);
      return 0LL;
    }
    MSGLUA_GPQFOREGROUND(v21, v20);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v22,
    v20);
  return 1LL;
}
