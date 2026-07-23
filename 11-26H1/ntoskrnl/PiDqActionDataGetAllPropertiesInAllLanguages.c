/*
 * XREFs of PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140AB4850
 * Callers:
 *     PiDqActionDataCreate @ 0x14095124C (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDqOpenObjectRegKey @ 0x140952ACC (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectProperty @ 0x14095D7B0 (PiDqPnPGetObjectProperty.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x140AB4AB8 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140AB53D8 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqGrowPropertyArray @ 0x140AB5D94 (PiDqGrowPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInAllLanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        int *a6,
        unsigned int *a7)
{
  int v7; // r13d
  int v8; // esi
  int v9; // r15d
  char *v10; // r14
  PVOID v11; // rdi
  int v12; // ebx
  int v13; // r9d
  unsigned int *v14; // r12
  int *v15; // rsi
  _WORD *i; // r15
  unsigned int v17; // r8d
  int v18; // edx
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // rax
  int v24; // [rsp+50h] [rbp-20h]
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h] BYREF
  char *v27; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+58h]

  v30 = a4;
  v7 = 0;
  Handle = 0LL;
  v8 = a4;
  v27 = 0LL;
  P = 0LL;
  v9 = 0;
  if ( a2 != 1 )
    v9 = a3;
  v29 = 0;
  v24 = v9;
  v10 = 0LL;
  v11 = 0LL;
  v12 = PiDqOpenObjectRegKey(a2, a4, a3, 1LL, 0, a1, &Handle);
  if ( v12 >= 0 )
  {
    v12 = PiDqPnPGetObjectPropertyKeys(v8, v9, (_DWORD)Handle, v13, (__int64)&v27, (__int64)&v29);
    if ( v12 >= 0 && v29 )
    {
      v14 = a7;
      v15 = a6;
      v10 = v27;
      while ( 1 )
      {
        v27 = &v10[20 * v7];
        v12 = PiDqPnPGetObjectPropertyLocales(v30, v9, (_DWORD)Handle, (int)v10 + 20 * v7, (__int64)&P);
        if ( v12 < 0 )
          break;
        if ( !*v14 )
        {
          v20 = a5;
          *v14 = v29;
          v12 = PiDqGrowPropertyArray(v20);
          if ( v12 < 0 )
            break;
        }
        v11 = P;
        for ( i = P; *i; i += v23 + 1 )
        {
          if ( *v15 == *v14 )
          {
            v21 = a5;
            *v14 *= 2;
            v12 = PiDqGrowPropertyArray(v21);
            if ( v12 < 0 )
              goto LABEL_14;
          }
          v12 = PiDqPnPGetObjectProperty(
                  v30,
                  v24,
                  (__int64)Handle,
                  (__int64)v27,
                  a2,
                  i,
                  *a5 + 48LL * (unsigned int)*v15);
          if ( v12 < 0 )
            goto LABEL_14;
          ++*v15;
          v23 = -1LL;
          do
            ++v23;
          while ( i[v23] );
        }
        ExFreePoolWithTag(v11, 0x58706E50u);
        v17 = *v14;
        v18 = *v15;
        v11 = 0LL;
        P = 0LL;
        if ( v18 != v17 || (v22 = a5, *v14 = 2 * v17, v12 = PiDqGrowPropertyArray(v22), v12 >= 0) )
        {
          v9 = v24;
          v12 = PiDqPnPGetObjectProperty(
                  v30,
                  v24,
                  (__int64)Handle,
                  (__int64)&v10[20 * v7],
                  a2,
                  0LL,
                  *a5 + 48LL * (unsigned int)*v15);
          if ( v12 >= 0 )
          {
            ++*v15;
            if ( ++v7 < v29 )
              continue;
          }
        }
        goto LABEL_14;
      }
      v11 = P;
    }
    else
    {
      v10 = v27;
    }
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x58706E50u);
  return (unsigned int)v12;
}
