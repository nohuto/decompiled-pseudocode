/*
 * XREFs of RtlpComputePath @ 0x18009B210
 * Callers:
 *     RtlpComputeExePath @ 0x1800996B0 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x180099D90 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18009AE10 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18009B0E0 (RtlpComputeDllPathWithOptions.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpGetDirPath @ 0x18009B03C (RtlpGetDirPath.c)
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 *     RtlpAddForwarderPath @ 0x18011F7F4 (RtlpAddForwarderPath.c)
 *     LdrpIncludeAlternateForwarders @ 0x18012101C (LdrpIncludeAlternateForwarders.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

int *__fastcall RtlpComputePath(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  WCHAR *Heap_0; // r12
  SIZE_T v6; // rsi
  int *v7; // rbx
  char v8; // r15
  unsigned int v9; // edi
  __int128 *v10; // r8
  __int64 v11; // rcx
  _WORD *v12; // rax
  UNICODE_STRING *v13; // rdi
  _WORD *v14; // r15
  unsigned int v15; // r14d
  unsigned int v16; // esi
  int v17; // eax
  NTSTATUS v18; // r14d
  SIZE_T ValueLength; // r14
  ULONG_PTR v21; // rdi
  _WORD *v22; // rax
  wchar_t *DirPath; // rax
  _WORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int8 v28; // [rsp+30h] [rbp-78h]
  NTSTATUS v29; // [rsp+34h] [rbp-74h]
  ULONG_PTR ReturnLength; // [rsp+40h] [rbp-68h] BYREF
  UNICODE_STRING *v31; // [rsp+48h] [rbp-60h]
  size_t Size[2]; // [rsp+50h] [rbp-58h] BYREF
  void *Src; // [rsp+60h] [rbp-48h]
  __int64 v34; // [rsp+B0h] [rbp+8h]
  char v35; // [rsp+C8h] [rbp+20h]

  v35 = a4;
  v34 = a1;
  Src = 0LL;
  Size[0] = 0LL;
  Heap_0 = 0LL;
  v28 = 0;
  v6 = 128LL;
  Size[1] = 0LL;
  v7 = 0LL;
  ReturnLength = 0LL;
  v8 = (LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 60) & 3;
  v29 = 0;
  v9 = 0;
  v31 = 0LL;
  while ( 1 )
  {
    v10 = &RtlpSystem32Dirs;
    if ( v9 >= a2 )
      break;
    v11 = *(int *)(a1 + 4LL * v9);
    if ( (_DWORD)v11 == 3 )
    {
      RtlEnterCriticalSection(&FastPebLock);
      v29 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &ReturnLength);
      v18 = v29;
      if ( v29 == -1073741789 )
      {
        ValueLength = ReturnLength;
        Heap_0 = (WCHAR *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * ReturnLength);
        if ( !Heap_0 )
        {
          RtlLeaveCriticalSection(&FastPebLock);
          return v7;
        }
        v18 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, Heap_0, ValueLength, &ReturnLength);
        v29 = v18;
      }
      RtlLeaveCriticalSection(&FastPebLock);
      if ( v18 == -1073741568 )
      {
        a1 = v34;
        ++v9;
        a4 = v35;
        ReturnLength = 0LL;
        v29 = 0;
      }
      else
      {
        if ( v18 < 0 )
          goto LABEL_23;
        v6 += 2 * ReturnLength + 2;
LABEL_21:
        a1 = v34;
        ++v9;
        a4 = v35;
      }
    }
    else
    {
      if ( (_DWORD)v11 == 7 )
      {
        v6 += (unsigned __int16)RtlpSystem32Dirs;
        if ( a4 )
        {
          v28 = LdrpIncludeAlternateForwarders(v11, (unsigned __int16)RtlpSystem32Dirs, &RtlpSystem32Dirs);
          v6 += v27 + 22;
          if ( v28 )
            v6 += v27 + 30;
        }
        if ( v8 == 1 )
          v31 = (UNICODE_STRING *)v10;
        goto LABEL_21;
      }
      switch ( (int)v11 )
      {
        case 0:
          if ( !LdrpDllDirectory.Length )
            goto LABEL_21;
          a1 = v34;
          a4 = v35;
          v6 += LdrpDllDirectory.Length + 2LL;
          ++v9;
          break;
        case 1:
          DirPath = (wchar_t *)RtlpGetDirPath(0LL, Size);
          a4 = v35;
          v6 += Size[0] + 2;
          a1 = v34;
          ++v9;
          Src = DirPath;
          continue;
        case 2:
          v6 += RtlpSystemDirs.Length;
          if ( v8 != 1 )
            goto LABEL_21;
          a1 = v34;
          a4 = v35;
          ++v9;
          v31 = &RtlpSystemDirs;
          break;
        default:
          __fastfail(0x25u);
      }
    }
  }
  if ( v6 - 128 > 0xFFFE )
  {
    v18 = -1073741562;
  }
  else
  {
    v12 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
    v7 = (int *)v12;
    if ( v12 )
    {
      v13 = v31;
      v14 = v12 + 64;
      v12[36] = a2;
      *((_QWORD *)v12 + 11) = 0LL;
      v15 = 0;
      *((_QWORD *)v12 + 12) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
      *((_DWORD *)v12 + 28) = v6;
      *((_QWORD *)v12 + 15) = 0LL;
      if ( v13 )
      {
        *((_QWORD *)v12 + 3) = v14;
        v26 = 7;
        if ( &RtlpSystem32Dirs != (__int128 *)v13 )
          v26 = 2;
        *v7 = v26;
        memmove(v14, v13->Buffer, v13->Length);
        v15 = 1;
        v14 += (unsigned __int64)v13->Length >> 1;
        if ( v35 )
          v14 = (_WORD *)RtlpAddForwarderPath(v28, v14);
      }
      v16 = 0;
      while ( v16 < a2 )
      {
        if ( v13 && ((v25 = *(_DWORD *)(v34 + 4LL * v16), v25 == 2) || v25 == 7) )
        {
LABEL_17:
          ++v16;
        }
        else
        {
          v7[v15] = *(_DWORD *)(v34 + 4LL * v16);
          *(_QWORD *)&v7[2 * v15 + 6] = v14;
          v17 = *(_DWORD *)(v34 + 4LL * v16);
          if ( v17 == 4 )
          {
            *((_QWORD *)v7 + 15) = v14;
            ++v15;
            *v14 = asc_180178CFC[0];
            v14 += 2;
            ++v16;
            *(v14 - 1) = 59;
          }
          else
          {
            switch ( v17 )
            {
              case 0:
                if ( !LdrpDllDirectory.Length )
                  goto LABEL_16;
                memmove(v14, LdrpDllDirectory.Buffer, LdrpDllDirectory.Length);
                v24 = &v14[(unsigned __int64)LdrpDllDirectory.Length >> 1];
LABEL_39:
                v14 = v24 + 1;
                *v24 = 59;
                ++v15;
                ++v16;
                continue;
              case 1:
                memmove(v14, Src, Size[0]);
                v24 = &v14[Size[0] >> 1];
                goto LABEL_39;
              case 2:
                memmove(v14, RtlpSystemDirs.Buffer, RtlpSystemDirs.Length);
                v14 += (unsigned __int64)RtlpSystemDirs.Length >> 1;
                goto LABEL_16;
              case 3:
                if ( !ReturnLength )
                {
LABEL_16:
                  ++v15;
                  goto LABEL_17;
                }
                v21 = ReturnLength;
                memmove(v14, Heap_0, 2 * ReturnLength);
                v22 = &v14[v21];
                v13 = v31;
                v14 = v22 + 1;
                *v22 = 59;
                ++v15;
                ++v16;
                break;
              default:
                __fastfail(0x25u);
            }
          }
        }
      }
      v18 = v29;
      *(v14 - 1) = 0;
    }
    else
    {
      v18 = -1073741801;
    }
  }
LABEL_23:
  if ( Heap_0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  if ( v7 && v18 < 0 )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v7);
    return 0LL;
  }
  return v7;
}
