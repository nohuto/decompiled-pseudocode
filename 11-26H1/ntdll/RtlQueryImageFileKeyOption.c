/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x1800D3070
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x180088964 (WerpGlobalFlagsForProcess.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D1F10 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D2134 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpMinimalMapModule @ 0x1800D2308 (LdrpMinimalMapModule.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800D2D5C (RtlpQueryEafPlusModuleList.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D2DD0 (LdrpQueryIllegalCWDDevices.c)
 *     RtlQueryApplicationKeyOption @ 0x1800D2EDC (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1800D2FD0 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpHpQueryGCTimerInterval @ 0x1800D3FBC (RtlpHpQueryGCTimerInterval.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180112290 (LdrpInitializeApplicationVerifierPackage.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryImageFileKeyOption(__int64 a1, const wchar_t *a2, int a3, int *a4, unsigned int a5, int *a6)
{
  size_t v10; // rax
  unsigned int v11; // esi
  _DWORD *Heap_0; // rdi
  __int64 result; // rax
  unsigned int v14; // ebx
  _DWORD *v15; // r12
  int *v16; // rcx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  unsigned int v20; // eax
  size_t v21; // r8
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  const wchar_t *v24; // [rsp+40h] [rbp-C0h]
  int *v25; // [rsp+48h] [rbp-B8h]
  _BYTE v26[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v25 = a6;
  memset_thunk_772440563353939046(v26, 0, 0x400uLL);
  v22 = 0;
  v23 = 0LL;
  v24 = a2;
  if ( a2 )
  {
    v10 = wcslen(a2);
    if ( v10 > 0x7FFE )
      return 3221225734LL;
    LOWORD(v23) = 2 * v10;
    WORD1(v23) = 2 * v10 + 2;
  }
  v11 = a5;
  if ( a5 >= 0x3F4 )
  {
    v18 = a5 + 12;
    goto LABEL_32;
  }
  Heap_0 = v26;
  result = NtQueryValueKey(a1, &v23, 2LL, v26, 1024, &v22);
  v14 = result;
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
LABEL_9:
    v16 = Heap_0 + 2;
    if ( !a3 )
    {
      if ( *v16 > a5 )
      {
        v22 = *v16;
        goto LABEL_41;
      }
      a3 = Heap_0[1];
      v11 = *v16;
    }
    v17 = Heap_0[1];
    switch ( v17 )
    {
      case 3:
      case 7:
        if ( a3 == v17 )
        {
          v22 = *v16;
          if ( !a4 || *v16 > v11 )
            goto LABEL_41;
          v21 = (unsigned int)*v16;
          goto LABEL_38;
        }
        break;
      case 4:
        if ( a3 == 4 )
        {
          if ( v11 == 4 && Heap_0[2] == 4 )
          {
            v22 = 4;
            if ( a4 )
            {
              *a4 = Heap_0[3];
              goto LABEL_25;
            }
LABEL_41:
            v14 = -2147483643;
            goto LABEL_25;
          }
          goto LABEL_58;
        }
        break;
      case 11:
        if ( a3 == 11 )
        {
          if ( v11 == 8 && Heap_0[2] == 8 )
          {
            v22 = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)(Heap_0 + 3);
              goto LABEL_25;
            }
            goto LABEL_41;
          }
          goto LABEL_58;
        }
        break;
      case 1:
        if ( a3 == 4 )
        {
          if ( v11 == 4 )
          {
            if ( ((unsigned __int8)a4 & 3) == 0 )
            {
              v22 = 4;
              if ( a4 )
              {
                v24 = (const wchar_t *)(Heap_0 + 3);
                LOWORD(v23) = *((_WORD *)Heap_0 + 4);
                WORD1(v23) = *((_WORD *)Heap_0 + 4);
                v14 = RtlUnicodeStringToInteger((unsigned __int16 *)&v23, 0, a4);
LABEL_25:
                if ( v25 && ((int)(v14 + 0x80000000) < 0 || v14 == -2147483643) )
                  *v25 = v22;
                goto LABEL_26;
              }
              goto LABEL_41;
            }
            v14 = -2147483646;
LABEL_26:
            if ( v15 )
LABEL_27:
              RtlFreeHeap_0();
            return v14;
          }
LABEL_58:
          v14 = -1073741820;
          goto LABEL_26;
        }
        v20 = Heap_0[2];
        v22 = v20;
        if ( v20 > v11 )
          goto LABEL_41;
        v21 = v20;
LABEL_38:
        memmove(a4, Heap_0 + 3, v21);
        goto LABEL_25;
      default:
        v14 = -1073741788;
        goto LABEL_25;
    }
    v14 = -1073741788;
    goto LABEL_26;
  }
  if ( (_DWORD)result == -2147483643 )
  {
    while ( 1 )
    {
      v18 = v22;
LABEL_32:
      if ( !NtCurrentPeb()->ProcessHeap )
        return 3221225495LL;
      Heap_0 = (_DWORD *)RtlAllocateHeap_0();
      v15 = Heap_0;
      if ( !Heap_0 )
        return 3221225495LL;
      v19 = NtQueryValueKey(a1, &v23, 2LL, Heap_0, v18, &v22);
      v14 = v19;
      if ( v19 >= 0 )
        goto LABEL_9;
      if ( v19 != -2147483643 )
        goto LABEL_27;
      RtlFreeHeap_0();
    }
  }
  return result;
}
