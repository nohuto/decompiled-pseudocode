/*
 * XREFs of NtGdiCLIPOBJ_cEnumStart @ 0x140220D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1400D521C (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_cEnumStart(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
  int v7; // r14d
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v10; // ebx
  XCLIPOBJ *v11; // rax
  __int64 v12; // r10
  struct W32_PUSH_LOCK *v14[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+50h] [rbp-58h]

  v7 = a2;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v14, CurrentThread);
  v10 = -1;
  if ( v15 )
  {
    v11 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(v15, a1);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v12 + 444) & 0x100) == 0 || *((_QWORD *)v11 + 7) )
        v10 = XCLIPOBJ::cEnumStart(v11, v7, a3, a4, a5);
    }
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
  return v10;
}
