/*
 * XREFs of NtGdiFONTOBJ_pxoGetXform @ 0x1400D5430
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1400D1570 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

struct _XFORMOBJ *__fastcall NtGdiFONTOBJ_pxoGetXform(struct _FONTOBJ *a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _XFORMOBJ *FONTOBJXform; // rbx
  struct W32_PUSH_LOCK *v6[4]; // [rsp+20h] [rbp-78h] BYREF
  UMPDOBJ *v7; // [rsp+40h] [rbp-58h]

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6, CurrentThread);
  FONTOBJXform = 0LL;
  if ( v7 )
    FONTOBJXform = UMPDOBJ::GetFONTOBJXform(v7, a1);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v6);
  return FONTOBJXform;
}
