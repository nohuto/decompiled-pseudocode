/*
 * XREFs of ?FindHapticsCollection@PenHapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z @ 0x180192AF4
 * Callers:
 *     ?Initialize@PenHapticInterface@@QEAAJXZ @ 0x180192CB8 (-Initialize@PenHapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall PenHapticInterface::FindHapticsCollection(
        PenHapticInterface *this,
        struct _HIDP_PREPARSED_DATA *a2,
        unsigned __int16 *a3)
{
  size_t v5; // rax
  struct _HIDP_LINK_COLLECTION_NODE *v6; // rbx
  const struct std::nothrow_t *v7; // rdx
  __int64 v8; // rcx
  char v9; // di
  ULONG LinkCollectionNodesLength; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]
  struct _HIDP_LINK_COLLECTION_NODE *v13; // [rsp+48h] [rbp+20h] BYREF

  v12 = HIDWORD(this);
  LinkCollectionNodesLength = 0;
  HidP_GetLinkCollectionNodes(0LL, &LinkCollectionNodesLength, a2);
  v5 = 24LL * LinkCollectionNodesLength;
  if ( !is_mul_ok(LinkCollectionNodesLength, 0x18uLL) )
    v5 = -1LL;
  v13 = (struct _HIDP_LINK_COLLECTION_NODE *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v13;
  HidP_GetLinkCollectionNodes(v13, &LinkCollectionNodesLength, a2);
  v8 = 0LL;
  if ( LinkCollectionNodesLength )
  {
    v9 = 1;
    while ( 1 )
    {
      v7 = (const struct std::nothrow_t *)(3 * v8);
      if ( *(_DWORD *)&v6[v8].LinkUsage == 917505 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= LinkCollectionNodesLength )
        goto LABEL_7;
    }
    if ( a3 )
      *a3 = v8;
  }
  else
  {
LABEL_7:
    v9 = 0;
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v13, v7);
  return v9;
}
