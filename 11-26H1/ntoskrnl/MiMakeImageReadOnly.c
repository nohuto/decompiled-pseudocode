/*
 * XREFs of MiMakeImageReadOnly @ 0x1404BE4AC
 * Callers:
 *     MiReleaseImageSection @ 0x140A579A4 (MiReleaseImageSection.c)
 * Callees:
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 */

__int64 __fastcall MiMakeImageReadOnly(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int8 v4; // bp
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // r14
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned __int8 v11; // [rsp+40h] [rbp+8h] BYREF

  result = (__int64)&retaddr;
  v2 = 0LL;
  v3 = a1 + 128;
  v4 = 17;
  v11 = 17;
  if ( a1 != -128 )
  {
    do
    {
      result = *(unsigned int *)(v3 + 32);
      if ( (*(_DWORD *)(v3 + 32) & 0x3E) != 2 )
      {
        *(_DWORD *)(v3 + 32) = result & 0xFFFFFFC1 | 2;
        v5 = *(_QWORD *)(v3 + 8);
        result = *(unsigned int *)(v3 + 44);
        v6 = v5 + 8 * result;
        while ( v5 < v6 )
        {
          if ( (v5 & 0xFFF) == 0 || !v2 )
          {
            if ( v2 )
              MiUnlockProtoPoolPage(v2, v4);
            v9 = MiLockProtoPoolPageForce(v5, &v11);
            v4 = v11;
            v2 = v9;
          }
          result = MiLockLeafPage((unsigned __int64 *)v5, 0);
          v7 = *(_QWORD *)v5;
          v8 = result;
          if ( result )
          {
            if ( (v7 & 1) == 0 )
            {
              *(_QWORD *)v5 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              *(_QWORD *)(result + 16) = *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
            }
            result = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else if ( (v7 & 0x400) != 0 || v7 )
          {
            *(_QWORD *)v5 = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
          }
          v5 += 8LL;
        }
        if ( v2 )
        {
          result = MiUnlockProtoPoolPage(v2, v4);
          v2 = 0LL;
        }
      }
      v3 = *(_QWORD *)(v3 + 16);
    }
    while ( v3 );
  }
  return result;
}
