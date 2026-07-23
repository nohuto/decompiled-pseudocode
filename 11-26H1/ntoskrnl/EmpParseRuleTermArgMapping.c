/*
 * XREFs of EmpParseRuleTermArgMapping @ 0x140CBCCAC
 * Callers:
 *     EmpParseRuleTerm @ 0x140CBCB2C (EmpParseRuleTerm.c)
 * Callees:
 *     strtoul @ 0x140537CD8 (strtoul.c)
 */

bool __fastcall EmpParseRuleTermArgMapping(char *Str, __int64 a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r13d
  int v7; // edx
  char *v9; // rcx
  char v10; // r15
  char v11; // bl
  __int64 v12; // rbp
  int v13; // r12d
  unsigned int v14; // esi
  bool v16; // zf
  __int64 v17; // rdi
  unsigned int v18; // eax
  bool v19; // zf
  bool v20; // zf
  bool v21; // zf
  unsigned int v22; // eax
  bool v23; // zf
  __int64 v24; // rdi
  unsigned int v25; // eax
  char *EndPtr[11]; // [rsp+20h] [rbp-58h] BYREF
  int v27; // [rsp+80h] [rbp+8h]
  int v29; // [rsp+90h] [rbp+18h]
  int v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v5 = a2;
  v6 = a5 + a3 + a4;
  v7 = 0;
  v27 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  EndPtr[0] = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v16 = v11 == 0;
    if ( v11 )
      return v16;
    if ( v14 > 5 )
    {
      switch ( v14 )
      {
        case 6u:
          if ( *Str )
          {
            v23 = *Str == 40;
LABEL_53:
            if ( v23 )
            {
              v14 = 7;
              goto LABEL_13;
            }
            goto LABEL_23;
          }
          if ( (_DWORD)v12 == a3 && v13 == a4 && !a5 )
          {
LABEL_29:
            v10 = 1;
            goto LABEL_13;
          }
          break;
        case 7u:
          if ( *Str == 41 )
          {
            v14 = 9;
            goto LABEL_67;
          }
          v24 = (unsigned int)(v12 + v13 + v7);
          if ( (unsigned int)v24 >= v6 )
          {
LABEL_12:
            v11 = 1;
            v10 = 1;
            goto LABEL_13;
          }
          v25 = strtoul(Str, EndPtr, 10);
          v9 = EndPtr[0];
          a4 = v30;
          a3 = v29;
          *(_DWORD *)(a2 + 4 * v24) = v25;
          v7 = v27;
          if ( Str != v9 )
          {
            v7 = v27 + 1;
            v14 = 8;
            ++v27;
            goto LABEL_67;
          }
          break;
        case 8u:
          if ( *Str == 41 )
          {
            v14 = 9;
            goto LABEL_13;
          }
          v23 = *Str == 46;
          goto LABEL_53;
        default:
          if ( *Str || (_DWORD)v12 != a3 || v13 != a4 )
          {
LABEL_23:
            v11 = 1;
            goto LABEL_13;
          }
          v20 = v7 == a5;
LABEL_28:
          if ( v20 )
            goto LABEL_29;
          goto LABEL_23;
      }
    }
    else
    {
      switch ( v14 )
      {
        case 5u:
          if ( *Str == 41 )
          {
            v14 = 6;
            goto LABEL_13;
          }
          v19 = *Str == 46;
          goto LABEL_22;
        case 0u:
          v21 = *Str == 40;
          goto LABEL_32;
        case 1u:
          if ( *Str == 41 )
          {
            v14 = 3;
            goto LABEL_67;
          }
          if ( (unsigned int)v12 >= v6 )
            goto LABEL_12;
          v22 = strtoul(Str, EndPtr, 10);
          v9 = EndPtr[0];
          a4 = v30;
          a3 = v29;
          v7 = v27;
          *(_DWORD *)(v5 + 4 * v12) = v22;
          if ( Str != v9 )
          {
            v14 = 2;
            v12 = (unsigned int)(v12 + 1);
            goto LABEL_67;
          }
          break;
        case 2u:
          if ( *Str == 41 )
          {
            v14 = 3;
            goto LABEL_13;
          }
          v21 = *Str == 46;
LABEL_32:
          if ( v21 )
          {
            v14 = 1;
            goto LABEL_13;
          }
          goto LABEL_23;
        case 3u:
          if ( !*Str )
          {
            if ( (_DWORD)v12 != a3 || a4 )
              goto LABEL_23;
            v20 = a5 == 0;
            goto LABEL_28;
          }
          v19 = *Str == 40;
LABEL_22:
          if ( v19 )
          {
            v14 = 4;
            goto LABEL_13;
          }
          goto LABEL_23;
        default:
          if ( *Str == 41 )
          {
            v14 = 6;
            goto LABEL_67;
          }
          v17 = (unsigned int)(v13 + v12);
          if ( (unsigned int)v17 >= v6 )
            goto LABEL_12;
          v18 = strtoul(Str, EndPtr, 10);
          v9 = EndPtr[0];
          a4 = v30;
          a3 = v29;
          *(_DWORD *)(a2 + 4 * v17) = v18;
          v7 = v27;
          if ( Str != v9 )
          {
            v14 = 5;
            ++v13;
            goto LABEL_67;
          }
          break;
      }
    }
    v11 = 1;
LABEL_67:
    if ( v9 )
    {
      Str = v9;
      v9 = 0LL;
      EndPtr[0] = 0LL;
      goto LABEL_14;
    }
LABEL_13:
    ++Str;
LABEL_14:
    v5 = a2;
    if ( v10 )
      return v11 == 0;
  }
}
