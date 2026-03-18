/*
 * XREFs of NtGdiXLATEOBJ_iXlate @ 0x1400D23A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     XLATEOBJ_iXlate @ 0x1400D08C0 (XLATEOBJ_iXlate.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400D6728 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_iXlate(__int64 a1, __int64 a2)
{
  ULONG v2; // edi
  struct _GRETHREAD *CurrentThread; // rax
  ULONG v5; // ebx
  XLATEOBJ *v7; // rax
  _BYTE v8[32]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+40h] [rbp-58h]

  v2 = a2;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v8, CurrentThread);
  v5 = 0;
  if ( v9 )
  {
    v7 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v9, a1);
    if ( v7 )
      v5 = XLATEOBJ_iXlate(v7, v2);
  }
  else
  {
    v5 = -1;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v8);
  return v5;
}
