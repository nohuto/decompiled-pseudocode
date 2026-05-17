/*
 * XREFs of sxsisol_ExpandEnvironmentStrings_UEx @ 0x18009AD18
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180042600 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpEnsureBufferSize @ 0x18009AB80 (RtlpEnsureBufferSize.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18009C8A0 (RtlExpandEnvironmentStrings_U.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall sxsisol_ExpandEnvironmentStrings_UEx(__int64 a1, const void **a2, unsigned __int16 *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r8
  unsigned __int16 *v7; // rbx
  unsigned __int64 v9; // r8
  __int64 *v10; // rbx
  __int64 v11; // rcx
  unsigned __int16 v12; // cx
  unsigned __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]

  v16 = HIDWORD(a1);
  v15 = 0;
  if ( a2 && a3 && a2 != (const void **)a3 )
  {
    if ( *(_WORD *)a2 )
    {
      v14 = 0LL;
      RtlEnterCriticalSection((__int64)&FastPebLock);
      v5 = RtlExpandEnvironmentStrings_U(0LL, a2, &v14, &v15);
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741789 )
      {
        if ( v15 > 0xFFFE || (v6 = v15 + 4LL, v6 > 0xFFFE) )
        {
          v5 = -1073741562;
        }
        else
        {
          v7 = a3 + 16;
          if ( (a3 == (unsigned __int16 *)-16LL || v6 > *(_QWORD *)v7)
            && (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v6) < 0 )
          {
            v5 = -1073741801;
          }
          else
          {
            *((_QWORD *)a3 + 1) = *((_QWORD *)a3 + 2);
            a3[1] = *v7;
            v5 = RtlExpandEnvironmentStrings_U(0LL, a2, a3, 0LL);
            if ( v5 >= 0 )
              v5 = 0;
          }
        }
      }
      RtlLeaveCriticalSection((__int64)&FastPebLock);
    }
    else
    {
      *a3 = 0;
      v9 = *(unsigned __int16 *)a2 + 2LL;
      if ( v9 <= 0xFFFE )
      {
        v10 = (__int64 *)(a3 + 8);
        if ( (a3 == (unsigned __int16 *)-16LL || v9 > *((_QWORD *)a3 + 4))
          && (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v9) < 0 )
        {
          return (unsigned int)-1073741801;
        }
        else
        {
          v11 = *v10;
          *((_QWORD *)a3 + 1) = *v10;
          memmove((void *)(v11 + 2 * ((unsigned __int64)*a3 >> 1)), a2[1], *(unsigned __int16 *)a2);
          v12 = *a3;
          a3[1] = *(_WORD *)a2 + *a3 + 2;
          v13 = (unsigned __int16)(*(_WORD *)a2 + v12);
          *a3 = v13;
          *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * (v13 >> 1)) = 0;
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1073741562;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
