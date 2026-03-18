/*
 * XREFs of NtGdiSTROBJ_vEnumStart @ 0x1400A9080
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400A99D8 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSTROBJ_vEnumStart(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  __int64 v6; // rax
  _BYTE v7[32]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+40h] [rbp-58h]

  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7, CurrentThread);
  v4 = 0;
  if ( v8 )
  {
    v6 = UMPDOBJ::GetDDIOBJ<_STROBJ>(v8, a1);
    if ( v6 )
      *(_QWORD *)(v6 + 48) = 0LL;
  }
  else
  {
    v4 = -1073741811;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7);
  return v4;
}
