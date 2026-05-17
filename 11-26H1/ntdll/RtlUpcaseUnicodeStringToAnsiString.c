/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1801406A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x180034070 (RtlUnicodeToMultiByteSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x180034130 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18003B340 (AllocateOrValidateCharStringBuffer.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(__int64 a1, PWCH *a2, char a3)
{
  unsigned int v6; // edx
  __int64 result; // rax
  _WORD *v8; // r15
  __int64 *v9; // rdi
  int v10; // ebx
  __int16 v11; // dx
  unsigned int v12; // [rsp+78h] [rbp+10h] BYREF
  char v13; // [rsp+80h] [rbp+18h]

  v13 = a3;
  v12 = 0;
  RtlUnicodeToMultiByteSize(&v12, a2[1], *(unsigned __int16 *)a2);
  v6 = v12 + 1;
  v12 = v6;
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  v8 = (_WORD *)(a1 + 2);
  v9 = (__int64 *)(a1 + 8);
  result = AllocateOrValidateCharStringBuffer(a3, v6, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
  if ( (int)result >= 0 )
  {
    v10 = RtlUpcaseUnicodeToMultiByteN(
            (_BYTE *)*v9,
            (unsigned __int16)*v8,
            &v12,
            (char *)a2[1],
            *(unsigned __int16 *)a2);
    if ( v10 >= 0 )
    {
      v11 = v12;
      *(_BYTE *)(v12 + *v9) = 0;
      *(_WORD *)a1 = v11;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      if ( a3 )
      {
        RtlpSysVolFree(*v9);
        *v9 = 0LL;
        *v8 = 0;
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
