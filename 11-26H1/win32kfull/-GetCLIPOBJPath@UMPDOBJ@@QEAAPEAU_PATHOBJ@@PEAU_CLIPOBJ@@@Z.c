/*
 * XREFs of ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400D865C
 * Callers:
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1400D8200 (NtGdiCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D7414 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     EngDeletePath @ 0x1400D7FA0 (EngDeletePath.c)
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400D86E8 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1400D88A4 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

struct _PATHOBJ *__fastcall UMPDOBJ::GetCLIPOBJPath(UMPDOBJ *this, struct _CLIPOBJ *a2)
{
  struct _DDIOBJMAP *v2; // rsi
  XCLIPOBJ *v4; // rax
  PATHOBJ *v5; // rbx
  void *Path; // [rsp+40h] [rbp+8h] BYREF

  v2 = (UMPDOBJ *)((char *)this + 240);
  if ( !*((_QWORD *)this + 31) )
  {
    v4 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(this, a2);
    if ( v4 )
    {
      Path = XCLIPOBJ::ppoGetPath(v4);
      v5 = (PATHOBJ *)Path;
      if ( Path )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(this, v2, &Path, 8u, 0LL) )
          return (struct _PATHOBJ *)Path;
        EngDeletePath(v5);
      }
    }
  }
  return 0LL;
}
