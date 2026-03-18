/*
 * XREFs of NtGdiSTROBJ_bGetAdvanceWidths @ 0x1400A9190
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     STROBJ_bGetAdvanceWidths @ 0x1400A8FA0 (STROBJ_bGetAdvanceWidths.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400A99D8 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiSTROBJ_bGetAdvanceWidths(__int64 a1, __int64 a2, ULONG a3, char *a4)
{
  ULONG v6; // r15d
  struct _GRETHREAD *CurrentThread; // rax
  STROBJ *v9; // rdi
  UMPDOBJ *v10; // r9
  POINTQF *v11; // rax
  POINTQF *v12; // r14
  unsigned int AdvanceWidths; // edi
  size_t v14; // r8
  _BYTE v16[32]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h]

  v6 = a2;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v16, CurrentThread);
  if ( v17
    && (v9 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(v17, a1)) != 0LL
    && a3 <= 0x271000
    && (v11 = (POINTQF *)UMPDOBJ::_AllocUserMem(v10, 16 * a3, 0), (v12 = v11) != 0LL) )
  {
    AdvanceWidths = STROBJ_bGetAdvanceWidths(v9, v6, a3, v11);
    if ( AdvanceWidths )
    {
      v14 = 16LL * a3;
      if ( (unsigned __int64)&a4[v14] > MmUserProbeAddress || &a4[v14] <= a4 || ((unsigned __int8)a4 & 7) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, v12, v14);
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v16);
    return AdvanceWidths;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v16);
    return 0LL;
  }
}
