/*
 * XREFs of NtGdiXLATEOBJ_hGetColorTransform @ 0x14033D3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400D6728 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     XLATEOBJ_hGetColorTransform @ 0x14021AFE0 (XLATEOBJ_hGetColorTransform.c)
 */

HANDLE __fastcall NtGdiXLATEOBJ_hGetColorTransform(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  HANDLE ColorTransform; // rbx
  XLATEOBJ *v5; // rax
  struct W32_PUSH_LOCK *v7[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+40h] [rbp-58h]

  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7, CurrentThread);
  ColorTransform = 0LL;
  if ( v8 )
  {
    v5 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v8, a1);
    if ( v5 )
      ColorTransform = XLATEOBJ_hGetColorTransform(v5);
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v7);
  return ColorTransform;
}
