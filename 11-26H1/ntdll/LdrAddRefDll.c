/*
 * XREFs of LdrAddRefDll @ 0x1800C6430
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpPinModule @ 0x1800C64AC (LdrpPinModule.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // bl
  __int64 result; // rax
  _QWORD *v6; // rdx
  bool v7; // zf
  __int64 v8; // rbx
  unsigned int Count; // eax
  unsigned int v10; // edi
  int v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  result = LdrpFindLoadedDllByHandle(a2, &v12, &v11, a4);
  if ( (int)result >= 0 )
  {
    v7 = (v4 & 1) == 0;
    v8 = v12;
    if ( v7 )
      Count = LdrpIncrementModuleLoadCount(v12, v6);
    else
      Count = LdrpPinModule(v12);
    v10 = Count;
    LdrpDereferenceModule(v8);
    return v10;
  }
  return result;
}
