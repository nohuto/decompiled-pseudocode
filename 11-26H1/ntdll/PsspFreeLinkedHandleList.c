/*
 * XREFs of PsspFreeLinkedHandleList @ 0x1800B2168
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800B0C00 (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

void __fastcall PsspFreeLinkedHandleList(char *a1)
{
  _QWORD *v1; // rbx
  _WORD *v2; // rax
  char *v3; // rdi
  _QWORD *v4; // rbp
  unsigned int *v5; // rdi
  __int64 v6; // rsi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 )
  {
    BaseAddress = a1;
    RegionSize = 0LL;
    v1 = a1;
    v2 = a1;
    v3 = a1;
    do
    {
      v4 = (_QWORD *)*v1;
      v5 = (unsigned int *)(v3 + 12);
      v1 = (_QWORD *)*v1;
      if ( v2[5] )
      {
        v6 = (unsigned __int16)v2[5];
        do
        {
          NtClose((HANDLE)*v5++);
          --v6;
        }
        while ( v6 );
      }
      RegionSize = 1LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      BaseAddress = v1;
      v2 = v4;
      v3 = (char *)v4;
    }
    while ( v1 );
  }
}
