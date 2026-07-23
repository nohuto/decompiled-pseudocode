/*
 * XREFs of SmProcessSystemStoreTrimRequest @ 0x140B308E0
 * Callers:
 *     SmSetStoreInformation @ 0x140B307BC (SmSetStoreInformation.c)
 * Callees:
 *     SmKmStoreGet @ 0x140356910 (SmKmStoreGet.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404EEE18 (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessSystemStoreTrimRequest(char *Src, SIZE_T Length, char a3)
{
  int v4; // ebx
  int v6; // ebx
  size_t v8; // r8
  char *v9; // rdx
  __int64 ProcessPartition; // rax
  int v11; // edx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR v15[2]; // [rsp+48h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = Length;
  v16 = 0LL;
  v14 = 0LL;
  v15[0] = 0LL;
  if ( (unsigned int)Length < 0x10 )
  {
    v6 = -1073741306;
    goto LABEL_9;
  }
  if ( a3 && (ProbeForWrite(Src, (unsigned int)Length, 8u), a3) )
    RtlCopyFromUser(&v14, Src, 0x10uLL);
  else
    RtlCopyVolatileMemory(&v14, Src, 0x10uLL);
  if ( (unsigned __int8)v14 != 1 )
  {
    if ( (unsigned __int8)v14 != 2 )
    {
      v6 = -1073741735;
      goto LABEL_9;
    }
    if ( v4 != 24 )
      goto LABEL_32;
  }
  if ( (unsigned __int8)v14 != 1 || v4 == 16 )
  {
    v8 = (unsigned int)(v4 - 16);
    v9 = Src + 16;
    if ( a3 )
      RtlCopyFromUser(v15, v9, v8);
    else
      RtlCopyVolatileMemory(v15, v9, v8);
    if ( (v14 & 0xFFFFFF00) != 0 || !*((_QWORD *)&v14 + 1) )
    {
      v6 = -1073741811;
      goto LABEL_9;
    }
    if ( v15[0] )
    {
      v6 = PsReferencePartitionByHandle(v15[0], 2, a3, 0x52546D53u, &v16);
      if ( v6 < 0 )
        goto LABEL_9;
      ProcessPartition = *(_QWORD *)(v16 + 24);
      if ( !ProcessPartition )
      {
        v6 = -1073741399;
        goto LABEL_9;
      }
    }
    else
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    v11 = *(_DWORD *)(ProcessPartition + 2384);
    if ( v11 == -1 )
    {
      v6 = -1073741275;
    }
    else
    {
      v12 = (_DWORD *)SmKmStoreGet(ProcessPartition, v11);
      v6 = SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v13, v12, *((__int64 *)&v14 + 1));
    }
  }
  else
  {
LABEL_32:
    v6 = -1073741820;
  }
LABEL_9:
  if ( v16 )
    PsDereferencePartition(v16);
  return (unsigned int)v6;
}
