/*
 * XREFs of SymCryptFdefBitsizeOfUint32 @ 0x14056F918
 * Callers:
 *     SymCryptFdefIntBitsizeOfValue @ 0x14056FB84 (SymCryptFdefIntBitsizeOfValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptFdefBitsizeOfUint32(int a1)
{
  unsigned __int64 v1; // rbx
  unsigned int v2; // edx
  unsigned int v3; // r11d
  unsigned int v4; // ecx
  unsigned int v5; // r10d
  unsigned int v6; // edx
  unsigned int v7; // r9d
  unsigned int v8; // r8d

  v1 = (unsigned __int64)-(__int64)(a1 & 0xFFFF0000) >> 32;
  v2 = (unsigned __int16)(a1 & ~(unsigned __int16)((unsigned __int64)-(__int64)(a1 & 0xFFFF0000) >> 32)) | v1 & ((a1 & 0xFFFF0000) >> 16);
  v3 = -(v2 & 0xFF00) >> 16;
  v4 = v3 & (v2 >> 8) | v2 & (unsigned __int8)~(unsigned __int8)(-(v2 & 0xFF00) >> 16);
  v5 = -(v4 & 0xF0) >> 16;
  v6 = v4 & ~v5 | v5 & (v4 >> 4);
  v7 = -((v4 & (unsigned __int8)~(_BYTE)v5 | v5 & (unsigned __int8)(v4 >> 4)) & 0xC) >> 16;
  v8 = (unsigned __int8)v6 & (unsigned __int8)~(unsigned __int8)(-(v6 & 0xC) >> 16) & 3 | v7 & (v6 >> 2);
  return (v8 & 1 | ((v8 & 2) != 0)) + ((v8 >> 1) & 1 | v1 & 0x10 | v3 & 8 | v5 & 4 | v7 & 2);
}
