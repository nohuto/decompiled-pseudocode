/*
 * XREFs of AuthzBasepUpdateParentTypeList @ 0x1404EFD68
 * Callers:
 *     AuthzBasepAddAccessTypeList @ 0x14045EB20 (AuthzBasepAddAccessTypeList.c)
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 * Callees:
 *     AuthzBasepSetAccessReasons @ 0x140447B80 (AuthzBasepSetAccessReasons.c)
 */

__int64 __fastcall AuthzBasepUpdateParentTypeList(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v8; // r11
  __int64 result; // rax
  int v10; // edi
  int v11; // r10d
  int v12; // ebx
  __int64 v13; // rcx
  __int16 v14; // r8
  __int64 i; // rdx
  int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // ecx
  bool v22; // zf

  LODWORD(v6) = a3;
  v8 = a1;
  while ( 1 )
  {
    result = (unsigned int)v6;
    v10 = 0;
    v11 = -1;
    v12 = 0;
    v13 = 6LL * (unsigned int)v6;
    v6 = *(unsigned int *)(v8 + 48LL * (unsigned int)v6 + 20);
    if ( (_DWORD)v6 == -1 )
      return result;
    v14 = *(_WORD *)(v8 + 8 * v13);
    for ( i = (unsigned int)(v6 + 1); (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      v20 = 48 * i;
      result = *(unsigned __int16 *)(48 * i + v8);
      if ( (unsigned __int16)result <= *(_WORD *)(v8 + 48 * v6) )
        break;
      if ( (_WORD)result == v14 )
      {
        v10 |= *(_DWORD *)(v20 + v8 + 24);
        v11 &= *(_DWORD *)(v20 + v8 + 28);
        v12 |= *(_DWORD *)(v20 + v8 + 32);
      }
    }
    v16 = *(_DWORD *)(v8 + 48 * v6 + 24);
    if ( v10 == v16 && v11 == *(_DWORD *)(v8 + 48 * v6 + 28) && v12 == *(_DWORD *)(v8 + 48 * v6 + 32) )
      return result;
    switch ( a5 )
    {
      case 0:
        *(_DWORD *)(v8 + 48 * v6 + 24) = v10;
        v22 = (v16 & ~v10) == 0;
        v18 = v16 & ~v10;
        goto LABEL_21;
      case 1:
        v21 = ~*(_DWORD *)(v8 + 48 * v6 + 28);
        *(_DWORD *)(v8 + 48 * v6 + 28) = v11;
        v18 = v11 & v21;
        v22 = v18 == 0;
LABEL_21:
        if ( !v22 )
        {
          v19 = 0x10000;
LABEL_23:
          AuthzBasepSetAccessReasons(v18, v19, a4, *(_QWORD *)(v8 + 48 * v6 + 40), 0);
        }
        break;
      case 2:
        v17 = ~*(_DWORD *)(v8 + 48 * v6 + 32);
        *(_DWORD *)(v8 + 48 * v6 + 32) = v12;
        v18 = v12 & v17;
        if ( v18 )
        {
          v19 = 0x20000;
          goto LABEL_23;
        }
        break;
      default:
        return result;
    }
  }
}
