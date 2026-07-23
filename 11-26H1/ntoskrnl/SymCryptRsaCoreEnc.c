/*
 * XREFs of SymCryptRsaCoreEnc @ 0x140560DD8
 * Callers:
 *     SymCryptRsaPkcs1Verify @ 0x1405611D4 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     SymCryptIntBitsizeOfValue @ 0x14055E660 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntSetValueUint64 @ 0x14055E8CC (SymCryptIntSetValueUint64.c)
 *     SymCryptIntWipe @ 0x14055E9BC (SymCryptIntWipe.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementGetValue @ 0x14055EA84 (SymCryptModElementGetValue.c)
 *     SymCryptModElementSetValue @ 0x14055EB00 (SymCryptModElementSetValue.c)
 *     SymCryptModExp @ 0x14055EC94 (SymCryptModExp.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140560FB4 (SymCryptRsaCoreVerifyInput.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptRsaCoreEnc(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int Value; // ebx
  __int64 v14; // rbx
  void *v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rbx
  int v19; // eax
  __int64 v21; // [rsp+40h] [rbp-108h]

  Value = SymCryptRsaCoreVerifyInput(a1, a2, a3, a4, a7, a8);
  if ( !Value )
  {
    v14 = (unsigned int)SymCryptSizeofModElementFromModulus(*(_QWORD *)(a1 + 120));
    v15 = (void *)SymCryptModElementCreate();
    v16 = a9 - v14;
    v21 = v14 + a8;
    Value = SymCryptModElementSetValue(a2, a3, a4, *(_DWORD **)(a1 + 120), v15, v14 + a8, a9 - v14);
    if ( !Value )
    {
      v17 = SymCryptIntCreate();
      if ( v17 )
      {
        SymCryptIntSetValueUint64();
        v18 = *(_QWORD *)(a1 + 120);
        v19 = SymCryptIntBitsizeOfValue();
        SymCryptModExp(v18, (int)v15, v17, v19, 1, (__int64)v15, v21, v16);
        Value = SymCryptModElementGetValue(*(_QWORD *)(a1 + 120), (int)v15, a6, a7, a4, v21, v16);
        SymCryptIntWipe(v17);
      }
      else
      {
        return 32778;
      }
    }
  }
  return Value;
}
