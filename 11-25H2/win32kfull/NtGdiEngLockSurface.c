/*
 * XREFs of NtGdiEngLockSurface @ 0x1402016E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?TryLockSurface@UMPDOBJ@@SAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x14020173C (-TryLockSurface@UMPDOBJ@@SAPEAU_SURFOBJ@@PEAUHSURF__@@@Z.c)
 */

struct _SURFOBJ *__fastcall NtGdiEngLockSurface(HSURF a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _SURFOBJ *v4; // rbx
  struct W32_PUSH_LOCK *v6[15]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6, CurrentThread);
  v4 = 0LL;
  if ( v6[4] )
    v4 = UMPDOBJ::TryLockSurface(a1);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v6);
  return v4;
}
