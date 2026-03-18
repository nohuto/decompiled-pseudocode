/*
 * XREFs of NtGdiEngCreateDeviceSurface @ 0x14033B570
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D3200 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x14026DD90 (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 */

HSURF __fastcall NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL a2, int a3)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  HSURF DeviceSurface; // rbx
  struct W32_PUSH_LOCK *v12[14]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)dhsurf, *(_QWORD *)&a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12, CurrentThread);
  if ( UmpdSecurityGateNoUmpdObj(v8, v7, v9) && !ValidUmpdSizl(a2, 0) || (unsigned int)(a3 - 1) > 7 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
    return 0LL;
  }
  else
  {
    DeviceSurface = EngCreateDeviceSurface(dhsurf, a2, a3 | 0x8000u);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
    return DeviceSurface;
  }
}
