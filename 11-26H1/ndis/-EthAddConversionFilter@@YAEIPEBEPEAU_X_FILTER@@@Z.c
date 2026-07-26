/*
 * XREFs of ?EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x14008DD50
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z @ 0x140097B74 (-EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??$MakeSizedPoolPtr@E@@YA?AV?$unique_ptr@EU?$KFreePool@E@@@wistd@@K_K@Z @ 0x14013A698 (--$MakeSizedPoolPtr@E@@YA-AV-$unique_ptr@EU-$KFreePool@E@@@wistd@@K_K@Z.c)
 */

unsigned __int8 __fastcall EthAddConversionFilter(unsigned int a1, const unsigned __int8 *a2, struct _X_FILTER *a3)
{
  unsigned __int8 result; // al
  __int64 v7; // rdx
  PVOID v8; // r13
  __int64 v9; // rdx
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  unsigned __int8 *v12; // rdi
  unsigned __int8 *v13; // rsi
  struct _NDIS_RW_LOCK_EX *BindListLock; // r14
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  if ( !a1 )
  {
    a3->MaxMulticastAddresses = 0;
    return 1;
  }
  if ( !is_mul_ok(6u, a1) )
    return 0;
  MakeSizedPoolPtr<unsigned char>(&P, a2, 6 * a1);
  v8 = P;
  if ( !P )
    return 0;
  MakeSizedPoolPtr<unsigned char>(&P, v7, 6 * a1);
  v10 = (unsigned __int8 *)P;
  if ( !P )
  {
    ExFreePoolWithTag(v8, 0);
    return 0;
  }
  MakeSizedPoolPtr<unsigned char>(&P, v9, 6 * a1);
  v12 = (unsigned __int8 *)P;
  if ( P )
  {
    MakeSizedPoolPtr<unsigned char>(&P, v11, 6 * a1);
    v13 = (unsigned __int8 *)P;
    if ( P )
    {
      BindListLock = a3->BindListLock;
      EthFreeFilterBuffers(a3, 0);
      memset(a3, 0, sizeof(struct _X_FILTER));
      *(_DWORD *)a3->AdapterAddress = *(_DWORD *)a2;
      *(_WORD *)&a3->AdapterAddress[4] = *((_WORD *)a2 + 2);
      result = 1;
      a3->BindListLock = BindListLock;
      a3->MaxMulticastAddresses = a1;
      a3->MiniportMCastAddressBuf = (unsigned __int8 (*)[6])v8;
      a3->MiniportOldMCastAddressBuf = (unsigned __int8 (*)[6])v10;
      a3->NextMCastAddressBuf = (unsigned __int8 (*)[6])v12;
      a3->NextOldMCastAddressBuf = (unsigned __int8 (*)[6])v13;
      return result;
    }
    ExFreePoolWithTag(v12, 0);
  }
  ExFreePoolWithTag(v10, 0);
  ExFreePoolWithTag(v8, 0);
  return 0;
}
