/*
 * XREFs of HalpIommuHsaDiscover @ 0x140CBB5B4
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1405A2738 (HalpIommuRegisterBuiltinPlugins.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     HalpIommuProcessIvhdEntry @ 0x1405AAB6C (HalpIommuProcessIvhdEntry.c)
 */

int __fastcall HalpIommuHsaDiscover(unsigned __int64 *a1)
{
  __int64 Table; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  int v6; // eax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int8 v9; // bl
  __int64 v10; // rax
  _BYTE *v11; // rdx
  int result; // eax
  __int64 v13; // rax
  _BYTE *v14; // rdx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  qword_140F87868 = (__int64)&qword_140F87860;
  qword_140F87860 = (__int64)&qword_140F87860;
  v15 = 0;
  if ( *(_QWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[64] || HalpPrebootMode )
  {
    Table = HalpAcpiGetTable(*(__int64 *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[64], 1397904969, 0, 0);
    v3 = Table;
    if ( Table )
    {
      v4 = *(unsigned int *)(Table + 4);
      if ( (unsigned int)v4 >= 0x5A )
      {
        v5 = v3 + v4;
        v6 = *(_DWORD *)(v3 + 36);
        if ( (v6 & 1) != 0 )
        {
          v7 = v3 + 48;
          if ( (v6 & 2) == 0 )
            goto LABEL_18;
          v8 = v3 + 48;
LABEL_8:
          v9 = 1;
          while ( v8 < v5 )
          {
            if ( v8 + 4 > v5 )
              return -1073741811;
            v10 = *(unsigned __int16 *)(v8 + 2);
            if ( (unsigned int)v10 < 4 || v10 + v8 > v5 )
              return -1073741811;
            v11 = (_BYTE *)v8;
            v8 += v10;
            if ( *v11 == 64 )
            {
              result = HalpIommuProcessIvhdEntry(v3, (__int64)v11, &v15);
              if ( result < 0 )
                return result;
              if ( v9 && !v15 )
                goto LABEL_8;
              v9 = 0;
            }
          }
          while ( v7 < v5 )
          {
            if ( v7 + 4 > v5 )
              return -1073741811;
            v13 = *(unsigned __int16 *)(v7 + 2);
            if ( (unsigned int)v13 < 4 || v7 + v13 > v5 )
              return -1073741811;
            v14 = (_BYTE *)v7;
            v7 += v13;
            if ( *v14 == 17 )
            {
              result = HalpIommuProcessIvhdEntry(v3, (__int64)v14, &v15);
              if ( result < 0 )
                return result;
              if ( !v9 || v15 )
LABEL_18:
                v9 = 0;
              else
                v9 = 1;
            }
          }
          *a1 = (2LL * v9) ^ (*a1 ^ (2LL * v9)) & 0xFFFFFFFFFFFFFFFDuLL;
        }
      }
    }
  }
  return 0;
}
