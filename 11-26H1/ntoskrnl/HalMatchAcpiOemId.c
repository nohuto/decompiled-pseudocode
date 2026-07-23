/*
 * XREFs of HalMatchAcpiOemId @ 0x140344990
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     strlen @ 0x140742910 (strlen.c)
 *     RtlCompareString @ 0x14097C2A0 (RtlCompareString.c)
 */

__int64 __fastcall HalMatchAcpiOemId(__int64 a1, __int64 a2, int **a3, int a4)
{
  unsigned int v5; // edi
  int v6; // ebx
  __int64 TableWork; // rbx
  size_t v8; // rax
  char *v9; // rcx
  unsigned __int16 v10; // bx
  size_t v11; // rax
  unsigned __int16 Length; // cx
  STRING String1; // [rsp+20h] [rbp-30h] BYREF
  STRING String2; // [rsp+30h] [rbp-20h] BYREF
  char Str[4]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v17; // [rsp+44h] [rbp-Ch]
  char v18; // [rsp+46h] [rbp-Ah]

  v5 = 1;
  if ( a4 == 2 )
  {
    if ( *a3 )
    {
      if ( a3[1] )
      {
        v6 = **a3;
        ExAcquireFastMutex(&HalpAcpiTableCacheLock);
        TableWork = HalpAcpiGetTableWork(0, v6, 0, 0);
        KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
        if ( TableWork )
        {
          *(_DWORD *)(&String2.MaximumLength + 1) = 0;
          *(_DWORD *)Str = 0;
          v17 = 0;
          v18 = 0;
          *(_DWORD *)Str = *(_DWORD *)(TableWork + 10);
          v17 = *(_WORD *)(TableWork + 14);
          String2.Buffer = Str;
          v8 = strlen(Str);
          v9 = (char *)a3[1];
          v10 = v8;
          *(_QWORD *)&String1.Length = 0LL;
          String1.Buffer = v9;
          if ( v8 >= 0xFFFF )
            v10 = -2;
          String2.Length = v10;
          String2.MaximumLength = v10 + 1;
          if ( v9 )
          {
            v11 = strlen(v9);
            Length = v11;
            if ( v11 >= 0xFFFF )
              Length = -2;
            String1.Length = Length;
            String1.MaximumLength = Length + 1;
          }
          else
          {
            Length = String1.Length;
          }
          if ( Length == v10 && !RtlCompareString(&String1, &String2, 1u) )
            return 2;
          else
            return 0;
        }
      }
    }
  }
  return v5;
}
