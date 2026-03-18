/*
 * XREFs of ApiSetLoadSchemaEx @ 0x14084A5E4
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x14084A704 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x14084A8B4 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     ZwUnmapViewOfSection @ 0x140723930 (ZwUnmapViewOfSection.c)
 *     strncmp @ 0x14073D360 (strncmp.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ApiSetpLoadSchemaImage @ 0x14084AB08 (ApiSetpLoadSchemaImage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall ApiSetLoadSchemaEx(__int64 a1, _QWORD *a2, size_t *a3)
{
  int v5; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  const char *v8; // rbx
  unsigned __int64 i; // r14
  __int64 v10; // r14
  size_t v11; // rbx
  char *v12; // r14
  void *Pool2; // rax
  void *v14; // rsi
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v16[0] = 0LL;
  BaseAddress = 0LL;
  v5 = ((__int64 (__fastcall *)(__int64, __int64, PVOID *, __int64 *))ApiSetpLoadSchemaImage)(a1, a1, &BaseAddress, v16);
  if ( v5 >= 0 )
  {
    v6 = RtlImageNtHeader((unsigned __int64)BaseAddress);
    v7 = v6;
    if ( v6 )
    {
      v8 = (char *)v6 + *((unsigned __int16 *)v6 + 10) + 24;
      for ( i = 0LL; i < *((unsigned __int16 *)v7 + 3); ++i )
      {
        if ( !strncmp(v8, ".apiset", 8uLL) )
        {
          if ( !v8 )
            break;
          v10 = *((unsigned int *)v8 + 5);
          v11 = *((unsigned int *)v8 + 4);
          v12 = (char *)BaseAddress + v10;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          v14 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, v12, v11);
            *a2 = v14;
            *a3 = v11;
          }
          else
          {
            v5 = -1073741801;
          }
          goto LABEL_12;
        }
        v8 += 40;
      }
    }
    v5 = -1073741701;
  }
LABEL_12:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return (unsigned int)v5;
}
