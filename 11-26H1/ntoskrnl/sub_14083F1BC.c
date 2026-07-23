/*
 * XREFs of sub_14083F1BC @ 0x14083F1BC
 * Callers:
 *     sub_14083ED44 @ 0x14083ED44 (sub_14083ED44.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall sub_14083F1BC(__int64 a1, char a2, void *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  char *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rax
  unsigned __int16 *v20; // rcx

  v5 = 0;
  if ( a3 )
    memset_0(a3, 0, 16LL * a4);
  v10 = (unsigned int)(*(_DWORD *)(a1 + 4) + 20);
  v11 = 0LL;
  if ( a1 + 20 != v10 + a1 )
    v11 = (unsigned __int16 *)(a1 + 20);
  while ( v11 )
  {
    v12 = (char *)v11 - a1;
    if ( a2 == 1 )
    {
      if ( (unsigned __int64)(v12 + 20) > v10 )
        return 3221225534LL;
      v13 = *v11;
      if ( (unsigned __int64)&v12[v13] > v10 )
        return 3221225534LL;
      v14 = v11[1];
      if ( (unsigned __int16)v14 > (unsigned __int16)v13 )
        return 3221225534LL;
      v15 = (char *)v11 + v13;
      if ( (unsigned __int16 *)((char *)v11 + v13) < v11 )
        return 3221225534LL;
      v16 = (unsigned __int64)v11 + v14 + 16;
      if ( v16 < (unsigned __int64)(v11 + 8) )
        return 3221225534LL;
      if ( v16 > (unsigned __int64)v15 )
        return 3221225534LL;
      v17 = (unsigned __int64)v11 + v11[3] + v11[1] + 16;
      if ( v17 < (unsigned __int64)(v11 + 8) )
        return 3221225534LL;
      if ( v17 > (unsigned __int64)v15 )
        return 3221225534LL;
      v18 = *((_DWORD *)v11 + 2);
      if ( v18 )
      {
        if ( (v18 & 3) == 0 )
          return 3221225534LL;
      }
    }
    if ( a3 && v5 < a4 )
    {
      v19 = 2LL * v5;
      *((_BYTE *)a3 + 8 * v19) = 2;
      *((_QWORD *)a3 + v19 + 1) = v11;
    }
    ++v5;
    v20 = (unsigned __int16 *)((char *)v11 + *v11);
    v11 = 0LL;
    if ( v20 != (unsigned __int16 *)(v10 + a1) )
      v11 = v20;
  }
  if ( a5 )
    *a5 = v5;
  return a4 < v5 ? 0xC0000023 : 0;
}
