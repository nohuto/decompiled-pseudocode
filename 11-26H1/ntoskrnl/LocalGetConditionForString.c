/*
 * XREFs of LocalGetConditionForString @ 0x140A70494
 * Callers:
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 * Callees:
 *     iswspace @ 0x1405391A0 (iswspace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IsArrayType @ 0x14081EE5C (IsArrayType.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     GetOperatorIndexByToken @ 0x140A701B0 (GetOperatorIndexByToken.c)
 *     FreeOperandValue @ 0x140A7045C (FreeOperandValue.c)
 *     AppendCondition @ 0x140A70CB4 (AppendCondition.c)
 *     GetConditionToken @ 0x140A70D68 (GetConditionToken.c)
 *     GetOperandValue @ 0x140A70FD0 (GetOperandValue.c)
 *     IsValueSizeFixed @ 0x140A7113C (IsValueSizeFixed.c)
 */

__int64 __fastcall LocalGetConditionForString(wint_t *a1, __int64 a2, const void **a3, unsigned int *a4)
{
  wint_t *v4; // r12
  void **v6; // r15
  int v7; // esi
  unsigned int appended; // ebx
  unsigned int v9; // edi
  int v10; // r13d
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  _DWORD *v16; // rax
  char ConditionToken; // al
  int v18; // edx
  __int64 j; // r8
  char v20; // r12
  wint_t *v21; // r12
  __int64 v22; // rcx
  _QWORD *v23; // r9
  __int64 v24; // r15
  int v25; // eax
  wchar_t **v26; // r10
  __int64 v27; // r8
  char v28; // r11
  char v29; // r10
  __int64 i; // r8
  int v31; // r9d
  int v32; // eax
  __int64 v33; // r8
  char v34; // r12
  unsigned int v35; // eax
  char v36; // r10
  unsigned int v37; // ebx
  __int64 v38; // rdi
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // rax
  char v42; // cl
  __int64 v43; // rax
  __int64 v44; // rax
  int OperatorIndexByToken; // eax
  int v46; // eax
  unsigned int v47; // r8d
  char v48; // r10
  int v49; // r9d
  unsigned int v50; // ebx
  const void **v51; // rax
  _BYTE *v52; // rax
  PVOID v53; // rax
  PVOID v54; // rdi
  int v55; // eax
  PVOID v56; // rdi
  char v57; // cl
  char v58; // cl
  char v59; // al
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  char v62; // [rsp+50h] [rbp-B0h]
  _BYTE v63[7]; // [rsp+51h] [rbp-AFh] BYREF
  const void **v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD *v67; // [rsp+68h] [rbp-98h] BYREF
  wint_t *v68; // [rsp+70h] [rbp-90h]
  _QWORD v69[33]; // [rsp+78h] [rbp-88h]

  v4 = a1;
  v68 = a1;
  v64 = a3;
  v69[0] = a2;
  v62 = 0;
  v6 = (void **)a3;
  v66 = 0;
  v67 = 0LL;
  v7 = 0;
  *(_WORD *)v63 = 0;
  appended = 0;
  v9 = 0;
  v10 = 0;
  if ( a1 && a2 && a3 && a4 )
  {
    *a3 = 0LL;
    v11 = -1LL;
    *a4 = 0;
    do
      ++v11;
    while ( a1[v11] );
    if ( (unsigned int)v11 < 3 || *a1 != 40 )
    {
      appended = 1336;
      goto LABEL_142;
    }
    v12 = v11 + 1;
    v13 = -1;
    if ( v12 )
      v13 = v12;
    *a4 = v13;
    if ( !v12 )
    {
LABEL_14:
      appended = 534;
      goto LABEL_15;
    }
    v14 = 2LL * v13;
    if ( v14 > 0xFFFFFFFF )
    {
      *a4 = -1;
      goto LABEL_14;
    }
    *a4 = v14;
    v16 = SddlpAlloc((unsigned int)v14);
    *v6 = v16;
    if ( !v16 )
    {
LABEL_111:
      appended = 8;
      goto LABEL_15;
    }
    *v16 = 2020897377;
    *(_DWORD *)&v63[3] = 4;
    while ( 1 )
    {
      if ( !*v4 )
      {
LABEL_79:
        v38 = v7;
        while ( v38 )
        {
          v59 = *((_BYTE *)v69 + v38-- + 7);
          v63[0] = v59;
          if ( v59 == -2 )
          {
            appended = 1336;
            break;
          }
          LODWORD(Size) = 1;
          appended = AppendCondition((int)v6, (int)a4, (int)&v63[3], (int)v63, Size);
          if ( appended )
            goto LABEL_15;
        }
        *a4 = *(_DWORD *)&v63[3];
        *(_QWORD *)v69[0] = v4;
LABEL_15:
        if ( v67 )
          FreeOperandValue(v67);
        if ( *a4 != 4 && !appended )
          return appended;
        v6 = (void **)v64;
LABEL_142:
        if ( *v6 )
        {
          SddlpFree(*v6);
          *v6 = 0LL;
          *a4 = 0;
        }
        return appended;
      }
      if ( !iswspace(*v4) )
        break;
      ++v4;
LABEL_42:
      v68 = v4;
    }
    if ( v7 == 255 )
    {
      appended = 1001;
      goto LABEL_15;
    }
    ConditionToken = GetConditionToken(v4, &v66);
    v20 = ConditionToken;
    if ( ConditionToken )
    {
      if ( ConditionToken == -2 )
      {
        if ( (v9 & 0xFFFFFFFC) != 0 || v9 == 2 )
          goto LABEL_94;
        v41 = v7;
        v9 = 1;
        ++v7;
        *((_BYTE *)&v69[1] + v41) = -2;
      }
      else
      {
        v24 = v7;
        if ( ConditionToken == -1 )
        {
          if ( !v7 || v9 == 3 || v9 == 1 )
            goto LABEL_94;
          v34 = *((_BYTE *)v69 + v7 + 7);
          v35 = *(_DWORD *)&v63[3];
          v36 = v62;
          v63[0] = v34 == -2;
          while ( v24 )
          {
            v36 = *((_BYTE *)v69 + v24-- + 7);
            --v7;
            v62 = v36;
            if ( v36 == -2 )
              goto LABEL_77;
            v37 = v35 + 1;
            if ( v35 + 1 < v35 )
              goto LABEL_14;
            if ( v37 > *a4 )
            {
              v53 = SddlpAlloc(v37);
              v54 = v53;
              if ( !v53 )
                goto LABEL_111;
              memmove(v53, *v64, *a4);
              SddlpFree((void *)*v64);
              v36 = v62;
              *v64 = v54;
              v35 = *(_DWORD *)&v63[3];
              *a4 = v37;
            }
            *(_DWORD *)&v63[3] = v37;
            *((_BYTE *)*v64 + v35) = v36;
            v35 = v37;
            appended = 0;
          }
          if ( v36 != -2 )
            goto LABEL_94;
LABEL_77:
          if ( !v7 )
          {
            LODWORD(v6) = (_DWORD)v64;
            v4 = &v68[v66];
            goto LABEL_79;
          }
          OperatorIndexByToken = GetOperatorIndexByToken(*((_BYTE *)v69 + v7 + 7));
          if ( OperatorIndexByToken != -1
            && v34 != -2
            && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 19)
            && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8) != 0xA2 )
          {
            goto LABEL_94;
          }
          v9 = 2;
        }
        else
        {
          v25 = GetOperatorIndexByToken(ConditionToken);
          v26 = &Operators;
          v27 = 3LL * v25;
          v65 = *((_DWORD *)&Operators + 6 * v25 + 3);
          if ( v9 != 4 && *((_BYTE *)&Operators + 24 * v25 + 18) && (v9 != 2 || !v63[0]) )
            goto LABEL_94;
          v28 = (char)(&Operators)[3 * v25 + 1];
          if ( v28 )
          {
            if ( v9 > 1 )
            {
              if ( v9 != 3 )
                goto LABEL_94;
              v55 = GetOperatorIndexByToken(*((_BYTE *)v69 + v7 + 7));
              if ( BYTE3(v26[3 * v55 + 2]) )
                goto LABEL_94;
            }
          }
          v29 = BYTE3(v26[v27 + 2]);
          if ( !v29 && (v9 & 0xFFFFFFFC) == 0 && v9 != 2 )
            goto LABEL_94;
          if ( (unsigned int)(v10 - 4) <= 1 )
            goto LABEL_94;
          if ( v7 && v29 )
          {
            for ( i = v7 - 1; i >= 0; i = v39 - 1 )
            {
              if ( (unsigned int)GetOperatorIndexByToken(*((_BYTE *)&v69[1] + i)) != -1 )
              {
                v44 = 3LL * (int)GetOperatorIndexByToken(*((_BYTE *)&v69[1] + v40));
                if ( *((_BYTE *)&Operators + 8 * v44 + 19) && *((_BYTE *)&Operators + 8 * v44 + 8) != 0xA2 )
                  goto LABEL_94;
                break;
              }
            }
          }
          if ( v28 || (v10 = 5, !v29) )
            v10 = 0;
          while ( v24 )
          {
            v42 = *((_BYTE *)v69 + v24 + 7);
            if ( v42 == -2
              || (v62 = *((_BYTE *)v69 + v24 + 7),
                  v46 = GetOperatorIndexByToken(v42),
                  v49 > *((_DWORD *)&Operators + 6 * v46 + 3)) )
            {
              v43 = v7++;
              *((_BYTE *)&v69[1] + v43) = v20;
              break;
            }
            --v7;
            v50 = v47 + 1;
            --v24;
            if ( v47 + 1 < v47 )
              goto LABEL_14;
            if ( v50 > *a4 )
            {
              v56 = SddlpAlloc(v50);
              if ( !v56 )
                goto LABEL_111;
              memmove(v56, *v64, *a4);
              SddlpFree((void *)*v64);
              v51 = v64;
              v47 = *(_DWORD *)&v63[3];
              v48 = v62;
              *v64 = v56;
              *a4 = v50;
            }
            else
            {
              v51 = v64;
            }
            v52 = *v51;
            *(_DWORD *)&v63[3] = v50;
            v52[v47] = v48;
            appended = 0;
          }
          v9 = 3;
        }
        LODWORD(v6) = (_DWORD)v64;
      }
      v21 = v68;
      goto LABEL_41;
    }
    if ( (v9 & 0xFFFFFFFC) != 0 || v10 == 3 || v9 == 2 )
      goto LABEL_94;
    if ( !v10 )
    {
      v10 = 5;
      if ( !v7 )
      {
        v9 = 4;
        v10 = 4;
        goto LABEL_31;
      }
      v31 = v7 - 1;
      for ( j = v7 - 1; j >= 0; j = v33 - 1 )
      {
        v62 = *((_BYTE *)&v69[1] + j);
        v32 = GetOperatorIndexByToken(v62);
        if ( v32 != -1 )
        {
          j = (__int64)&Operators;
          v18 = 3 * v32;
          v57 = *((_BYTE *)&Operators + 24 * v32 + 8);
          if ( (unsigned __int8)(v57 + 119) > 3u
            && (unsigned __int8)(v57 + 112) > 3u
            && BYTE1((&Operators)[3 * v32 + 1]) )
          {
            v10 = 4;
          }
          if ( v57 == -121 || v57 == -115 )
            v63[1] = 1;
          break;
        }
        --v31;
      }
      if ( v31 < 0 )
        v10 = 4;
    }
    v9 = v10;
LABEL_31:
    LOBYTE(j) = 0;
    v21 = v68;
    LOBYTE(v18) = v10 == 4;
    appended = GetOperandValue((_DWORD)v68, v18, j, (unsigned int)&v67, (__int64)&v66, 0, 0, 0, 0);
    if ( appended )
      goto LABEL_15;
    if ( v63[1] )
    {
      v63[1] = 0;
      v58 = *((_BYTE *)v67 + 1);
      if ( v58 == -7 || v58 == -5 || v58 == -4 )
      {
LABEL_94:
        appended = 1336;
        goto LABEL_15;
      }
    }
    LODWORD(Sizea) = 1;
    appended = AppendCondition((int)v6, (int)a4, (int)&v63[3], (int)v67 + 1, Sizea);
    if ( appended )
      goto LABEL_15;
    LOBYTE(v22) = *((_BYTE *)v67 + 1);
    if ( !(unsigned __int8)IsValueSizeFixed(v22) )
    {
      LODWORD(Size) = 4;
      appended = AppendCondition((int)v6, (int)a4, (int)&v63[3], (int)v23 + 4, Size);
      if ( appended )
        goto LABEL_15;
      v23 = v67;
    }
    if ( *((_DWORD *)v23 + 1) )
    {
      LODWORD(Size) = *((_DWORD *)v23 + 1);
      appended = AppendCondition((int)v6, (int)a4, (int)&v63[3], v23[1], Size);
      if ( appended )
        goto LABEL_15;
      v23 = v67;
    }
    FreeOperandValue(v23);
    v67 = 0LL;
    v10 = 3;
LABEL_41:
    v4 = &v21[v66];
    goto LABEL_42;
  }
  return 87LL;
}
