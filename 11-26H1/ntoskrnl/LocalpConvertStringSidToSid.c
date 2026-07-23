/*
 * XREFs of LocalpConvertStringSidToSid @ 0x140A6D254
 * Callers:
 *     SeConvertStringSidToSid @ 0x1404EEA30 (SeConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140901030 (LocalGetSidForString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A6E644 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcstoul @ 0x14053AE50 (wcstoul.c)
 *     wcstoxq @ 0x14053B040 (wcstoxq.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall LocalpConvertStringSidToSid(_WORD *a1, __int64 *a2, wchar_t **a3)
{
  unsigned int v3; // r14d
  int v5; // edi
  int v6; // r12d
  const void *v7; // r15
  wchar_t *v8; // rbx
  wchar_t *v9; // rbx
  wchar_t *v10; // rax
  unsigned int v11; // r9d
  unsigned __int64 v12; // rcx
  wchar_t *v13; // rsi
  wchar_t *v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  wchar_t v17; // ax
  unsigned __int8 v18; // cl
  wchar_t *v19; // rsi
  void *v20; // rax
  unsigned int v21; // ebx
  _DWORD *v22; // r13
  int v23; // r8d
  unsigned __int64 v24; // rcx
  __int16 v25; // cx
  __int64 v26; // rcx
  __int64 v28; // rdx
  wchar_t *v29; // r12
  __int64 v30; // rax
  size_t v31; // r15
  void *v32; // rax
  __int16 v33; // ax
  wchar_t v34; // ax
  wchar_t v35; // ax
  int v36; // eax
  int v37; // [rsp+30h] [rbp-D0h]
  __int16 v38; // [rsp+34h] [rbp-CCh]
  int v39; // [rsp+3Ch] [rbp-C4h]
  wchar_t *EndPtr; // [rsp+40h] [rbp-C0h] BYREF
  void *v41; // [rsp+48h] [rbp-B8h]
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v43; // [rsp+54h] [rbp-ACh]
  void *v44; // [rsp+58h] [rbp-A8h]
  __int64 *v45; // [rsp+60h] [rbp-A0h]
  char v46; // [rsp+70h] [rbp-90h] BYREF

  LOBYTE(v3) = 0;
  v45 = a2;
  v41 = 0LL;
  EndPtr = 0LL;
  v44 = 0LL;
  v5 = 0;
  v6 = 10;
  v7 = 0LL;
  v39 = 10;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( *a1 != 83 && *a1 != 115 || a1[1] != 45 )
    return 3221225592LL;
  v8 = a1 + 2;
  if ( a1[2] == 48 )
  {
    v33 = a1[3];
    if ( v33 == 120 || v33 == 88 )
    {
      v6 = 16;
      v39 = 16;
    }
  }
  v43 = wcstoul(a1 + 2, &EndPtr, v6);
  if ( v43 > 0xFF )
    return 3221225592LL;
  if ( EndPtr == v8 )
    return 3221225592LL;
  if ( *EndPtr != 45 )
    return 3221225592LL;
  v9 = EndPtr + 1;
  if ( !EndPtr[1] )
    return 3221225592LL;
  v10 = wcschr(EndPtr + 1, 0x2Du);
  if ( !v10 || v10 == v9 )
    return 3221225592LL;
  if ( *v9 == 48 && ((v34 = v9[1], v34 == 120) || v34 == 88) )
    v11 = 16;
  else
    v11 = v6;
  v42 = 0;
  v12 = wcstoxq(0LL, v9, &EndPtr, v11, 1, &v42);
  if ( v12 > 0xFFFFFFFFFFFFLL )
    return 3221225592LL;
  v13 = EndPtr;
  if ( EndPtr == v9 || *EndPtr != 45 || !EndPtr[1] )
    return 3221225592LL;
  HIBYTE(v38) = v12;
  v14 = EndPtr;
  LOBYTE(v38) = BYTE1(v12);
  HIBYTE(v37) = BYTE2(v12);
  BYTE2(v37) = BYTE3(v12);
  BYTE1(v37) = BYTE4(v12);
  LOBYTE(v37) = BYTE5(v12);
  while ( 1 )
  {
    if ( !v14 )
      goto LABEL_35;
    if ( (_BYTE)v3 == 0xFF )
    {
      v5 = -1073741675;
      goto LABEL_87;
    }
    v15 = *v14;
    if ( (_WORD)v15 == 45 )
    {
      if ( *(v14 - 1) != 45 )
      {
        LOBYTE(v3) = v3 + 1;
        if ( v14[1] == 48 )
        {
          v17 = v14[2];
          if ( v17 == 120 || v17 == 88 )
            v14 += 2;
        }
        goto LABEL_29;
      }
    }
    else if ( (unsigned int)v15 <= 0x3B )
    {
      v16 = 0x800120100000001LL;
      if ( _bittest64(&v16, v15) )
      {
LABEL_48:
        v25 = *(v14 - 1);
        if ( v25 == 45 )
          --v14;
        else
          LOBYTE(v3) = v3 + 1;
        *a3 = v14;
        v5 = -1073741704;
        if ( v25 != 45 )
        {
          v5 = 0;
          goto LABEL_35;
        }
LABEL_52:
        if ( v5 < 0 )
          goto LABEL_55;
        v26 = SddlpAlloc(4LL * (unsigned __int8)v3 + 12);
        *v45 = v26;
        if ( v26 )
        {
          *(_BYTE *)v26 = v43;
          *(_DWORD *)(v26 + 2) = v37;
          *(_WORD *)(v26 + 6) = v38;
          *(_BYTE *)(v26 + 1) = v3;
          memmove((void *)(v26 + 8), v7, 4LL * (unsigned __int8)v3);
          goto LABEL_55;
        }
LABEL_69:
        v5 = -1073741801;
        goto LABEL_55;
      }
    }
    if ( v14[1] == 58 && (((_WORD)v15 - 71) & 0xFFF3) == 0 && (_DWORD)v15 != 75 )
      goto LABEL_48;
    if ( (unsigned int)v15 < 0x30 || (unsigned int)v15 > 0x39 )
    {
      if ( (unsigned __int16)(v15 - 97) <= 5u )
        goto LABEL_29;
      if ( (unsigned __int16)(v15 - 65) > 5u )
      {
        v5 = -1073741704;
LABEL_87:
        *a3 = v14;
        goto LABEL_55;
      }
    }
    if ( (_DWORD)v15 == 68 && v14[1] == 58 )
      break;
LABEL_29:
    ++v14;
  }
  v29 = EndPtr;
  v30 = v14 - EndPtr;
  v31 = 2 * v30;
  if ( v30 < 256 )
  {
    v13 = (wchar_t *)&v46;
  }
  else
  {
    v32 = (void *)SddlpAlloc(v31 + 2);
    v44 = v32;
    if ( !v32 )
      goto LABEL_69;
    v13 = (wchar_t *)v32;
  }
  memmove(v13, v29, v31);
  v6 = v39;
  v13[v31 / 2] = 0;
  LOBYTE(v3) = v3 + 1;
  *a3 = v14;
LABEL_35:
  v18 = v3 - 1;
  if ( !(_BYTE)v3 )
    v18 = 0;
  v3 = v18;
  if ( v18 )
  {
    v19 = v13 + 1;
    v20 = (void *)SddlpAlloc(4LL * v18);
    v41 = v20;
    v7 = v20;
    if ( v20 )
    {
      v21 = 0;
      v22 = v20;
      while ( v21 < v3 )
      {
        if ( *v19 == 48 && ((v35 = v19[1], v35 == 120) || v35 == 88) )
          v23 = 16;
        else
          v23 = v6;
        v22[v21] = wcstoul(v19, &EndPtr, v23);
        if ( EndPtr )
        {
          v24 = *EndPtr;
          if ( (_WORD)v24 )
          {
            if ( (unsigned int)v24 > 0x3B || (v28 = 0x800320000000000LL, !_bittest64(&v28, v24)) )
            {
              if ( EndPtr[1] != 58
                || (LOWORD(v24) = v24 - 68, (unsigned __int16)v24 > 0xFu)
                || (v36 = 34825, !_bittest(&v36, v24)) )
              {
                v5 = -1073741704;
                break;
              }
            }
          }
        }
        v19 = EndPtr + 1;
        ++v21;
      }
      v7 = v22;
    }
    else
    {
      v5 = -1073741801;
    }
    goto LABEL_52;
  }
  v5 = -1073741704;
LABEL_55:
  SddlpFree(v41);
  if ( v44 )
    SddlpFree(v44);
  return (unsigned int)v5;
}
