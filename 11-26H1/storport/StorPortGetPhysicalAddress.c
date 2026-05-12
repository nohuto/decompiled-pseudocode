/*
 * XREFs of StorPortGetPhysicalAddress @ 0x14001B6C0
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1401C22D0 (StorPortGetPhysicalAddressVrfy.c)
 * Callees:
 *     IsDmarEnabled @ 0x14001CD00 (IsDmarEnabled.c)
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  PHYSICAL_ADDRESS PhysicalAddress; // r10
  unsigned int v6; // esi
  int **v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbp
  int *v11; // rdi
  int *v12; // rbx
  int v13; // ecx
  __int64 *v14; // r9
  __int64 v15; // r12
  char v16; // r11
  int v17; // r12d
  __int64 v18; // rcx
  unsigned __int64 v19; // r11
  int v20; // esi
  __int64 v21; // r14
  unsigned __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // r11
  int v26; // ecx
  unsigned int v27; // r9d
  int v28; // edx
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // r14d
  unsigned int v32; // eax
  __int64 v34; // rdi
  int v35; // esi
  unsigned int v36; // r8d
  unsigned int v37; // esi
  unsigned int v38; // ebp
  __int64 v39; // rcx
  unsigned __int64 v40; // r14
  __int64 v41; // r11
  unsigned int v42; // edi
  void *v43; // r8
  __int64 v44; // rdx
  unsigned int *v45; // rdx
  unsigned int v46; // esi
  unsigned int v47; // ebp
  unsigned int v48; // r9d
  __int64 v49; // rax
  unsigned int *v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // eax
  void *v53; // r8
  unsigned int v54; // [rsp+20h] [rbp-68h]
  unsigned int v55; // [rsp+24h] [rbp-64h]
  unsigned int v56; // [rsp+28h] [rbp-60h]
  unsigned __int64 v57; // [rsp+30h] [rbp-58h]
  unsigned __int64 v58; // [rsp+40h] [rbp-48h]
  int *v59; // [rsp+48h] [rbp-40h]
  unsigned __int8 v60; // [rsp+A8h] [rbp+20h]

  PhysicalAddress.QuadPart = 0LL;
  *a4 = 0;
  v6 = 0;
  v7 = *(int ***)(a1 - 16);
  v8 = 0LL;
  v54 = 0;
  v9 = 0LL;
  v55 = 0;
  v10 = 0LL;
  v58 = 0LL;
  v11 = 0LL;
  v60 = 0;
  v57 = 0LL;
  v59 = 0LL;
  if ( !v7 )
    return PhysicalAddress;
  v12 = *v7;
  if ( !*v7 )
    return PhysicalAddress;
  v13 = *v12;
  if ( ((_DWORD)v7[31] & 1) != 0 )
  {
    if ( v13 != 1314275652 )
      return PhysicalAddress;
    v59 = *v7;
    v14 = (__int64 *)(v12 + 334);
  }
  else
  {
    if ( v13 != 1094997074 )
      return PhysicalAddress;
    v11 = *v7;
    v14 = (__int64 *)(v12 + 232);
  }
  v15 = 96LL;
  if ( a2 )
  {
    v16 = *(_BYTE *)(a2 + 2);
    if ( v16 == 40 )
    {
      v17 = *(_DWORD *)(a2 + 20);
      v9 = *(_QWORD *)(a2 + 104);
      v54 = *(_DWORD *)(a2 + 60);
      if ( !v17 )
      {
        v56 = *(_DWORD *)(a2 + 56);
        if ( v56 )
        {
          while ( 1 )
          {
            v18 = *(unsigned int *)(a2 + 4 * v10 + 120);
            if ( (unsigned int)v18 < 0x80 )
              goto LABEL_15;
            v19 = *(unsigned int *)(a2 + 16);
            if ( (unsigned int)v18 >= (unsigned int)v19 )
              goto LABEL_15;
            v20 = *(_DWORD *)(v18 + a2);
            v21 = v18 + a2;
            if ( v20 == 64 )
              break;
            v35 = v20 - 65;
            if ( !v35 )
            {
              v22 = v18 + 56;
LABEL_14:
              if ( v22 <= v19 )
              {
                v57 = *(_QWORD *)(v21 + 16);
                v60 = *(_BYTE *)(v21 + 9);
                goto LABEL_16;
              }
              goto LABEL_15;
            }
            if ( v35 == 1 && v18 + 40 <= v19 )
            {
              v57 = *(_QWORD *)(v21 + 24);
              v60 = *(_BYTE *)(v21 + 9);
              goto LABEL_16;
            }
LABEL_15:
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= v56 )
              goto LABEL_16;
          }
          v22 = v18 + 40;
          goto LABEL_14;
        }
      }
LABEL_16:
      if ( (*(_BYTE *)(a2 + 24) & 0xC0) == 0xC0 && (v37 = *(_DWORD *)(a2 + 56), v38 = 0, v37) )
      {
        while ( 1 )
        {
          v39 = *(unsigned int *)(a2 + 4LL * v38 + 120);
          if ( (unsigned int)v39 >= 0x80 )
          {
            v40 = *(unsigned int *)(a2 + 16);
            if ( (unsigned int)v39 <= (unsigned int)v40 )
            {
              v41 = v39 + a2;
              if ( *(_DWORD *)(v39 + a2) == 1 && v39 + 24 <= v40 )
                break;
            }
          }
          if ( ++v38 >= v37 )
            goto LABEL_17;
        }
        v8 = *(_QWORD *)(a2 + 64);
        if ( v41 )
        {
          v58 = *(_QWORD *)(v41 + 16);
          v55 = *(_DWORD *)(v41 + 8);
        }
      }
      else
      {
LABEL_17:
        v8 = *(_QWORD *)(a2 + 64);
      }
      v16 = 40;
    }
    else
    {
      v17 = *(unsigned __int8 *)(a2 + 2);
      v9 = *(_QWORD *)(a2 + 56);
      v54 = *(_DWORD *)(a2 + 16);
      v8 = *(_QWORD *)(a2 + 24);
      if ( !v16 )
      {
        v57 = *(_QWORD *)(a2 + 32);
        v60 = *(_BYTE *)(a2 + 11);
      }
    }
    v23 = v17 == 23;
    v6 = v54;
    v15 = 96LL;
    if ( v23 )
    {
      v51 = 96LL;
      if ( v16 != 40 )
        v51 = 48LL;
      v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + a2) + 104LL) + 40LL);
      if ( v52 > v54 )
        v6 = v52;
    }
    v10 = v57;
  }
  v24 = *v14;
  if ( *v14 <= (unsigned __int64)a3 )
  {
    v25 = *((unsigned int *)v14 + 4);
    if ( (unsigned __int64)a3 < v24 + v25 )
    {
      v36 = (_DWORD)a3 - v24;
      PhysicalAddress.QuadPart = v14[1] + v36;
      *a4 = v25 - v36;
      return PhysicalAddress;
    }
  }
  if ( !a2 )
  {
    if ( *v12 == 1094997074 )
    {
      if ( *((_BYTE *)v12 + 904) && v12[231] == 3 )
        return PhysicalAddress;
    }
    else if ( *v12 == 1314275652 && *((_BYTE *)v12 + 1168) && v12[297] == 3 )
    {
      return PhysicalAddress;
    }
    v34 = 79LL;
    PhysicalAddress = MmGetPhysicalAddress(a3);
    if ( *v12 != 1314275652 )
      v34 = 131LL;
    v32 = (v12[v34] + 7) & 0xFFFFFFF8;
    goto LABEL_40;
  }
  if ( v8 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v8 + v6 )
  {
    v26 = v58;
    v27 = v55;
LABEL_70:
    if ( *(_BYTE *)(a2 + 2) != 40 )
      v15 = 48LL;
    v44 = *(_QWORD *)(v15 + a2);
    if ( v8 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v8 + v6 )
    {
      v45 = *(unsigned int **)(v44 + 152);
      v46 = (_DWORD)a3 - v26;
      v47 = v27;
    }
    else
    {
      v45 = *(unsigned int **)(v44 + 112);
      v47 = v54;
      v46 = (_DWORD)a3 - v8;
    }
    if ( v45 )
    {
      v48 = *v45;
      v49 = 0LL;
      if ( *v45 )
      {
        v50 = v45 + 6;
        while ( v46 >= *v50 )
        {
          v46 -= *v50;
          v49 = (unsigned int)(v49 + 1);
          v50 += 6;
          if ( (unsigned int)v49 >= v48 )
            goto LABEL_79;
        }
      }
      else
      {
LABEL_79:
        if ( (unsigned int)v49 >= v48 )
          return PhysicalAddress;
      }
      *a4 = v45[6 * v49 + 6] - v46;
      return (PHYSICAL_ADDRESS)(*(_QWORD *)&v45[6 * v49 + 4] + v46);
    }
    if ( (v11 && (*((_BYTE *)v11 + 4435) & 4) != 0 || v59) && !(unsigned __int8)IsDmarEnabled(v12) )
    {
      PhysicalAddress = MmGetPhysicalAddress(v53);
      *a4 = v47 - v46;
    }
    return PhysicalAddress;
  }
  v26 = v58;
  if ( v58 <= (unsigned __int64)a3 )
  {
    v27 = v55;
    if ( (unsigned __int64)a3 < v58 + v55 )
      goto LABEL_70;
  }
  if ( v10 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v60 + v10 )
  {
    v42 = (_DWORD)a3 - v10;
    if ( (unsigned __int8)IsDmarEnabled(v12) )
      PhysicalAddress.QuadPart = *(_QWORD *)(v9 - 1176) + v42 + 944LL;
    else
      PhysicalAddress = MmGetPhysicalAddress(v43);
    v32 = v60 - v42;
LABEL_40:
    *a4 = v32;
    return PhysicalAddress;
  }
  if ( v9 <= (unsigned __int64)a3 )
  {
    v28 = *v12;
    v29 = 79LL;
    v30 = 79LL;
    if ( *v12 != 1314275652 )
      v30 = 131LL;
    if ( (unsigned __int64)a3 < v9 + ((v12[v30] + 7) & 0xFFFFFFF8) )
    {
      v31 = (_DWORD)a3 - v9;
      if ( v28 == 1094997074 )
      {
        if ( *((_BYTE *)v12 + 904) && v12[231] == 3 )
        {
LABEL_63:
          PhysicalAddress.QuadPart = *(_QWORD *)(v9 - 1176) + v31 + 1200LL;
          goto LABEL_37;
        }
      }
      else if ( v28 == 1314275652 && *((_BYTE *)v12 + 1168) && v12[297] == 3 )
      {
        goto LABEL_63;
      }
      PhysicalAddress = MmGetPhysicalAddress(a3);
LABEL_37:
      if ( *v12 != 1314275652 )
        v29 = 131LL;
      v32 = ((v12[v29] + 7) & 0xFFFFFFF8) - v31;
      goto LABEL_40;
    }
  }
  return PhysicalAddress;
}
