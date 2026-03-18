/*
 * XREFs of ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x180173920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::SetBlendMode(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  int v5; // edx
  int v6; // ecx
  __int64 v7; // rsi

  result = *(unsigned int *)(a1 + 56);
  v4 = a2;
  if ( a2 != (_DWORD)result )
  {
    v5 = 4;
    v6 = result == 22;
    result = (_DWORD)v4 == 22;
    if ( v6 != (_DWORD)result )
      v5 = -2147483642;
    *(_DWORD *)(a1 + 32) |= v5;
    v7 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v7 + 40) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v7 + 16) + 552LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v7 + 16) + 552LL),
        *(_QWORD *)(v7 + 24),
        0LL);
      *(_QWORD *)(v7 + 40) = 0LL;
      *(_DWORD *)(v7 + 48) = 0;
      if ( *(_BYTE *)(a1 + 74) )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 104LL))(
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 88),
                   *(unsigned int *)(a1 + 76));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v7 + 64) + 552LL) + 120LL))(
          *(_QWORD *)(*(_QWORD *)(v7 + 64) + 552LL),
          *(_QWORD *)(v7 + 72),
          0LL);
        *(_QWORD *)(v7 + 88) = 0LL;
        *(_DWORD *)(v7 + 96) = 0;
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 92),
                   *(unsigned int *)(a1 + 80),
                   0LL);
      }
      ++*(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 88) = 0LL;
      *(_DWORD *)(a1 + 96) = 0;
    }
    if ( (_DWORD)v4 != 24 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 280LL))(
                 *(_QWORD *)(a1 + 16),
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v4 + 1568),
                 0LL,
                 0xFFFFFFFFLL);
    *(_DWORD *)(a1 + 56) = v4;
  }
  return result;
}
