/*
 * XREFs of HamPopulateActivityPropertiesByClass @ 0x180009530
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800088C0 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 */

__int64 __fastcall HamPopulateActivityPropertiesByClass(_WORD *a1, const unsigned __int16 *a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  wchar_t *v6; // rsi
  __int64 v8; // rbx
  _WORD *v9; // rax
  __int64 v10; // r10
  _WORD *v11; // rcx
  char *v12; // rdi
  __int64 v13; // rdx
  __int16 v14; // ax
  _WORD *v15; // rax
  _WORD *v16; // rcx
  char *v17; // rsi
  __int16 v18; // ax
  _WORD *v19; // rax
  int v20; // eax
  __int64 result; // rax
  int v22; // eax
  unsigned __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = (wchar_t *)a2;
  if ( !a1 )
    return 3221225711LL;
  v8 = 64LL;
  v9 = a1;
  v10 = 64LL;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v10;
  }
  while ( v10 );
  if ( !v10 )
    return 3221225711LL;
  if ( a2 && (int)StringCchLengthW(a2, 64LL, &v23) < 0 )
    return 3221225712LL;
  if ( (unsigned int)v4 > 8 )
    return 3221225713LL;
  if ( !v6 )
  {
    _mm_lfence();
    v6 = off_1800215F0[v4];
  }
  memset_0((void *)(a4 + 4), 0, 0x184uLL);
  v11 = (_WORD *)(a4 + 12);
  *(_DWORD *)a4 = 8397888;
  v12 = (char *)a1 - a4 - 12;
  v13 = 64LL;
  do
  {
    if ( v13 == -2147483582 )
      break;
    v14 = *(_WORD *)&v12[(_QWORD)v11];
    if ( !v14 )
      break;
    *v11++ = v14;
    --v13;
  }
  while ( v13 );
  v15 = v11 - 1;
  if ( v13 )
    v15 = v11;
  v16 = (_WORD *)(a4 + 140);
  v17 = (char *)v6 - a4 - 140;
  *v15 = 0;
  do
  {
    if ( v8 == -2147483582 )
      break;
    v18 = *(_WORD *)((char *)v16 + (_QWORD)v17);
    if ( !v18 )
      break;
    *v16++ = v18;
    --v8;
  }
  while ( v8 );
  v19 = v16 - 1;
  if ( v8 )
    v19 = v16;
  *v19 = 0;
  *(_DWORD *)(a4 + 268) = 5;
  *(_DWORD *)(a4 + 276) = -1;
  *(_OWORD *)(a4 + 280) = 0LL;
  *(_OWORD *)(a4 + 296) = 0LL;
  *(_OWORD *)(a4 + 312) = 0LL;
  *(_OWORD *)(a4 + 328) = 0LL;
  *(_OWORD *)(a4 + 344) = 0LL;
  *(_OWORD *)(a4 + 360) = 0LL;
  *(_QWORD *)(a4 + 376) = 0LL;
  *(_QWORD *)(a4 + 352) = -1LL;
  *(_QWORD *)(a4 + 344) = -1LL;
  *(_QWORD *)(a4 + 336) = -1LL;
  *(_QWORD *)(a4 + 328) = -1LL;
  *(_QWORD *)(a4 + 320) |= 0x80uLL;
  *(_DWORD *)(a4 + 368) = 33;
  switch ( (int)v4 )
  {
    case 0:
      *(_DWORD *)(a4 + 276) = 0;
      *(_DWORD *)a4 = *(_DWORD *)a4 & 0xFE7FBE7F | 0x1804100;
      return 0LL;
    case 1:
    case 3:
      *(_DWORD *)(a4 + 276) = 0;
      v22 = *(_DWORD *)(a4 + 8);
      *(_DWORD *)(a4 + 4) |= 0xDu;
      *(_DWORD *)(a4 + 8) = v22 | 0x19;
      return 0LL;
    case 2:
      v20 = *(_DWORD *)(a4 + 8);
      *(_DWORD *)(a4 + 4) |= 9u;
      *(_DWORD *)(a4 + 8) = v20 | 0x11;
      *(_DWORD *)(a4 + 268) = 3;
      *(_DWORD *)(a4 + 272) = 300;
      goto LABEL_24;
    case 4:
      goto LABEL_29;
    case 5:
      goto LABEL_28;
    case 6:
      *(_DWORD *)(a4 + 276) = 0;
      *(_QWORD *)(a4 + 320) |= 0xAFuLL;
      *(_DWORD *)(a4 + 368) &= 0xFFFFFFDC;
      *(_QWORD *)(a4 + 352) = 0LL;
      *(_QWORD *)(a4 + 344) = 0LL;
      *(_QWORD *)(a4 + 336) = 0LL;
      *(_QWORD *)(a4 + 328) = 0LL;
      *(_DWORD *)a4 &= ~0x400u;
      *(_DWORD *)a4 |= 0x1000u;
      goto LABEL_24;
    case 7:
      *(_DWORD *)a4 = *(_DWORD *)a4 & 0xFE7EBE7F | 0x1814100;
LABEL_24:
      result = 0LL;
      break;
    case 8:
      *(_DWORD *)a4 &= 0xFE7FDFFF;
LABEL_28:
      *(_DWORD *)a4 &= ~0x400u;
LABEL_29:
      *(_DWORD *)(a4 + 276) = 0;
      result = 0LL;
      *(_QWORD *)(a4 + 320) |= 0xAFuLL;
      *(_DWORD *)(a4 + 368) &= 0xFFFFFFDC;
      *(_QWORD *)(a4 + 352) = 0LL;
      *(_QWORD *)(a4 + 344) = 0LL;
      *(_QWORD *)(a4 + 336) = 0LL;
      *(_QWORD *)(a4 + 328) = 0LL;
      break;
    default:
      return 3221225713LL;
  }
  return result;
}
