/*
 * XREFs of ?SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z @ 0x180174B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DBatchExecutionContext::SetDrawMethod(__int64 a1, char a2)
{
  __int64 v4; // rsi

  if ( a2 != *(_BYTE *)(a1 + 74) )
  {
    *(_DWORD *)(a1 + 32) |= 0x200u;
    v4 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v4 + 40) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 552LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v4 + 16) + 552LL),
        *(_QWORD *)(v4 + 24),
        0LL);
      *(_QWORD *)(v4 + 40) = 0LL;
      *(_DWORD *)(v4 + 48) = 0;
      if ( *(_BYTE *)(a1 + 74) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 104LL))(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 88),
          *(unsigned int *)(a1 + 76));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 64) + 552LL) + 120LL))(
          *(_QWORD *)(*(_QWORD *)(v4 + 64) + 552LL),
          *(_QWORD *)(v4 + 72),
          0LL);
        *(_QWORD *)(v4 + 88) = 0LL;
        *(_DWORD *)(v4 + 96) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 92),
          *(unsigned int *)(a1 + 80),
          0LL);
      }
      ++*(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 88) = 0LL;
      *(_DWORD *)(a1 + 96) = 0;
    }
    *(_BYTE *)(a1 + 74) = a2;
  }
}
