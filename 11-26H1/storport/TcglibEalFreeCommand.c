/*
 * XREFs of TcglibEalFreeCommand @ 0x14008D1C4
 * Callers:
 *     TcglibpAllocateRequestResources @ 0x140133C68 (TcglibpAllocateRequestResources.c)
 *     TcglibpReleaseRequestResources @ 0x1401342A0 (TcglibpReleaseRequestResources.c)
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x140134E98 (TcglibpGetProtocolList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TcglibEalFreeCommand(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  void *v4; // rdi
  void *v5; // rsi

  v2 = 0;
  if ( *a1 == 1431193940 || *a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v3 = *(unsigned int *)(a2 + 120);
      v4 = *(void **)(a2 + 64);
      v5 = *(void **)(v3 + a2 + 16);
      *(_QWORD *)(a2 + 80) = 0LL;
      *(_QWORD *)(a2 + 104) = 0LL;
      *(_QWORD *)(a2 + 64) = 0LL;
      *(_QWORD *)(v3 + a2 + 16) = 0LL;
    }
    else
    {
      v4 = *(void **)(a2 + 24);
      v5 = *(void **)(a2 + 32);
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 48) = 0LL;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)a2, 0x72536152u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4E536152u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x43546152u);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
