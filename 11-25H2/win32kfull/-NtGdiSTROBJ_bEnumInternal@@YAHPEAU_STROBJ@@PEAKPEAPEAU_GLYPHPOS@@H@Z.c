/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400A9830
 * Callers:
 *     NtGdiSTROBJ_bEnumPositionsOnly @ 0x1400A92A0 (NtGdiSTROBJ_bEnumPositionsOnly.c)
 *     NtGdiSTROBJ_bEnum @ 0x1400A94E0 (NtGdiSTROBJ_bEnum.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400A8D40 (-STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400A99D8 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     STROBJ_bEnum @ 0x1400A9C00 (STROBJ_bEnum.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumInternal(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3, int a4)
{
  unsigned int *v6; // r15
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // eax
  ULONG v12; // ebx
  unsigned int v13; // edi
  char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  ULONG pc; // [rsp+20h] [rbp-98h] BYREF
  PGLYPHPOS ppgpos; // [rsp+28h] [rbp-90h] BYREF
  char *Src; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v21[32]; // [rsp+40h] [rbp-78h] BYREF
  UMPDOBJ *v22; // [rsp+60h] [rbp-58h]

  v6 = a2;
  ppgpos = 0LL;
  pc = 0;
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v21, CurrentThread);
  v9 = v22;
  if ( !v22 )
    goto LABEL_19;
  v10 = UMPDOBJ::GetDDIOBJ<_STROBJ>(v22, a1);
  if ( !v10 )
    goto LABEL_19;
  if ( a4 )
  {
    if ( (*(_DWORD *)(v10 + 232) & 0x1400) == 0 )
    {
      v12 = *(_DWORD *)v10;
      pc = *(_DWORD *)v10;
      ppgpos = *(PGLYPHPOS *)(v10 + 64);
      v13 = 0;
      goto LABEL_6;
    }
    v11 = STROBJ_bEnumPositionsOnlyLinked((struct ESTROBJ *)v10, &pc, &ppgpos);
  }
  else
  {
    v11 = STROBJ_bEnum((STROBJ *)v10, &pc, &ppgpos);
  }
  v12 = pc;
  v13 = v11;
LABEL_6:
  if ( v13 == -1 || v12 > 0x1A0AAA || (v14 = (char *)UMPDOBJ::_AllocUserMem(v9, 24 * v12, 0), (Src = v14) == 0LL) )
  {
LABEL_19:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v21);
    return 0xFFFFFFFFLL;
  }
  memmove(v14, ppgpos, 24LL * v12);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct _GLYPHPOS **)MmUserProbeAddress;
  RtlCopyVolatileMemory(a3, &Src, 8uLL);
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  *v6 = v12;
  if ( v12 )
  {
    v15 = 0LL;
    v16 = v12;
    do
    {
      *(_QWORD *)&Src[v15 + 8] = 0LL;
      v15 += 24LL;
      --v16;
    }
    while ( v16 );
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v21);
  return v13;
}
