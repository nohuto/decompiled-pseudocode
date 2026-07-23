/*
 * XREFs of SeConvertStringSidToSid @ 0x1404EEA30
 * Callers:
 *     ExWnfHiveUnloaded @ 0x140A3D814 (ExWnfHiveUnloaded.c)
 * Callees:
 *     LookupSidInTable @ 0x140901140 (LookupSidInTable.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     LocalpConvertStringSidToSid @ 0x140A6D254 (LocalpConvertStringSidToSid.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall SeConvertStringSidToSid(wchar_t *Str1, __int64 *a2)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  ULONG v13; // ebx
  void *v14; // rax
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  if ( !Str1 || !a2 )
    return (unsigned int)-1073741811;
  v4 = LocalpConvertStringSidToSid(Str1, a2, &v16);
  if ( v4 < 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Str1[v9] );
    if ( (unsigned int)((v16 - (__int64)Str1) >> 1) != v9 )
    {
      v4 = -1073741704;
      SddlpFree(*a2);
      *a2 = 0LL;
      return (unsigned int)v4;
    }
    return 0;
  }
  v5 = LookupSidInTable(Str1, 0LL, v15, 0, (__int64)&v17);
  v6 = v17;
  v7 = v5;
  if ( v5 )
  {
    v10 = *(_QWORD *)(v5 + 16);
    if ( v10 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( Str1[v11] );
      if ( v11 == *(_DWORD *)(v5 + 12) )
      {
        v13 = 4 * *(unsigned __int8 *)(v10 + 1) + 8;
        v14 = (void *)SddlpAlloc(v13);
        *a2 = (__int64)v14;
        if ( v14 )
        {
          v4 = RtlCopySid(v13, v14, *(PSID *)(v7 + 16));
          if ( v4 < 0 )
          {
            SddlpFree(*a2);
            *a2 = 0LL;
          }
        }
        else
        {
          v4 = -1073741801;
        }
      }
      else
      {
        v4 = -1073741704;
      }
      goto LABEL_19;
    }
  }
  if ( !v17 )
    return (unsigned int)v4;
  v12 = -1LL;
  do
    ++v12;
  while ( Str1[v12] );
  if ( v12 == 2 )
  {
    *a2 = v17;
    return 0;
  }
LABEL_19:
  if ( v6 )
    SddlpFree(v6);
  return (unsigned int)v4;
}
