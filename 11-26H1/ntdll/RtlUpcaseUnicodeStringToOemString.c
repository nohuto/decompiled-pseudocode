/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x18009FFA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x180034070 (RtlUnicodeToMultiByteSize.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18003B340 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800A00B0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800A0124 (RtlpDidUnicodeToOemWork.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToOemString(__int64 a1, PWCH *a2, char a3)
{
  unsigned int v6; // edx
  _WORD *v7; // r12
  __int64 *v8; // rdi
  __int64 result; // rax
  int v10; // ebx
  ULONG v11; // ecx
  ULONG v12; // [rsp+88h] [rbp+10h] BYREF
  char v13; // [rsp+90h] [rbp+18h]

  v13 = a3;
  v12 = 0;
  RtlUnicodeToMultiByteSize(&v12, a2[1], *(unsigned __int16 *)a2);
  v6 = v12 + 1;
  v12 = v6;
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  v7 = (_WORD *)(a1 + 2);
  v8 = (__int64 *)(a1 + 8);
  result = AllocateOrValidateCharStringBuffer(a3, v6, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
  if ( (int)result >= 0 )
  {
    v10 = RtlUpcaseUnicodeToOemN(
            *v8,
            (unsigned __int16)*v7,
            (unsigned int)&v12,
            (unsigned int)a2[1],
            *(unsigned __int16 *)a2);
    if ( v10 >= 0 )
    {
      v11 = v12;
      *(_WORD *)a1 = v12;
      *(_BYTE *)(v11 + *v8) = 0;
      if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(a1, a2) )
        v10 = -1073741470;
    }
    if ( v10 < 0 )
    {
      if ( a3 )
      {
        RtlpSysVolFree(*v8);
        *v8 = 0LL;
        *v7 = 0;
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
