/*
 * XREFs of RtlpComputePath @ 0x18009C0E0
 * Callers:
 *     RtlpComputeExePath @ 0x18009A580 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x18009AC60 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18009BCE0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18009BFB0 (RtlpComputeDllPathWithOptions.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpGetDirPath @ 0x18009BF0C (RtlpGetDirPath.c)
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 *     RtlpAddForwarderPath @ 0x18011FA44 (RtlpAddForwarderPath.c)
 *     LdrpIncludeAlternateForwarders @ 0x18012126C (LdrpIncludeAlternateForwarders.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpComputePath(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  const void *Heap_0; // r12
  __int64 v6; // rsi
  __int64 v7; // rbx
  char v8; // r15
  unsigned int v9; // edi
  __int128 *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 *v13; // rdi
  _WORD *v14; // r15
  unsigned int v15; // r14d
  unsigned int v16; // esi
  int v17; // eax
  int v18; // r14d
  __int64 v20; // r14
  __int64 v21; // rdi
  _WORD *v22; // rax
  wchar_t *DirPath; // rax
  _WORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int8 v28; // [rsp+30h] [rbp-78h]
  int v29; // [rsp+34h] [rbp-74h]
  __int64 v30; // [rsp+40h] [rbp-68h] BYREF
  __int128 *v31; // [rsp+48h] [rbp-60h]
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
  v30 = 0LL;
  v8 = ((unsigned __int64)qword_1801E3500 >> 60) & 3;
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
      RtlEnterCriticalSection((__int64)&FastPebLock);
      v29 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL, 0LL, 0LL, &v30);
      v18 = v29;
      if ( v29 == -1073741789 )
      {
        v20 = v30;
        Heap_0 = (const void *)RtlAllocateHeap_0();
        if ( !Heap_0 )
        {
          RtlLeaveCriticalSection((__int64)&FastPebLock);
          return v7;
        }
        v18 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL, Heap_0, v20, &v30);
        v29 = v18;
      }
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      if ( v18 == -1073741568 )
      {
        a1 = v34;
        ++v9;
        a4 = v35;
        v30 = 0LL;
        v29 = 0;
      }
      else
      {
        if ( v18 < 0 )
          goto LABEL_23;
        v6 += 2 * v30 + 2;
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
          v31 = v10;
        goto LABEL_21;
      }
      switch ( (int)v11 )
      {
        case 0:
          if ( !(_WORD)LdrpDllDirectory )
            goto LABEL_21;
          a1 = v34;
          a4 = v35;
          v6 += (unsigned __int16)LdrpDllDirectory + 2LL;
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
          v6 += (unsigned __int16)RtlpSystemDirs;
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
  if ( (unsigned __int64)(v6 - 128) > 0xFFFE )
  {
    v18 = -1073741562;
  }
  else
  {
    v12 = RtlAllocateHeap_0();
    v7 = v12;
    if ( v12 )
    {
      v13 = v31;
      v14 = (_WORD *)(v12 + 128);
      *(_WORD *)(v12 + 72) = a2;
      *(_QWORD *)(v12 + 88) = 0LL;
      v15 = 0;
      *(_QWORD *)(v12 + 96) = 0LL;
      *(_QWORD *)(v12 + 104) = 0LL;
      *(_DWORD *)(v12 + 112) = v6;
      *(_QWORD *)(v12 + 120) = 0LL;
      if ( v13 )
      {
        *(_QWORD *)(v12 + 24) = v14;
        v26 = 7;
        if ( &RtlpSystem32Dirs != v13 )
          v26 = 2;
        *(_DWORD *)v7 = v26;
        memmove(v14, *((const void **)v13 + 1), *(unsigned __int16 *)v13);
        v15 = 1;
        v14 += (unsigned __int64)*(unsigned __int16 *)v13 >> 1;
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
          *(_DWORD *)(v7 + 4LL * v15) = *(_DWORD *)(v34 + 4LL * v16);
          *(_QWORD *)(v7 + 8LL * v15 + 24) = v14;
          v17 = *(_DWORD *)(v34 + 4LL * v16);
          if ( v17 == 4 )
          {
            *(_QWORD *)(v7 + 120) = v14;
            ++v15;
            *v14 = asc_180179D2C[0];
            v14 += 2;
            ++v16;
            *(v14 - 1) = 59;
          }
          else
          {
            switch ( v17 )
            {
              case 0:
                if ( !(_WORD)LdrpDllDirectory )
                  goto LABEL_16;
                memmove(v14, *((const void **)&LdrpDllDirectory + 1), (unsigned __int16)LdrpDllDirectory);
                v24 = &v14[(unsigned __int64)(unsigned __int16)LdrpDllDirectory >> 1];
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
                memmove(v14, *((const void **)&RtlpSystemDirs + 1), (unsigned __int16)RtlpSystemDirs);
                v14 += (unsigned __int64)(unsigned __int16)RtlpSystemDirs >> 1;
                goto LABEL_16;
              case 3:
                if ( !v30 )
                {
LABEL_16:
                  ++v15;
                  goto LABEL_17;
                }
                v21 = v30;
                memmove(v14, Heap_0, 2 * v30);
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
    RtlFreeHeap_0();
  if ( v7 && v18 < 0 )
  {
    RtlFreeHeap_0();
    return 0LL;
  }
  return v7;
}
