/*
 * XREFs of ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1401071B4
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x140106A9C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x140107828 (-bInPrivatePFT@PFFOBJ@@QEBAHXZ.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x140107C84 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x140203E50 (-bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z.c)
 */

__int64 __fastcall PFFOBJ::bDeleteLoadRef(PFFOBJ *this, int a2, struct tagPvtData *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // zf
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax

  v4 = 0;
  *a4 = 0;
  if ( (unsigned int)PFFOBJ::bInPrivatePFT(this) )
  {
    if ( !a3 )
      return 0LL;
    if ( a2 == 128 )
    {
      *(_QWORD *)a3 = 0LL;
LABEL_13:
      if ( !*(_QWORD *)a3 )
        PFFOBJ::bRemovePvtData(this, a3);
      v11 = *(_QWORD *)(*(_QWORD *)this + 152LL) == 0LL;
      goto LABEL_6;
    }
    v13 = *((_DWORD *)a3 + 2);
    v14 = a2 & v13;
    if ( (a2 & 0x6C) != 0 )
    {
      if ( v14 )
      {
        v15 = *((_DWORD *)a3 + 1);
        if ( v15 )
        {
          *((_DWORD *)a3 + 1) = v15 - 1;
          if ( a2 == 64 )
            *((_DWORD *)a3 + 2) = v13 & 0xFFFFFFBF;
        }
        goto LABEL_13;
      }
    }
    else
    {
      if ( !v14 )
        goto LABEL_13;
      if ( *(_DWORD *)a3 )
      {
        --*(_DWORD *)a3;
        goto LABEL_13;
      }
    }
    *a4 = 1;
    goto LABEL_13;
  }
  v9 = *(_QWORD *)this;
  if ( a2 )
  {
    v16 = *(_DWORD *)(v9 + 60);
    if ( v16 )
      *(_DWORD *)(v9 + 60) = v16 - 1;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 56);
    if ( v10 )
      *(_DWORD *)(v9 + 56) = v10 - 1;
  }
  v11 = *(_QWORD *)(*(_QWORD *)this + 56LL) == 0LL;
LABEL_6:
  if ( v11 )
  {
    PFFOBJ::vKill(this);
    return 1;
  }
  return v4;
}
