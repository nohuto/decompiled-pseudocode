/*
 * XREFs of PopFxRegisterComponentPerfStates @ 0x1407D09DC
 * Callers:
 *     PoFxRegisterComponentPerfStates @ 0x1407CFFC0 (PoFxRegisterComponentPerfStates.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PopPluginRegisterComponentPerfStates @ 0x140608B38 (PopPluginRegisterComponentPerfStates.c)
 *     PopPepRegisterComponentPerfStates @ 0x140614924 (PopPepRegisterComponentPerfStates.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PopFxPepPerfInfoFree @ 0x1407D075C (PopFxPepPerfInfoFree.c)
 *     PopFxPepPerfInfoQuery @ 0x1407D07DC (PopFxPepPerfInfoQuery.c)
 *     PopFxTracePerfRegistration @ 0x140B45F00 (PopFxTracePerfRegistration.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxRegisterComponentPerfStates(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        ULONGLONG *a6)
{
  __int64 v7; // r9
  char v8; // bl
  __int64 v9; // rax
  int v10; // eax
  _QWORD *v11; // rdi
  NTSTATUS v12; // ebx
  ULONGLONG v14; // r14
  ULONGLONG v15; // r15
  unsigned int v16; // r10d
  ULONGLONG v17; // r9
  ULONGLONG v18; // r11
  ULONGLONG v19; // r13
  ULONGLONG v20; // r8
  ULONGLONG v21; // r9
  unsigned int v22; // edx
  char *v23; // r9
  __int64 v24; // rax
  ULONGLONG v25; // r9
  __int64 Pool2; // rax
  __int64 v27; // rsi
  ULONGLONG *v28; // rcx
  UNICODE_STRING *v29; // r12
  unsigned int v30; // r8d
  int v31; // eax
  ULONGLONG v32; // rdx
  wchar_t *v33; // r13
  unsigned int v34; // r15d
  wchar_t **p_Buffer; // r14
  unsigned int v36; // eax
  unsigned int v37; // r15d
  wchar_t *v38; // r13
  _QWORD *v39; // r14
  char v40; // [rsp+20h] [rbp-20h]
  ULONGLONG pullResult; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-8h]

  v7 = BugCheckParameter3;
  pullResult = 0LL;
  v8 = a3;
  P = 0LL;
  v9 = a2;
  if ( a5 )
  {
    if ( !a6 )
    {
      v11 = a5;
      goto LABEL_8;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v10 = PopFxPepPerfInfoQuery(BugCheckParameter3, *(unsigned int *)(a2 + 16), (unsigned int **)&P);
  v11 = P;
  v12 = v10;
  if ( v10 < 0 )
  {
LABEL_53:
    PopFxPepPerfInfoFree(v11);
    return (unsigned int)v12;
  }
  v9 = a2;
  v7 = BugCheckParameter3;
  v8 = a3;
LABEL_8:
  if ( !*(_DWORD *)v11 )
  {
    v12 = -1073741811;
    goto LABEL_52;
  }
  v40 = PopPluginRegisterComponentPerfStates(v7, *(_DWORD *)(v9 + 16), (__int64)v11);
  if ( !v40 && (v8 & 1) == 0 )
  {
    v12 = -1073741822;
    goto LABEL_52;
  }
  v12 = RtlULongLongMult(*(unsigned int *)v11, 0x20uLL, &pullResult);
  if ( v12 >= 0 )
  {
    if ( pullResult >= 0xFFFFFFFFFFFFFF60uLL )
      goto LABEL_51;
    v14 = (pullResult + 167) & 0xFFFFFFFFFFFFFFF8uLL;
    v15 = v14 + 8;
    if ( v14 + 8 < v14 )
      goto LABEL_51;
    v12 = RtlULongLongMult(*(unsigned int *)v11, 0x30uLL, &pullResult);
    if ( v12 < 0 )
      goto LABEL_52;
    if ( v15 + pullResult < v15 )
      goto LABEL_51;
    v16 = 0;
    v17 = (v15 + pullResult + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v18 = 16LL;
    v19 = v17;
    while ( 1 )
    {
      v20 = *(unsigned int *)v11;
      if ( v16 >= (unsigned int)v20 )
        break;
      if ( !HIDWORD(v11[6 * v16 + 4]) )
      {
        v12 = RtlULongLongMult(LODWORD(v11[6 * v16 + 5]), v18, &pullResult);
        if ( v12 < 0 )
          goto LABEL_52;
        if ( v21 + pullResult < v21 )
          goto LABEL_51;
        v17 = v21 + pullResult;
      }
      ++v16;
    }
    v22 = 0;
    v23 = (char *)((v17 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    P = v23;
    while ( v22 < (unsigned int)v20 )
    {
      v24 = LOWORD(v11[6 * v22 + 1]);
      if ( (_WORD)v24 )
      {
        if ( &v23[v24 + 2] < v23 )
          goto LABEL_51;
        v23 += v24 + 2;
      }
      ++v22;
    }
    v43 = (unsigned __int64)(v23 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = RtlULongLongMult(v20, v18, &pullResult);
    if ( v12 >= 0 )
    {
      if ( v25 + pullResult >= v25 )
      {
        v12 = 0;
        Pool2 = ExAllocatePool2(0x40uLL);
        v27 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 32) = a4;
          v28 = (ULONGLONG *)(Pool2 + 160);
          *(_DWORD *)(Pool2 + 144) = *(_DWORD *)v11;
          v29 = (UNICODE_STRING *)(Pool2 + v15);
          *(_QWORD *)(Pool2 + 152) = Pool2 + 160;
          v30 = 0;
          *(_DWORD *)(Pool2 + v14) = *(_DWORD *)v11;
          v31 = *(_DWORD *)v11;
          pullResult = v27 + v14;
          v32 = v27 + v15;
          if ( v31 )
          {
            do
            {
              *v28 = v32;
              ++v30;
              v31 = *(_DWORD *)v11;
              v28 += 4;
              v32 += 48LL;
            }
            while ( v30 < *(_DWORD *)v11 );
          }
          v33 = (wchar_t *)(v27 + v19);
          v34 = 0;
          if ( v31 )
          {
            p_Buffer = &v29[1].Buffer;
            do
            {
              *(p_Buffer - 1) = (wchar_t *)v11[6 * v34 + 3];
              *(_DWORD *)p_Buffer = v11[6 * v34 + 4];
              *((_DWORD *)p_Buffer + 1) = HIDWORD(v11[6 * v34 + 4]);
              if ( HIDWORD(v11[6 * v34 + 4]) )
              {
                p_Buffer[1] = (wchar_t *)v11[6 * v34 + 5];
                p_Buffer[2] = (wchar_t *)v11[6 * v34 + 6];
              }
              else
              {
                v36 = v11[6 * v34 + 5];
                *((_DWORD *)p_Buffer + 2) = v36;
                p_Buffer[2] = v33;
                memmove(v33, (const void *)v11[6 * v34 + 6], 16LL * v36);
                v33 += 8 * *((unsigned int *)p_Buffer + 2);
              }
              v31 = *(_DWORD *)v11;
              p_Buffer += 6;
              ++v34;
            }
            while ( v34 < *(_DWORD *)v11 );
          }
          v37 = 0;
          v38 = (wchar_t *)((char *)P + v27);
          if ( v31 )
          {
            do
            {
              v39 = &v11[6 * v37];
              if ( *((_WORD *)v39 + 4) )
              {
                v29->Buffer = v38;
                v29->Length = *((_WORD *)v39 + 4);
                v29->MaximumLength = *((_WORD *)v39 + 4) + 2;
                RtlCopyUnicodeString(v29, (PCUNICODE_STRING)(v39 + 1));
              }
              v29 += 3;
              ++v37;
              v38 += (*((unsigned __int16 *)v39 + 4) >> 1) + 1;
            }
            while ( v37 < *(_DWORD *)v11 );
          }
          *(_QWORD *)(v27 + 48) = v27 + v43;
          *(_QWORD *)v27 = a2;
          KeInitializeEvent((PRKEVENT)(v27 + 8), NotificationEvent, 1u);
          if ( (a3 & 6) != 0 )
            *(_BYTE *)(v27 + 74) = 1;
          *(_BYTE *)(v27 + 73) = v40;
          *(_QWORD *)(v27 + 112) = v27;
          *(_QWORD *)(v27 + 104) = PopFxComponentPerfWork;
          *(_QWORD *)(v27 + 88) = 0LL;
          PopFxTracePerfRegistration(v27, 0LL);
          PopPepRegisterComponentPerfStates(*(_QWORD *)(BugCheckParameter3 + 56), *(_DWORD *)(a2 + 16), a3);
          *(_QWORD *)(a2 + 424) = v27;
          if ( a6 )
            *a6 = pullResult;
        }
        else
        {
          v12 = -1073741670;
        }
        goto LABEL_52;
      }
LABEL_51:
      v12 = -1073741675;
    }
  }
LABEL_52:
  if ( !a5 )
    goto LABEL_53;
  return (unsigned int)v12;
}
