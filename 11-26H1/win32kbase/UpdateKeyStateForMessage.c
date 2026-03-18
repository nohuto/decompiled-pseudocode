/*
 * XREFs of UpdateKeyStateForMessage @ 0x1400E4500
 * Callers:
 *     HandleDeferredInput @ 0x1400E3510 (HandleDeferredInput.c)
 * Callees:
 *     _anonymous_namespace_::ApplyKeyStateToQueue @ 0x1400E4744 (_anonymous_namespace_--ApplyKeyStateToQueue.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall UpdateKeyStateForMessage(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // eax
  __int64 v6; // rsi
  bool v7; // di
  unsigned int v8; // eax
  unsigned __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  int v19; // eax
  char v20; // [rsp+68h] [rbp+38h] BYREF
  int v21; // [rsp+70h] [rbp+40h] BYREF
  int v22; // [rsp+78h] [rbp+48h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  LOBYTE(v3) = 0;
  v20 = 0;
  LOBYTE(a3) = 0;
  v6 = a2;
  v7 = 1;
  if ( v4 > 0x202 )
  {
    result = v4 - 516;
    if ( (_DWORD)result )
    {
      result = (unsigned int)(result - 1);
      if ( (_DWORD)result )
      {
        v18 = result - 2;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            result = (unsigned int)(v19 - 3);
            if ( (_DWORD)result )
            {
              if ( (_DWORD)result != 1 )
                goto LABEL_7;
              v7 = 0;
            }
            if ( *(_WORD *)(a2 + 34) == 1 )
            {
              LOBYTE(v3) = 5;
            }
            else
            {
              if ( *(_WORD *)(a2 + 34) != 2 )
                goto LABEL_7;
              LOBYTE(v3) = 6;
            }
            goto LABEL_40;
          }
          v7 = 0;
        }
        LOBYTE(v3) = 4;
        goto LABEL_37;
      }
      v7 = 0;
    }
    LOBYTE(v3) = 2;
LABEL_40:
    v20 = v3;
    goto LABEL_7;
  }
  if ( v4 != 514 )
  {
    v8 = v4 - 255;
    if ( !v8 )
    {
      v21 = 0;
      v22 = 0;
      result = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(514LL) + 48) + 5232LL);
      if ( result )
      {
        result = ((__int64 (*)(void))result)();
        if ( (result & 0x80000000) == 0LL )
        {
          result = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 48) + 5240LL);
          if ( result )
            result = ((__int64 (__fastcall *)(__int64, __int64, char *, int *, int *))result)(a1, v6, &v20, &v21, &v22);
        }
      }
      LOBYTE(v3) = v20;
      v7 = v21 != 0;
      LOBYTE(a3) = v22 != 0;
      goto LABEL_7;
    }
    v15 = v8 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 3;
        if ( !v17 )
          goto LABEL_33;
        result = v17 - 1;
        if ( (_DWORD)result )
        {
          if ( (_DWORD)result != 252 )
            goto LABEL_7;
          goto LABEL_36;
        }
      }
      v7 = 0;
    }
LABEL_33:
    LOBYTE(v3) = *(_BYTE *)(a2 + 32);
    result = *(_QWORD *)(a2 + 40);
    v20 = v3;
    a3 = result >> 24;
    LOBYTE(a3) = BYTE3(result) & 1;
    if ( (_BYTE)v3 == 16 )
    {
      result &= ~0x1000000uLL;
      *(_QWORD *)(a2 + 40) = result;
    }
LABEL_7:
    if ( !(_BYTE)v3 )
      return result;
    goto LABEL_8;
  }
  v7 = 0;
LABEL_36:
  LOBYTE(v3) = 1;
LABEL_37:
  v20 = v3;
LABEL_8:
  v11 = *(_QWORD *)(a1 + 464);
  if ( (_BYTE)v3 != 16 && (unsigned __int8)(v3 - 17) > 1u
    || (v12 = (unsigned int)(v3 - 16),
        v13 = *(_QWORD *)(a1 + 464),
        LOBYTE(v12) = a3 - 96 + 2 * (v3 - 16),
        LOBYTE(a3) = v7,
        v14 = v12 ^ 1,
        anonymous_namespace_::ApplyKeyStateToQueue(v13, v12, a3),
        v7)
    || (result = (unsigned __int64)v14 >> 2,
        ((unsigned __int8)(1 << (2 * (v14 & 3))) & *(_BYTE *)(result + v11 + 280)) == 0) )
  {
    LOBYTE(a3) = v7;
    LOBYTE(a2) = v3;
    return anonymous_namespace_::ApplyKeyStateToQueue(v11, a2, a3);
  }
  return result;
}
