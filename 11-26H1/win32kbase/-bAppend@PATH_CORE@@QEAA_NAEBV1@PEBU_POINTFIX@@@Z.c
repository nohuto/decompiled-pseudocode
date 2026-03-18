/*
 * XREFs of ?bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z @ 0x1400C0F40
 * Callers:
 *     ?bAppend@EPATHOBJ@@QEAA_NPEBV1@PEBU_POINTFIX@@@Z @ 0x1400C0CE0 (-bAppend@EPATHOBJ@@QEAA_NPEBV1@PEBU_POINTFIX@@@Z.c)
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 */

char __fastcall PATH_CORE::bAppend(PATH_CORE *this, const struct PATH_CORE *a2, const struct _POINTFIX *a3)
{
  __int64 *i; // rdi
  int v6; // ecx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v12; // [rsp+38h] [rbp-38h]
  __int64 *v13; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-28h]
  unsigned __int64 v15; // [rsp+50h] [rbp-20h]
  __int16 v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]
  int v19; // [rsp+A8h] [rbp+38h] BYREF
  int v20; // [rsp+ACh] [rbp+3Ch]
  __int64 v21; // [rsp+B8h] [rbp+48h] BYREF

  for ( i = (__int64 *)*((_QWORD *)a2 + 1); i; i = (__int64 *)*i )
  {
    v6 = *((_DWORD *)i + 4);
    v7 = *((unsigned int *)i + 5);
    v13 = i + 3;
    v14 = v7;
    v15 = 0LL;
    v16 = 0;
    v17 = v6 & 0x10;
    v18 = v7;
    if ( (v6 & 1) != 0 )
    {
      v19 = *((_DWORD *)i + 6) + a3->x;
      v20 = a3->y + *((_DWORD *)i + 7);
      v11[0] = &v19;
      v11[1] = 1LL;
      v11[2] = 0LL;
      v12 = 0;
      v21 = 0LL;
      umptr_r<_POINTL>::read<_POINTFIX>(v11, &v21, 1LL);
      if ( !v12 )
      {
        v9 = v21;
        *((_DWORD *)this + 12) |= 5u;
        *((_QWORD *)this + 5) = v9;
      }
      LODWORD(v7) = --v18;
      if ( v15 <= 0x7FFFFFFFFFFFFFFFLL
        && (v8 = v15 + 1, v15 >> 63 == v15 + 1 > 0x7FFFFFFFFFFFFFFFLL)
        && v8 >= 0
        && v8 <= v14 )
      {
        ++v15;
      }
      else
      {
        LOBYTE(v16) = 1;
      }
    }
    while ( (_DWORD)v7 )
    {
      if ( !PATH_CORE::createrec(this, 0LL, (struct PATHDATAL *)&v13, a3) )
        return 0;
      LODWORD(v7) = v18;
    }
    if ( (i[2] & 8) != 0 )
    {
      *(_DWORD *)(*((_QWORD *)this + 2) + 16LL) |= 8u;
      *((_DWORD *)this + 12) |= 1u;
    }
  }
  return 1;
}
