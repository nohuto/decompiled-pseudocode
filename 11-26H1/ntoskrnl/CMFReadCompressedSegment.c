/*
 * XREFs of CMFReadCompressedSegment @ 0x140848D94
 * Callers:
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 * Callees:
 *     XpressDecode @ 0x1407240DC (XpressDecode.c)
 *     XpressDecodeClose @ 0x14072420C (XpressDecodeClose.c)
 *     XpressDecodeCreate @ 0x14072423C (XpressDecodeCreate.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1407284C0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140728500 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall CMFReadCompressedSegment(HANDLE FileHandle, char *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // r14
  NTSTATUS v9; // ebx
  int v10; // ebx
  unsigned int v11; // r9d
  __int64 v12; // rbx
  char *v13; // r10
  char *v14; // rcx
  unsigned int v15; // r15d
  unsigned int v16; // r13d
  unsigned int v17; // eax
  unsigned int v18; // edi
  int v19; // edi
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r12
  PVOID BaseAddress; // [rsp+58h] [rbp-29h] BYREF
  char *v25; // [rsp+60h] [rbp-21h]
  HANDLE SectionHandle; // [rsp+68h] [rbp-19h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-11h] BYREF
  char *v28; // [rsp+78h] [rbp-9h]
  LARGE_INTEGER SectionOffset; // [rsp+80h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+7h] BYREF
  unsigned int v31; // [rsp+E8h] [rbp+67h]

  SectionOffset.QuadPart = 0LL;
  SectionHandle = 0LL;
  ViewSize = 0LL;
  BaseAddress = 0LL;
  v8 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !FileHandle || !a4 || !a2 )
  {
    v9 = -1073741811;
    goto LABEL_31;
  }
  if ( a4[21] > 0x400u )
    return (unsigned int)-1073741811;
  v8 = XpressDecodeCreate();
  if ( !v8 )
  {
    v9 = -1073741801;
    goto LABEL_31;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v9 < 0 )
  {
LABEL_31:
    if ( BaseAddress )
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    goto LABEL_33;
  }
  v9 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0x400000u,
         2u);
  if ( v9 >= 0 )
  {
    v10 = ViewSize;
    if ( ViewSize < 0x1060 || a3 < 0x1060 )
    {
LABEL_12:
      v9 = -1073741306;
    }
    else
    {
      memmove(a2, a4, 0x1060uLL);
      v11 = v10 - 4192;
      LODWORD(v12) = a4[20];
      v13 = a2 + 4192;
      v14 = (char *)BaseAddress + 4192;
      v15 = 0;
      v16 = a3 - 4192;
      while ( 1 )
      {
        v17 = a4[21];
        v28 = v13;
        v25 = v14;
        v31 = v11;
        if ( v15 >= v17 )
          break;
        if ( v15 == v17 - 1 )
        {
          v18 = a4[22];
          ++v15;
        }
        else
        {
          v14 = v25;
          v19 = a4[v15 + 24];
          v20 = v15++;
          v18 = v19 - a4[v20 + 23];
        }
        if ( v18 > v11 || !v16 )
          goto LABEL_12;
        v21 = v16;
        if ( (unsigned int)v12 <= v16 )
          v21 = v12;
        v12 = v21;
        if ( v18 == v21 )
        {
          v22 = v21;
          memmove(v13, v14, v21);
        }
        else
        {
          if ( (unsigned int)XpressDecode(v8, (__int64)v13, v21, v21, (__int64)v14, v18) != v21 )
          {
            v9 = -1073741217;
            goto LABEL_31;
          }
          v22 = v12;
        }
        v16 -= v12;
        v11 = v31 - v18;
        v13 = &v28[v22];
        v14 = &v25[v18];
      }
      v9 = 0;
    }
    goto LABEL_31;
  }
  BaseAddress = 0LL;
LABEL_33:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v8 )
    XpressDecodeClose(v8);
  return (unsigned int)v9;
}
