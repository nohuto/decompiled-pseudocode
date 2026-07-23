/*
 * XREFs of PiUEventCopyEventData @ 0x1409A7CA0
 * Callers:
 *     PiUEventHandleGetEvent @ 0x1409A7900 (PiUEventHandleGetEvent.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmValidateDeviceInterfaceName @ 0x140960DB0 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall PiUEventCopyEventData(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r9
  int v7; // eax
  _WORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  int v15; // eax
  const void *v17; // rdx
  _WORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  __int64 v22; // rcx
  int v23; // eax
  const void *v24; // rdx
  _WORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // ebx
  _WORD *v29; // rax
  _WORD *v30; // rax
  const void *v31; // rdx
  _WORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8

  v3 = 0;
  if ( a2 < 0x40 )
    return (unsigned int)-1073741789;
  v6 = a3 + 72;
  if ( *(_DWORD *)(a3 + 72) > a2 )
    return (unsigned int)-1073741789;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a3 + 76);
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a3 + 77);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 96);
  *(_OWORD *)(a1 + 12) = *(_OWORD *)(a3 + 80);
  v7 = *(_DWORD *)(a3 + 96);
  if ( v7 != 3 )
  {
    switch ( v7 )
    {
      case 1:
        *(_DWORD *)(a1 + 52) = -1;
        *(_DWORD *)(a1 + 28) = 1;
        *(_DWORD *)(a1 + 56) = 0;
        *(_OWORD *)(a1 + 36) = 0LL;
        *(_DWORD *)a1 = 60;
        return v3;
      case 2:
        v17 = (const void *)(a3 + 144);
        if ( a3 == -144 )
          return (unsigned int)-1073741811;
        v18 = (_WORD *)(a3 + 144);
        v19 = 0x7FFFLL;
        do
        {
          if ( !*v18 )
            break;
          ++v18;
          --v19;
        }
        while ( v19 );
        v10 = -1073741811;
        if ( v19 )
          v10 = 0;
        v20 = 0x7FFF - v19;
        if ( !v19 )
          return v10;
        v21 = 2 * v20 + 54;
        if ( a2 < v21 )
          return (unsigned int)-1073741789;
        *(_OWORD *)(a1 + 36) = *(_OWORD *)(v6 + 56);
        memmove((void *)(a1 + 52), v17, 2 * v20 + 2);
        v23 = CmValidateDeviceInterfaceName(v22, (const WCHAR *)(a1 + 52));
        if ( v23 >= 0 )
        {
          *(_QWORD *)(a1 + 52) = *(_QWORD *)L"\\\\?\\";
          *(_DWORD *)(a1 + 28) = 0;
          *(_DWORD *)a1 = v21;
        }
        return (unsigned int)v23;
      case 4:
        v24 = (const void *)(a3 + 128);
        if ( a3 == -128 )
          return (unsigned int)-1073741811;
        v25 = (_WORD *)(a3 + 128);
        v26 = 200LL;
        do
        {
          if ( !*v25 )
            break;
          ++v25;
          --v26;
        }
        while ( v26 );
        goto LABEL_31;
      case 9:
        v31 = (const void *)(a3 + 128);
        if ( a3 == -128 )
          return (unsigned int)-1073741811;
        v32 = (_WORD *)(a3 + 128);
        v33 = 200LL;
        do
        {
          if ( !*v32 )
            break;
          ++v32;
          --v33;
        }
        while ( v33 );
        v10 = -1073741811;
        if ( v33 )
          v10 = 0;
        v34 = 200 - v33;
        if ( !v33 )
          return v10;
        v28 = 2 * v34 + 38;
        v3 = v10;
        if ( a2 < v28 )
          return (unsigned int)-1073741789;
        memmove((void *)(a1 + 36), v31, 2 * v34 + 2);
        *(_DWORD *)(a1 + 28) = 3;
        goto LABEL_55;
      case 10:
        v24 = (const void *)(a3 + 128);
        if ( a3 == -128 )
          return (unsigned int)-1073741811;
        v30 = (_WORD *)(a3 + 128);
        v26 = 200LL;
        do
        {
          if ( !*v30 )
            break;
          ++v30;
          --v26;
        }
        while ( v26 );
        goto LABEL_31;
      case 11:
        v24 = (const void *)(a3 + 128);
        if ( a3 == -128 )
          return (unsigned int)-1073741811;
        v29 = (_WORD *)(a3 + 128);
        v26 = 200LL;
        do
        {
          if ( !*v29 )
            break;
          ++v29;
          --v26;
        }
        while ( v26 );
LABEL_31:
        v10 = -1073741811;
        if ( v26 )
          v10 = 0;
        v27 = 200 - v26;
        if ( !v26 )
          return v10;
        v28 = 2 * v27 + 38;
        v3 = v10;
        if ( a2 < v28 )
          return (unsigned int)-1073741789;
        memmove((void *)(a1 + 36), v24, 2 * v27 + 2);
        *(_DWORD *)(a1 + 28) = 2;
LABEL_55:
        *(_DWORD *)a1 = v28;
        break;
      default:
        return (unsigned int)-1073741811;
    }
    return v3;
  }
  v8 = (_WORD *)(a3 + 136);
  if ( a3 == -136 )
    return (unsigned int)-1073741811;
  v9 = 200LL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = -1073741811;
  if ( v9 )
    v10 = 0;
  v11 = 200 - v9;
  if ( !v9 )
    return v10;
  v3 = v10;
  if ( v11 )
  {
    v12 = v6 + ((2 * (_DWORD)v11 + 89) & 0xFFFFFFF8);
    v13 = *(unsigned __int16 *)(v12 + 10) - 36;
    v14 = v13 + 60;
    if ( a2 >= v13 + 60 )
    {
      *(_OWORD *)(a1 + 36) = *(_OWORD *)(v12 + 12);
      v15 = *(_DWORD *)(v12 + 40);
      *(_DWORD *)(a1 + 56) = v13;
      *(_DWORD *)(a1 + 52) = v15;
      memmove((void *)(a1 + 60), (const void *)(v12 + 44), v13);
      *(_DWORD *)(a1 + 28) = 1;
      *(_DWORD *)a1 = v14;
      return v3;
    }
    return (unsigned int)-1073741789;
  }
  return v3;
}
