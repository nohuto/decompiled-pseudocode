/*
 * XREFs of ACPIGetPnpLocationString @ 0x1400C6B70
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x14003D704 (AMLIGetNSObjectNameSegment.c)
 *     RtlStringCchPrintfExW @ 0x14003E964 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIGetPnpLocationString(__int64 *a1, wchar_t **a2)
{
  __int64 v4; // r13
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, PVOID *); // rax
  unsigned int v7; // ebx
  char v8; // r14
  int v9; // eax
  _WORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  wchar_t *Pool2; // rax
  wchar_t *v16; // rdi
  NTSTATUS v17; // ebx
  wchar_t *v19; // rsi
  WCHAR *v20; // rbx
  __int64 v21; // rdi
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h] BYREF
  PUCHAR SourceCharacter; // [rsp+50h] [rbp-30h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-28h] BYREF
  _WORD v26[8]; // [rsp+60h] [rbp-20h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v23 = 0;
  SourceCharacter = 0LL;
  v5 = *(_QWORD *)(v4 + 760);
  if ( v5 )
  {
    v23 = AMLIGetNSObjectNameSegment(v5);
    v20 = v26;
    v21 = 4LL;
    SourceCharacter = (PUCHAR)&v23;
    do
    {
      *v20++ = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      --v21;
    }
    while ( v21 );
    v26[4] = 0;
  }
  else
  {
    v26[0] = 0;
  }
  v6 = (__int64 (__fastcall *)(__int64, PVOID *))a1[5];
  v7 = 0;
  P = 0LL;
  v8 = 0;
  if ( v6 )
  {
    v9 = v6(a1[2], &P);
    if ( v9 == 288 )
    {
      v8 = 1;
    }
    else if ( v9 < 0 )
    {
      P = 0LL;
    }
    v10 = P;
    if ( P )
    {
      if ( *(_WORD *)P )
      {
        do
        {
          v11 = -1LL;
          do
            ++v11;
          while ( v10[v11] );
          v7 += v11 + 1;
          v12 = -1LL;
          do
            ++v12;
          while ( v10[v12] );
          v10 += v12 + 1;
        }
        while ( *v10 );
      }
      ++v7;
    }
  }
  v13 = v7;
  if ( v26[0] )
    v13 = v7 + 12;
  if ( v13 )
  {
    v14 = v13 + 1;
    if ( !v8 )
      v14 = v13;
    if ( v26[0] )
      ++v14;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v14, 1399874369LL);
    v16 = Pool2;
    if ( Pool2 )
    {
      v19 = Pool2;
      if ( P )
      {
        if ( v8 )
        {
          *Pool2 = 64;
          v19 = Pool2 + 1;
        }
        memmove(v19, P, 2LL * v7);
        v19 += v7 - 1;
      }
      if ( !v26[0]
        || (*v19 = 33,
            v17 = RtlStringCchPrintfExW(v19 + 1, 0xCuLL, 0LL, &pcchRemaining, 0x200u, L"ACPI(%ws)", v26),
            v17 >= 0) )
      {
        *a2 = v16;
        v17 = *(_QWORD *)(v4 + 792) == 0LL ? 0x120 : 0;
      }
    }
    else
    {
      v17 = -1073741670;
    }
  }
  else
  {
    v17 = -1073741637;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v17;
}
