/*
 * XREFs of ??8CBitmapSourceArray@@QEAA_NAEBV0@@Z @ 0x18002340C
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18002139C (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBitmapSourceArray::operator==(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // esi
  char v4; // r9
  __int64 v5; // rdi
  char v6; // r8

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 != *(_DWORD *)(a2 + 24) )
    return 0;
  v3 = 0;
  v4 = 1;
  if ( v2 )
  {
    v5 = 0LL;
    do
    {
      if ( !v4 )
        break;
      v6 = 0;
      if ( *(_QWORD *)(v5 + *(_QWORD *)a1) == *(_QWORD *)(v5 + *(_QWORD *)a2) )
        v6 = v4;
      ++v3;
      v5 += 8LL;
      v4 = v6;
    }
    while ( v3 < v2 );
  }
  return v4;
}
