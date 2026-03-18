/*
 * XREFs of ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1400D9A70
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400D8074 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x14024A518 (-AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CoreMessagingK::Runtime::CopyString(_WORD *a1, __int64 a2, void **a3)
{
  _WORD *v5; // rax
  __int64 v6; // rdx
  signed int v7; // ebx
  unsigned __int64 v8; // rax
  size_t v10; // rbp
  void *v11; // rcx
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( a1 )
  {
    v5 = a1;
    v6 = 0x7FFFFFFFLL;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v6;
    }
    while ( v6 );
    v7 = v6 == 0 ? 0xC000000D : 0;
    if ( v6 )
    {
      v8 = (2 * (0x7FFFFFFF - v6)) & -(__int64)(v6 != 0);
      if ( v8 < 0xFFFFFFFC )
      {
        v10 = v8 + 2;
        v12 = 0LL;
        v7 = CoreMessagingK::Runtime::AllocUninitialized(v8 + 2, 1314082115LL, &v12);
        if ( v7 >= 0 )
        {
          v11 = v12;
          *a3 = v12;
          memmove(v11, a1, v10);
        }
      }
      else
      {
        return (unsigned int)-1073741585;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
