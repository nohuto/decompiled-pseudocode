/*
 * XREFs of UpdateWorkingSets @ 0x14011E998
 * Callers:
 *     ?UpdateWorkingSets@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXJ@Z @ 0x14011E980 (-UpdateWorkingSets@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UpdateWorkingSets(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  unsigned __int16 i; // r10
  _QWORD *v4; // rdi
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 136); result = i )
  {
    v4 = *(_QWORD **)(*(_QWORD *)(a1 + 1752) + 8LL * i);
    if ( a2 )
    {
      v4[28] = (unsigned __int64)(unsigned int)dword_14008A440 * (v4[5] - v4[21]) / 0x64 / a2;
      v4[29] = (unsigned __int64)(unsigned int)dword_14008A444 * (v4[5] - v4[21]) / 0x64 / a2;
    }
    ++i;
  }
  return result;
}
