/*
 * XREFs of PsspDumpThread @ 0x1800B1008
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800B0C00 (PsspCaptureThreadInformation.c)
 * Callees:
 *     PsspInitializeContextOrExtendedContext @ 0x1800B1330 (PsspInitializeContextOrExtendedContext.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x180160D90 (ZwGetContextThread.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspDumpThread(__int64 *a1, __int16 a2, ULONG a3, int a4, int a5, HANDLE ThreadHandle)
{
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // esi
  void *v13; // r15
  unsigned int v14; // eax
  NTSTATUS result; // eax
  ULONG v16; // r8d
  size_t v17; // rdx
  struct _CONTEXT *v18; // rax
  unsigned int v19; // r12d
  unsigned int v20; // eax
  __int16 v21; // ax
  ULONG ReturnLength; // [rsp+30h] [rbp-D0h] BYREF
  int ThreadInformation; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h]
  int v25; // [rsp+3Ch] [rbp-C4h]
  ULONG ContextFlags; // [rsp+40h] [rbp-C0h]
  size_t Size; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v28; // [rsp+50h] [rbp-B0h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h]

  ContextFlags = a3;
  v25 = a4;
  ReturnLength = 0;
  memset_thunk_772440563353939046(&v28, 0, 0x210uLL);
  v9 = a4 + 15;
  ThreadInformation = 0;
  v10 = *a1;
  v11 = v9 & 0xFFFFFFF0;
  LODWORD(Size) = v11;
  v24 = a2 & 0x100;
  v12 = v11 + 128;
  if ( (a2 & 0x100) != 0 )
    v13 = (void *)(v10 + 128 + v11);
  else
    v13 = (void *)(v10 + 128);
  v14 = *((_DWORD *)a1 + 3);
  if ( v14 + v12 < v14 )
    return -1073741675;
  if ( v14 + v12 > *((_DWORD *)a1 + 2) )
    return -1073741789;
  memset_thunk_772440563353939046((void *)v10, 0, 0x80uLL);
  result = ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, (PVOID)v10, 0x30u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( (a2 & 0x400) != 0
      && ZwQueryInformationThread(ThreadHandle, ThreadLastSystemCall, (PVOID)(v10 + 48), 0x18u, &ReturnLength) < 0 )
    {
      *(_WORD *)(v10 + 56) = -1;
    }
    result = ZwQueryInformationThread(ThreadHandle, ThreadTimes, (PVOID)(v10 + 72), 0x20u, &ReturnLength);
    if ( result >= 0 )
    {
      result = ZwQueryInformationThread(
                 ThreadHandle,
                 ThreadQuerySetWin32StartAddress,
                 (PVOID)(v10 + 104),
                 8u,
                 &ReturnLength);
      if ( result >= 0 )
      {
        result = ZwQueryInformationThread(ThreadHandle, ThreadIsTerminated, &ThreadInformation, 4u, &ReturnLength);
        if ( result >= 0 )
        {
          v21 = ThreadInformation != 0;
          *(_WORD *)(v10 + 124) &= ~1u;
          *(_WORD *)(v10 + 124) |= v21;
          result = ZwQueryInformationThread(ThreadHandle, ThreadSuspendCount, &ThreadInformation, 4u, &ReturnLength);
          if ( result >= 0 )
          {
            *(_WORD *)(v10 + 122) = ThreadInformation;
            if ( v24 )
            {
              v16 = ContextFlags;
              *(_WORD *)(v10 + 124) &= 1u;
              v17 = (unsigned int)Size;
              *(_WORD *)(v10 + 124) |= 2 * (_WORD)v25;
              v18 = (struct _CONTEXT *)PsspInitializeContextOrExtendedContext((void *)(v10 + 128), v17, v16);
              if ( ZwGetContextThread(ThreadHandle, v18) < 0 )
              {
                *(_WORD *)(v10 + 124) &= 1u;
                v12 = 128;
              }
            }
            v19 = v12;
            if ( ZwQueryInformationThread(ThreadHandle, ThreadNameInformation, &v28, 0x210u, &ReturnLength) >= 0 && v28 )
            {
              v12 += (v28 + 15) & 0xFFFFFFF0;
              v20 = *((_DWORD *)a1 + 3);
              if ( v12 + v20 < v20 || v12 + v20 > *((_DWORD *)a1 + 2) )
              {
                v12 = v19;
              }
              else
              {
                memmove(v13, Src, v28);
                *(_WORD *)(v10 + 120) = v28;
              }
            }
            *(_QWORD *)(v10 + 112) = MEMORY[0x7FFE0014];
            *((_DWORD *)a1 + 3) += v12;
            ++*((_DWORD *)a1 + 4);
            *a1 += v12;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
