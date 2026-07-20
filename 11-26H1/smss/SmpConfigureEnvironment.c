/*
 * XREFs of SmpConfigureEnvironment @ 0x1400137E0
 * Callers:
 *     <none>
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     memcpy_0 @ 0x14001E82B (memcpy_0.c)
 */

__int64 __fastcall SmpConfigureEnvironment(wchar_t *Str1, __int64 a2, const WCHAR *a3, unsigned int a4)
{
  SIZE_T v5; // rbp
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  WCHAR *Heap; // rax
  const WCHAR *v11; // rbx
  struct _UNICODE_STRING Name; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = a4;
  Name = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&Name, Str1);
  RtlInitUnicodeString(&DestinationString, a3);
  v7 = RtlSetEnvironmentVariable(0LL, &Name, &DestinationString);
  v8 = v7;
  if ( v7 < 0 )
  {
    SmpLogFailureString((__int64)"SmpConfigureEnvironment", 0x1FA9u, (__int64)Name.Buffer, v7);
    return v8;
  }
  if ( !_wcsicmp(Str1, L"Path") && ++SmpCalledConfigEnv == 2 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v5);
    SmpDefaultLibPathBuffer = (__int64)Heap;
    v11 = Heap;
    if ( !Heap )
      return 3221225495LL;
    memcpy_0(Heap, a3, v5);
    RtlInitUnicodeString(&SmpDefaultLibPath, v11);
  }
  return 0LL;
}
