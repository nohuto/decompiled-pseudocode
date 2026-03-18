/*
 * XREFs of ExprOp2_32 @ 0x140016334
 * Callers:
 *     ExprOp2 @ 0x1400162D0 (ExprOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 */

__int64 __fastcall ExprOp2_32(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  int v4; // edi
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2[10];
  v4 = 0;
  v24 = 0LL;
  result = ValidateArgTypes(a1, v3, 0, "II");
  if ( (int)result >= 0 )
  {
    result = ValidateTarget(a1, a2[10] + 80LL, 135, (__int64)&v24);
    if ( (int)result >= 0 )
    {
      *(_WORD *)(a2[11] + 2LL) = 1;
      v7 = *(_DWORD *)(a2[7] + 8LL);
      if ( v7 == 123 )
      {
        v9 = *(_DWORD *)(a2[10] + 16LL) & *(_DWORD *)(a2[10] + 56LL);
        goto LABEL_7;
      }
      if ( v7 > 0x7B )
      {
        v15 = v7 - 124;
        if ( !v15 )
        {
          v9 = ~(*(_DWORD *)(a2[10] + 16LL) & *(_DWORD *)(a2[10] + 56LL));
          goto LABEL_7;
        }
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( v18 != 6 )
                return WriteObject(a1, v24, a2[11]);
              v22 = a2[10];
              v23 = *(_DWORD *)(v22 + 56);
              if ( !v23 )
                goto LABEL_15;
              v19 = *(_DWORD *)(v22 + 16) % v23;
            }
            else
            {
              v19 = *(_DWORD *)(a2[10] + 16LL) ^ *(_DWORD *)(a2[10] + 56LL);
            }
          }
          else
          {
            v19 = ~(*(_DWORD *)(a2[10] + 16LL) | *(_DWORD *)(a2[10] + 56LL));
          }
        }
        else
        {
          v19 = *(_DWORD *)(a2[10] + 16LL) | *(_DWORD *)(a2[10] + 56LL);
        }
      }
      else
      {
        v8 = v7 - 114;
        if ( !v8 )
        {
          v9 = *(_DWORD *)(a2[10] + 16LL) + *(_DWORD *)(a2[10] + 56LL);
LABEL_7:
          *(_DWORD *)(a2[11] + 16LL) = v9;
          return WriteObject(a1, v24, a2[11]);
        }
        v10 = v8 - 2;
        if ( v10 )
        {
          v11 = v10 - 3;
          if ( !v11 )
          {
            v9 = *(_DWORD *)(a2[10] + 16LL) * *(_DWORD *)(a2[10] + 56LL);
            goto LABEL_7;
          }
          v12 = v11 - 2;
          if ( v12 )
          {
            if ( v12 != 1 )
              return WriteObject(a1, v24, a2[11]);
            v20 = a2[10];
            v21 = *(_DWORD *)(v20 + 56);
            if ( v21 < 0x20 )
              v4 = *(_DWORD *)(v20 + 16) >> v21;
          }
          else
          {
            v13 = a2[10];
            v14 = *(_DWORD *)(v13 + 56);
            if ( v14 < 0x20 )
              v4 = *(_DWORD *)(v13 + 16) << v14;
          }
LABEL_15:
          *(_DWORD *)(a2[11] + 16LL) = v4;
          return WriteObject(a1, v24, a2[11]);
        }
        v19 = *(_DWORD *)(a2[10] + 16LL) - *(_DWORD *)(a2[10] + 56LL);
      }
      *(_DWORD *)(a2[11] + 16LL) = v19;
      return WriteObject(a1, v24, a2[11]);
    }
  }
  return result;
}
