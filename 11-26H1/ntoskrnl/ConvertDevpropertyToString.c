/*
 * XREFs of ConvertDevpropertyToString @ 0x1409F7094
 * Callers:
 *     ExpressionConvertToString @ 0x140B52CB8 (ExpressionConvertToString.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140446CE0 (RtlStringCbCopyExW.c)
 *     RtlStringCbPrintfExW @ 0x140459FE8 (RtlStringCbPrintfExW.c)
 *     ConvertDevpropcompkeyToString @ 0x1409F8B48 (ConvertDevpropcompkeyToString.c)
 */

__int64 __fastcall ConvertDevpropertyToString(__int64 a1, unsigned int a2, wchar_t *a3, unsigned int *a4)
{
  unsigned __int64 v4; // r14
  wchar_t *v5; // r13
  __int64 v6; // r15
  size_t v7; // rsi
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  const wchar_t *v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // r12d
  NTSTATUS v16; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int16 *v36; // rbx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  NTSTATUS v41; // eax
  bool v42; // zf
  double v43; // xmm0_8
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  const wchar_t *v49; // r8
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // [rsp+38h] [rbp-69h]
  __int64 v58; // [rsp+40h] [rbp-61h]
  __int64 v59; // [rsp+48h] [rbp-59h]
  __int64 v60; // [rsp+50h] [rbp-51h]
  __int64 v61; // [rsp+58h] [rbp-49h]
  __int64 v62; // [rsp+60h] [rbp-41h]
  __int64 v63; // [rsp+68h] [rbp-39h]
  __int64 v64; // [rsp+70h] [rbp-31h]
  __int64 v65; // [rsp+78h] [rbp-29h]
  __int64 v66; // [rsp+80h] [rbp-21h]
  __int64 v67; // [rsp+88h] [rbp-19h]
  size_t cbDest; // [rsp+98h] [rbp-9h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v70; // [rsp+A8h] [rbp+7h]
  unsigned __int64 v73; // [rsp+118h] [rbp+77h] BYREF
  unsigned int *v74; // [rsp+120h] [rbp+7Fh]

  v74 = a4;
  v4 = a2;
  v5 = a3;
  LODWORD(v73) = 0;
  v6 = a1;
  if ( a2 >= 2 )
    *a3 = 0;
  ppszDestEnd = a3;
  cbDest = a2;
  v7 = a2;
  v8 = ConvertDevpropcompkeyToString(a1, a3, a2, &v73);
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -1073741789 )
  {
    v8 = 0;
    v9 = (unsigned int)v73 - 2LL;
    if ( v4 >= v9 )
    {
      v7 = 2LL - (unsigned int)v73 + v4;
      cbDest = v7;
      v5 += v9 >> 1;
      ppszDestEnd = v5;
    }
    v10 = *(_DWORD *)(v6 + 32);
    if ( v10 > 0x1003 )
    {
      if ( v10 == 4109 )
      {
        v12 = L"GUID_ARRAY";
      }
      else
      {
        if ( v10 != 8210 )
          return (unsigned int)-1073741811;
        v12 = L"STRING_LIST";
      }
    }
    else if ( v10 == 4099 )
    {
      v12 = L"BINARY";
    }
    else if ( v10 == 13 )
    {
      v12 = L"GUID";
    }
    else if ( v10 > 0xD )
    {
      if ( v10 > 0x14 )
      {
        v32 = v10 - 21;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( v34 )
            {
              v35 = v34 - 1;
              if ( v35 )
              {
                if ( v35 != 1 )
                  return (unsigned int)-1073741811;
                v12 = L"STRING_INDIRECT";
              }
              else
              {
                v12 = L"NTSTATUS";
              }
            }
            else
            {
              v12 = L"ERROR";
            }
          }
          else
          {
            v12 = L"DEVPROPTYPE";
          }
        }
        else
        {
          v12 = L"DEVPROPKEY";
        }
      }
      else if ( v10 == 20 )
      {
        v12 = L"SECURITY_DESCRIPTOR_STRING";
      }
      else
      {
        v27 = v10 - 14;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                v31 = v30 - 1;
                if ( v31 )
                {
                  if ( v31 != 1 )
                    return (unsigned int)-1073741811;
                  v12 = L"SECURITY_DESCRIPTOR";
                }
                else
                {
                  v12 = L"STRING";
                }
              }
              else
              {
                v12 = L"BOOLEAN";
              }
            }
            else
            {
              v12 = L"FILETIME";
            }
          }
          else
          {
            v12 = L"DATE";
          }
        }
        else
        {
          v12 = L"CURRENCY";
        }
      }
    }
    else if ( v10 > 6 )
    {
      v22 = v10 - 7;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                if ( v26 != 1 )
                  return (unsigned int)-1073741811;
                v12 = L"DECIMAL";
              }
              else
              {
                v12 = L"DOUBLE";
              }
            }
            else
            {
              v12 = L"FLOAT";
            }
          }
          else
          {
            v12 = L"UINT64";
          }
        }
        else
        {
          v12 = L"INT64";
        }
      }
      else
      {
        v12 = L"UINT32";
      }
    }
    else
    {
      if ( v10 != 6 )
      {
        v11 = 0LL;
        if ( v10 )
        {
          v18 = v10 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  if ( v21 != 1 )
                    return (unsigned int)-1073741811;
                  v12 = L"UINT16";
                }
                else
                {
                  v12 = L"INT16";
                }
              }
              else
              {
                v12 = L"BYTE";
              }
            }
            else
            {
              v12 = L"SBYTE";
            }
          }
          else
          {
            v12 = L"NULL";
          }
        }
        else
        {
          v12 = L"EMPTY";
        }
LABEL_14:
        v13 = -1LL;
        v14 = -1LL;
        do
          ++v14;
        while ( v12[v14] );
        v15 = v73 + 2 * v14;
        if ( v15 <= (unsigned int)v4 )
        {
          v16 = RtlStringCbCopyExW(v5, v7, v12, &ppszDestEnd, &cbDest, 0x400u);
          v11 = 0LL;
          v8 = v16;
          if ( v16 < 0 )
            return v8;
          v5 = ppszDestEnd;
          v7 = cbDest;
        }
        if ( !*(_DWORD *)(v6 + 36) )
          goto LABEL_96;
        v36 = *(__int16 **)(v6 + 40);
        if ( !v36 )
          goto LABEL_96;
        v37 = *(_DWORD *)(v6 + 32);
        if ( v37 > 0x1003 )
        {
          if ( v37 == 4109 )
          {
LABEL_151:
            while ( 1 )
            {
              v56 = *(unsigned int *)(v6 + 36);
              v73 = v11;
              if ( v11 >= v56 )
                break;
              v15 += 80;
              v70 = *(_OWORD *)(*(_QWORD *)(v6 + 40) + v11);
              if ( v15 <= (unsigned int)v4 )
              {
                LODWORD(v67) = HIBYTE(*((_QWORD *)&v70 + 1));
                LODWORD(v66) = BYTE14(v70);
                LODWORD(v65) = BYTE13(v70);
                LODWORD(v64) = BYTE12(v70);
                LODWORD(v63) = BYTE11(v70);
                LODWORD(v62) = BYTE10(v70);
                LODWORD(v61) = BYTE9(v70);
                LODWORD(v60) = BYTE8(v70);
                LODWORD(v59) = WORD3(v70);
                LODWORD(v58) = WORD2(v70);
                LODWORD(v57) = v70;
                v8 = RtlStringCbPrintfExW(
                       v5,
                       cbDest,
                       &ppszDestEnd,
                       &cbDest,
                       0x400u,
                       L"({%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x})",
                       v57,
                       v58,
                       v59,
                       v60,
                       v61,
                       v62,
                       v63,
                       v64,
                       v65,
                       v66,
                       v67);
                if ( (v8 & 0x80000000) != 0 )
                  return v8;
                v5 = ppszDestEnd;
                v11 = v73;
                LODWORD(v4) = a2;
                v6 = a1;
              }
              v11 += 16LL;
            }
            goto LABEL_96;
          }
          if ( v37 == 8210 )
          {
            while ( *v36 )
            {
              v54 = -1LL;
              do
                ++v54;
              while ( v36[v54] );
              v15 += 2 * v54 + 4;
              if ( v15 <= (unsigned int)v4 )
              {
                v8 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"[%s]", v36);
                if ( (v8 & 0x80000000) != 0 )
                  return v8;
                v5 = ppszDestEnd;
              }
              v55 = -1LL;
              do
                ++v55;
              while ( v36[v55] );
              v7 = cbDest;
              v36 += v55 + 1;
            }
            goto LABEL_96;
          }
          goto LABEL_141;
        }
        if ( v37 == 4099 )
          goto LABEL_96;
        if ( v37 <= 0xD )
        {
          if ( v37 == 13 )
            goto LABEL_151;
          if ( v37 <= 6 )
          {
            if ( v37 != 6 )
            {
              if ( v37 )
              {
                v38 = v37 - 1;
                if ( v38 )
                {
                  v39 = v38 - 1;
                  if ( v39 )
                  {
                    v40 = v39 - 1;
                    if ( v40 )
                    {
                      if ( v40 - 1 <= 1 )
                      {
                        v15 += 16;
                        if ( v15 <= (unsigned int)v4 )
                        {
                          v41 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.4x)", *v36);
                          goto LABEL_95;
                        }
LABEL_96:
                        if ( v74 )
                          *v74 = v15;
                        if ( v15 > (unsigned int)v4 )
                          return (unsigned int)-1073741789;
                        return v8;
                      }
LABEL_141:
                      v8 = -1073741811;
                      goto LABEL_96;
                    }
                  }
                  v15 += 12;
                  if ( v15 > (unsigned int)v4 )
                    goto LABEL_96;
                  v41 = RtlStringCbPrintfExW(
                          v5,
                          v7,
                          &ppszDestEnd,
                          &cbDest,
                          0x400u,
                          L"(0x%.2x)",
                          *(unsigned __int8 *)v36);
LABEL_95:
                  v8 = v41;
                  if ( v41 < 0 )
                    return v8;
                  goto LABEL_96;
                }
              }
              return (unsigned int)-1073741811;
            }
LABEL_137:
            v15 += 24;
            if ( v15 > (unsigned int)v4 )
              goto LABEL_96;
            v41 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.8x)", *(_DWORD *)v36);
            goto LABEL_95;
          }
          switch ( v37 )
          {
            case 7u:
              goto LABEL_137;
            case 8u:
            case 9u:
              v15 += 40;
              if ( v15 > (unsigned int)v4 )
                goto LABEL_96;
              v41 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.16I64x)", *(_QWORD *)v36);
              goto LABEL_95;
            case 0xAu:
            case 0xBu:
              v15 += 32;
              if ( v15 > (unsigned int)v4 )
                goto LABEL_96;
              if ( v37 == 10 )
                v43 = *(float *)v36;
              else
                v43 = *(double *)v36;
              v41 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(%.6e)", v43);
              goto LABEL_95;
          }
          v42 = v37 == 12;
LABEL_122:
          if ( v42 )
            goto LABEL_96;
          goto LABEL_141;
        }
        if ( v37 > 0x14 )
        {
          v50 = v37 - 21;
          if ( !v50 )
            goto LABEL_96;
          v51 = v50 - 1;
          if ( !v51 )
            goto LABEL_137;
          v52 = v51 - 1;
          if ( !v52 )
            goto LABEL_137;
          v53 = v52 - 1;
          if ( !v53 )
            goto LABEL_137;
          if ( v53 != 1 )
            goto LABEL_141;
        }
        else if ( v37 != 20 )
        {
          v44 = v37 - 14;
          if ( !v44 )
            goto LABEL_96;
          v45 = v44 - 1;
          if ( !v45 )
            goto LABEL_96;
          v46 = v45 - 1;
          if ( !v46 )
            goto LABEL_96;
          v47 = v46 - 1;
          if ( !v47 )
          {
            v49 = L"(TRUE)";
            if ( *(_BYTE *)v36 != 0xFF )
              v49 = L"(FALSE)";
            do
              ++v13;
            while ( v49[v13] );
            v15 += 2 * v13;
            if ( v15 > (unsigned int)v4 )
              goto LABEL_96;
            v41 = RtlStringCbCopyExW(v5, v7, v49, &ppszDestEnd, &cbDest, 0x400u);
            goto LABEL_95;
          }
          v48 = v47 - 1;
          if ( v48 )
          {
            v42 = v48 == 1;
            goto LABEL_122;
          }
        }
        do
          ++v13;
        while ( v36[v13] );
        v15 += 2 * v13;
        if ( v15 > (unsigned int)v4 )
          goto LABEL_96;
        v41 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(%s)", *(_QWORD *)(v6 + 40));
        goto LABEL_95;
      }
      v12 = L"INT32";
    }
    v11 = 0LL;
    goto LABEL_14;
  }
  return v8;
}
