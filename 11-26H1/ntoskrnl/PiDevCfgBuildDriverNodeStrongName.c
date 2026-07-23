/*
 * XREFs of PiDevCfgBuildDriverNodeStrongName @ 0x140A43690
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     RtlHashUnicodeString @ 0x140A43AE0 (RtlHashUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgBuildDriverNodeStrongName(
        __int64 a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4)
{
  unsigned __int16 *v4; // r12
  __int64 v5; // r13
  int v7; // edx
  int v9; // ecx
  unsigned int v12; // ecx
  wchar_t *Pool2; // rax
  ULONG v14; // ebx
  ULONG v15; // r8d
  NTSTATUS v16; // ebx
  ULONG v18; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+B0h] [rbp+30h] BYREF

  v4 = (unsigned __int16 *)(a1 + 72);
  v5 = a1 + 88;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  HashValue = 0;
  v7 = *(unsigned __int16 *)(a1 + 88);
  v9 = *(unsigned __int16 *)(a1 + 40);
  v18 = 0;
  v12 = *v4 + v7 + v9 + 90;
  if ( (unsigned __int64)v12 + 2 > 0xFFFE )
  {
    return (unsigned int)-1073741562;
  }
  else
  {
    DestinationString.Length = v12;
    DestinationString.MaximumLength = v12 + 2;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    DestinationString.Buffer = Pool2;
    if ( Pool2 )
    {
      if ( a2->Buffer && RtlHashUnicodeString(a2, 1u, 0, &HashValue) >= 0 )
        v14 = HashValue;
      else
        v14 = 0;
      if ( a3->Buffer && RtlHashUnicodeString(a3, 1u, 0, &v18) >= 0 )
        v15 = v18;
      else
        v15 = 0;
      v16 = RtlUnicodeStringPrintf(
              &DestinationString,
              L"%wZ:%08x%08x:%wZ:%u.%u.%u.%u:%wZ",
              a1 + 40,
              v14,
              v15,
              v5,
              (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124)),
              *(unsigned __int16 *)(a1 + 124),
              *(unsigned __int16 *)(a1 + 122),
              *(unsigned __int16 *)(a1 + 120),
              v4);
      if ( v16 >= 0 )
      {
        *a4 = DestinationString;
        Pool2 = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      }
      else
      {
        Pool2 = DestinationString.Buffer;
      }
    }
    else
    {
      v16 = -1073741670;
    }
    if ( Pool2 )
      ExFreePool(Pool2);
  }
  return (unsigned int)v16;
}
