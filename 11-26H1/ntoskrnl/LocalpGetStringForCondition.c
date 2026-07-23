/*
 * XREFs of LocalpGetStringForCondition @ 0x140A6FC58
 * Callers:
 *     LocalGetAceCondition @ 0x140A6E49C (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     GetOperatorIndexByToken @ 0x140A701B0 (GetOperatorIndexByToken.c)
 *     GetPrintableAttributeName @ 0x140A701D8 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x140A70DF8 (GetPrintableOperandValue.c)
 *     EncloseSubCondition @ 0x140A714B0 (EncloseSubCondition.c)
 *     ULongAddStringSize @ 0x140ADB118 (ULongAddStringSize.c)
 */

__int64 __fastcall LocalpGetStringForCondition(
        wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int v9; // r15d
  wchar_t *v10; // rsi
  __int64 v11; // r13
  unsigned int PrintableAttributeName; // ebx
  __int64 v13; // rdx
  wchar_t *v14; // rcx
  int v15; // r12d
  wchar_t *v16; // r14
  __int64 v17; // r8
  _BYTE *v18; // rsi
  int v19; // edi
  int OperatorIndexByToken; // eax
  unsigned int v21; // r8d
  __int64 v22; // r10
  unsigned __int64 v23; // r11
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned int v26; // r9d
  _WORD *v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  size_t v34; // rdi
  wchar_t *v35; // rsi
  wchar_t **v36; // r15
  __int64 v37; // rdi
  int v38; // edi
  int v39; // edi
  int v40; // edi
  int v41; // edi
  int v42; // edi
  int v43; // edi
  int v44; // edi
  _QWORD *v45; // rdi
  bool v46; // zf
  bool v47; // zf
  int v48; // eax
  size_t v49; // r15
  NTSTATUS v50; // eax
  char v51; // al
  __int64 v52; // rdi
  void *v53; // rcx
  int v54; // [rsp+40h] [rbp-C0h]
  wchar_t *v55; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v58; // [rsp+58h] [rbp-A8h]
  wchar_t *v59; // [rsp+60h] [rbp-A0h]
  __int64 v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h]
  _QWORD v63[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v64[256]; // [rsp+90h] [rbp-70h] BYREF

  v62 = a5;
  v9 = a2;
  v10 = a1;
  v61 = a6;
  v11 = 0LL;
  PrintableAttributeName = 0;
  v63[0] = a3;
  v58 = a2;
  v59 = a1;
  v60 = a7;
  v55 = 0LL;
  memset_0(v64, 0, sizeof(v64));
  v54 = 0;
  v15 = 0;
  v57 = 0;
  if ( !v10 || !a3 || !v9 )
    return 87LL;
  if ( v9 < 6 || *(_DWORD *)v10 != 2020897377 )
    return 805LL;
  LODWORD(v16) = 4;
  while ( 1 )
  {
    v56 = (unsigned int)v16;
    v17 = 1336LL;
    if ( (unsigned int)v16 >= v9 )
      break;
    if ( v11 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_31;
    }
    v18 = (char *)v10 + (unsigned int)v16;
    v19 = (unsigned __int8)*v18;
    if ( (unsigned __int8)v19 > 0x8Au )
    {
      if ( (unsigned __int8)v19 > 0xF8u )
      {
        if ( v19 != 249 && v19 != 250 && (unsigned int)(v19 - 251) > 1 )
          goto LABEL_67;
LABEL_56:
        LOBYTE(v17) = *v18;
        PrintableAttributeName = GetPrintableAttributeName(
                                   (_DWORD)v18,
                                   v9 - (unsigned int)v16,
                                   v17,
                                   (unsigned int)&v55,
                                   (__int64)&v57);
        if ( PrintableAttributeName )
        {
LABEL_92:
          v35 = v55;
          goto LABEL_119;
        }
        v64[v11] = v55;
LABEL_52:
        ++v15;
        v55 = 0LL;
        ++v11;
        v54 = v15;
        goto LABEL_38;
      }
      if ( (_BYTE)v19 == 0xF8 )
        goto LABEL_56;
      if ( (unsigned __int8)v19 > 0x91u )
      {
        v14 = (wchar_t *)(unsigned int)(v19 - 146);
        if ( v19 != 146 )
        {
          v14 = (wchar_t *)(unsigned int)(v19 - 147);
          if ( v19 != 147 )
          {
            v14 = (wchar_t *)(unsigned int)(v19 - 160);
            if ( v19 != 160 )
            {
              v14 = (wchar_t *)(unsigned int)(v19 - 161);
              if ( v19 != 161 )
              {
                v14 = (wchar_t *)(unsigned int)(v19 - 162);
                if ( (unsigned int)v14 > 1 )
                  goto LABEL_67;
              }
            }
          }
        }
        if ( (unsigned __int8)(v19 + 96) <= 1u )
        {
          if ( v11 < 2 )
            goto LABEL_67;
          PrintableAttributeName = EncloseSubCondition(&v64[v15 - 1], v13, 1336LL);
          if ( PrintableAttributeName )
            goto LABEL_31;
          v48 = v15 - 2;
        }
        else
        {
          if ( (_BYTE)v19 != 0xA2 )
            goto LABEL_17;
          if ( v11 < 1 )
            goto LABEL_67;
          v48 = v15 - 1;
        }
        PrintableAttributeName = EncloseSubCondition(&v64[v48], v13, v17);
        if ( PrintableAttributeName )
          goto LABEL_31;
        goto LABEL_17;
      }
      if ( (_BYTE)v19 != 0x91 )
      {
        v47 = v19 == 139;
        v14 = (wchar_t *)(unsigned int)(v19 - 139);
LABEL_97:
        if ( !v47 )
        {
          v14 = (wchar_t *)(unsigned int)((_DWORD)v14 - 1);
          if ( (_DWORD)v14 )
          {
            v14 = (wchar_t *)(unsigned int)((_DWORD)v14 - 1);
            if ( (_DWORD)v14 )
            {
              v14 = (wchar_t *)(unsigned int)((_DWORD)v14 - 1);
              if ( (_DWORD)v14 )
              {
                v14 = (wchar_t *)(unsigned int)((_DWORD)v14 - 1);
                if ( (unsigned int)v14 > 1 )
                  goto LABEL_67;
              }
            }
          }
        }
      }
LABEL_17:
      LOBYTE(v14) = *v18;
      OperatorIndexByToken = GetOperatorIndexByToken(v14, v13, 1336LL);
      if ( OperatorIndexByToken < 0 )
      {
        PrintableAttributeName = v21;
        goto LABEL_31;
      }
      v24 = 3LL * OperatorIndexByToken;
      v25 = -1LL;
      do
        ++v25;
      while ( *(_WORD *)(*(_QWORD *)(v22 + 8 * v24) + 2 * v25) );
      v26 = 2 * v25;
      LODWORD(v55) = 2 * v25;
      if ( *(_BYTE *)(v22 + 8 * v24 + 16) )
      {
        if ( !v11 )
        {
LABEL_90:
          PrintableAttributeName = v21;
          goto LABEL_30;
        }
        v16 = (wchar_t *)v63[v11 + 1];
        if ( (int)ULongAddStringSize(v26, v16, &v55) < 0 )
          goto LABEL_29;
        v49 = (unsigned int)((_DWORD)v55 + 8);
        v35 = (wchar_t *)SddlpAlloc(v49);
        if ( !v35 )
        {
LABEL_68:
          PrintableAttributeName = 8;
          goto LABEL_69;
        }
        if ( (_BYTE)v19 == 0xA2 )
        {
          v50 = RtlStringCchPrintfW(v35, v49 >> 1, L"(%ls%ls)", (&Operators)[v24], v16);
        }
        else
        {
          v51 = *((_BYTE *)&Operators + 8 * v24 + 8);
          if ( (v51 == -121 || v51 == -115)
            && (!wcsnicmp(v16, L"@USER.", 6uLL) || !wcsnicmp(v16, L"@DEVICE.", 8uLL) || !wcsnicmp(v16, L"@TOKEN.", 7uLL)) )
          {
            v15 = v54;
            PrintableAttributeName = 1336;
            goto LABEL_119;
          }
          v50 = RtlStringCchPrintfW(v35, v49 >> 1, L"(%ls %ls)", (&Operators)[v24], v16);
        }
        if ( v50 < 0 )
          goto LABEL_89;
        v15 = v54;
        v36 = (wchar_t **)&v63[v11 + 1];
        v37 = 0LL;
      }
      else
      {
        if ( v11 < 2 )
          goto LABEL_90;
        v27 = (_WORD *)v63[v11 + 1];
        v28 = -1LL;
        do
          ++v28;
        while ( v27[v28] );
        v29 = 2LL * (unsigned int)v28;
        if ( v29 > v23 )
          goto LABEL_29;
        if ( (unsigned int)v29 + v26 < v26 )
          goto LABEL_29;
        v30 = v29 + v26;
        v16 = (wchar_t *)v63[v11];
        v31 = -1LL;
        do
          ++v31;
        while ( v16[v31] );
        v32 = 2LL * (unsigned int)v31;
        if ( v32 > v23 || (unsigned int)v32 + v30 < v30 )
        {
LABEL_29:
          PrintableAttributeName = 534;
LABEL_30:
          v15 = v54;
          goto LABEL_31;
        }
        v34 = (unsigned int)v32 + v30 + 10;
        v35 = (wchar_t *)SddlpAlloc(v34);
        if ( !v35 )
          goto LABEL_68;
        if ( RtlStringCchPrintfW(v35, v34 >> 1, L"(%ls %ls %ls)", v16, (&Operators)[v24], v27) < 0 )
        {
LABEL_89:
          PrintableAttributeName = 50;
LABEL_69:
          v15 = v54;
LABEL_119:
          if ( v35 )
            SddlpFree(v35);
LABEL_31:
          if ( !v15 )
            return PrintableAttributeName;
          if ( !PrintableAttributeName )
            PrintableAttributeName = 1336;
          v56 = PrintableAttributeName;
          goto LABEL_121;
        }
        SddlpFree(v27);
        v36 = (wchar_t **)&v63[v11];
        v37 = -1LL;
        v15 = v54 - 1;
      }
      v54 = v15;
      SddlpFree(v16);
      LODWORD(v16) = v56;
      *v36 = v35;
      v11 += v37;
      v9 = v58;
      v55 = 0LL;
      v57 = 1;
      goto LABEL_38;
    }
    if ( (_BYTE)v19 == 0x8A )
      goto LABEL_17;
    if ( (unsigned __int8)v19 > 0x80u )
    {
      v14 = (wchar_t *)(unsigned int)(v19 - 129);
      if ( v19 != 129 )
      {
        v14 = (wchar_t *)(unsigned int)(v19 - 130);
        if ( v19 != 130 )
        {
          v14 = (wchar_t *)(unsigned int)(v19 - 131);
          if ( v19 != 131 )
          {
            v47 = v19 == 132;
            v14 = (wchar_t *)(unsigned int)(v19 - 132);
            goto LABEL_97;
          }
        }
      }
      goto LABEL_17;
    }
    if ( (_BYTE)v19 == 0x80 )
      goto LABEL_17;
    if ( *v18 )
    {
      v38 = v19 - 1;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v41 )
            {
              v42 = v41 - 12;
              if ( v42 )
              {
                v43 = v42 - 8;
                if ( v43 )
                {
                  v44 = v43 - 56;
                  if ( v44 )
                  {
                    if ( v44 != 1 )
                      goto LABEL_67;
                  }
                }
              }
            }
          }
        }
      }
      PrintableAttributeName = GetPrintableOperandValue(
                                 (_DWORD)v18,
                                 v9 - (unsigned int)v16,
                                 (unsigned int)&v55,
                                 (unsigned int)&v57,
                                 v62,
                                 v61,
                                 v60,
                                 a8);
      if ( PrintableAttributeName )
        goto LABEL_92;
      v14 = v55;
      v64[v11] = v55;
      goto LABEL_52;
    }
    v14 = v59;
    while ( 1 )
    {
      v16 = (wchar_t *)(unsigned int)((_DWORD)v16 + 1);
      v46 = (_DWORD)v16 == v9;
      if ( (unsigned int)v16 >= v9 )
        break;
      if ( *((_BYTE *)v59 + (_QWORD)v16) )
      {
        v46 = (_DWORD)v16 == v9;
        break;
      }
    }
    if ( !v46 )
    {
LABEL_67:
      PrintableAttributeName = 1336;
      goto LABEL_31;
    }
LABEL_38:
    LODWORD(v16) = v57 + (_DWORD)v16;
    v10 = v59;
  }
  if ( v15 != 1 )
    goto LABEL_31;
  v45 = (_QWORD *)v63[0];
  *(_QWORD *)v63[0] = v64[0];
  PrintableAttributeName = EncloseSubCondition(v45, v13, 1336LL);
  v56 = PrintableAttributeName;
  if ( !PrintableAttributeName )
    return PrintableAttributeName;
  *v45 = 0LL;
LABEL_121:
  v52 = v15;
  do
  {
    v53 = (void *)v63[v52-- + 1];
    SddlpFree(v53);
  }
  while ( v52 );
  return v56;
}
