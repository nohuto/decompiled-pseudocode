/*
 * XREFs of NtGdiEngCreateDeviceBitmap @ 0x14033B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x14026DD90 (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateDeviceBitmap(DHSURF dhsurf, SIZEL a2, int a3)
{
  struct _GRETHREAD *CurrentThread; // rax
  HBITMAP DeviceBitmap; // rbx
  struct W32_PUSH_LOCK *v9[14]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)dhsurf, *(_QWORD *)&a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v9, CurrentThread);
  if ( ValidUmpdSizl(a2, 1) && (unsigned int)(a3 - 1) <= 7 )
  {
    DeviceBitmap = EngCreateDeviceBitmap(dhsurf, a2, a3 | 0x8000u);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
    return DeviceBitmap;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
    return 0LL;
  }
}
