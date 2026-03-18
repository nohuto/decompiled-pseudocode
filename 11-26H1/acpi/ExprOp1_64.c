/*
 * XREFs of ExprOp1_64 @ 0x140016520
 * Callers:
 *     ExprOp1 @ 0x1400164E0 (ExprOp1.c)
 * Callees:
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 */

__int64 __fastcall ExprOp1_64(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int v7; // r9d
  char v8; // cl
  unsigned __int64 v9; // r8
  int v10; // r10d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 i; // rdx
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  v17 = 0LL;
  v4 = 0LL;
  result = ValidateArgTypes(a1, a2[10], 0, "I");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, a2[10] + 40LL, 135, (__int64)&v17);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(a2[7] + 8LL) == 128 )
      {
        v4 = ~*(_QWORD *)(a2[10] + 16LL);
LABEL_5:
        v6 = v17;
        *(_WORD *)(a2[11] + 2LL) = 1;
        *(_QWORD *)(a2[11] + 16LL) = v4;
        return WriteObject(a1, v6, a2[11]);
      }
      if ( *(_DWORD *)(a2[7] + 8LL) == 129 )
      {
        v13 = !_BitScanReverse64((unsigned __int64 *)&v14, *(_QWORD *)(a2[10] + 16LL));
      }
      else
      {
        if ( *(_DWORD *)(a2[7] + 8LL) != 130 )
        {
          if ( *(_DWORD *)(a2[7] + 8LL) == 10331 )
          {
            v15 = 1LL;
            for ( i = *(_QWORD *)(a2[10] + 16LL); i; i >>= 4 )
            {
              v4 += v15 * (i & 0xF);
              v15 *= 10LL;
            }
          }
          else if ( *(_DWORD *)(a2[7] + 8LL) == 10587 )
          {
            v7 = 0;
            v8 = 0;
            v9 = *(_QWORD *)(a2[10] + 16LL);
            v10 = 4;
            do
            {
              if ( !v9 )
                break;
              v11 = v9 / 0xA;
              v12 = (v9 % 0xA) << v8;
              v8 = v10;
              v4 |= v12;
              v10 += 4;
              ++v7;
              v9 = v11;
            }
            while ( v7 < 0x10 );
          }
          goto LABEL_5;
        }
        v13 = !_BitScanForward64((unsigned __int64 *)&v14, *(_QWORD *)(a2[10] + 16LL));
      }
      if ( !v13 )
        v4 = (unsigned int)(v14 + 1);
      goto LABEL_5;
    }
  }
  return result;
}
