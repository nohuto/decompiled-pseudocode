/*
 * XREFs of LdrGetDllFullName @ 0x180052C20
 * Callers:
 *     GetModuleFullPathNameUnicode @ 0x1800354D0 (GetModuleFullPathNameUnicode.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrGetDllFullName(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned __int16 *v6; // rsi
  unsigned int v7; // eax
  const void *v8; // rdx
  void *v9; // r15
  unsigned __int64 v10; // rbp
  _QWORD *SubSystemTib; // rax
  unsigned __int16 *v12; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v3 = 0;
  if ( a1 )
  {
    result = LdrpFindLoadedDllByHandle(a1, &v14, &v13);
    v5 = v14;
    v3 = result;
    if ( !v14 )
      return result;
    v6 = (unsigned __int16 *)(v14 + 72);
  }
  else
  {
    v5 = LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    v6 = (unsigned __int16 *)(LdrpImageEntry + 72);
    if ( SubSystemTib )
    {
      v12 = (unsigned __int16 *)SubSystemTib[1];
      if ( v12 )
        v6 = v12;
    }
  }
  if ( v5 )
  {
    if ( v6 )
    {
      v7 = a2[1];
      v8 = (const void *)*((_QWORD *)v6 + 1);
      if ( *v6 <= (unsigned __int16)v7 )
        v7 = *v6;
      v9 = (void *)*((_QWORD *)a2 + 1);
      v10 = v7;
      *a2 = v7;
      memmove(v9, v8, v7);
      if ( (unsigned __int64)*a2 + 2 <= a2[1] )
        *((_WORD *)v9 + (v10 >> 1)) = 0;
    }
    else
    {
      *a2 = 0;
    }
    if ( *v6 > a2[1] )
      v3 = -1073741789;
    if ( v5 != LdrpImageEntry )
      LdrpDereferenceModule(v5);
  }
  return v3;
}
