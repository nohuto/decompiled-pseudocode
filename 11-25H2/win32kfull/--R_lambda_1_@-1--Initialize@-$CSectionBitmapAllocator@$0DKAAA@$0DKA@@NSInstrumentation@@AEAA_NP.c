/*
 * XREFs of ??R_lambda_1_@?1??Initialize@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NPEAE@Z@QEBAPEAU_RTL_BITMAP@@I@Z @ 0x140207D98
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x140207CCC (-Initialize@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_BITMAP *__fastcall `NSInstrumentation::CSectionBitmapAllocator<237568,928>::Initialize'::`2'::_lambda_1_::operator()(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // rax
  ULONG v3; // edi
  struct _RTL_BITMAP *result; // rax
  struct _RTL_BITMAP *v5; // rbx

  v2 = 8LL;
  if ( a2 >= 8 )
    v2 = a2;
  v3 = v2;
  result = (struct _RTL_BITMAP *)ExAllocatePool2(
                                   258LL,
                                   (((unsigned __int64)(v2 + 31) >> 3) & 0xFFFFFFFC) + 16,
                                   1869834581LL);
  v5 = result;
  if ( result )
  {
    RtlInitializeBitMap(result, &result[1].SizeOfBitMap, v3);
    RtlClearAllBits(v5);
    return v5;
  }
  return result;
}
