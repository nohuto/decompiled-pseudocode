/*
 * XREFs of LdrpEnclaveAddForwarderModules @ 0x1800382C0
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x180117220 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlCharToInteger @ 0x1800399A0 (RtlCharToInteger.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrpEnclaveAddDependentModule @ 0x180125528 (LdrpEnclaveAddDependentModule.c)
 *     strrchr @ 0x18012CC40 (strrchr.c)
 */

__int64 __fastcall LdrpEnclaveAddForwarderModules(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int *v7; // rdi
  unsigned int *v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  char *v12; // rax
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  ULONG Value; // [rsp+60h] [rbp+8h] BYREF

  Value = 0;
  v14 = 0LL;
  LOBYTE(a2) = 1;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL);
  v5 = RtlImageDirectoryEntryToData(v4, a2, 0LL, &Value);
  v6 = v5;
  if ( v5 )
  {
    v7 = (unsigned int *)(v4 + *(unsigned int *)(v5 + 28));
    v8 = &v7[*(unsigned int *)(v5 + 20)];
    if ( v7 < v8 )
    {
      v9 = Value;
      do
      {
        v10 = v4 + *v7;
        if ( v10 - v6 < v9 )
        {
          v12 = strrchr((const char *)(v4 + *v7), 46);
          if ( !v12 )
            return (unsigned int)-1073741701;
          if ( (unsigned __int64)&v12[-v10] > 0xFFFF )
            return (unsigned int)-1073741701;
          v13 = v12[1] == 35;
          *((_QWORD *)&v14 + 1) = v10;
          LOWORD(v14) = (_WORD)v12 - v10;
          WORD1(v14) = (_WORD)v12 - v10;
          if ( v13 && RtlCharToInteger(v12 + 2, 0, &Value) < 0 )
            return (unsigned int)-1073741701;
          v3 = LdrpEnclaveAddDependentModule(a1, &v14);
          if ( v3 < 0 )
            return (unsigned int)v3;
        }
        ++v7;
      }
      while ( v7 < v8 );
    }
  }
  return (unsigned int)v3;
}
