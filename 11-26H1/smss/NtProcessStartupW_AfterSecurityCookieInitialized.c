/*
 * XREFs of NtProcessStartupW_AfterSecurityCookieInitialized @ 0x1400012C0
 * Callers:
 *     NtProcessStartupW @ 0x1400012A0 (NtProcessStartupW.c)
 * Callees:
 *     wmain @ 0x140001618 (wmain.c)
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
  __int64 v16; // rbx
  SIZE_T v17; // r12
  char **Heap; // rax
  char **v19; // rdi
  _QWORD *v20; // rdi
  PWSTR v21; // rcx
  char *v24; // rbx
  char *v25; // rbp
  unsigned int v26; // r13d
  char *v27; // rsi
  wint_t *v28; // rbx
  PRTL_USER_PROCESS_PARAMETERS v29; // [rsp+20h] [rbp-58h]
  ULONG v30; // [rsp+80h] [rbp+8h]
  unsigned int v31; // [rsp+88h] [rbp+10h]
  __int64 *v32; // [rsp+90h] [rbp+18h]
  __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(struct _RTL_USER_PROCESS_PARAMETERS **)(a1 + 32);
  v33 = 0LL;
  v4 = RtlNormalizeProcessParams(v3);
  DebugFlags = 0LL;
  v30 = 0;
  v6 = v4;
  v29 = v4;
  v31 = 0;
  v32 = &v33;
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
    v30 = v6->DebugFlags;
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
            v28 = Buffer;
            do
            {
              ++Buffer;
              Length -= 2;
            }
            while ( Length && !iswspace(*Buffer) );
            v9 += 2 * (Buffer - v28) + 2;
          }
        }
        while ( Length );
LABEL_60:
        DebugFlags = v30;
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
  if ( v7 + v8 > 2 )
  {
    if ( v8 > 1 )
    {
      Buffer = p_CommandLine->Buffer;
      Length = p_CommandLine->Length;
    }
    v16 = v7 + v8;
    v17 = v16 * 8 + v9;
    Heap = (char **)RtlAllocateHeap(*(PVOID *)(a1 + 48), 0, v17);
    v19 = Heap;
    if ( Heap )
    {
      v32 = (__int64 *)Heap;
      if ( v8 > 1 )
      {
        v24 = (char *)&Heap[v16];
        v25 = (char *)Heap + v17;
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
                goto LABEL_45;
              break;
            }
            if ( *Buffer )
            {
              *v19++ = v24;
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
                  goto LABEL_43;
              }
              while ( !iswspace(*Buffer) );
              if ( v24 < v25 )
              {
                *(_WORD *)v24 = 0;
                v24 += 2;
                continue;
              }
LABEL_43:
              v24 = v27;
              *(_WORD *)v27 = 0;
            }
          }
          while ( Length );
LABEL_45:
          v31 = v26;
          v6 = v29;
        }
      }
      v2 = 0;
      *v19 = 0LL;
      v20 = v19 + 1;
      v21 = v6->Environment;
      if ( v21 && *v21 )
      {
        do
        {
          *v20++ = v21++;
          while ( *v21++ )
            ;
        }
        while ( *v21 );
      }
      *v20 = 0LL;
    }
    else
    {
      v2 = -1073741801;
    }
    DebugFlags = v30;
  }
  if ( (_DWORD)DebugFlags )
    __debugbreak();
  if ( v2 >= 0 )
    v2 = wmain(v31, v32, DebugFlags, (unsigned int)DebugFlags);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2);
}
