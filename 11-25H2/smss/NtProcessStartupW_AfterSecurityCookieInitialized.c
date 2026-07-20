/*
 * XREFs of NtProcessStartupW_AfterSecurityCookieInitialized @ 0x1400011B0
 * Callers:
 *     NtProcessStartupW @ 0x140001190 (NtProcessStartupW.c)
 * Callees:
 *     wmain @ 0x140001510 (wmain.c)
 */

NTSTATUS __fastcall NtProcessStartupW_AfterSecurityCookieInitialized(__int64 a1)
{
  NTSTATUS v2; // ebx
  struct _RTL_USER_PROCESS_PARAMETERS *v3; // rcx
  PRTL_USER_PROCESS_PARAMETERS v4; // rax
  __int64 DebugFlags; // r8
  PRTL_USER_PROCESS_PARAMETERS v6; // r13
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // r12
  UNICODE_STRING *p_CommandLine; // rdi
  wint_t *Buffer; // r14
  int Length; // r15d
  PWSTR Environment; // rax
  int v14; // edx
  __int64 v16; // rcx
  __int64 v17; // rbx
  SIZE_T v18; // r12
  char **Heap; // rax
  char **v20; // rdi
  _QWORD *v21; // rdi
  PWSTR v22; // rcx
  char *v24; // rbx
  char *v25; // rsi
  unsigned int v26; // r13d
  char *v27; // rbp
  wint_t *v29; // rbx
  PRTL_USER_PROCESS_PARAMETERS v30; // [rsp+20h] [rbp-58h]
  ULONG v31; // [rsp+80h] [rbp+8h]
  unsigned int v32; // [rsp+88h] [rbp+10h]
  __int64 *v33; // [rsp+90h] [rbp+18h]
  __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(struct _RTL_USER_PROCESS_PARAMETERS **)(a1 + 32);
  v34 = 0LL;
  v4 = RtlNormalizeProcessParams(v3);
  DebugFlags = 0LL;
  v31 = 0;
  v6 = v4;
  v30 = v4;
  v32 = 0;
  v33 = &v34;
  v7 = 1;
  v8 = 1;
  v9 = 0LL;
  p_CommandLine = 0LL;
  Buffer = 0LL;
  Length = 0;
  if ( v6 )
  {
    p_CommandLine = &v6->CommandLine;
    DebugFlags = v6->DebugFlags;
    v31 = v6->DebugFlags;
    if ( v6->CommandLine.Buffer && p_CommandLine->Length
      || (p_CommandLine = &v6->ImagePathName, v6->ImagePathName.Buffer) )
    {
      Length = p_CommandLine->Length;
      Buffer = p_CommandLine->Buffer;
      if ( p_CommandLine->Length )
      {
        do
        {
          if ( !*Buffer || !Length )
            break;
          while ( *Buffer )
          {
            if ( iswspace(*Buffer) )
            {
              ++Buffer;
              Length -= 2;
              if ( Length )
                continue;
            }
            if ( !Length )
              goto LABEL_60;
            break;
          }
          if ( *Buffer )
          {
            ++v8;
            v29 = Buffer;
            do
            {
              ++Buffer;
              Length -= 2;
            }
            while ( Length && !iswspace(*Buffer) );
            v9 += 2 * (Buffer - v29) + 2;
          }
        }
        while ( Length );
LABEL_60:
        DebugFlags = v31;
        v2 = 0;
      }
    }
    Environment = v6->Environment;
    v14 = 0;
    if ( Environment && *Environment )
    {
      do
      {
        ++Environment;
        ++v14;
        while ( *Environment++ )
          ;
      }
      while ( *Environment );
    }
    v7 = v14 + 1;
  }
  v16 = v7 + v8;
  if ( (unsigned int)v16 > 2 )
  {
    if ( v8 > 1 )
    {
      Buffer = p_CommandLine->Buffer;
      Length = p_CommandLine->Length;
    }
    v17 = v16;
    v18 = 8 * v16 + v9;
    Heap = (char **)RtlAllocateHeap(*(PVOID *)(a1 + 48), 0, v18);
    v20 = Heap;
    if ( Heap )
    {
      v33 = (__int64 *)Heap;
      if ( v8 > 1 )
      {
        v24 = (char *)&Heap[v17];
        v25 = (char *)Heap + v18;
        if ( Length )
        {
          v26 = 0;
          do
          {
            if ( v24 >= v25 || !*Buffer )
              break;
            while ( *Buffer )
            {
              if ( iswspace(*Buffer) )
              {
                ++Buffer;
                Length -= 2;
                if ( Length )
                  continue;
              }
              if ( !Length )
                goto LABEL_40;
              break;
            }
            if ( *Buffer )
            {
              *v20++ = v24;
              ++v26;
              do
              {
                v27 = v24;
                *(_WORD *)v24 = *Buffer++;
                v24 += 2;
                Length -= 2;
                if ( !Length )
                  break;
                if ( v24 >= v25 )
                  goto LABEL_38;
              }
              while ( !iswspace(*Buffer) );
              if ( v24 < v25 )
              {
                *(_WORD *)v24 = 0;
                v24 += 2;
                continue;
              }
LABEL_38:
              v24 = v27;
              *(_WORD *)v27 = 0;
            }
          }
          while ( Length );
LABEL_40:
          v32 = v26;
          v6 = v30;
        }
      }
      v2 = 0;
      *v20 = 0LL;
      v21 = v20 + 1;
      v22 = v6->Environment;
      if ( v22 && *v22 )
      {
        do
        {
          *v21++ = v22++;
          while ( *v22++ )
            ;
        }
        while ( *v22 );
      }
      *v21 = 0LL;
    }
    else
    {
      v2 = -1073741801;
    }
    DebugFlags = v31;
  }
  if ( (_DWORD)DebugFlags )
    __debugbreak();
  if ( v2 >= 0 )
    v2 = wmain(v32, v33, DebugFlags, (unsigned int)DebugFlags);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2);
}
