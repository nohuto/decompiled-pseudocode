/*
 * XREFs of VrpCreateNamespaceNode @ 0x14093A7F0
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     VrpBuildKeyPath @ 0x1409396A0 (VrpBuildKeyPath.c)
 *     VrpFindBestMatchNamespaceNode @ 0x140939CE0 (VrpFindBestMatchNamespaceNode.c)
 *     VrpGetNextToken @ 0x14093AAB0 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x14093AB70 (VrpStripTrailingCharacters.c)
 *     VrpCountPathComponents @ 0x14093ABC0 (VrpCountPathComponents.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpCreateNamespaceNode(
        __int64 a1,
        const void **a2,
        void *a3,
        const void **a4,
        int a5,
        int a6,
        __int64 *a7)
{
  int v11; // ebx
  __int64 Pool2; // rax
  __int64 v13; // rdi
  int v14; // ecx
  __int64 v15; // rax
  void *v16; // rcx
  __int16 v17; // ax
  PVOID *v18; // rsi
  void *v19; // rcx
  __int16 v20; // ax
  unsigned __int16 *BestMatchNamespaceNode; // rax
  unsigned __int16 *v22; // r15
  int v23; // eax
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned __int16 v26; // ax
  int v27; // ebx
  __int64 *v28; // rax
  void *v30; // rcx
  void *v31; // rcx
  unsigned __int64 v32; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-18h] BYREF
  __int64 v35; // [rsp+80h] [rbp+30h] BYREF

  v35 = 0LL;
  Source = 0LL;
  v32 = 0LL;
  String1 = 0LL;
  if ( *(_DWORD *)(a1 + 84) )
    return (unsigned int)-1073741738;
  v11 = a5;
  if ( (a5 & 0xE0000007) != a5 )
    return (unsigned int)-1073741811;
  VrpStripTrailingCharacters(a2);
  VrpStripTrailingCharacters(a4);
  VrpGetNextToken(a2, &v35, &String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
    return (unsigned int)-1073741811;
  VrpGetNextToken(a2, &v35, &String1);
  Pool2 = ExAllocatePool2(0x100uLL);
  v13 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(Pool2 + 56) = v11;
  v14 = -1;
  if ( a6 )
    v14 = a6;
  *(_DWORD *)(Pool2 + 60) = v14;
  v15 = ExAllocatePool2(0x100uLL);
  *(_QWORD *)(v13 + 8) = v15;
  v16 = (void *)v15;
  if ( v15 )
  {
    v17 = *(_WORD *)a2;
    *(_WORD *)(v13 + 2) = *(_WORD *)a2;
    *(_WORD *)v13 = v17;
    memmove(v16, a2[1], *(unsigned __int16 *)a2);
    v18 = (PVOID *)(v13 + 32);
    v19 = (void *)ExAllocatePool2(0x100uLL);
    *(_QWORD *)(v13 + 32) = v19;
    if ( v19 )
    {
      v20 = *(_WORD *)a4;
      *(_WORD *)(v13 + 24) = *(_WORD *)a4;
      *(_WORD *)(v13 + 26) = v20;
      memmove(v19, a4[1], *(unsigned __int16 *)a4);
      *(_WORD *)(v13 + 64) = VrpCountPathComponents(v13);
      *(_WORD *)(v13 + 66) = VrpCountPathComponents(v13 + 24);
      VrpGetNextToken(a2, &v35, &String1);
      if ( !String1.Length )
      {
LABEL_16:
        if ( a3 )
          ObfReferenceObjectWithTag(a3, 0x67655256u);
        else
          a3 = 0LL;
        v28 = a7;
        v27 = 0;
        *(_QWORD *)(v13 + 16) = a3;
        *v28 = v13;
        return (unsigned int)v27;
      }
      BestMatchNamespaceNode = VrpFindBestMatchNamespaceNode((unsigned __int64 *)a1, (unsigned __int16 *)v13, &v32);
      v22 = BestMatchNamespaceNode;
      if ( !BestMatchNamespaceNode || (v23 = *((_DWORD *)BestMatchNamespaceNode + 14), (v23 & 4) != 0) )
      {
        v27 = -1073741811;
      }
      else
      {
        v24 = v32;
        *(_DWORD *)(v13 + 56) |= v23 & 2;
        v25 = 0LL;
        v35 = 0LL;
        if ( v24 )
        {
          do
          {
            VrpGetNextToken(v13, &v35, &String1);
            --v24;
          }
          while ( v24 );
          v25 = v35;
        }
        v26 = *(_WORD *)v13;
        Source.Buffer = (wchar_t *)(*(_QWORD *)(v13 + 8) + 2 * v25);
        Source.Length = v26 - 2 * v25;
        Source.MaximumLength = Source.Length;
        v27 = VrpBuildKeyPath((PCUNICODE_STRING)(v22 + 12), &Source, (PUNICODE_STRING)(v13 + 40));
        if ( v27 >= 0 )
          goto LABEL_16;
      }
    }
    else
    {
      v27 = -1073741670;
    }
  }
  else
  {
    v27 = -1073741670;
    v18 = (PVOID *)(v13 + 32);
  }
  v30 = *(void **)(v13 + 8);
  if ( v30 )
    ExFreePoolWithTag(v30, 0x67655256u);
  if ( *v18 )
    ExFreePoolWithTag(*v18, 0x67655256u);
  v31 = *(void **)(v13 + 48);
  if ( v31 )
    ExFreePoolWithTag(v31, 0x67655256u);
  ExFreePoolWithTag((PVOID)v13, 0x67655256u);
  return (unsigned int)v27;
}
