/*
 * XREFs of RtlCompareString @ 0x14097C2A0
 * Callers:
 *     HalMatchAcpiOemId @ 0x140344990 (HalMatchAcpiOemId.c)
 *     RtlEqualString @ 0x14049DC00 (RtlEqualString.c)
 *     KsepGetModuleInfoByName @ 0x1407C1758 (KsepGetModuleInfoByName.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     RtlUpperChar @ 0x14097D180 (RtlUpperChar.c)
 */

LONG __stdcall RtlCompareString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  unsigned int Length; // esi
  unsigned int v4; // r15d
  __int64 v5; // rax
  char *Buffer; // rbx
  char *v7; // rdi
  SIZE_T v8; // r14
  char *v9; // r12
  CHAR v10; // r14
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  SIZE_T v15; // rax
  SIZE_T v16; // rcx

  Length = String1->Length;
  v4 = String2->Length;
  v5 = String1->Length;
  Buffer = String1->Buffer;
  v7 = String2->Buffer;
  if ( Length > v4 )
    v5 = String2->Length;
  v8 = (unsigned int)v5;
  v9 = &Buffer[v5];
  if ( CaseInSensitive )
  {
    while ( Buffer < v9 )
    {
      v10 = *v7;
      if ( *Buffer != *v7 )
      {
        v11 = (unsigned __int8)RtlUpperChar(*Buffer);
        LOBYTE(v12) = RtlUpperChar(v10);
        if ( (_BYTE)v11 != (_BYTE)v12 )
        {
          v12 = (unsigned __int8)v12;
          v13 = v11;
          return v13 - v12;
        }
      }
      ++Buffer;
      ++v7;
    }
    return Length - v4;
  }
  v15 = RtlCompareMemory(String1->Buffer, String2->Buffer, (unsigned int)v5);
  v16 = v15;
  if ( v15 >= v8 )
    return Length - v4;
  v12 = (unsigned __int8)v7[v15];
  v13 = (unsigned __int8)Buffer[v16];
  return v13 - v12;
}
