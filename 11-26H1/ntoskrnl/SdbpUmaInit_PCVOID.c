/*
 * XREFs of SdbpUmaInit_PCVOID @ 0x140714934
 * Callers:
 *     SdbpCheckMatchingRegistryValue @ 0x140882FC0 (SdbpCheckMatchingRegistryValue.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 */

__int64 (*__fastcall SdbpUmaInit_PCVOID(__int64 (*Src)(void), size_t Size, __int64 (**a3)(void)))(void)
{
  __int64 (*result)(void); // rax
  __int64 (*v7)(void); // rbx

  a3[1] = Src;
  result = (__int64 (*)(void))((char *)Src - 1);
  if ( (unsigned __int64)Src - 1 <= 0xFFFF7FFFFFFFFFFEuLL && Size )
  {
    result = (__int64 (*)(void))AslAlloc();
    v7 = result;
    if ( result )
      result = RtlCopyFromUser(result, Src, Size);
    *a3 = v7;
  }
  else
  {
    *a3 = Src;
  }
  return result;
}
