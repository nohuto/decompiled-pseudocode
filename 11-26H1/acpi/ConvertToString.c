/*
 * XREFs of ConvertToString @ 0x140016ABC
 * Callers:
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     Concat @ 0x140015240 (Concat.c)
 *     ToString @ 0x140016D20 (ToString.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ConvertToString(__int64 a1, unsigned int a2, __int64 a3)
{
  size_t v3; // rbx
  unsigned int v4; // edi
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  __int64 *v12; // r14
  size_t v13; // r8
  size_t v14; // r14
  __int64 *v15; // rax
  __int64 *v16; // rsi
  unsigned int v18; // eax
  __int128 v19; // [rsp+20h] [rbp-50h]
  __int128 v20; // [rsp+30h] [rbp-40h]
  __int64 *v21; // [rsp+40h] [rbp-30h]
  char pszDest[16]; // [rsp+48h] [rbp-28h] BYREF
  char v23; // [rsp+58h] [rbp-18h]

  v3 = a2;
  v4 = 0;
  v23 = 0;
  v6 = *(unsigned __int16 *)(a1 + 2);
  v19 = 0LL;
  WORD1(v19) = 2;
  *(_OWORD *)pszDest = 0LL;
  v20 = 0LL;
  v8 = v6 - 1;
  if ( !v8 )
  {
    if ( IsCompatableDSDTRevision() )
    {
      v14 = 17LL;
      RtlStringCchPrintfA(pszDest, 0x11uLL, "%I64x", *(_QWORD *)(a1 + 16));
    }
    else
    {
      v14 = 9LL;
      RtlStringCchPrintfA(pszDest, 9uLL, "%x", *(_DWORD *)(a1 + 16));
    }
    if ( !(_DWORD)v3 || v3 >= v14 )
      LODWORD(v3) = strnlen(pszDest, v14);
    DWORD2(v20) = v3 + 1;
    v15 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, (int)v3 + 1);
    v21 = v15;
    v16 = v15;
    if ( v15 )
    {
      memmove(v15, pszDest, (unsigned int)(v3 + 1));
      *((_BYTE *)v16 + (unsigned int)v3) = 0;
      goto LABEL_18;
    }
    return (unsigned int)-1073741670;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v18 = *(_DWORD *)(a1 + 24) - 1;
    if ( a2 > v18 )
      return (unsigned int)-1072431098;
    if ( !a2 )
      v3 = v18;
    DWORD2(v20) = v3 + 1;
    v21 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, (int)v3 + 1);
    v12 = v21;
    if ( v21 )
    {
      v13 = (unsigned int)(v3 + 1);
      goto LABEL_11;
    }
    return (unsigned int)-1073741670;
  }
  if ( v9 != 1 )
    return (unsigned int)-1072431095;
  v10 = *(_DWORD *)(a1 + 24);
  v11 = v10;
  if ( v10 > 0xC9 )
    v11 = 201;
  if ( a2 )
  {
    if ( a2 <= v10 && a2 <= 0xC8 )
      goto LABEL_9;
    return (unsigned int)-1072431098;
  }
  if ( v10 )
  {
    LODWORD(v3) = strnlen(*(const char **)(a1 + 32), v11);
    if ( (_DWORD)v3 == v11 )
      return (unsigned int)-1073741306;
  }
LABEL_9:
  DWORD2(v20) = v3 + 1;
  v21 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, (int)v3 + 1);
  v12 = v21;
  if ( !v21 )
    return (unsigned int)-1073741670;
  v3 = (unsigned int)v3;
  v13 = (unsigned int)v3;
LABEL_11:
  memmove(v12, *(const void **)(a1 + 32), v13);
  *((_BYTE *)v12 + v3) = 0;
LABEL_18:
  FreeDataBuffs(a3, 1u);
  *(_OWORD *)a3 = v19;
  *(_OWORD *)(a3 + 16) = v20;
  *(_QWORD *)(a3 + 32) = v21;
  return v4;
}
