/*
 * XREFs of ParseField @ 0x140010AC8
 * Callers:
 *     ParseFieldList @ 0x140010940 (ParseFieldList.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     ParseFieldConnection @ 0x140054000 (ParseFieldConnection.c)
 *     PrintIndent @ 0x140055A94 (PrintIndent.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ParseField(_QWORD *a1, __int64 a2, int *a3, _DWORD *a4, unsigned __int8 *a5, _DWORD **a6)
{
  unsigned int v6; // esi
  _DWORD *v7; // r12
  int *v8; // r14
  _BYTE *v10; // rdx
  bool v11; // zf
  unsigned int v12; // ecx
  int v13; // r13d
  __int64 v14; // r8
  char *v15; // rax
  char *v16; // rcx
  char *v17; // rax
  unsigned __int8 *v18; // r8
  unsigned int v19; // edi
  unsigned __int8 *v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rbp
  unsigned int v23; // r8d
  __int64 *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rbx
  unsigned int v27; // eax
  int v28; // ecx
  unsigned __int8 *v29; // rax
  int v31; // eax
  unsigned __int8 v32; // r9
  unsigned __int8 v33; // cl
  const char *v34; // rdx
  char v35; // bp
  int v36; // edx
  unsigned __int8 *v37; // rdi
  int v38; // eax
  char v39; // cl
  int v40; // eax
  unsigned __int8 *v41; // rax
  __int64 v43; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int8 *v44; // [rsp+40h] [rbp-68h]
  char v45[8]; // [rsp+48h] [rbp-60h] BYREF

  v6 = 0;
  v7 = a4;
  v8 = a3;
  v44 = a5;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 112), 1u);
  v10 = (_BYTE *)a1[15];
  LOBYTE(a4) = 3;
  LOBYTE(a3) = *v10;
  if ( *v10 == 1 )
  {
    v11 = 0;
    goto LABEL_50;
  }
  v11 = (_BYTE)a3 == 3;
  if ( (_BYTE)a3 == 3 )
  {
LABEL_50:
    v35 = v11;
    a1[15] = v10 + 1;
    v36 = *v8;
    *v8 &= 0xFFFFFFF0;
    *v8 = v36 ^ ((unsigned __int8)v36 ^ *(_BYTE *)a1[15]) & 0xF;
    if ( (_BYTE)a3 == 3 || (*(_BYTE *)a1[15] & 0xC0) == 0 )
    {
      ++a1[15];
      v37 = (unsigned __int8 *)v8 + 1;
      *((_BYTE *)v8 + 1) = 0;
      *v8 |= *(unsigned __int8 *)a1[15]++ << 8;
      v41 = (unsigned __int8 *)a1[15];
      if ( (_BYTE)a3 != 3 )
      {
        *a5 = 0;
LABEL_59:
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1);
          ConPrintf("AccessAs(0x%x,0x%x", (unsigned __int8)*v8, *v37);
          if ( v35 )
            ConPrintf(",0x%x)\n", *a5);
          else
            ConPrintf(")\n");
        }
        goto LABEL_31;
      }
    }
    else
    {
      v37 = (unsigned __int8 *)v8 + 1;
      *((_BYTE *)v8 + 1) = 0;
      v38 = *v8;
      v39 = *(_BYTE *)a1[15] & 0xC0;
      if ( v39 == 64 )
      {
        v40 = v38 | 0xB00;
      }
      else if ( v39 == (char)0x80 )
      {
        v40 = v38 | 0xE00;
      }
      else
      {
        v40 = v38 | 0xF00;
      }
      *v8 = v40;
      v35 = 1;
      v41 = (unsigned __int8 *)(a1[15] + 1LL);
      a1[15] = v41;
    }
    *a5 = *v41;
    ++a1[15];
    goto LABEL_59;
  }
  if ( (_BYTE)a3 == 2 )
  {
    a1[15] = v10 + 1;
    v31 = ParseFieldConnection(a1, a6, a3, a4);
    v6 = v31;
    if ( v31 )
    {
      LogError(v31);
      AcpiDiagTraceAmlError((__int64)a1, v6);
      PrintDebugMessage(0x7Du, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      (*a6)[1] = *v7;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1);
        v34 = (const char *)(*a6 + 4);
        if ( **a6 == 1 )
          ConPrintf("Connection(%s)", v34);
        else
          ConPrintf(
            "Connection(%02x %02x %02x %02x ...)",
            *(unsigned __int8 *)v34,
            *((unsigned __int8 *)*a6 + 17),
            *((unsigned __int8 *)*a6 + 18),
            *((unsigned __int8 *)*a6 + 19));
      }
    }
    goto LABEL_31;
  }
  v12 = *v8 & 0xF;
  if ( v12 && v12 <= 4 )
    v13 = 1 << (v12 - 1);
  else
    v13 = 1;
  v43 = 0LL;
  if ( (_BYTE)a3 )
  {
    v14 = 5LL;
    v15 = v10;
    v16 = v45;
    while ( v14 != 1 && *v15 )
    {
      *v16 = *v15;
      --v14;
      ++v16;
      ++v15;
    }
    v11 = v14 == 0;
    v17 = v16 - 1;
    v18 = v10 + 4;
    if ( !v11 )
      v17 = v16;
    *v17 = 0;
  }
  else
  {
    v45[0] = 0;
    v18 = v10 + 1;
  }
  a1[15] = v18;
  v19 = *v18;
  v20 = v18 + 1;
  a1[15] = v20;
  v21 = v19 >> 6;
  if ( (unsigned __int8)(v19 >> 6) )
  {
    v19 &= 0xFu;
    v32 = 0;
    do
    {
      v33 = v32++;
      v19 |= *v20++ << (8 * v33 + 4);
      a1[15] = v20;
    }
    while ( v32 < (unsigned __int8)v21 );
  }
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    if ( v45[0] )
    {
      ConPrintf("%s,%d", v45, v19);
    }
    else if ( v19 <= 0x20 || (((_BYTE)v19 + *(_BYTE *)v7) & 7) != 0 )
    {
      ConPrintf(",%d", v19);
    }
    else
    {
      ConPrintf("Offset(0x%x)", (v19 + *v7) >> 3);
    }
  }
  v6 = CreateNameSpaceObject(a1[40], v45, a1[10], a1[11], &v43, 0);
  if ( v6 )
  {
LABEL_31:
    v26 = a2;
    goto LABEL_26;
  }
  v22 = v43;
  v23 = 40;
  *(_WORD *)(v43 + 66) = 5;
  *(_DWORD *)(v22 + 88) = 40;
  if ( *a6 )
  {
    v23 = (*a6)[3] + 40;
    *(_DWORD *)(v22 + 88) = v23;
  }
  v24 = HeapAlloc((_QWORD *)a1[40], 1430537800, v23);
  *(_QWORD *)(v22 + 96) = v24;
  if ( v24 )
  {
    memset(v24, 0, *(unsigned int *)(v22 + 88));
    v25 = *(_QWORD *)(v22 + 96);
    *(_QWORD *)v25 = a2;
    v26 = 0LL;
    *(_DWORD *)(v25 + 20) = *v8;
    v27 = v13 * (*v7 / (unsigned int)(8 * v13));
    *(_DWORD *)(v25 + 8) = v27;
    v28 = *v7 - 8 * v27;
    *(_DWORD *)(v25 + 16) = v19;
    v29 = v44;
    *(_DWORD *)(v25 + 12) = v28;
    *(_BYTE *)(v25 + 24) = *v29;
    if ( *a6 )
    {
      *(_DWORD *)(v25 + 28) = **a6;
      *(_DWORD *)(v25 + 32) = (*a6)[1];
      *(_DWORD *)(v25 + 36) = (*a6)[3];
      memmove((void *)(v25 + 40), *a6 + 4, (unsigned int)(*a6)[3]);
    }
    *v7 += v19;
  }
  else
  {
    v6 = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError((__int64)a1, -1073741670);
    PrintDebugMessage(0x7Cu, 0LL, 0LL, 0LL, 0LL);
    v26 = a2;
  }
  DereferenceObjectEx(v22);
LABEL_26:
  if ( v26 )
    DereferenceObjectEx(v26);
  return v6;
}
