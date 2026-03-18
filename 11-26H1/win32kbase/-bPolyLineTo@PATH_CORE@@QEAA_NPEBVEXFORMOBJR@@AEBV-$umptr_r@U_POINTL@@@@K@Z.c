/*
 * XREFs of ?bPolyLineTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1B80
 * Callers:
 *     <none>
 * Callees:
 *     ?growlastrec@PATH_CORE@@AEAAXPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C193C (-growlastrec@PATH_CORE@@AEAAXPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 */

char __fastcall PATH_CORE::bPolyLineTo(PATH_CORE *this, struct EXFORMOBJR *a2, __int64 a3, const struct _POINTFIX *a4)
{
  char v6; // bl
  _QWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]

  v8[0] = *(_QWORD *)a3;
  v6 = 1;
  v8[1] = *(_QWORD *)(a3 + 8);
  v8[2] = *(_QWORD *)(a3 + 16);
  v9 = *(_WORD *)(a3 + 24);
  v10 = 0;
  v11 = (int)a4;
  if ( (_DWORD)a4 )
  {
    if ( (*((_DWORD *)this + 12) & 1) != 0 || (PATH_CORE::growlastrec(this, a2, (struct PATHDATAL *)v8, a4), !v9) )
    {
      while ( v11 )
      {
        if ( !PATH_CORE::createrec(this, a2, (struct PATHDATAL *)v8, 0LL) )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
