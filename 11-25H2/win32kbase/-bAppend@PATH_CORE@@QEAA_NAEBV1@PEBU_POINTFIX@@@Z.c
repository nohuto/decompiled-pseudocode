/*
 * XREFs of ?bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z @ 0x140099B90
 * Callers:
 *     ?bAppend@EPATHOBJ@@QEAA_NPEBV1@PEBU_POINTFIX@@@Z @ 0x14009AB50 (-bAppend@EPATHOBJ@@QEAA_NPEBV1@PEBU_POINTFIX@@@Z.c)
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x140099DDC (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14009A2B8 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 */

char __fastcall PATH_CORE::bAppend(PATH_CORE *this, const struct PATH_CORE *a2, const struct _POINTFIX *a3)
{
  __int64 *i; // rdi
  unsigned __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD v12[3]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v13; // [rsp+38h] [rbp-38h]
  __int64 *v14; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-28h]
  unsigned __int64 v16; // [rsp+50h] [rbp-20h]
  __int16 v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+64h] [rbp-Ch]
  int v20; // [rsp+98h] [rbp+28h] BYREF
  int v21; // [rsp+9Ch] [rbp+2Ch]
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF

  for ( i = (__int64 *)*((_QWORD *)a2 + 1); i; i = (__int64 *)*i )
  {
    v6 = *((unsigned int *)i + 5);
    v14 = i + 3;
    v16 = 0LL;
    v17 = 0;
    v7 = *((_DWORD *)i + 4);
    v15 = v6;
    v18 = v7 & 0x10;
    v19 = v6;
    if ( (v7 & 1) != 0 )
    {
      v8 = a3->x + *((_DWORD *)i + 6);
      v12[2] = 0LL;
      v22 = 0LL;
      v20 = v8;
      v21 = a3->y + *((_DWORD *)i + 7);
      v13 = 0;
      v12[0] = &v20;
      v12[1] = 1LL;
      umptr_r<_POINTL>::read<_POINTFIX>(v12, &v22, 1LL);
      if ( !v13 )
      {
        v9 = v22;
        *((_DWORD *)this + 12) |= 5u;
        *((_QWORD *)this + 5) = v9;
      }
      LODWORD(v6) = --v19;
      if ( v16 <= 0x7FFFFFFFFFFFFFFFLL
        && (v10 = v16 + 1, v16 >> 63 == (unsigned __int64)v10 > 0x7FFFFFFFFFFFFFFFLL && v10 >= 0 && v10 <= v15) )
      {
        ++v16;
      }
      else
      {
        LOBYTE(v17) = 1;
      }
    }
    while ( (_DWORD)v6 )
    {
      if ( !PATH_CORE::createrec(this, 0LL, (struct PATHDATAL *)&v14, a3) )
        return 0;
      LODWORD(v6) = v19;
    }
    if ( (i[2] & 8) != 0 )
    {
      *(_DWORD *)(*((_QWORD *)this + 2) + 16LL) |= 8u;
      *((_DWORD *)this + 12) |= 1u;
    }
  }
  return 1;
}
