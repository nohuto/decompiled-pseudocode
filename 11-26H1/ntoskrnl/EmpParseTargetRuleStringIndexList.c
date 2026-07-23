/*
 * XREFs of EmpParseTargetRuleStringIndexList @ 0x140CBD4C8
 * Callers:
 *     EmpParseTargetRules @ 0x140CBD7E8 (EmpParseTargetRules.c)
 * Callees:
 *     strchr @ 0x140539E80 (strchr.c)
 *     RtlCharToInteger @ 0x140AD99E0 (RtlCharToInteger.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140CBBF84 (EmpInfParseGetValueFromSectionAndKeyName.c)
 */

bool __fastcall EmpParseTargetRuleStringIndexList(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        int *a7)
{
  int v7; // esi
  unsigned int v8; // r14d
  char v9; // bl
  unsigned int v10; // r13d
  int v12; // edx
  bool v14; // zf
  char v15; // cl
  unsigned __int64 v16; // r12
  _BYTE *v17; // r14
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  CHAR *Pool2; // rax
  __int64 v21; // r9
  CHAR *v22; // r15
  CHAR *v23; // rcx
  __int64 v24; // r14
  CHAR v25; // al
  CHAR *v26; // rax
  __int64 ValueFromSectionAndKeyName; // r10
  __int64 i; // r8
  unsigned __int8 *v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rcx
  unsigned int v34; // [rsp+30h] [rbp-58h]
  int v35; // [rsp+34h] [rbp-54h]
  ULONG Value[20]; // [rsp+38h] [rbp-50h] BYREF
  int v38; // [rsp+98h] [rbp+10h]
  unsigned int v39; // [rsp+A0h] [rbp+18h]
  unsigned int v40; // [rsp+A8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v7 = 0;
  v8 = 0;
  v38 = 0;
  v9 = 0;
  v34 = 0;
  v10 = 0;
  Value[0] = 0;
  v12 = *a7;
  v35 = *a7;
  if ( !a5 )
    return 0;
  while ( 1 )
  {
    v14 = v9 == 0;
    if ( v9 )
      return v14;
    switch ( v7 )
    {
      case 0:
        if ( *a2 != 123 )
          goto LABEL_56;
        goto LABEL_57;
      case 1:
        v15 = *a2;
        if ( *a2 == 125 )
          goto LABEL_14;
        if ( v10 > a3 || v8 > a4 || (v16 = v12 + v8 + v10, v16 >= a6) )
        {
          v9 = 1;
          return v9 == 0;
        }
        v17 = a2;
        if ( v15 )
        {
          do
          {
            if ( strchr(".}", v15) )
              break;
            v15 = *++a2;
          }
          while ( *a2 );
          v12 = v35;
          a3 = v39;
          a4 = v40;
        }
        v18 = a2 - v17;
        v19 = a2 - v17 + 1;
        if ( a2 - v17 == -1 )
        {
          v7 = v38;
          v9 = 1;
          v8 = v34;
        }
        else
        {
          Pool2 = (CHAR *)ExAllocatePool2(256LL, a2 - v17 + 1, 0x74694D45u);
          v22 = Pool2;
          if ( !Pool2 || v19 > 0x7FFFFFFF )
            goto LABEL_25;
          if ( v18 > 0x7FFFFFFE )
          {
            *Pool2 = 0;
LABEL_25:
            v7 = v38;
            v9 = 1;
            v8 = v34;
            goto LABEL_26;
          }
          v23 = Pool2;
          v24 = v17 - Pool2;
          do
          {
            if ( !v18 )
              break;
            v25 = v23[v24];
            if ( !v25 )
              break;
            *v23 = v25;
            --v18;
            ++v23;
            --v19;
          }
          while ( v19 );
          v26 = v23 - 1;
          if ( v19 )
            v26 = v23;
          *v26 = 0;
          if ( !v19 )
            goto LABEL_25;
          if ( v10 >= v39 )
          {
            v8 = v34;
            if ( RtlCharToInteger(v22, 0x10u, Value) >= 0 )
            {
              v8 = ++v34;
              *(_DWORD *)(a5 + 4 * v16) = Value[0];
LABEL_52:
              v7 = 2;
              v38 = 2;
            }
            else
            {
              v7 = v38;
              v9 = 1;
            }
          }
          else
          {
            ValueFromSectionAndKeyName = EmpInfParseGetValueFromSectionAndKeyName(a1, (__int64)"Strings", v22, v21, 0LL);
            if ( ValueFromSectionAndKeyName )
            {
              for ( i = 0LL; (unsigned int)i < EmpNumberOfStrings; i = (unsigned int)(i + 1) )
              {
                v29 = (unsigned __int8 *)*((_QWORD *)EmpStringTable + i);
                v30 = ValueFromSectionAndKeyName - (_QWORD)v29;
                do
                {
                  v31 = v29[v30];
                  v32 = *v29 - v31;
                  if ( v32 )
                    break;
                  ++v29;
                }
                while ( v31 );
                if ( !v32 )
                {
                  v33 = v10 + v35;
                  v8 = v34;
                  ++v10;
                  Value[0] = i;
                  *(_DWORD *)(a5 + 4 * v33) = i;
                  goto LABEL_52;
                }
              }
              Value[0] = i;
            }
            v7 = v38;
            v9 = 1;
            v8 = v34;
          }
          ExFreePoolWithTag(v22, 0x74694D45u);
LABEL_26:
          v12 = v35;
          a3 = v39;
          a4 = v40;
        }
        break;
      case 2:
        if ( *a2 != 46 )
        {
          if ( *a2 != 125 )
            goto LABEL_56;
LABEL_14:
          v7 = 3;
          goto LABEL_58;
        }
LABEL_57:
        v7 = 1;
LABEL_58:
        ++a2;
        v38 = v7;
        break;
      case 3:
        if ( !*a2 && v10 == a3 && v8 == a4 )
        {
          *a7 = v12 + v8 + v10;
          return v9 == 0;
        }
LABEL_56:
        v9 = 1;
        break;
    }
  }
}
