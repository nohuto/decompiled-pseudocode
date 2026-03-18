/*
 * XREFs of LogOp2_32 @ 0x140012BEC
 * Callers:
 *     LogOp2 @ 0x140012A30 (LogOp2.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     memcmp @ 0x140072C60 (memcmp.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v6; // r9
  int v7; // edi
  __int64 v8; // rcx
  __int16 v9; // dx
  _WORD *v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  size_t v13; // r8
  const void *v14; // rdx
  const void *v15; // rcx
  int v16; // eax
  int v17; // r9d
  bool v18; // zf
  __int64 v20; // rcx
  __int16 v21; // dx
  _WORD *v22; // rax
  __int64 v23; // rax
  __int16 v24; // cx
  _WORD *v25; // rax
  unsigned __int8 *v26; // rax
  __int64 v27; // r8
  int v28; // ecx
  int v29; // edx
  unsigned int v30; // r14d
  unsigned int v31; // ebp
  size_t v32; // r8
  const void *v33; // rdx
  const void *v34; // rcx
  int v35; // eax
  bool v36; // cc
  unsigned int v37; // eax
  unsigned int v38; // r9d
  __int64 v39; // rax
  unsigned int v40; // edx
  unsigned int v41; // r14d
  unsigned int v42; // ebp
  size_t v43; // r8
  int v44; // eax
  bool v45; // sf
  unsigned int v46; // eax
  int v47; // r9d
  __int64 v48; // rax
  unsigned int v49; // edx
  bool v50; // zf
  bool v51; // sf

  v2 = a2[7];
  v3 = 0;
  LOBYTE(v6) = 0;
  v7 = 0;
  if ( *(_DWORD *)(v2 + 8) == 144 )
  {
    LOBYTE(v2) = 1;
    v7 = ValidateArgTypes(a1, a2[10], v2, "II");
    if ( v7 < 0 )
      return (unsigned int)v7;
    v23 = a2[10];
    if ( !*(_DWORD *)(v23 + 16) )
      goto LABEL_28;
    goto LABEL_95;
  }
  if ( *(_DWORD *)(v2 + 8) == 145 )
  {
    LOBYTE(v2) = 1;
    v7 = ValidateArgTypes(a1, a2[10], v2, "II");
    if ( v7 < 0 )
      return (unsigned int)v7;
    v23 = a2[10];
    if ( *(_DWORD *)(v23 + 16) )
      goto LABEL_44;
LABEL_95:
    if ( *(_DWORD *)(v23 + 56) )
      goto LABEL_44;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v2 + 8) != 147 )
  {
    if ( *(_DWORD *)(v2 + 8) != 148 )
    {
      if ( *(_DWORD *)(v2 + 8) != 149 )
        goto LABEL_15;
      LOBYTE(v2) = 1;
      v7 = ValidateArgTypes(a1, a2[10], v2, "DD");
      if ( v7 < 0 )
        return (unsigned int)v7;
      v6 = a2[10];
      v24 = *(_WORD *)(v6 + 2);
      v25 = (_WORD *)(v6 + 42);
      if ( v24 == 1 && *v25 == 1 )
      {
        LOBYTE(v6) = *(_DWORD *)(v6 + 16) < *(_DWORD *)(v6 + 56);
        goto LABEL_15;
      }
      if ( v24 == 2 )
      {
        if ( *v25 == 2 )
        {
          v37 = *(_DWORD *)(v6 + 64);
          if ( *(_DWORD *)(v6 + 24) <= v37 )
            v37 = *(_DWORD *)(v6 + 24);
          v38 = strncmp(*(const char **)(v6 + 32), *(const char **)(v6 + 72), v37);
          v39 = a2[10];
          v40 = *(_DWORD *)(v39 + 24);
          if ( v40 >= *(_DWORD *)(v39 + 64) )
          {
            if ( v40 > *(_DWORD *)(v39 + 64) && !v38 )
              v38 = 1;
          }
          else if ( !v38 )
          {
            v38 = -1;
          }
          LODWORD(v6) = v38 >> 31;
          goto LABEL_15;
        }
        goto LABEL_41;
      }
      if ( v24 != 3 || *v25 != 3 )
        goto LABEL_41;
      v41 = *(_DWORD *)(v6 + 24);
      v42 = *(_DWORD *)(v6 + 64);
      v43 = v42;
      if ( v41 <= v42 )
        v43 = v41;
      v44 = memcmp(*(const void **)(v6 + 32), *(const void **)(v6 + 72), v43);
      if ( v41 >= v42 )
      {
        if ( v41 > v42 && !v44 )
          goto LABEL_28;
        v45 = v44 < 0;
      }
      else
      {
        v45 = v44 < 0;
        if ( !v44 )
          goto LABEL_44;
      }
      if ( v45 )
        goto LABEL_44;
LABEL_28:
      LOBYTE(v6) = 0;
      goto LABEL_15;
    }
    LOBYTE(v2) = 1;
    v7 = ValidateArgTypes(a1, a2[10], v2, "DD");
    if ( v7 < 0 )
      return (unsigned int)v7;
    v20 = a2[10];
    v21 = *(_WORD *)(v20 + 2);
    v22 = (_WORD *)(v20 + 42);
    if ( v21 == 1 && *v22 == 1 )
    {
      LOBYTE(v6) = *(_DWORD *)(v20 + 16) > *(_DWORD *)(v20 + 56);
      goto LABEL_15;
    }
    if ( v21 != 2 )
    {
      if ( v21 != 3 || *v22 != 3 )
        goto LABEL_41;
      v30 = *(_DWORD *)(v20 + 24);
      v31 = *(_DWORD *)(v20 + 64);
      v32 = v31;
      v33 = *(const void **)(v20 + 72);
      v34 = *(const void **)(v20 + 32);
      if ( v30 <= v31 )
        v32 = v30;
      v35 = memcmp(v34, v33, v32);
      if ( v30 >= v31 )
      {
        if ( v30 > v31 && !v35 )
          goto LABEL_44;
        v36 = v35 <= 0;
      }
      else
      {
        v36 = v35 <= 0;
        if ( !v35 )
          goto LABEL_28;
      }
      if ( !v36 )
      {
LABEL_44:
        LOBYTE(v6) = 1;
        goto LABEL_15;
      }
      goto LABEL_28;
    }
    if ( *v22 != 2 )
      goto LABEL_41;
    v46 = *(_DWORD *)(v20 + 64);
    if ( *(_DWORD *)(v20 + 24) <= v46 )
      v46 = *(_DWORD *)(v20 + 24);
    v47 = strncmp(*(const char **)(v20 + 32), *(const char **)(v20 + 72), v46);
    v48 = a2[10];
    v49 = *(_DWORD *)(v48 + 24);
    if ( v49 >= *(_DWORD *)(v48 + 64) )
    {
      if ( v49 > *(_DWORD *)(v48 + 64) && !v47 )
        v47 = 1;
    }
    else
    {
      v50 = v47 == 0;
      v51 = v47 < 0;
      if ( v47 )
      {
LABEL_84:
        LOBYTE(v6) = !v51 && !v50;
        goto LABEL_15;
      }
      v47 = -1;
    }
    v50 = v47 == 0;
    v51 = v47 < 0;
    goto LABEL_84;
  }
  LOBYTE(v2) = 1;
  v7 = ValidateArgTypes(a1, a2[10], v2, "DD");
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = a2[10];
  v9 = *(_WORD *)(v8 + 2);
  v10 = (_WORD *)(v8 + 42);
  if ( v9 != 1 || *v10 != 1 )
  {
    if ( v9 == 2 )
    {
      if ( *v10 == 2 )
      {
        v26 = *(unsigned __int8 **)(v8 + 32);
        v27 = *(_QWORD *)(v8 + 72) - (_QWORD)v26;
        do
        {
          v28 = v26[v27];
          v29 = *v26 - v28;
          if ( v29 )
            break;
          ++v26;
        }
        while ( v28 );
        v18 = v29 == 0;
        goto LABEL_14;
      }
    }
    else if ( v9 == 3 && *v10 == 3 )
    {
      v11 = *(_DWORD *)(v8 + 24);
      v12 = *(_DWORD *)(v8 + 64);
      v13 = v12;
      v14 = *(const void **)(v8 + 72);
      v15 = *(const void **)(v8 + 32);
      if ( v11 <= v12 )
        v13 = v11;
      v16 = memcmp(v15, v14, v13);
      v17 = v16;
      if ( v11 < v12 )
      {
        if ( !v16 )
          v17 = -1;
      }
      else if ( v11 > v12 && !v16 )
      {
        v17 = 1;
      }
      v18 = v17 == 0;
      goto LABEL_14;
    }
LABEL_41:
    v7 = -1073741811;
    LogError(-1073741811);
    AcpiDiagTraceAmlError(a1, -1073741811);
    PrintDebugMessage(0xEEu, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v7;
  }
  v18 = *(_DWORD *)(v8 + 16) == *(_DWORD *)(v8 + 56);
LABEL_14:
  LOBYTE(v6) = v18;
LABEL_15:
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( (_BYTE)v6 )
  {
    IsCompatableDSDTRevision();
    v3 = -1;
  }
  *(_DWORD *)(a2[11] + 16LL) = v3;
  return (unsigned int)v7;
}
