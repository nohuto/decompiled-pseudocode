/*
 * XREFs of ?ndisIsLwfGuaranteedStackSpaceAvailable@@YA_NXZ @ 0x14004A510
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     <none>
 */

bool ndisIsLwfGuaranteedStackSpaceAvailable(void)
{
  unsigned __int64 v0; // rdi
  __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 LowLimit; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 HighLimit; // [rsp+28h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v0 = (unsigned int)Size;
  v1 = KeGetPcr()->Prcb.Number << 12;
  v2 = *(_QWORD *)(v1 + qword_14011EF88);
  LowLimit = v2;
  v3 = *(_QWORD *)(v1 + qword_14011EF80);
  HighLimit = v3;
  if ( v2 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v3 )
  {
    IoGetStackLimits(&LowLimit, &HighLimit);
    v2 = LowLimit;
  }
  return (unsigned __int64)&retaddr - v2 >= v0;
}
