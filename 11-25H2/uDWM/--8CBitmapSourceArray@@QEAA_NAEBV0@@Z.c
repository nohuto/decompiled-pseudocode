/*
 * XREFs of ??8CBitmapSourceArray@@QEAA_NAEBV0@@Z @ 0x18001C9C8
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18001C8B8 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBitmapSourceArray::operator==(__int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  unsigned int v4; // ebp
  char v5; // r10
  __int64 v6; // rsi
  char v7; // dl
  _QWORD *v8; // r9
  _QWORD *v9; // r8

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 != *(_DWORD *)(a2 + 24) )
    return 0;
  v4 = 0;
  v5 = 1;
  if ( v2 )
  {
    v6 = 0LL;
    do
    {
      if ( !v5 )
        break;
      v7 = 0;
      v8 = (_QWORD *)(v6 + *(_QWORD *)a2);
      v9 = (_QWORD *)(v6 + *(_QWORD *)a1);
      ++v4;
      v6 += 8LL;
      if ( *v9 == *v8 )
        v7 = v5;
      v5 = v7;
    }
    while ( v4 < v2 );
  }
  return v5;
}
