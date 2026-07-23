/*
 * XREFs of HvlSetupLiveDumpBuffer @ 0x1405C4E38
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1405C2DE8 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HvlSetupLiveDumpBuffer(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // r12
  PHYSICAL_ADDRESS *v18; // r14
  unsigned __int64 v19; // r13
  void **v20; // r15
  unsigned __int64 v21; // rdi
  void **v22; // r12
  unsigned __int64 v23; // rsi
  char *v24; // r15
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r13
  PHYSICAL_ADDRESS *v27; // r14
  unsigned __int64 v28; // rbx
  void **v29; // r15
  char *v30; // r12
  void **v31; // rdi
  PHYSICAL_ADDRESS **v32; // r15
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r14
  PHYSICAL_ADDRESS *v35; // r12
  unsigned __int64 v36; // r13
  char **v37; // rsi
  char *v38; // rbx
  unsigned __int64 v39; // [rsp+20h] [rbp-88h]
  unsigned __int64 v40; // [rsp+20h] [rbp-88h]
  unsigned __int64 v41; // [rsp+28h] [rbp-80h]
  unsigned __int64 v42; // [rsp+30h] [rbp-78h]
  unsigned __int64 v43; // [rsp+38h] [rbp-70h]
  void **v44; // [rsp+38h] [rbp-70h]
  PHYSICAL_ADDRESS **v45; // [rsp+40h] [rbp-68h]
  void **v46; // [rsp+48h] [rbp-60h]
  unsigned __int64 v47; // [rsp+50h] [rbp-58h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]
  __int64 v49; // [rsp+70h] [rbp-38h]
  unsigned __int64 v51; // [rsp+E0h] [rbp+38h]

  v7 = a3;
  v8 = a3 * (unsigned __int64)a2;
  if ( v8 < 5 )
    return 3221225507LL;
  v10 = v8 - 2;
  v11 = v10 / 0x40201;
  if ( v10 / 0x40201 >= 0x200 )
    v11 = 512LL;
  v12 = v11 << 9;
  v39 = v11 << 9;
  v13 = v11 << 18;
  v51 = v11 << 18;
  v14 = v10 - (v11 << 18) - (v11 << 9) - v11;
  if ( v14 >= 3 && v11 < 0x200 )
  {
    v15 = v14 - 1;
    ++v11;
    v12 += v15 / 0x201;
    v13 += (v15 / 0x201) << 9;
    v39 = v12;
    v51 = v13;
    v16 = v15 % 0x201;
    if ( v16 >= 2 )
    {
      ++v12;
      v13 = v16 + v13 - 1;
      v39 = v12;
      v51 = v13;
    }
  }
  *a4 = v11 + 2;
  v43 = v11 + 2;
  v48 = v11 + 2 + v12;
  *a5 = v48;
  v17 = *a1;
  *(_DWORD *)(v17 + 8) = 3;
  *(_QWORD *)v17 = v13;
  v49 = v17;
  v47 = 1uLL % a3;
  v18 = (PHYSICAL_ADDRESS *)(a1[1uLL / a3] + (v47 << 12));
  v45 = (PHYSICAL_ADDRESS **)&a1[1uLL / a3];
  *(_QWORD *)(v17 + 16) = (unsigned __int64)MmGetPhysicalAddress(&(*v45)[512 * v47]).QuadPart >> 12;
  v41 = 2 % v7;
  v19 = 2 % v7;
  v20 = (void **)&a1[2 / v7];
  v46 = v20;
  if ( v11 )
  {
    v21 = v47;
    v22 = v20;
    v23 = 0LL;
    v24 = (char *)*v20 + 4096 * (2 % v7);
    do
    {
      *v18 = MmGetPhysicalAddress(v24);
      v24 += 4096;
      ++v18;
      if ( (++v23 & 0x1FF) == 0 && !(++v21 % v7) )
      {
        ++v45;
        v21 = 0LL;
        v18 = *v45;
      }
      v25 = (v19 + 1) % v7;
      if ( !v25 )
        v24 = (char *)*++v22;
      v19 = (v19 + 1) & -(__int64)(v25 != 0);
    }
    while ( v23 < v11 );
    v13 = v51;
    v12 = v39;
    v20 = v46;
  }
  v26 = 0LL;
  v27 = (PHYSICAL_ADDRESS *)((char *)*v20 + 4096 * (2 % v7));
  v40 = v43 % v7;
  v28 = v43 % v7;
  v42 = (v43 % v7) << 12;
  v29 = (void **)&a1[v43 / v7];
  v30 = (char *)*v29 + v42;
  v44 = v29;
  if ( v12 )
  {
    v31 = v29;
    v32 = (PHYSICAL_ADDRESS **)v46;
    do
    {
      *v27 = MmGetPhysicalAddress(v30);
      v30 += 4096;
      ++v27;
      if ( (++v26 & 0x1FF) == 0 && !(++v41 % v7) )
      {
        ++v32;
        v41 = 0LL;
        v27 = *v32;
      }
      v33 = (v28 + 1) % v7;
      if ( !v33 )
        v30 = (char *)*++v31;
      v28 = (v28 + 1) & -(__int64)(v33 != 0);
    }
    while ( v26 < v12 );
    v13 = v51;
    v29 = v44;
  }
  v34 = 0LL;
  v35 = (PHYSICAL_ADDRESS *)((char *)*v29 + v42);
  v36 = v48 % v7;
  v37 = (char **)&a1[v48 / v7];
  v38 = &(*v37)[4096 * (v48 % v7)];
  while ( v34 < v13 )
  {
    while ( 1 )
    {
      *v35 = MmGetPhysicalAddress(v38);
      v38 += 4096;
      ++v35;
      if ( (++v34 & 0x1FF) == 0 && !(++v40 % v7) )
      {
        ++v29;
        v40 = 0LL;
        v35 = (PHYSICAL_ADDRESS *)*v29;
      }
      if ( ++v36 % v7 )
        break;
      if ( v34 >= v13 )
        goto LABEL_35;
      ++v37;
      v36 = 0LL;
      v38 = *v37;
    }
  }
LABEL_35:
  *a6 = v49;
  return 0LL;
}
