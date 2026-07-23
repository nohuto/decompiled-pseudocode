/*
 * XREFs of MiMakeImageReadOnly @ 0x1404B7CFC
 * Callers:
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 * Callees:
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 */

__int64 __fastcall MiMakeImageReadOnly(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int8 v6; // bp
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned __int8 v12; // [rsp+40h] [rbp+8h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  v5 = a1 + 128;
  v6 = 17;
  v12 = 17;
  if ( a1 != -128 )
  {
    do
    {
      result = *(unsigned int *)(v5 + 32);
      if ( (*(_DWORD *)(v5 + 32) & 0x3E) != 2 )
      {
        *(_DWORD *)(v5 + 32) = result & 0xFFFFFFC1 | 2;
        v7 = *(_QWORD *)(v5 + 8);
        result = *(unsigned int *)(v5 + 44);
        v8 = v7 + 8 * result;
        while ( v7 < v8 )
        {
          if ( (v7 & 0xFFF) == 0 || !v4 )
          {
            if ( v4 )
            {
              LOBYTE(a2) = v6;
              MiUnlockProtoPoolPage(v4, a2, a3);
            }
            v10 = MiLockProtoPoolPageForce(v7, &v12);
            v6 = v12;
            v4 = v10;
          }
          result = MiLockLeafPage((unsigned __int64 *)v7, 0);
          v9 = *(_QWORD *)v7;
          a2 = result;
          if ( result )
          {
            if ( (v9 & 1) == 0 )
            {
              *(_QWORD *)v7 = v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              *(_QWORD *)(result + 16) = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            }
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else if ( (v9 & 0x400) != 0 || v9 )
          {
            *(_QWORD *)v7 = v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
          }
          v7 += 8LL;
        }
        if ( v4 )
        {
          LOBYTE(a2) = v6;
          result = MiUnlockProtoPoolPage(v4, a2, a3);
          v4 = 0LL;
        }
      }
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 );
  }
  return result;
}
