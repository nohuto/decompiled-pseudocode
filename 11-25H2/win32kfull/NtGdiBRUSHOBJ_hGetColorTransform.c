/*
 * XREFs of NtGdiBRUSHOBJ_hGetColorTransform @ 0x1401F6330
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D49D8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     BRUSHOBJ_hGetColorTransform @ 0x1401F63A0 (BRUSHOBJ_hGetColorTransform.c)
 */

HANDLE __fastcall NtGdiBRUSHOBJ_hGetColorTransform(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  HANDLE ColorTransform; // rbx
  BRUSHOBJ *v6; // rax
  struct W32_PUSH_LOCK *v7[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+40h] [rbp-58h]

  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7, CurrentThread);
  ColorTransform = 0LL;
  if ( v8 )
  {
    v6 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v8, a1);
    if ( v6 )
      ColorTransform = BRUSHOBJ_hGetColorTransform(v6);
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v7);
  return ColorTransform;
}
