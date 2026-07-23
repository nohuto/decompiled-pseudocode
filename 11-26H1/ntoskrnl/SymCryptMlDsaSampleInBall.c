/*
 * XREFs of SymCryptMlDsaSampleInBall @ 0x140572AE0
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptShake128Append @ 0x140573BC0 (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140573BD8 (SymCryptShake256Extract.c)
 *     SymCryptShake256Init @ 0x140573CA4 (SymCryptShake256Init.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptMlDsaSampleInBall(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned int v8; // ebp
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  char *v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v16[16]; // [rsp+20h] [rbp-148h] BYREF
  _BYTE v17[240]; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 v18; // [rsp+120h] [rbp-48h] BYREF

  v8 = 0;
  memset_0(a4, 0, 0x400uLL);
  memset_0(v17, 0, sizeof(v17));
  SymCryptShake256Init(v17);
  SymCryptShake128Append(v17, a2, a3);
  SymCryptShake256Extract(v17, &v18, 8LL);
  v9 = v18;
  v10 = 256 - (unsigned int)*(unsigned __int8 *)(a1 + 24);
  if ( (unsigned int)v10 < 0x100 )
  {
    v11 = &a4[4 * v10];
    while ( 2 )
    {
      v16[0] = 0;
      v12 = 0;
      do
      {
        if ( v12 >= 0x79 )
        {
          v8 = 32776;
          goto LABEL_9;
        }
        SymCryptShake256Extract(v17, v16, 1LL);
        ++v12;
      }
      while ( (unsigned __int8)v16[0] > (unsigned int)v10 );
      v13 = (unsigned __int8)v16[0];
      v14 = v9 & 1;
      v9 >>= 1;
      LODWORD(v10) = v10 + 1;
      *(_DWORD *)v11 = *(_DWORD *)&a4[4 * (unsigned __int8)v16[0]];
      v11 += 4;
      *(_DWORD *)&a4[4 * v13] = ((unsigned __int64)-v14 >> 32) & 0x7FE000 | ((-v14 & 0x100000000LL) == 0);
      if ( (unsigned int)v10 < 0x100 )
        continue;
      break;
    }
  }
LABEL_9:
  SymCryptWipe((__int64)v17, 0xF0uLL);
  return v8;
}
