/*
 * XREFs of SepParseElamCertResources @ 0x140B3C614
 * Callers:
 *     SeRegisterElamCertResources @ 0x1408156C0 (SeRegisterElamCertResources.c)
 * Callees:
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SepParseElamCertResources(unsigned __int16 *a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r12
  unsigned int v4; // eax
  unsigned int v5; // edx
  _BYTE *v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _WORD *v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  _BYTE *v12; // r13
  wchar_t *v13; // r14
  unsigned int v14; // r15d
  bool v15; // r9
  char *v16; // r8
  char v17; // dl
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  bool v20; // zf
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  char v24; // dl
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rcx
  _WORD *v33; // rax
  unsigned __int64 v34; // rdi
  wchar_t *v35; // rbx
  unsigned int v36; // ebp
  wchar_t *v37; // rax
  unsigned int i; // r8d
  __int16 v39; // ax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int16 v42; // r8
  __int64 v43; // rcx
  const wchar_t *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // [rsp+40h] [rbp-238h]
  unsigned int v48; // [rsp+44h] [rbp-234h]
  _WORD v49[28]; // [rsp+48h] [rbp-230h]
  _BYTE v50[448]; // [rsp+80h] [rbp-1F8h] BYREF

  v2 = 0;
  if ( (unsigned __int64)(a2 - 2) <= 0xFFFD )
  {
    v3 = (unsigned __int64)a1 + a2;
    v4 = 0;
    v5 = *a1;
    v6 = a1 + 1;
    v48 = v5;
    while ( 1 )
    {
      v47 = v4;
      if ( v4 >= v5 )
        return (unsigned int)v2;
      if ( (unsigned __int64)(v6 + 2) > v3 )
        return 3221225485LL;
      v7 = (v3 - (unsigned __int64)v6) >> 1;
      if ( !v6 || v7 > 0x7FFFFFFF )
        return 3221225485LL;
      v8 = (v3 - (unsigned __int64)v6) >> 1;
      v9 = v6;
      if ( v7 )
      {
        do
        {
          if ( !*v9 )
            break;
          ++v9;
          --v8;
        }
        while ( v8 );
      }
      result = v8 == 0 ? 0xC000000D : 0;
      if ( v8 )
        v11 = v7 - v8;
      else
        v11 = 0LL;
      if ( !v8 )
        return result;
      v12 = &v6[2 * v11];
      v13 = (wchar_t *)(v12 + 4);
      if ( (unsigned __int64)(v12 + 4) >= v3 )
        return 3221225485LL;
      v14 = 0;
      v15 = 1;
      while ( *(_WORD *)v6 )
      {
        if ( v14 >= 0x40 )
          return 3221225485LL;
        v16 = &v50[v14];
        if ( v15 )
        {
          *v16 = 0;
          v17 = 0;
        }
        else
        {
          *v16 *= 16;
          v17 = *v16;
        }
        v18 = *(unsigned __int16 *)v6;
        if ( v18 > 0x41 )
        {
          if ( v18 > 0x61 )
          {
            v28 = v18 - 98;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                v30 = v29 - 1;
                if ( v30 )
                {
                  if ( v30 - 1 > 1 )
                    return 3221225485LL;
                }
              }
            }
          }
          else if ( v18 != 97 )
          {
            v25 = v18 - 66;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 - 1 > 1 )
                    return 3221225485LL;
                }
              }
            }
LABEL_41:
            v24 = v17 - 55;
            goto LABEL_47;
          }
          v24 = v17 - 87;
          goto LABEL_47;
        }
        if ( v18 == 65 )
          goto LABEL_41;
        if ( v18 > 0x34 )
        {
          v22 = v18 - 53;
          if ( v22 )
          {
            v21 = v22 - 1;
            v20 = v21 == 0;
LABEL_31:
            if ( !v20 )
            {
              v23 = v21 - 1;
              if ( v23 )
              {
                if ( v23 - 1 > 1 )
                  return 3221225485LL;
              }
            }
          }
LABEL_34:
          v24 = v17 - 48;
LABEL_47:
          *v16 = *v6 + v24;
          if ( !v15 )
            ++v14;
          goto LABEL_49;
        }
        if ( v18 == 52 )
          goto LABEL_34;
        v19 = v18 - 32;
        if ( v19 )
        {
          v21 = v19 - 16;
          v20 = v21 == 0;
          goto LABEL_31;
        }
        if ( !v15 )
          return 3221225485LL;
LABEL_49:
        if ( *(_WORD *)v6 != 32 )
          v15 = !v15;
        v6 += 2;
      }
      if ( !v15
        || *((unsigned __int16 *)v12 + 1) != 32772
        && *((unsigned __int16 *)v12 + 1) != 32780
        && (unsigned int)*((unsigned __int16 *)v12 + 1) - 32781 > 1 )
      {
        return 3221225485LL;
      }
      v31 = (v3 - (unsigned __int64)v13) >> 1;
      if ( v12 == (_BYTE *)-4LL || v31 > 0x7FFFFFFF )
        return 3221225485LL;
      v32 = (v3 - (unsigned __int64)v13) >> 1;
      v33 = v12 + 4;
      if ( v31 )
      {
        do
        {
          if ( !*v33 )
            break;
          ++v33;
          --v32;
        }
        while ( v32 );
      }
      result = v32 == 0 ? 0xC000000D : 0;
      if ( v32 )
        v34 = v31 - v32;
      else
        v34 = 0LL;
      if ( !v32 )
        return result;
      v35 = &v13[v34];
      v36 = 0;
      v6 = v35 + 1;
      if ( v34 )
      {
        v37 = wcschr((const wchar_t *)v12 + 2, 0x3Bu);
        if ( v37 )
          v35 = v37;
        while ( v35 )
        {
          if ( (unsigned __int64)(v35 - v13) >= 0x40 )
            return 3221225485LL;
          for ( i = 0; v13 != v35; *(_WORD *)&v50[128 * (unsigned __int64)v36 + 64 + 2 * v40] = v39 )
          {
            v39 = *v13++;
            v40 = i++;
          }
          v41 = i;
          v42 = 2 * i;
          *(_WORD *)&v50[128 * (unsigned __int64)v36 + 64 + 2 * v41] = 0;
          v43 = 2LL * v36;
          v49[4 * v43] = v42;
          v49[4 * v43 + 1] = v42 + 2;
          *(_QWORD *)&v49[4 * v43 + 4] = &v50[128 * (unsigned __int64)v36 + 64];
          if ( !*v35 || (v44 = v35 + 1, !*v44) )
          {
            ++v36;
            break;
          }
          v13 = (wchar_t *)v44;
          v35 = wcschr(v44, 0x3Bu);
          if ( !v35 )
          {
            v45 = -1LL;
            do
              ++v45;
            while ( v13[v45] );
            v35 = &v13[v45];
          }
          if ( ++v36 >= 3 )
            break;
        }
      }
      if ( !SepRmCapTableLock.SchedulerAssist )
        return (unsigned int)-1073741637;
      v46 = v34 != 0 ? v36 : 0;
      LOBYTE(v46) = 7;
      v2 = guard_dispatch_icall_no_overrides(v46, (__int64)v50);
      if ( v2 < 0 )
        return (unsigned int)v2;
      v5 = v48;
      v4 = v47 + 1;
    }
  }
  return 3221225485LL;
}
