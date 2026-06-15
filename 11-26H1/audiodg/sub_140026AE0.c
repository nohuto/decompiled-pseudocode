/*
 * XREFs of sub_140026AE0 @ 0x140026AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_140026AE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  LARGE_INTEGER v4; // rax
  void *v5; // rcx
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 4664);
  if ( !*(_QWORD *)(a1 + 312) )
  {
    *(_BYTE *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 376) = v1;
    return v1;
  }
  v3 = *(_QWORD *)(a1 + 304);
  if ( v3 > v1 )
  {
    v4.QuadPart = v1 - v3;
    v5 = *(void **)(a1 + 296);
    DueTime = v4;
    LOBYTE(v1) = SetWaitableTimer(v5, &DueTime, (int)((double)*(int *)(a1 + 88) * 1.5 / 10000.0), 0LL, 0LL, 0);
LABEL_6:
    *(_BYTE *)(a1 + 272) = 1;
    return v1;
  }
  LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 0);
  if ( !(_DWORD)v1 )
    goto LABEL_6;
  LOBYTE(v1) = *(_BYTE *)(a1 + 4681);
  *(_BYTE *)(a1 + 4752) = 1;
  if ( (_BYTE)v1 )
    ++*(_QWORD *)(a1 + 4728);
  else
    ++*(_QWORD *)(a1 + 4736);
  *(_BYTE *)(a1 + 272) = 0;
  if ( (_BYTE)v1 )
    *(_BYTE *)(a1 + 4681) = 0;
  return v1;
}
