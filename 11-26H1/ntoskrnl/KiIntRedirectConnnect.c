/*
 * XREFs of KiIntRedirectConnnect @ 0x140432334
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14043217C (KiIntSteerChooseInitialTargetProcessors.c)
 * Callees:
 *     KiIntRedirectAllocateObject @ 0x1404FADBC (KiIntRedirectAllocateObject.c)
 */

__int64 __fastcall KiIntRedirectConnnect(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  result = KiIntRedirectAllocateObject(a3, &v9);
  if ( (int)result >= 0 && a2 )
  {
    v6 = v9;
    v7 = a2;
    do
    {
      v8 = *a1++;
      *(_QWORD *)(v8 + 272) = v6;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
