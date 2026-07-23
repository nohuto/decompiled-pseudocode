/*
 * XREFs of SymCryptMlDsaUseHint @ 0x1405733B0
 * Callers:
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptMlDsaUseHint(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // edi
  _DWORD *v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  int v11; // r8d
  unsigned __int64 v12; // r10
  _UNKNOWN *retaddr; // [rsp+20h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = 0;
  if ( *a2 )
  {
    do
    {
      v7 = (_DWORD *)(((unsigned __int64)v4 << 10) + a3 + 8);
      v8 = 256LL;
      do
      {
        v9 = *(unsigned __int8 *)(a1 + 27);
        v10 = ((*(_DWORD *)(a1 + 28) * ((unsigned int)(*v7 + 127) >> 7) + 0x800000) >> 24) & (((unsigned __int64)((*(_DWORD *)(a1 + 28) * ((unsigned int)(*v7 + 127) >> 7) + 0x800000) >> 24)
                                                                                             - v9) >> 32);
        v11 = *v7 - 2 * v10 * *(_DWORD *)(a1 + 32);
        v12 = ((((v11 - (((4190208 - v11) >> 31) & 0x7FE001)) >> 31) & 0x7FE001)
             + v11
             - (((4190208 - v11) >> 31) & 0x7FE001u)
             - 1
             - (unsigned __int64)*(unsigned int *)(a1 + 32)) >> 32;
        *v7 = v10 & (*(_DWORD *)&a2[(_QWORD)v7 - a3] - 1) | ~(*(_DWORD *)&a2[(_QWORD)v7 - a3] - 1) & (~(_DWORD)v12 & (((unsigned __int64)-(__int64)v10 >> 32) & (v10 - 1) | (v9 - 1) & ~((unsigned __int64)-(__int64)v10 >> 32)) | v12 & (v10 + 1) & ((unsigned __int64)-(__int64)(v10 ^ (unsigned int)(v9 - 1)) >> 32));
        ++v7;
        --v8;
      }
      while ( v8 );
      result = (unsigned __int8)*a2;
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  return result;
}
