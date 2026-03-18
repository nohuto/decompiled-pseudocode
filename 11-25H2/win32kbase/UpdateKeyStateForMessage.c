/*
 * XREFs of UpdateKeyStateForMessage @ 0x1400C2A40
 * Callers:
 *     HandleDeferredInput @ 0x1400C1830 (HandleDeferredInput.c)
 * Callees:
 *     _anonymous_namespace_::ApplyKeyStateToQueue @ 0x1400C2C1C (_anonymous_namespace_--ApplyKeyStateToQueue.c)
 *     ApiSetEditionGetKeyStateUpdateParamsForRawInput @ 0x1400C2CC8 (ApiSetEditionGetKeyStateUpdateParamsForRawInput.c)
 */

unsigned __int64 __fastcall UpdateKeyStateForMessage(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // eax
  char v4; // bl
  bool v6; // di
  unsigned int v7; // eax
  unsigned __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int8 v11; // r15
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  char v17; // [rsp+68h] [rbp+38h] BYREF
  int v18; // [rsp+70h] [rbp+40h] BYREF
  int v19; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(_DWORD *)(a2 + 24);
  v4 = 0;
  v17 = 0;
  LOBYTE(a3) = 0;
  v6 = 1;
  if ( v3 > 0x202 )
  {
    result = v3 - 516;
    if ( (_DWORD)result )
    {
      result = (unsigned int)(result - 1);
      if ( (_DWORD)result )
      {
        v15 = result - 2;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            result = (unsigned int)(v16 - 3);
            if ( (_DWORD)result )
            {
              if ( (_DWORD)result != 1 )
                goto LABEL_5;
              v6 = 0;
            }
            if ( *(_WORD *)(a2 + 34) == 1 )
            {
              v4 = 5;
            }
            else
            {
              if ( *(_WORD *)(a2 + 34) != 2 )
                goto LABEL_5;
              v4 = 6;
            }
            goto LABEL_37;
          }
          v6 = 0;
        }
        v4 = 4;
        goto LABEL_34;
      }
      v6 = 0;
    }
    v4 = 2;
LABEL_37:
    v17 = v4;
    goto LABEL_5;
  }
  if ( v3 == 514 )
  {
    v6 = 0;
LABEL_33:
    v4 = 1;
LABEL_34:
    v17 = v4;
    goto LABEL_6;
  }
  v7 = v3 - 255;
  if ( !v7 )
  {
    v18 = 0;
    v19 = 0;
    result = ApiSetEditionGetKeyStateUpdateParamsForRawInput(
               a1,
               a2,
               (unsigned int)&v17,
               (unsigned int)&v18,
               (__int64)&v19);
    v4 = v17;
    v6 = v18 != 0;
    LOBYTE(a3) = v19 != 0;
    goto LABEL_5;
  }
  v12 = v7 - 1;
  if ( !v12 )
    goto LABEL_30;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_29;
  v14 = v13 - 3;
  if ( !v14 )
    goto LABEL_30;
  result = v14 - 1;
  if ( !(_DWORD)result )
  {
LABEL_29:
    v6 = 0;
LABEL_30:
    v4 = *(_BYTE *)(a2 + 32);
    result = *(_QWORD *)(a2 + 40);
    v17 = v4;
    a3 = result >> 24;
    LOBYTE(a3) = BYTE3(result) & 1;
    if ( v4 == 16 )
    {
      result &= ~0x1000000uLL;
      *(_QWORD *)(a2 + 40) = result;
    }
    goto LABEL_5;
  }
  if ( (_DWORD)result == 252 )
    goto LABEL_33;
LABEL_5:
  if ( !v4 )
    return result;
LABEL_6:
  v9 = *(_QWORD *)(a1 + 472);
  LOBYTE(a2) = v4;
  v10 = v9;
  if ( (unsigned __int8)(v4 - 16) > 2u )
  {
LABEL_9:
    LOBYTE(a3) = v6;
    return anonymous_namespace_::ApplyKeyStateToQueue(v10, a2, a3);
  }
  LOBYTE(a2) = a3 - 96 + 2 * (v4 - 16);
  LOBYTE(a3) = v6;
  v11 = a2 ^ 1;
  anonymous_namespace_::ApplyKeyStateToQueue(v9, a2, a3);
  if ( v6
    || (result = (unsigned __int64)v11 >> 2,
        ((unsigned __int8)(1 << (2 * (v11 & 3))) & *(_BYTE *)(result + v9 + 256)) == 0) )
  {
    LOBYTE(a2) = v4;
    v10 = v9;
    goto LABEL_9;
  }
  return result;
}
