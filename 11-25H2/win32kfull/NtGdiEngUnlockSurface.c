/*
 * XREFs of NtGdiEngUnlockSurface @ 0x140216E00
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z @ 0x140216E60 (-TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngUnlockSurface(struct _SURFOBJ *a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  struct W32_PUSH_LOCK *v6[15]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6, CurrentThread);
  v4 = 0;
  if ( v6[4] )
    UMPDOBJ::TryUnlockSurface(a1);
  else
    v4 = -1073741811;
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v6);
  return v4;
}
