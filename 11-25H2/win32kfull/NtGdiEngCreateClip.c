/*
 * XREFs of NtGdiEngCreateClip @ 0x140214B80
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ @ 0x140214BD0 (-CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ.c)
 */

struct _CLIPOBJ *__fastcall NtGdiEngCreateClip(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _CLIPOBJ *CLIPOBJ; // rbx
  struct W32_PUSH_LOCK *v5[4]; // [rsp+20h] [rbp-78h] BYREF
  UMPDOBJ *v6; // [rsp+40h] [rbp-58h]

  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v5, CurrentThread);
  CLIPOBJ = 0LL;
  if ( v6 )
    CLIPOBJ = UMPDOBJ::CreateCLIPOBJ(v6);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v5);
  return CLIPOBJ;
}
