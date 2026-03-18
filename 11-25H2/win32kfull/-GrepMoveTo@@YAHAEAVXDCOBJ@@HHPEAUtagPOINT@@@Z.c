/*
 * XREFs of ?GrepMoveTo@@YAHAEAVXDCOBJ@@HHPEAUtagPOINT@@@Z @ 0x140332C74
 * Callers:
 *     NtGdiMoveTo @ 0x14033A2B0 (NtGdiMoveTo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GrepMoveTo(struct XDCOBJ *a1, int a2, int a3, struct tagPOINT *a4)
{
  __int64 v6; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(v6 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 976) + 152LL) & 0x100) == 0 )
    {
LABEL_6:
      *a4 = *(struct tagPOINT *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 216LL);
      goto LABEL_7;
    }
    DC::QuickInitXform(v6, &v10, 1026LL);
    if ( v10 )
    {
      EXFORMOBJ::bXform(
        (EXFORMOBJ *)&v10,
        (const struct _POINTFIX *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL),
        (struct _POINTL *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 216LL),
        1uLL);
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_7:
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 216LL) = a2;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 220LL) = a3;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x200u;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x100u;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) == 0 )
    *(_DWORD *)(*(_QWORD *)a1 + 240LL) = 0;
  return 1LL;
}
