/*
 * XREFs of wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl(unsigned_char_const___unsigned___int64)_::__move @ 0x180152660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_9fc267f27b766c721346ddc97f848132__void___cdecl_unsigned_char_const___unsigned___int64__::__move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)a2 = &off_1801792A0;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  result = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
