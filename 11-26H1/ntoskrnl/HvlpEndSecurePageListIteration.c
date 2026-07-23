/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x1405C49F8
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405C1894 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1405C1A10 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405C2774 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1405C323C (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     HvlpGetPageListIterator @ 0x1405C4B78 (HvlpGetPageListIterator.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, unsigned int *a3)
{
  int v5; // ebp
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx
  _BYTE v9[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BOOL8 v10; // [rsp+28h] [rbp-A0h]
  size_t Size; // [rsp+30h] [rbp-98h]

  v5 = a1;
  result = HvlpGetPageListIterator(a1);
  v7 = result;
  if ( *(_BYTE *)(result + 2) )
  {
    memset_0(v9, 0, 0x68uLL);
    v10 = v5 == 0;
    result = VslpEnterIumSecureMode(2u, 0x801u, 0, (__int64)v9);
    v8 = 0;
    if ( (int)result >= 0 )
      v8 = Size;
    if ( a3 && v8 <= *a3 )
    {
      *a3 = v8;
      if ( v8 )
        result = (__int64)memmove(a2, *(const void **)(v7 + 8), v8);
    }
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_WORD *)v7 = 0;
    *(_WORD *)(v7 + 3) = 0;
    *(_BYTE *)(v7 + 2) = 0;
  }
  return result;
}
