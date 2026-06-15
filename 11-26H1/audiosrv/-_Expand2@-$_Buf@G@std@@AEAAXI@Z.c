/*
 * XREFs of ?_Expand2@?$_Buf@G@std@@AEAAXI@Z @ 0x18014D380
 * Callers:
 *     ?_Insert2@?$_Buf@G@std@@QEAAXG@Z @ 0x18014D784 (-_Insert2@-$_Buf@G@std@@QEAAXG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Buf<unsigned short>::_Expand2(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  __int64 result; // rax

  v1 = 16;
  v3 = *(_DWORD *)a1;
  if ( v3 >> 1 > 0x10 )
    v1 = v3 >> 1;
  if ( ~v1 <= v3 )
    v4 = -1;
  else
    v4 = v3 + v1;
  if ( v4 == v3 || (result = _o_realloc(*(_QWORD *)(a1 + 8), 2LL * v4)) == 0 )
  {
    std::_Xregex_error(9LL);
    __debugbreak();
    JUMPOUT(0x18014D3F4LL);
  }
  *(_DWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
