/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400D9450
 * Callers:
 *     NtGdiSTROBJ_bEnum @ 0x140251780 (NtGdiSTROBJ_bEnum.c)
 *     NtGdiSTROBJ_bEnumPositionsOnly @ 0x140257370 (NtGdiSTROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400D9914 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     STROBJ_bEnum @ 0x1400DA160 (STROBJ_bEnum.c)
 *     ?STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x140252D20 (-STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumInternal(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3, int a4)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // eax
  ULONG v12; // ebx
  PGLYPHPOS v13; // r14
  unsigned int v14; // edi
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  ULONG pc; // [rsp+30h] [rbp-98h] BYREF
  PGLYPHPOS ppgpos; // [rsp+38h] [rbp-90h] BYREF
  char *v21; // [rsp+40h] [rbp-88h] BYREF
  UMPDOBJ *v22[4]; // [rsp+50h] [rbp-78h] BYREF
  UMPDOBJ *v23; // [rsp+70h] [rbp-58h]

  ppgpos = 0LL;
  pc = 0;
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v22, CurrentThread);
  v9 = v23;
  if ( !v23 )
    goto LABEL_13;
  v10 = UMPDOBJ::GetDDIOBJ<_STROBJ>(v23, a1);
  if ( !v10 )
    goto LABEL_13;
  if ( a4 )
  {
    if ( (*(_DWORD *)(v10 + 232) & 0x1400) == 0 )
    {
      v12 = *(_DWORD *)v10;
      v13 = *(PGLYPHPOS *)(v10 + 64);
      v14 = 0;
      goto LABEL_6;
    }
    v11 = STROBJ_bEnumPositionsOnlyLinked((struct ESTROBJ *)v10, &pc, &ppgpos);
  }
  else
  {
    v11 = STROBJ_bEnum((STROBJ *)v10, &pc, &ppgpos);
  }
  v12 = pc;
  v13 = ppgpos;
  v14 = v11;
LABEL_6:
  if ( v14 == -1 || v12 > 0x1A0AAA || (v15 = (char *)UMPDOBJ::_AllocUserMem(v9, 24 * v12, 0), (v21 = v15) == 0LL) )
  {
LABEL_13:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v22);
    return 0xFFFFFFFFLL;
  }
  memmove(v15, v13, 24LL * v12);
  GreProbeAndWriteToUntrustedVa(a3, 8uLL, &v21, 8uLL, 1uLL);
  pc = v12;
  GreProbeAndWriteToUntrustedVa(a2, 4uLL, &pc, 4uLL, 1uLL);
  if ( v12 )
  {
    v16 = 0LL;
    v17 = v12;
    do
    {
      *(_QWORD *)&v21[v16 + 8] = 0LL;
      v16 += 24LL;
      --v17;
    }
    while ( v17 );
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v22);
  return v14;
}
