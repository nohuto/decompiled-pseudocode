/*
 * XREFs of ConvertDevpropcompkeyToString @ 0x1409F8B48
 * Callers:
 *     ConvertDevpropertyToString @ 0x1409F7094 (ConvertDevpropertyToString.c)
 *     PnpConvertDevpropcompkeyArrayToString @ 0x1409F8958 (PnpConvertDevpropcompkeyArrayToString.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140459FE8 (RtlStringCbPrintfExW.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall ConvertDevpropcompkeyToString(__int64 a1, wchar_t *a2, unsigned int a3, unsigned int *a4)
{
  size_t v4; // rbp
  NTSTATUS v8; // eax
  wchar_t *Buffer; // rsi
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // r8d
  const wchar_t *v13; // rdx
  int v14; // ecx
  unsigned int v15; // ecx
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rax
  __int64 v19; // rax
  UNICODE_STRING GuidString; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3;
  GuidString = 0LL;
  if ( a3 >= 2 )
    *a2 = 0;
  v8 = RtlStringFromGUIDEx((PGUID)a1, &GuidString, 1u);
  Buffer = GuidString.Buffer;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 20);
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        v10 = -1073741811;
        goto LABEL_16;
      }
      v12 = 44;
    }
    else
    {
      v12 = 48;
    }
    v13 = *(const wchar_t **)(a1 + 24);
    if ( v13 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v13[v19] );
      v14 = 2 * v19;
    }
    else
    {
      v14 = 12;
    }
    v15 = GuidString.Length + v12 + v14;
    if ( a4 )
      *a4 = v15;
    if ( v15 > (unsigned int)v4 )
    {
      v10 = -1073741789;
    }
    else
    {
      v16 = L"(NULL)";
      v17 = L"System";
      if ( v13 )
        v16 = v13;
      if ( v11 )
        v17 = L"User";
      v10 = RtlStringCbPrintfExW(a2, v4, 0LL, 0LL, 0x800u, L"[(%s %3d) %s %s]", Buffer, *(_DWORD *)(a1 + 16), v17, v16);
    }
  }
LABEL_16:
  if ( Buffer )
    ExFreePool(Buffer);
  return v10;
}
