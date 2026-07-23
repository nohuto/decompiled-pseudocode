/*
 * XREFs of AuthzBasepAddAccessTypeList @ 0x14045EB20
 * Callers:
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 * Callees:
 *     AuthzBasepSetAccessReasons @ 0x140447B80 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepUpdateParentTypeList @ 0x1404EFD68 (AuthzBasepUpdateParentTypeList.c)
 *     AuthzBasepSetAppContainerAccessReasons @ 0x140719E40 (AuthzBasepSetAppContainerAccessReasons.c)
 */

void __fastcall AuthzBasepAddAccessTypeList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  char v6; // r13
  __int64 v7; // r15
  unsigned int v9; // esi
  unsigned int v11; // r14d
  __int64 v12; // r8
  int v13; // r9d
  int v14; // eax
  __int64 v15; // r11
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rbx
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r10
  int v23; // r8d
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // eax
  __int64 i; // r11
  __int64 v30; // r9
  bool v31; // zf
  __int64 v32; // rcx
  int v33; // edx
  int v34; // ecx
  int v35; // ecx
  int v36; // edx
  int v37; // edx
  int v38; // ecx

  v6 = 0;
  v7 = a3;
  v9 = a2;
  switch ( a6 )
  {
    case 0:
      v11 = a5;
      v12 = a1 + 48LL * a3;
      v13 = *(_DWORD *)(v12 + 24);
      v14 = v13 & ~a5;
      *(_DWORD *)(v12 + 24) = v14;
      if ( v13 == v14 )
        return;
      v15 = *(_QWORD *)(v12 + 40);
      v16 = a5 & v13;
      a2 = 0LL;
      v17 = 1;
      v18 = a1 + 48 * v7;
      if ( v15 )
      {
        while ( 1 )
        {
          v18 = v12;
          if ( !v17 )
            break;
          if ( (v17 & v16) != 0 && !*(_DWORD *)(v15 + 4 * a2) )
            *(_DWORD *)(v15 + 4 * a2) = a4 | 0x10000;
          a2 = (unsigned int)(a2 + 1);
          v17 *= 2;
        }
      }
      goto LABEL_10;
    case 1:
      v11 = a5;
      v18 = a1 + 48LL * a3;
      v19 = *(_DWORD *)(v18 + 28);
      v20 = ~*(_DWORD *)(v18 + 32);
      v21 = v19 | a5 & v20;
      *(_DWORD *)(v18 + 28) = v21;
      if ( v19 != v21 )
      {
        v22 = *(_QWORD *)(v18 + 40);
        a2 = 0LL;
        v23 = a5 & v20 & ~v19;
        v24 = 1;
        if ( v22 )
        {
          while ( v24 )
          {
            if ( (v24 & v23) != 0 && !*(_DWORD *)(v22 + 4 * a2) )
              *(_DWORD *)(v22 + 4 * a2) = a4 | 0x10000;
            a2 = (unsigned int)(a2 + 1);
            v24 *= 2;
          }
        }
        goto LABEL_10;
      }
      goto LABEL_9;
    case 2:
      v11 = a5;
      v18 = a1 + 48LL * a3;
      v27 = *(_DWORD *)(v18 + 32);
      a2 = (unsigned int)~*(_DWORD *)(v18 + 28);
      v28 = v27 | a5 & ~*(_DWORD *)(v18 + 28);
      *(_DWORD *)(v18 + 32) = v28;
      if ( v27 != v28 )
      {
        AuthzBasepSetAccessReasons(a5 & a2 & ~v27, 0x20000, a4, *(_QWORD *)(v18 + 40), 0);
        goto LABEL_10;
      }
      goto LABEL_9;
    case 3:
      v11 = a5;
      v18 = a1 + 48LL * a3;
      v25 = *(_DWORD *)(v18 + 28);
      v26 = a5 & v25;
      *(_DWORD *)(v18 + 28) = v26;
      if ( v25 != (_DWORD)v26 )
      {
        AuthzBasepSetAppContainerAccessReasons(v26, a2, a4, *(_QWORD *)(v18 + 40));
        goto LABEL_10;
      }
LABEL_9:
      v6 = 1;
LABEL_10:
      if ( v9 == 1 )
        return;
      if ( !v6 )
        AuthzBasepUpdateParentTypeList(a1, v9, v7, a4, a6);
      for ( i = (unsigned int)(v7 + 1); ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= v9 )
          return;
        v30 = a1 + 48 * i;
        if ( *(_WORD *)v30 <= *(_WORD *)v18 )
          return;
        if ( !a6 )
          break;
        if ( a6 == 1 )
        {
          v37 = ~*(_DWORD *)(v30 + 32);
          v38 = v37 & ~*(_DWORD *)(v30 + 28);
          a2 = *(_DWORD *)(v30 + 28) | v11 & v37;
          *(_DWORD *)(v30 + 28) = a2;
          v35 = v11 & v38;
          if ( v35 )
            goto LABEL_41;
        }
        else
        {
          if ( a6 == 2 )
          {
            v33 = ~*(_DWORD *)(v30 + 28);
            v34 = v33 & ~*(_DWORD *)(v30 + 32);
            a2 = *(_DWORD *)(v30 + 32) | v11 & v33;
            *(_DWORD *)(v30 + 32) = a2;
            v35 = v11 & v34;
            if ( !v35 )
              continue;
            v36 = 0x20000;
            goto LABEL_42;
          }
          v31 = (*(_DWORD *)(v30 + 28) & v11) == 0;
          v32 = *(_DWORD *)(v30 + 28) & v11;
          *(_DWORD *)(v30 + 28) = v32;
          if ( !v31 )
            AuthzBasepSetAppContainerAccessReasons(v32, a2, a4, *(_QWORD *)(v30 + 40));
        }
LABEL_43:
        ;
      }
      a2 = *(unsigned int *)(v30 + 24);
      *(_DWORD *)(v30 + 24) = a2 & ~v11;
      v35 = v11 & a2;
      if ( (v11 & (unsigned int)a2) == 0 )
        goto LABEL_43;
LABEL_41:
      v36 = 0x10000;
LABEL_42:
      AuthzBasepSetAccessReasons(v35, v36, a4, *(_QWORD *)(v30 + 40), 0);
      goto LABEL_43;
  }
}
