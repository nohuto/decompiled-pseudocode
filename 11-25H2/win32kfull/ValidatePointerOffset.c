/*
 * XREFs of ValidatePointerOffset @ 0x1401C7030
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidatePointerOffset(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  int v4; // r15d
  unsigned int v5; // ebp
  unsigned __int64 v6; // rbx
  unsigned int *v8; // rsi
  int v9; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r8d
  int v18; // [rsp+94h] [rbp+Ch]
  int v19; // [rsp+A4h] [rbp+1Ch]

  v19 = HIDWORD(a3);
  v18 = HIDWORD(a1);
  v4 = a3;
  v5 = 0;
  v6 = a3;
  *(_QWORD *)a4 = a3;
  v8 = (unsigned int *)a2;
  v9 = a1;
  if ( a3 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    LOBYTE(a2) = 19;
    v12 = HMValidateHandleNoSecure(v11, a2);
    if ( v12 )
    {
      v13 = *(_DWORD **)(v12 + 456);
      v14 = v9 + v4;
      v15 = v18 + v19;
      if ( v9 + v4 >= v13[40] )
      {
        v16 = v13[42];
        if ( v14 >= v16 )
          v14 = v16 - 1;
      }
      else
      {
        v14 = v13[40];
      }
      if ( v15 >= v13[41] )
      {
        v17 = v13[43];
        if ( v15 >= v17 )
          v15 = v17 - 1;
      }
      else
      {
        v15 = v13[41];
      }
      v6 = __PAIR64__(v15 - v18, v14 - v9);
    }
    *(_QWORD *)a4 = v6;
    v5 = 1;
  }
  if ( (unsigned int)TouchTargetingEnabledForInput(*((_QWORD *)v8 + 5), v8 + 2) )
  {
    EtwTraceTouchTargetingOffset(*a4, a4[1], v8[3], *(unsigned __int16 *)v8);
    EtwTraceTouchTargetingPointerEvent(
      v8[3],
      *(unsigned __int16 *)v8,
      v8[2],
      v8[5],
      v8[27],
      v8[10],
      v8[11],
      v8[28],
      v8[30],
      v8[29],
      v8[31],
      v8[36]);
  }
  return v5;
}
