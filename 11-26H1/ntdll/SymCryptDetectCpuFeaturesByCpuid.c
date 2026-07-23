/*
 * XREFs of SymCryptDetectCpuFeaturesByCpuid @ 0x18010AB70
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 SymCryptDetectCpuFeaturesByCpuid()
{
  int v0; // edi
  unsigned __int8 *v1; // r9
  int v3; // r8d
  unsigned int v4; // r11d
  int v9; // esi
  int v10; // r10d
  int v16; // eax
  __int64 result; // rax
  int v32; // [rsp+0h] [rbp-10h]
  int v33; // [rsp+4h] [rbp-Ch]
  int v34; // [rsp+8h] [rbp-8h]
  int v35; // [rsp+Ch] [rbp-4h]

  v0 = 0;
  v1 = (unsigned __int8 *)&unk_180183072;
  _RAX = 0LL;
  v3 = -16352;
  v4 = 0;
  __asm { cpuid }
  v9 = _RAX;
  v32 = _RAX;
  v33 = _RBX;
  v34 = _RCX;
  v35 = _RDX;
  do
  {
    v10 = *(v1 - 2);
    if ( v10 != v0 )
    {
      _RAX = *(v1 - 2);
      __asm { cpuid }
      v32 = _RAX;
      v0 = v10;
      v33 = _RBX;
      v34 = _RCX;
      v35 = _RDX;
    }
    if ( v10 > v9 || (v16 = *(&v32 + *(v1 - 1)), !_bittest(&v16, *v1)) )
      v3 |= *(_DWORD *)(v1 + 2);
    ++v4;
    v1 += 8;
  }
  while ( v4 < 0x14 );
  if ( (v3 & 4) == 0 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RCX == 1145913699 && (_DWORD)_RDX == 1769238117 )
    {
      _RAX = 1LL;
      __asm { cpuid }
      if ( (((int)_RAX >> 8) & 0xF) != 0xF || (unsigned int)(unsigned __int8)((int)_RAX >> 20) + 15 < 0x15 )
        v3 |= 4u;
    }
  }
  _RAX = 1LL;
  __asm { cpuid }
  dword_1801CB444 = _RBX;
  g_SymCryptCpuid1 = result;
  dword_1801CB448 = _RCX;
  dword_1801CB44C = _RDX;
  g_SymCryptCpuFeaturesNotPresent = v3;
  return result;
}
