/*
 * XREFs of MiPfInitializeInPageSupport @ 0x140A956F8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPfInitializeInPageSupport(__int64 a1, __int64 a2)
{
  int v3; // eax
  _QWORD *v4; // rcx
  _DWORD *v5; // rax
  __int64 *v6; // r11
  unsigned int v7; // r8d
  unsigned __int64 v8; // r9
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx

  if ( *(_BYTE *)(a1 + 57) )
  {
    v3 = *(_DWORD *)(a2 + 188) | 0x200;
LABEL_3:
    *(_DWORD *)(a2 + 188) = v3;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 208LL) & 1) != 0 )
  {
    v3 = *(_DWORD *)(a2 + 188) | 0x80;
    goto LABEL_3;
  }
LABEL_4:
  v4 = *(_QWORD **)(a2 + 248);
  *(_QWORD *)(a2 + 248) = *v4 & 0xFFFFFFFFFFFFFFFCuLL;
  *(_QWORD *)(a1 + 168) = *v4 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_DWORD *)(a2 + 188) & 0x400000) != 0 )
    v5 = 0LL;
  else
    v5 = *(_DWORD **)(a2 + 208);
  v6 = (__int64 *)(v5 + 12);
  v7 = 0;
  v8 = (((v5[8] + v5[11]) & 0xFFF) + (unsigned __int64)(unsigned int)v5[10] + 4095) >> 12;
  if ( v8 >= 2 && (v6 > &qword_140E36178 || &v6[(unsigned int)(v8 - 1)] < &qword_140E36178) )
  {
    v10 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
    do
      v7 += 2;
    while ( v7 < v10 );
    v11 = 8 * v10;
    memset64(v6, qword_140E36178, v11 >> 3);
    v6 = (__int64 *)((char *)v6 + v11);
  }
  while ( 1 )
  {
    result = v7;
    if ( v7 >= v8 )
      break;
    ++v7;
    *v6++ = qword_140E36178;
  }
  *(_QWORD *)(a1 + 104) = v8;
  *(_QWORD *)(a1 + 136) = 0LL;
  return result;
}
