/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1402FF5A0
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14013D0F0 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14021E060 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1402FF8D0 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1402FF9A8 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2,
        struct tagWND *a3)
{
  int v3; // r15d
  __int64 v5; // rcx
  struct tagWND *v7; // r9
  __int128 v8; // xmm0
  __int64 v9; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v11; // rbx
  __int64 v12; // rdx
  _BYTE v14[8]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v16[24]; // [rsp+48h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 14);
  v5 = *((_QWORD *)a3 + 2);
  memset(v16, 0, sizeof(v16));
  if ( a2 )
  {
    if ( (*((_DWORD *)a3 + 95) & 0x40000000) != 0 && (v7 = *(struct tagWND **)(*(_QWORD *)(v5 + 464) + 128LL)) != 0LL )
    {
      v8 = *(_OWORD *)(*((_QWORD *)v7 + 5) + 104LL);
    }
    else
    {
      v7 = a3;
      v8 = *(_OWORD *)(*((_QWORD *)a3 + 5) + 88LL);
    }
    v15[1] = *((_QWORD *)&v8 + 1);
    LODWORD(v15[0]) = v8 + (DWORD2(v8) - (int)v8) / 2;
    HIDWORD(v15[0]) = DWORD1(v8) + (HIDWORD(v8) - DWORD1(v8)) / 2;
    LogicalToPhysicalDPIPoint(v15, v15, *(unsigned int *)(*((_QWORD *)v7 + 5) + 288LL), 0LL);
    if ( v3 == 2 && !(unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
      goto LABEL_9;
    v9 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)&v16[2] = 67109376;
    *(_WORD *)&v16[6] = a2;
    v11 = PerformanceCounter;
    InputTraceLogging::Mouse::InjectInput();
    LOBYTE(v12) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v14, v12);
    *(_QWORD *)&v16[12] = v15[0];
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
      0LL,
      v16,
      v9,
      (LARGE_INTEGER)v11.QuadPart,
      34920);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v14);
    xxxProcessMouseEvent();
    if ( v3 == 2 )
LABEL_9:
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
