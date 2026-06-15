/*
 * XREFs of ?GetImplementation@CProcess@@UEAAJPEAPEAV1@@Z @ 0x1800247F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetImplementation(CProcess *this, struct CProcess **a2)
{
  unsigned int v2; // r9d
  signed __int32 i; // eax

  v2 = 0;
  if ( a2 )
  {
    *a2 = (CProcess *)((char *)this - 8);
    for ( i = *((_DWORD *)this + 3);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)this + 3, i + 1, i);
          i = *((_DWORD *)this + 3) )
    {
      ;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
