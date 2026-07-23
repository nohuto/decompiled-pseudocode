/*
 * XREFs of ExSecurePoolValidate @ 0x1406D5010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSecurePoolValidate(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rdx

  v4 = 0;
  v5 = a2;
  if ( a1 )
  {
    v6 = (unsigned __int64)&dword_140E6BF60 ^ qword_140E6BFA8 ^ a1;
    if ( *(_DWORD *)v6 == -1381122884 )
    {
      if ( v6 )
      {
        v7 = (_QWORD *)(a3 - 16);
        if ( (PVOID)(a3 - 16) >= ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Object
          && v7 < ExSaPageGroupDescriptorArrayLock.WaitBlock[0].SparePtr )
        {
          return *v7 == (*(_QWORD *)(v6 + 8) ^ a4 ^ v5);
        }
      }
    }
  }
  return v4;
}
