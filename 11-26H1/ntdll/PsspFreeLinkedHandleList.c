/*
 * XREFs of PsspFreeLinkedHandleList @ 0x1800B4C48
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800B36E0 (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 */

void __fastcall PsspFreeLinkedHandleList(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbp
  unsigned int *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 )
  {
    v8 = a1;
    v7 = 0LL;
    v1 = a1;
    v2 = a1;
    v3 = a1;
    do
    {
      v4 = (_QWORD *)*v1;
      v5 = (unsigned int *)v3 + 3;
      v1 = (_QWORD *)*v1;
      if ( *((_WORD *)v2 + 5) )
      {
        v6 = *((unsigned __int16 *)v2 + 5);
        do
        {
          NtClose((HANDLE)*v5++);
          --v6;
        }
        while ( v6 );
      }
      v7 = 1LL;
      ZwFreeVirtualMemory(-1LL, &v8, &v7, 0x8000LL);
      v8 = v1;
      v2 = v4;
      v3 = v4;
    }
    while ( v1 );
  }
}
