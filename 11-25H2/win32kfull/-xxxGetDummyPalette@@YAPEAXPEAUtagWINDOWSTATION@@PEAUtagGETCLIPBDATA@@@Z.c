/*
 * XREFs of ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B43B0
 * Callers:
 *     xxxGetClipboardData @ 0x1401118D0 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     xxxGetClipboardData @ 0x1401118D0 (xxxGetClipboardData.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1401137C0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401EF344 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     CreateDIBPalette @ 0x1402B4654 (CreateDIBPalette.c)
 */

__int64 __fastcall xxxGetDummyPalette(struct tagTHREADINFO **a1, struct tagGETCLIPBDATA *a2)
{
  unsigned int v2; // ebx
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v6; // rax
  void *ClipboardData; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  struct tagCLIP *v11; // rdi
  __int64 DIBPalette; // rbx

  v2 = 17;
  ClipFormat = FindClipFormat((unsigned __int64)a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) == 2LL )
    {
      v2 = 8;
      v6 = FindClipFormat((unsigned __int64)a1, 8u, 1);
      if ( !v6 || *((_QWORD *)v6 + 1) == 2LL )
        return 0LL;
    }
  }
  ClipboardData = xxxGetClipboardData(a1, v2, (__int64)a2);
  if ( !ClipboardData )
    return 0LL;
  LOBYTE(v8) = 6;
  v9 = HMValidateHandleWithDescriptor((__int64)ClipboardData, v8);
  if ( !v9 )
    return 0LL;
  v10 = v9 + 20;
  v11 = FindClipFormat((unsigned __int64)a1, 9u, 1);
  if ( !v11 )
    return 0LL;
  DIBPalette = CreateDIBPalette(v10, *(unsigned int *)(v10 + 32));
  if ( DIBPalette )
  {
    UT_FreeCBFormat(v11);
    *((_QWORD *)v11 + 1) = DIBPalette;
    GreSetPaletteOwner(DIBPalette, 0LL);
  }
  return DIBPalette;
}
