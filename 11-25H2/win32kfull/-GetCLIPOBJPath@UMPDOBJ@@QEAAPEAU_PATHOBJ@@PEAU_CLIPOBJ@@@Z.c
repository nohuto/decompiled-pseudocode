/*
 * XREFs of ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400D4E94
 * Callers:
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1400D4B40 (NtGdiCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D38E8 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     EngDeletePath @ 0x1400D49A0 (EngDeletePath.c)
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400D4F14 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1400D521C (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

struct _PATHOBJ *__fastcall UMPDOBJ::GetCLIPOBJPath(UMPDOBJ *this, struct _CLIPOBJ *a2)
{
  XCLIPOBJ *v3; // rax
  PATHOBJ *v4; // rbx
  void *Path; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 33) )
  {
    v3 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(this, a2);
    if ( v3 )
    {
      Path = XCLIPOBJ::ppoGetPath(v3);
      v4 = (PATHOBJ *)Path;
      if ( Path )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 256), (const void **)&Path, 8u, 0LL) )
          return (struct _PATHOBJ *)Path;
        EngDeletePath(v4);
      }
    }
  }
  return 0LL;
}
