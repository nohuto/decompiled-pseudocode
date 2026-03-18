/*
 * XREFs of ApiSetComposeSchema_V7 @ 0x1406DA620
 * Callers:
 *     ApiSetComposeSchema @ 0x1406D95D8 (ApiSetComposeSchema.c)
 * Callees:
 *     ApiSetValidateSchemaFormat @ 0x1406D91E0 (ApiSetValidateSchemaFormat.c)
 *     ApiSetIsSchemaSealed @ 0x1406D9C98 (ApiSetIsSchemaSealed.c)
 *     ApiSetValidateSchemaElements_V7 @ 0x1406DA278 (ApiSetValidateSchemaElements_V7.c)
 *     ApiSetValidateSchemaFormat_V7 @ 0x1406DA448 (ApiSetValidateSchemaFormat_V7.c)
 *     ApiSetValidateSchemaHeader_V7 @ 0x1406DA494 (ApiSetValidateSchemaHeader_V7.c)
 *     ApiSetCompose_ProcessV7Extension_Phase0 @ 0x1406DA838 (ApiSetCompose_ProcessV7Extension_Phase0.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x1406DAAC4 (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetSchemaExpander_ExpandSchema @ 0x1406DB5B4 (ApiSetSchemaExpander_ExpandSchema.c)
 *     ApiSetSchemaExpander_GetNewSchemaSize @ 0x1406DB6D0 (ApiSetSchemaExpander_GetNewSchemaSize.c)
 *     ApiSetSchemaExpander_Initialize @ 0x1406DB7EC (ApiSetSchemaExpander_Initialize.c)
 *     ApiSetSchemaExpander_MigrateSchemaData @ 0x1406DBC04 (ApiSetSchemaExpander_MigrateSchemaData.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x1406DBD84 (ApiSetCompose_V7_ProcessV6Extension_Phase0.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1406DBF60 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ApiSetComposeSchema_V7(__int64 *a1, _DWORD *a2, _DWORD *a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // eax
  int v11; // ebx
  size_t NewSchemaSize; // r15
  _DWORD *Pool2; // rax
  _DWORD *v14; // rdi
  __int64 v15; // r14
  int v16; // eax
  _DWORD v17[4]; // [rsp+20h] [rbp-E0h] BYREF
  char v18; // [rsp+30h] [rbp-D0h]
  char *v19; // [rsp+40h] [rbp-C0h]
  _DWORD *v20; // [rsp+48h] [rbp-B8h]

  if ( ApiSetIsSchemaSealed(*a1)
    || *(_BYTE *)v8 != 7 && (*(_DWORD *)v8 != 6 || *(_DWORD *)(v8 + 16) <= 8u || *(_BYTE *)(v8 + 28) != 7) )
  {
    return 3221225485LL;
  }
  result = ApiSetValidateSchemaFormat_V7(v8);
  if ( (int)result < 0 )
    return result;
  if ( *a3 != 6 && *(_BYTE *)a3 != 7 )
    return 3221225485LL;
  result = ApiSetValidateSchemaFormat((__int64)a3, a4);
  if ( (int)result >= 0 )
  {
    memset_0(v17, 0, 0x110uLL);
    ApiSetSchemaExpander_Initialize(*a1, a3, v17);
    if ( *(_BYTE *)a3 == 7 )
      v10 = ApiSetCompose_ProcessV7Extension_Phase0(a3, v17);
    else
      v10 = ApiSetCompose_V7_ProcessV6Extension_Phase0(a3, v17);
    v11 = v10;
    if ( v10 >= 0 )
    {
      NewSchemaSize = (unsigned int)ApiSetSchemaExpander_GetNewSchemaSize(v17);
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v14 = Pool2;
      if ( Pool2 )
      {
        memset_0(Pool2, 63, NewSchemaSize);
        v20 = v14;
        if ( v18 )
          v19 = (char *)(v14 + 7);
        else
          v19 = (char *)v14;
        ApiSetSchemaExpander_ExpandSchema(v17, (unsigned int)NewSchemaSize);
        if ( *v14 != 6 || v14[4] <= 8u || (v15 = (__int64)(v14 + 7), *((_BYTE *)v14 + 28) != 7) )
          v15 = (__int64)v14;
        v11 = ApiSetValidateSchemaHeader_V7(v15, NewSchemaSize);
        if ( v11 < 0
          || (ApiSetSchemaExpander_MigrateSchemaData(v17), v11 = ApiSetValidateSchemaElements_V7(v15), v11 < 0)
          || ((++v17[0], *(_BYTE *)a3 != 7)
            ? (v16 = ApiSetCompose_V7_ProcessV6Extension_Phase1(a3, v17))
            : (v16 = ApiSetCompose_ProcessV7Extension_Phase1(a3, v17)),
              (v11 = v16, v16 < 0) || (v11 = ApiSetValidateSchemaFormat_V7((__int64)v14), v11 < 0)) )
        {
          ExFreePoolWithTag(v14, 0);
        }
        else
        {
          ExFreePoolWithTag((PVOID)*a1, 0);
          *a1 = (__int64)v14;
          *a2 = NewSchemaSize;
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)v11;
  }
  return result;
}
