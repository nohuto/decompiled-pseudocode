/*
 * XREFs of LdrEnumResources @ 0x140807400
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1404A5340 (LdrpCompareResourceNamesWithValidation.c)
 */

NTSTATUS __cdecl LdrEnumResources(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        ULONG *ResourceCount,
        PLDR_ENUM_RESOURCE_ENTRY Resources)
{
  ULONG v6; // ebp
  PLDR_RESOURCE_INFO v7; // r13
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rcx
  const wchar_t *Type; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r15
  ULONG_PTR v19; // r15
  unsigned int *v20; // r14
  unsigned int v21; // eax
  const wchar_t *Name; // r8
  int v23; // eax
  __int64 v24; // rbp
  ULONG_PTR v25; // rbp
  unsigned int *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  unsigned int i; // r13d
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  PLDR_ENUM_RESOURCE_ENTRY v33; // r9
  ULONG v34; // [rsp+30h] [rbp-68h]
  ULONG v35; // [rsp+34h] [rbp-64h]
  unsigned int v36; // [rsp+38h] [rbp-60h]
  unsigned int v37; // [rsp+3Ch] [rbp-5Ch]
  NTSTATUS v38; // [rsp+40h] [rbp-58h]
  unsigned int v39; // [rsp+44h] [rbp-54h]
  unsigned int v40; // [rsp+48h] [rbp-50h]
  unsigned int v41; // [rsp+4Ch] [rbp-4Ch]
  ULONG Size; // [rsp+B8h] [rbp+20h] BYREF

  v6 = Level;
  v7 = ResourceInfo;
  v34 = 0;
  if ( Resources )
    v35 = *ResourceCount;
  else
    v35 = 0;
  *ResourceCount = 0;
  v8 = (char *)RtlImageDirectoryEntryToData(DllHandle, 1u, 2u, &Size);
  v10 = (__int64)v8;
  if ( !v8 )
    return -1073741687;
  v12 = (unsigned int *)(v8 + 16);
  v13 = 0;
  v14 = *((unsigned __int16 *)v8 + 6) + (unsigned int)*((unsigned __int16 *)v8 + 7);
  v38 = 0;
  v41 = *((unsigned __int16 *)v8 + 6) + *((unsigned __int16 *)v8 + 7);
  while ( 1 )
  {
    v37 = v13;
    if ( v13 >= (unsigned int)v14 )
      break;
    if ( !v6
      || (Type = (const wchar_t *)v7->Type,
          LOBYTE(Size) = 0,
          !(unsigned int)LdrpCompareResourceNamesWithValidation(v14, v9, Type, v10, v12, &Size)) )
    {
      v16 = v12[1];
      v17 = (unsigned int)v16;
      if ( v16 >= 0 )
        return -1073741701;
      v18 = *v12;
      if ( (*v12 & 0x80000000) == 0 )
      {
        v19 = *(unsigned __int16 *)v12;
      }
      else
      {
        LODWORD(v18) = *v12 & 0x7FFFFFFF;
        v19 = v10 + v18;
      }
      LODWORD(v17) = v16 & 0x7FFFFFFF;
      v20 = (unsigned int *)(v17 + v10 + 16);
      v9 = *(unsigned __int16 *)(v17 + v10 + 12) + (unsigned int)*(unsigned __int16 *)(v17 + v10 + 14);
      v40 = *(unsigned __int16 *)(v17 + v10 + 12) + *(unsigned __int16 *)(v17 + v10 + 14);
      v21 = 0;
      while ( 1 )
      {
        v36 = v21;
        if ( v21 >= (unsigned int)v9 )
          break;
        if ( v6 <= 1
          || (Name = (const wchar_t *)v7->Name,
              LOBYTE(Size) = 0,
              !(unsigned int)LdrpCompareResourceNamesWithValidation(v17, v9, Name, v10, v20, &Size)) )
        {
          v23 = v20[1];
          v17 = (unsigned int)v23;
          if ( v23 >= 0 )
            return -1073741701;
          v24 = *v20;
          if ( (*v20 & 0x80000000) == 0 )
          {
            v25 = *(unsigned __int16 *)v20;
          }
          else
          {
            LODWORD(v24) = *v20 & 0x7FFFFFFF;
            v25 = v10 + v24;
          }
          LODWORD(v17) = v23 & 0x7FFFFFFF;
          v26 = (unsigned int *)(v17 + v10 + 16);
          v27 = *(unsigned __int16 *)(v17 + v10 + 12);
          v28 = v27 + (unsigned int)*(unsigned __int16 *)(v17 + v10 + 14);
          v39 = v27 + *(unsigned __int16 *)(v17 + v10 + 14);
          for ( i = 0; i < (unsigned int)v28; ++i )
          {
            if ( Level <= 2
              || (LOBYTE(Size) = 0,
                  !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                   v17,
                                   v28,
                                   (const wchar_t *)ResourceInfo->Language,
                                   v10,
                                   v26,
                                   &Size)) )
            {
              if ( (v26[1] & 0x80000000) != 0 )
                return -1073741701;
              v30 = *v26;
              if ( (*v26 & 0x80000000) == 0 )
              {
                v17 = *(unsigned __int16 *)v26;
              }
              else
              {
                LODWORD(v30) = *v26 & 0x7FFFFFFF;
                v17 = v10 + v30;
              }
              v31 = v26[1];
              v32 = v34++;
              if ( v34 > v35 )
              {
                v38 = -1073741820;
              }
              else
              {
                v33 = Resources;
                Resources[v32].Path[0].NameOrId = v19;
                v33[v32].Path[1].NameOrId = v25;
                v33[v32].Path[2].NameOrId = v17;
                v33[v32].Data = (char *)DllHandle + *(unsigned int *)(v31 + v10);
                *(_QWORD *)&v33[v32].Size = *(unsigned int *)(v31 + v10 + 4);
              }
            }
            v28 = v39;
            v26 += 2;
          }
          v6 = Level;
          v7 = ResourceInfo;
        }
        v9 = v40;
        v21 = v36 + 1;
        v20 += 2;
      }
      v13 = v37;
    }
    v14 = v41;
    ++v13;
    v12 += 2;
  }
  *ResourceCount = v34;
  return v38;
}
