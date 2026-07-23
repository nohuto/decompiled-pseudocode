/*
 * XREFs of GetPrintableOperandValue @ 0x140A70DF8
 * Callers:
 *     LocalpGetStringForCondition @ 0x140A6FC58 (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x140A70DF8 (GetPrintableOperandValue.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SddlpReAlloc @ 0x14081E8D4 (SddlpReAlloc.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     LocalGetStringForSid @ 0x140A6F670 (LocalGetStringForSid.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     GetPrintableOperandValue @ 0x140A70DF8 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x140ADB118 (ULongAddStringSize.c)
 */

__int64 __fastcall GetPrintableOperandValue(
        unsigned __int8 *a1,
        int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int PrintableOperandValue; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // r13d
  _WORD *v19; // rax
  unsigned __int64 v20; // rbx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // r13
  unsigned __int8 v25; // r12
  unsigned __int8 v26; // bl
  _WORD *v27; // rax
  _WORD *v28; // r11
  unsigned int v29; // r12d
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbx
  wchar_t *v35; // rax
  unsigned int v36; // r13d
  _WORD *v37; // rax
  int v38; // r9d
  unsigned int v39; // r8d
  unsigned int v40; // eax
  unsigned __int8 *v41; // rcx
  unsigned int v42; // ecx
  _WORD *v43; // r8
  __int64 v44; // rax
  wchar_t *v45; // rax
  unsigned __int64 v46; // rcx
  unsigned int v47; // r12d
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rbx
  _WORD *v51; // rax
  unsigned int v52; // r11d
  __int64 v53; // r13
  int v54; // r9d
  __int64 v55; // rax
  unsigned __int64 v56; // r8
  const wchar_t *v57; // r8
  wchar_t *v58; // r11
  __int64 v59; // r9
  int v60; // [rsp+20h] [rbp-D1h]
  wchar_t *v61; // [rsp+40h] [rbp-B1h] BYREF
  unsigned int v62; // [rsp+48h] [rbp-A9h] BYREF
  unsigned int v63; // [rsp+4Ch] [rbp-A5h]
  int v64; // [rsp+50h] [rbp-A1h]
  unsigned int v65; // [rsp+54h] [rbp-9Dh]
  __int64 v66; // [rsp+58h] [rbp-99h]
  __int64 v67; // [rsp+60h] [rbp-91h]
  __int64 v68; // [rsp+68h] [rbp-89h]
  int v69[2]; // [rsp+70h] [rbp-81h]
  wchar_t pszDest[12]; // [rsp+78h] [rbp-79h] BYREF
  _BYTE Sid[80]; // [rsp+90h] [rbp-61h] BYREF

  v68 = a6;
  v67 = a7;
  *(_QWORD *)v69 = a5;
  PrintableOperandValue = 0;
  v61 = 0LL;
  v62 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v13 = *a1 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 12;
            if ( !v17 )
            {
              if ( (unsigned int)(a2 - 1) >= 4 )
              {
                v18 = *(_DWORD *)(a1 + 1);
                *a4 = 5;
                if ( a2 - 5 >= v18 )
                {
                  if ( v18 + 6 >= v18 )
                  {
                    v19 = SddlpAlloc(v18 + 6);
                    *(_QWORD *)a3 = v19;
                    if ( v19 )
                    {
                      *v19 = 34;
                      memmove((void *)(*(_QWORD *)a3 + 2LL), &a1[*a4], v18);
                      v20 = (unsigned __int64)v18 >> 1;
                      *(_WORD *)(*(_QWORD *)a3 + 2 * v20 + 2) = 34;
                      *(_WORD *)(*(_QWORD *)a3 + 2 * v20 + 4) = 0;
                      *a4 += v18;
                      goto LABEL_14;
                    }
                    goto LABEL_19;
                  }
                  return 534;
                }
              }
              return 1336;
            }
            v22 = v17 - 8;
            if ( !v22 )
            {
              if ( (unsigned int)(a2 - 1) < 4 )
                return 1336;
              v47 = *(_DWORD *)(a1 + 1);
              *a4 = 5;
              if ( a2 - 5 < v47 || !v47 )
                return 1336;
              v48 = 2LL * v47;
              if ( v48 > 0xFFFFFFFF )
                return 534;
              if ( (int)v48 + 2 < (unsigned int)v48 )
                return 534;
              v49 = 2LL * (unsigned int)(v48 + 2);
              if ( v49 > 0xFFFFFFFF )
                return 534;
              v50 = (unsigned int)v49;
              v51 = SddlpAlloc((unsigned int)v49);
              *(_QWORD *)a3 = v51;
              if ( v51 )
              {
                *v51 = 35;
                v52 = 0;
                v53 = 0LL;
                do
                {
                  v54 = 2 * v52;
                  v55 = v53 + (unsigned int)*a4;
                  ++v52;
                  ++v53;
                  v56 = a1[v55];
                  *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v54 + 1)) = a0123456789abcd_0[v56 >> 4];
                  *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v54 + 2)) = a0123456789abcd_0[v56 & 0xF];
                }
                while ( v52 < v47 );
                PrintableOperandValue = 0;
                *(_WORD *)(*(_QWORD *)a3 + 2 * (v50 >> 1) - 2) = 0;
                *a4 += v47;
                goto LABEL_14;
              }
              goto LABEL_19;
            }
            v23 = v22 - 56;
            if ( !v23 )
            {
              if ( (unsigned int)(a2 - 1) < 4 )
                return 1336;
              v36 = *(_DWORD *)(a1 + 1);
              *a4 = 5;
              if ( !v36 || a2 - 5 < v36 )
                return 1336;
              v66 = 6LL;
              v37 = SddlpAlloc(6uLL);
              *(_QWORD *)a3 = v37;
              if ( v37 )
              {
                *v37 = 123;
                v38 = *a4;
                v39 = 0;
                v63 = 0;
                v64 = v38;
                v40 = 6;
                while ( v36 > v39 )
                {
                  v41 = &a1[v39 + v38];
                  if ( *v41 == 80 )
                  {
                    PrintableOperandValue = 1336;
                    goto LABEL_14;
                  }
                  PrintableOperandValue = GetPrintableOperandValue(
                                            (_DWORD)v41,
                                            a2 - v39 - v38,
                                            (unsigned int)&v61,
                                            (_DWORD)a4,
                                            *(__int64 *)v69,
                                            v68,
                                            v67,
                                            a8);
                  if ( PrintableOperandValue )
                    goto LABEL_14;
                  v63 += *a4;
                  if ( (int)ULongAddStringSize((unsigned int)v66, v61, &v62) < 0 )
                    goto LABEL_39;
                  v42 = v62 + 4;
                  v65 = v62 + 4;
                  if ( v62 + 4 < v62 )
                    goto LABEL_39;
                  v43 = *(_WORD **)a3;
                  v44 = -1LL;
                  v62 += 4;
                  do
                    ++v44;
                  while ( v43[v44] );
                  v45 = (wchar_t *)SddlpReAlloc(2 * v44, v42, v43);
                  *(_QWORD *)a3 = v45;
                  if ( !v45 )
                    goto LABEL_19;
                  if ( RtlStringCchPrintfW(
                         &v45[((unsigned __int64)(unsigned int)v66 >> 1) - 2],
                         (unsigned __int64)(v65 - (unsigned int)v66 + 4) >> 1,
                         L"%ls, ",
                         v61) < 0 )
                    goto LABEL_38;
                  SddlpFree(v61);
                  v39 = v63;
                  v38 = v64;
                  v61 = 0LL;
                  v40 = v65;
                  v66 = v65;
                }
                v46 = (unsigned __int64)v40 >> 1;
                *(_WORD *)(*(_QWORD *)a3 + 2 * v46 - 8) = 125;
                *(_WORD *)(*(_QWORD *)a3 + 2 * v46 - 6) = 0;
                *a4 = v38 + v36;
                goto LABEL_14;
              }
              goto LABEL_19;
            }
            if ( v23 != 1 )
              return 1336;
            if ( (unsigned int)(a2 - 1) < 4 )
              return 1336;
            v29 = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( v29 > 0x44 || a2 - 5 < v29 )
              return 1336;
            memmove(Sid, a1 + 5, v29);
            PrintableOperandValue = LocalGetStringForSid(Sid, &v61, a5, v30, v60, a8);
            if ( !PrintableOperandValue )
            {
              *a4 += v29;
              v31 = -1LL;
              do
                ++v31;
              while ( v61[v31] );
              v32 = (unsigned int)(v31 + 6);
              if ( (unsigned int)v32 >= (unsigned int)v31 )
              {
                v33 = 2 * v32;
                if ( v33 <= 0xFFFFFFFF )
                {
                  v34 = (unsigned int)v33;
                  v35 = (wchar_t *)SddlpAlloc((unsigned int)v33);
                  *(_QWORD *)a3 = v35;
                  if ( v35 )
                  {
                    if ( RtlStringCchPrintfW(v35, v34 >> 1, L"SID(%ls)", v61) >= 0 )
                      goto LABEL_14;
                    goto LABEL_38;
                  }
LABEL_19:
                  PrintableOperandValue = 8;
                  goto LABEL_14;
                }
              }
LABEL_39:
              PrintableOperandValue = 534;
            }
LABEL_14:
            if ( v61 )
              SddlpFree(v61);
            return PrintableOperandValue;
          }
        }
      }
    }
    if ( (unsigned int)(a2 - 1) < 0xA )
      return 1336;
    v24 = *(_QWORD *)(a1 + 1);
    v25 = a1[9];
    v26 = a1[10];
    v27 = SddlpAlloc(0x40uLL);
    *(_QWORD *)a3 = v27;
    v28 = v27;
    if ( !v27 )
      goto LABEL_19;
    if ( v25 == 1 )
    {
      *v27 = 43;
    }
    else
    {
      if ( v25 != 2 )
        goto LABEL_70;
      *v27 = 45;
    }
    v28 = v27 + 1;
LABEL_70:
    if ( v26 == 1 )
    {
      *v28 = 48;
      v57 = L"%I64o";
    }
    else if ( v26 == 3 )
    {
      *(_DWORD *)v28 = 7864368;
      v57 = L"%I64x";
    }
    else
    {
      v57 = L"%I64u";
    }
    if ( RtlStringCchCopyW(pszDest, 8uLL, v57) < 0 )
      goto LABEL_38;
    if ( v24 || v26 != 1 )
    {
      v59 = -v24;
      if ( v25 != 2 )
        v59 = v24;
      if ( RtlStringCchPrintfW(v58, 32 - (((__int64)v58 - *(_QWORD *)a3) >> 1), pszDest, v59) < 0 )
      {
LABEL_38:
        PrintableOperandValue = 50;
        goto LABEL_14;
      }
    }
    *a4 += 10;
    goto LABEL_14;
  }
  return 87LL;
}
