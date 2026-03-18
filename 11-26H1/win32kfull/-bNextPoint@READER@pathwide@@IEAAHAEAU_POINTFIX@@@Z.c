/*
 * XREFs of ?bNextPoint@READER@pathwide@@IEAAHAEAU_POINTFIX@@@Z @ 0x140107F04
 * Callers:
 *     ?vNextPoint@LINER@pathwide@@AEAAXXZ @ 0x140109714 (-vNextPoint@LINER@pathwide@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pathwide::READER::bNextPoint(pathwide::READER *this, struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // rax
  struct _POINTFIX v5; // r8
  unsigned int v6; // r8d
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  unsigned int v12; // eax
  bool v13; // zf
  struct _POINTFIX *v14; // rcx
  __int64 v15; // rdx

  v2 = (struct _POINTFIX *)*((_QWORD *)this + 3);
  if ( (unsigned __int64)v2 >= *((_QWORD *)this + 4) )
  {
    if ( (*((_DWORD *)this + 2) & 2) != 0 )
    {
      return 0;
    }
    else
    {
      v8 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 8));
      v6 = 1;
      v9 = v8;
      v10 = *((_DWORD *)this + 10);
      v11 = v10 | 1;
      v12 = v10 & 0xFFFFFFFE;
      v13 = v9 == 0;
      v14 = (struct _POINTFIX *)*((_QWORD *)this + 2);
      if ( v13 )
        v11 = v12;
      *((_DWORD *)this + 10) = v11;
      *a2 = *v14;
      v15 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 3) = v15 + 8;
      *((_QWORD *)this + 4) = v15 + 8LL * *((unsigned int *)this + 3);
    }
  }
  else
  {
    v5 = *v2;
    *((_QWORD *)this + 3) = v2 + 1;
    *a2 = v5;
    return 1;
  }
  return v6;
}
