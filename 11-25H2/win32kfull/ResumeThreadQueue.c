/*
 * XREFs of ResumeThreadQueue @ 0x1401B15A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResumeThreadQueue(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0);
  if ( (result & 0x1000000) != 0 )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0);
    if ( (result & 1) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 432LL) = a2;
      if ( *(_DWORD *)(a1 + 1304) )
        *(_DWORD *)(a1 + 1304) = a2;
      result = *(_QWORD *)(a1 + 488);
      _InterlockedExchange(
        (volatile __int32 *)(result + 20),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    }
  }
  return result;
}
