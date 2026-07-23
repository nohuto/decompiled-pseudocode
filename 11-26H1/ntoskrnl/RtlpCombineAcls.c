/*
 * XREFs of RtlpCombineAcls @ 0x1408E9DA0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        _QWORD *a7,
        _DWORD *a8)
{
  unsigned int v8; // r15d
  char *v13; // r14
  unsigned int v14; // ebx
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  unsigned __int8 *v17; // rdx
  unsigned __int8 *v18; // r12
  unsigned int v19; // ebp
  char *Pool2; // rax
  char *v21; // rsi
  unsigned int v22; // ebx
  unsigned __int16 *v23; // rbp
  unsigned int v24; // r13d
  unsigned int v26; // ecx
  unsigned __int8 *v27; // rdx
  unsigned __int16 *v28; // rdi
  unsigned int j; // r12d
  unsigned __int16 *v30; // rdi
  unsigned __int16 *v31; // rdi
  unsigned int i; // r12d
  unsigned int v33; // ecx
  unsigned __int8 *v34; // rdx
  unsigned int v35; // ecx
  unsigned __int8 *v36; // rdx
  unsigned int v37; // ecx
  unsigned __int8 *v38; // rdx
  unsigned int v39; // edx
  unsigned __int8 *v40; // r9
  unsigned __int16 *v41; // rbp
  unsigned int v42; // r12d
  unsigned __int16 *v43; // rdi
  unsigned int v44; // ebp

  v8 = 0;
  v13 = 0LL;
  v14 = 2;
  if ( a1 || a2 || a3 || a4 || a5 || a6 )
  {
    v15 = 8;
    if ( a1 )
    {
      v39 = 0;
      v40 = a1 + 8;
      while ( v39 < *((unsigned __int16 *)a1 + 2) )
      {
        switch ( *v40 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            if ( v15 + *((unsigned __int16 *)v40 + 1) < v15 )
              goto LABEL_40;
            v15 += *((unsigned __int16 *)v40 + 1);
            if ( a8 )
              *a8 |= 8u;
            if ( *a1 > v14 )
              v14 = *a1;
            break;
          default:
            break;
        }
        ++v39;
        v40 += *((unsigned __int16 *)v40 + 1);
      }
    }
    if ( a2 )
    {
      v16 = 0;
      v17 = a2 + 8;
      while ( v16 < *((unsigned __int16 *)a2 + 2) )
      {
        if ( *v17 == 17 )
        {
          if ( v15 + *((unsigned __int16 *)v17 + 1) < v15 )
          {
LABEL_40:
            v22 = -1073741675;
            goto LABEL_36;
          }
          v15 += *((unsigned __int16 *)v17 + 1);
          if ( a8 )
            *a8 |= 0x10u;
          if ( *a2 > v14 )
            v14 = *a2;
        }
        ++v16;
        v17 += *((unsigned __int16 *)v17 + 1);
      }
    }
    v18 = a5;
    if ( a5 )
    {
      v26 = 0;
      v27 = a5 + 8;
      while ( v26 < *((unsigned __int16 *)a5 + 2) )
      {
        if ( *v27 == 20 )
        {
          if ( v15 + *((unsigned __int16 *)v27 + 1) < v15 )
            goto LABEL_37;
          v15 += *((unsigned __int16 *)v27 + 1);
          if ( a8 )
            *a8 |= 0x80u;
          if ( *a5 > v14 )
            v14 = *a5;
        }
        ++v26;
        v27 += *((unsigned __int16 *)v27 + 1);
      }
    }
    if ( a6 )
    {
      v35 = 0;
      v36 = a6 + 8;
      while ( v35 < *((unsigned __int16 *)a6 + 2) )
      {
        if ( *v36 == 21 )
        {
          if ( v15 + *((unsigned __int16 *)v36 + 1) < v15 )
            goto LABEL_37;
          v15 += *((unsigned __int16 *)v36 + 1);
          if ( a8 )
            *a8 |= 0x100u;
          if ( *a6 > v14 )
            v14 = *a6;
        }
        ++v35;
        v36 += *((unsigned __int16 *)v36 + 1);
      }
    }
    if ( a3 )
    {
      v37 = 0;
      v38 = a3 + 8;
      while ( v37 < *((unsigned __int16 *)a3 + 2) )
      {
        if ( *v38 == 18 )
        {
          if ( v15 + *((unsigned __int16 *)v38 + 1) < v15 )
            goto LABEL_37;
          v15 += *((unsigned __int16 *)v38 + 1);
          if ( a8 )
            *a8 |= 0x20u;
          if ( *a3 > v14 )
            v14 = *a3;
        }
        ++v37;
        v38 += *((unsigned __int16 *)v38 + 1);
      }
    }
    if ( a4 )
    {
      v33 = 0;
      v34 = a4 + 8;
      while ( v33 < *((unsigned __int16 *)a4 + 2) )
      {
        if ( *v34 == 19 )
        {
          if ( v15 + *((unsigned __int16 *)v34 + 1) < v15 )
            goto LABEL_37;
          v15 += *((unsigned __int16 *)v34 + 1);
          if ( a8 )
            *a8 |= 0x40u;
          if ( *a4 > v14 )
            v14 = *a4;
        }
        ++v33;
        v34 += *((unsigned __int16 *)v34 + 1);
      }
    }
    if ( v15 + 3 < v15 )
    {
LABEL_37:
      v22 = -1073741675;
    }
    else
    {
      v19 = (v15 + 3) & 0xFFFFFFFC;
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v13 = Pool2;
      if ( Pool2 )
      {
        if ( v19 < 8 )
        {
          v22 = -1073741789;
          ExFreePoolWithTag(Pool2, 0);
          v13 = 0LL;
        }
        else if ( v14 - 2 > 2 || v19 > 0xFFFC )
        {
          v22 = -1073741811;
          ExFreePoolWithTag(Pool2, 0);
          v13 = 0LL;
        }
        else
        {
          memset_0(Pool2, 0, v19);
          v21 = v13 + 8;
          *v13 = v14;
          v13[1] = 0;
          v22 = 0;
          *((_WORD *)v13 + 1) = v19;
          *((_DWORD *)v13 + 1) = 0;
          if ( v13 + 8 > &v13[(unsigned __int16)v19] )
            v21 = 0LL;
          if ( a1 )
          {
            v41 = (unsigned __int16 *)(a1 + 8);
            v42 = 0;
            if ( *((_WORD *)a1 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v41 == 16 )
                {
LABEL_88:
                  memmove(v21, v41, v41[1]);
                  ++*((_WORD *)v13 + 2);
                  v21 += v41[1];
                }
                else
                {
                  switch ( *(_BYTE *)v41 )
                  {
                    case 2:
                    case 3:
                    case 7:
                    case 8:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                      goto LABEL_88;
                    default:
                      break;
                  }
                }
                ++v42;
                v41 = (unsigned __int16 *)((char *)v41 + v41[1]);
              }
              while ( v42 < *((unsigned __int16 *)a1 + 2) );
              v22 = 0;
            }
            v18 = a5;
          }
          if ( a2 )
          {
            v23 = (unsigned __int16 *)(a2 + 8);
            v24 = 0;
            if ( *((_WORD *)a2 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v23 == 17 )
                {
                  memmove(v21, v23, v23[1]);
                  ++*((_WORD *)v13 + 2);
                  v21 += v23[1];
                }
                ++v24;
                v23 = (unsigned __int16 *)((char *)v23 + v23[1]);
              }
              while ( v24 < *((unsigned __int16 *)a2 + 2) );
              v18 = a5;
            }
          }
          if ( v18 )
          {
            v43 = (unsigned __int16 *)(v18 + 8);
            v44 = 0;
            if ( *((_WORD *)v18 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v43 == 20 )
                {
                  memmove(v21, v43, v43[1]);
                  ++*((_WORD *)v13 + 2);
                  v21 += v43[1];
                }
                ++v44;
                v43 = (unsigned __int16 *)((char *)v43 + v43[1]);
              }
              while ( v44 < *((unsigned __int16 *)a5 + 2) );
              v22 = 0;
            }
          }
          if ( a6 )
          {
            v31 = (unsigned __int16 *)(a6 + 8);
            for ( i = 0; i < *((unsigned __int16 *)a6 + 2); v31 = (unsigned __int16 *)((char *)v31 + v31[1]) )
            {
              if ( *(_BYTE *)v31 == 21 )
              {
                memmove(v21, v31, v31[1]);
                ++*((_WORD *)v13 + 2);
                v21 += v31[1];
              }
              ++i;
            }
          }
          if ( a3 )
          {
            v28 = (unsigned __int16 *)(a3 + 8);
            for ( j = 0; j < *((unsigned __int16 *)a3 + 2); v28 = (unsigned __int16 *)((char *)v28 + v28[1]) )
            {
              if ( *(_BYTE *)v28 == 18 )
              {
                memmove(v21, v28, v28[1]);
                ++*((_WORD *)v13 + 2);
                v21 += v28[1];
              }
              ++j;
            }
          }
          if ( a4 )
          {
            v30 = (unsigned __int16 *)(a4 + 8);
            if ( *((_WORD *)a4 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v30 == 19 )
                {
                  memmove(v21, v30, v30[1]);
                  ++*((_WORD *)v13 + 2);
                  v21 += v30[1];
                }
                ++v8;
                v30 = (unsigned __int16 *)((char *)v30 + v30[1]);
              }
              while ( v8 < *((unsigned __int16 *)a4 + 2) );
            }
          }
        }
      }
      else
      {
        v22 = -1073741801;
      }
    }
LABEL_36:
    *a7 = v13;
    return v22;
  }
  else
  {
    *a7 = 0LL;
    return 0LL;
  }
}
