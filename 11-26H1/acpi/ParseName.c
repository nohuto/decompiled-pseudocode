/*
 * XREFs of ParseName @ 0x140006D60
 * Callers:
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     ParseObjName @ 0x14000FE10 (ParseObjName.c)
 *     ParseFieldConnection @ 0x140054000 (ParseFieldConnection.c)
 * Callees:
 *     ParseNameTail @ 0x140003020 (ParseNameTail.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 */

__int64 __fastcall ParseName(__int64 a1, char **a2, char *a3)
{
  char v6; // r9
  __int64 v7; // r10
  char *v8; // r9
  char v9; // al
  char *v10; // rax
  __int64 v11; // rax
  char *v12; // r10
  unsigned int v13; // edi
  char v14; // cl
  int v15; // r14d
  unsigned int v16; // r11d
  char *v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r10
  char v22; // cl
  char *v23; // rcx
  int v24; // edx
  char *v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r9
  char *v29; // r10
  char v30; // cl
  char *v31; // rcx
  __int64 v32; // rax
  char *v33; // r9
  char v34; // cl
  int v35; // r14d
  unsigned int v36; // r11d
  char *v37; // rdx
  unsigned int v38; // ecx
  __int64 v39; // r8
  __int64 v40; // r10
  __int64 v41; // r9
  char v42; // cl
  char *v43; // rcx
  __int64 v44; // rdx
  int v45; // eax
  char *v46; // rdx
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r9
  char *v49; // r10
  char v50; // cl
  char *v51; // rcx
  unsigned __int8 *v52; // rcx
  char *v53; // rcx
  __int64 v54; // rbp
  char *v55; // rcx
  char v56; // al
  char *v57; // rax
  unsigned int v58; // r14d
  _BYTE *v59; // rax
  char *v60; // rcx

  v6 = **a2;
  if ( v6 == 92 )
  {
    v7 = 256LL;
    v8 = a3;
    do
    {
      if ( v7 == -2147483390 )
        break;
      v9 = v8["\\" - a3];
      if ( !v9 )
        break;
      *v8++ = v9;
      --v7;
    }
    while ( v7 );
    v10 = v8 - 1;
    if ( v7 )
      v10 = v8;
    *v10 = 0;
    v11 = -1LL;
    v12 = *a2 + 1;
    *a2 = v12;
    v13 = 0;
    do
      ++v11;
    while ( a3[v11] );
    v14 = *v12;
    if ( *v12 )
    {
      if ( v14 != 47 )
      {
        if ( v14 == 46 )
        {
          ++v12;
          v15 = 2;
          *a2 = v12;
        }
        else
        {
          v15 = 1;
        }
LABEL_14:
        v16 = v11 + 1;
        while ( (unsigned __int64)(unsigned int)v11 + 4 < 0x100 )
        {
          v17 = &a3[(unsigned int)v11];
          v18 = 256 - v11;
          v19 = (unsigned int)(256 - v11);
          if ( (_DWORD)v11 != 256 )
          {
            if ( v18 > 0x7FFFFFFFuLL )
            {
              *v17 = 0;
            }
            else
            {
              v20 = 4LL - v18;
              v21 = v12 - v17;
              do
              {
                if ( !(v20 + v19) )
                  break;
                v22 = v17[v21];
                if ( !v22 )
                  break;
                *v17++ = v22;
                --v19;
              }
              while ( v19 );
              v23 = v17 - 1;
              if ( v19 )
                v23 = v17;
              *v23 = 0;
            }
          }
          v24 = v11 + 4;
          v12 = *a2 + 4;
          v11 = (unsigned int)(v11 + 4);
          v16 += 4;
          *a2 = v12;
          if ( --v15 && v16 < 0x100 )
          {
            v26 = &a3[v11];
            v27 = (unsigned int)(256 - v11);
            if ( (_DWORD)v11 != 256 )
            {
              if ( v27 > 0x7FFFFFFF )
              {
                *v26 = 0;
              }
              else
              {
                v28 = 2147483646 - v27;
                v29 = (char *)("." - v26);
                do
                {
                  if ( !(v28 + v27) )
                    break;
                  v30 = v26[(_QWORD)v29];
                  if ( !v30 )
                    break;
                  *v26++ = v30;
                  --v27;
                }
                while ( v27 );
                v31 = v26 - 1;
                if ( v27 )
                  v31 = v26;
                *v31 = 0;
              }
            }
            v12 = *a2;
            LODWORD(v11) = v11 + 1;
            ++v16;
          }
          else
          {
            LODWORD(v11) = v24;
            if ( !v15 )
              goto LABEL_27;
          }
        }
LABEL_99:
        LogError(3221225734LL);
        AcpiDiagTraceAmlError(a1, 3221225734LL);
        PrintDebugMessage(130, (_DWORD)a3, 0, 0, 0LL);
        v13 = -1073741562;
        goto LABEL_27;
      }
      v52 = (unsigned __int8 *)(v12 + 1);
      *a2 = v12 + 1;
      v12 += 2;
      v15 = *v52;
      *a2 = v12;
      if ( v15 )
        goto LABEL_14;
    }
    else
    {
      *a2 = v12 + 1;
    }
  }
  else
  {
    if ( v6 != 94 )
    {
      *a3 = 0;
      v13 = 0;
      v32 = -1LL;
      do
        ++v32;
      while ( a3[v32] );
      v33 = *a2;
      v34 = **a2;
      switch ( v34 )
      {
        case 0:
          *a2 = v33 + 1;
          goto LABEL_27;
        case 47:
          v53 = v33 + 1;
          v33 += 2;
          *a2 = v53;
          v35 = (unsigned __int8)*v53;
          *a2 = v33;
          if ( !v35 )
            goto LABEL_27;
          break;
        case 46:
          ++v33;
          v35 = 2;
          *a2 = v33;
          break;
        default:
          v35 = 1;
          break;
      }
      v36 = v32 + 1;
      while ( (unsigned __int64)(unsigned int)v32 + 4 < 0x100 )
      {
        v37 = &a3[(unsigned int)v32];
        v38 = 256 - v32;
        v39 = (unsigned int)(256 - v32);
        if ( (_DWORD)v32 != 256 )
        {
          if ( v38 > 0x7FFFFFFFuLL )
          {
            *v37 = 0;
          }
          else
          {
            v40 = 4LL - v38;
            v41 = v33 - v37;
            do
            {
              if ( !(v40 + v39) )
                break;
              v42 = v37[v41];
              if ( !v42 )
                break;
              *v37++ = v42;
              --v39;
            }
            while ( v39 );
            v43 = v37 - 1;
            if ( v39 )
              v43 = v37;
            *v43 = 0;
          }
        }
        v44 = (unsigned int)(v32 + 4);
        v33 = *a2 + 4;
        v45 = v32 + 4;
        v36 += 4;
        *a2 = v33;
        if ( --v35 && v36 < 0x100 )
        {
          v46 = &a3[v44];
          v47 = (unsigned int)(256 - v45);
          if ( v45 != 256 )
          {
            if ( v47 > 0x7FFFFFFF )
            {
              *v46 = 0;
            }
            else
            {
              v48 = 2147483646 - v47;
              v49 = (char *)("." - v46);
              do
              {
                if ( !(v48 + v47) )
                  break;
                v50 = v46[(_QWORD)v49];
                if ( !v50 )
                  break;
                *v46++ = v50;
                --v47;
              }
              while ( v47 );
              v51 = v46 - 1;
              if ( v47 )
                v51 = v46;
              *v51 = 0;
            }
          }
          v33 = *a2;
          LODWORD(v32) = v45 + 1;
          ++v36;
        }
        else
        {
          LODWORD(v32) = v44;
          if ( !v35 )
            goto LABEL_27;
        }
      }
      goto LABEL_99;
    }
    v54 = 256LL;
    v55 = a3;
    do
    {
      if ( v54 == -2147483390 )
        break;
      v56 = v55["^" - a3];
      if ( !v56 )
        break;
      *v55++ = v56;
      --v54;
    }
    while ( v54 );
    v57 = v55 - 1;
    v58 = 1;
    if ( v54 )
      v57 = v55;
    *v57 = 0;
    v59 = a3 + 1;
    v60 = ++*a2;
    do
    {
      if ( *v60 != 94 )
        break;
      *v59 = 94;
      ++v58;
      ++*a2;
      ++v59;
      v60 = *a2;
    }
    while ( v58 < 0xFF );
    a3[v58] = 0;
    if ( **a2 == 94 )
    {
      LogError(3221225734LL);
      AcpiDiagTraceAmlError(a1, 3221225734LL);
      PrintDebugMessage(129, (_DWORD)a3, 0, 0, 0LL);
      return 3221225734LL;
    }
    v13 = ParseNameTail(a1, a2, (__int64)a3);
  }
LABEL_27:
  if ( !v13 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s");
  return v13;
}
