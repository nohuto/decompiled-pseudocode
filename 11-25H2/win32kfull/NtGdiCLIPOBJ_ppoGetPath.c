/*
 * XREFs of NtGdiCLIPOBJ_ppoGetPath @ 0x1400D4B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400D4E94 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

struct _PATHOBJ *__fastcall NtGdiCLIPOBJ_ppoGetPath(struct _CLIPOBJ *a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _PATHOBJ *CLIPOBJPath; // rbx
  struct W32_PUSH_LOCK *v6[4]; // [rsp+20h] [rbp-78h] BYREF
  UMPDOBJ *v7; // [rsp+40h] [rbp-58h]

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6, CurrentThread);
  CLIPOBJPath = 0LL;
  if ( v7 )
    CLIPOBJPath = UMPDOBJ::GetCLIPOBJPath(v7, a1);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v6);
  return CLIPOBJPath;
}
