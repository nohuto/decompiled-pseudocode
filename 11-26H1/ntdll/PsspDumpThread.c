/*
 * XREFs of PsspDumpThread @ 0x1800B3AE8
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800B36E0 (PsspCaptureThreadInformation.c)
 * Callees:
 *     PsspInitializeContextOrExtendedContext @ 0x1800B3E10 (PsspInitializeContextOrExtendedContext.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x180160E90 (ZwGetContextThread.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDumpThread(__int64 *a1, __int16 a2, int a3, int a4, int a5, __int64 a6)
{
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // esi
  void *v13; // r15
  unsigned int v14; // eax
  __int64 result; // rax
  size_t v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r12d
  unsigned int v19; // eax
  __int16 v20; // ax
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h]
  int v24; // [rsp+3Ch] [rbp-C4h]
  int v25; // [rsp+40h] [rbp-C0h]
  size_t Size; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v27; // [rsp+50h] [rbp-B0h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h]

  v25 = a3;
  v24 = a4;
  v21 = 0;
  memset_thunk_772440563353939046(&v27, 0, 0x210uLL);
  v9 = a4 + 15;
  v22 = 0;
  v10 = *a1;
  v11 = v9 & 0xFFFFFFF0;
  LODWORD(Size) = v11;
  v23 = a2 & 0x100;
  v12 = v11 + 128;
  if ( (a2 & 0x100) != 0 )
    v13 = (void *)(v10 + 128 + v11);
  else
    v13 = (void *)(v10 + 128);
  v14 = *((_DWORD *)a1 + 3);
  if ( v14 + v12 < v14 )
    return 3221225621LL;
  if ( v14 + v12 > *((_DWORD *)a1 + 2) )
    return 3221225507LL;
  memset_thunk_772440563353939046((void *)v10, 0, 0x80uLL);
  result = ZwQueryInformationThread(a6, 0LL, v10, 48LL, &v21);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 0x400) != 0 && (int)ZwQueryInformationThread(a6, 21LL, v10 + 48, 24LL, &v21) < 0 )
      *(_WORD *)(v10 + 56) = -1;
    result = ZwQueryInformationThread(a6, 1LL, v10 + 72, 32LL, &v21);
    if ( (int)result >= 0 )
    {
      result = ZwQueryInformationThread(a6, 9LL, v10 + 104, 8LL, &v21);
      if ( (int)result >= 0 )
      {
        result = ZwQueryInformationThread(a6, 20LL, &v22, 4LL, &v21);
        if ( (int)result >= 0 )
        {
          v20 = v22 != 0;
          *(_WORD *)(v10 + 124) &= ~1u;
          *(_WORD *)(v10 + 124) |= v20;
          result = ZwQueryInformationThread(a6, 35LL, &v22, 4LL, &v21);
          if ( (int)result >= 0 )
          {
            *(_WORD *)(v10 + 122) = v22;
            if ( v23 )
            {
              *(_WORD *)(v10 + 124) &= 1u;
              v16 = (unsigned int)Size;
              *(_WORD *)(v10 + 124) |= 2 * (_WORD)v24;
              v17 = PsspInitializeContextOrExtendedContext((void *)(v10 + 128), v16);
              if ( (int)ZwGetContextThread(a6, v17) < 0 )
              {
                *(_WORD *)(v10 + 124) &= 1u;
                v12 = 128;
              }
            }
            v18 = v12;
            if ( (int)ZwQueryInformationThread(a6, 38LL, &v27, 528LL, &v21) >= 0 && v27 )
            {
              v12 += (v27 + 15) & 0xFFFFFFF0;
              v19 = *((_DWORD *)a1 + 3);
              if ( v12 + v19 < v19 || v12 + v19 > *((_DWORD *)a1 + 2) )
              {
                v12 = v18;
              }
              else
              {
                memmove(v13, Src, v27);
                *(_WORD *)(v10 + 120) = v27;
              }
            }
            *(_QWORD *)(v10 + 112) = MEMORY[0x7FFE0014];
            *((_DWORD *)a1 + 3) += v12;
            ++*((_DWORD *)a1 + 4);
            *a1 += v12;
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
